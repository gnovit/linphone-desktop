/*
 * Copyright (c) 2010-2022 Belledonne Communications SARL.
 *
 * This file is part of Liblinphone 
 * (see https://gitlab.linphone.org/BC/public/liblinphone).
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Affero General Public License as
 * published by the Free Software Foundation, either version 3 of the
 * License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Affero General Public License for more details.
 *
 * You should have received a copy of the GNU Affero General Public License
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef _MSC_VER
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wunused-parameter"
#endif // _MSC_VER

#ifndef _CHAT_ROOM_HH
#define _CHAT_ROOM_HH

#include <cstdint>
#include <list>
#include <string>
#include "chat_room.hh"
#include "object.hh"




struct _LinphoneChatRoom;


namespace linphone {

	class Call;
	class Address;
	class Core;
	class ChatRoomParams;
	class ChatMessage;
	class Participant;
	class Content;
	class Recorder;
	class EventLog;
	class ParticipantDeviceIdentity;
	class ChatRoomListener;

	/**
	 * @brief A chat room is the place where @ref ChatMessage are exchanged. 
	 *
	 * To create (or find) a @ref ChatRoom, you first need a @ref ChatRoomParams
	 * object. A chat room is uniquely identified by it's local and remote SIP
	 * addresses, meaning you can only have one chat room between two accounts (unless
	 * the backend is @ref Backend::FlexisipChat). Then you can call
	 * Core::searchChatRoom() or Core::createChatRoom().
	 * Be careful as a @ref Backend::FlexisipChat backend @ref ChatRoom will be
	 * created asynchronously, so make sure you add a @ref ChatRoomListener to the
	 * returned object to be notified when it will be in state @ref State::Created.
	 * All chat rooms are loaded from database when the @ref Core starts, and you can
	 * get them using Core::getChatRooms(). This method doesn't return empty chat
	 * rooms nor ones for which the local address doesn't match an existing @ref
	 * ProxyConfig identity, unless you specify otherwise in the [misc] section of
	 * your configuration file by setting hide_empty_chat_rooms=0 and/or
	 * hide_chat_rooms_from_removed_proxies=0. 
	 */
	class ChatRoom: public MultiListenableObject {
	
		public:
			/**
			* @ref Capabilities is used to indicate the capabilities of a chat room. 
			*
			*/
			enum class Capabilities {
				/**
				* No capabilities. 
				*/
				None = 0,
				/**
				* No server. 
				*/
				Basic = 1<<0,
				/**
				* Supports RTT. 
				*/
				RealTimeText = 1<<1,
				/**
				* Use server (supports group chat) 
				*/
				Conference = 1<<2,
				/**
				* Special proxy chat room flag. 
				*/
				Proxy = 1<<3,
				/**
				* Chat room migratable from Basic to Conference. 
				*/
				Migratable = 1<<4,
				/**
				* A communication between two participants (can be Basic or Conference) 
				*/
				OneToOne = 1<<5,
				/**
				* Chat room is encrypted. 
				*/
				Encrypted = 1<<6,
				/**
				* Chat room can enable ephemeral messages. 
				*/
				Ephemeral = 1<<7
			};

			/**
			* @ref Backend is used to indicate the backend implementation of a chat room. 
			*
			*/
			enum class Backend {
				/**
				* Basic (client-to-client) chat room. 
				*/
				Basic = 1<<0,
				/**
				* Server-based chat room. 
				*/
				FlexisipChat = 1<<1
			};

			/**
			* TODO move to encryption engine object when available @ref SecurityLevel is used
			* to indicate the encryption security level of a chat room. 
			*
			*/
			enum class SecurityLevel {
				/**
				* Security failure. 
				*/
				Unsafe = 0,
				/**
				* No encryption. 
				*/
				ClearText = 1,
				/**
				* Encrypted. 
				*/
				Encrypted = 2,
				/**
				* Encrypted and verified. 
				*/
				Safe = 3
			};

			/**
			* @ref EphemeralMode is used to the ephemeral message mode used by a chat room. 
			*
			*/
			enum class EphemeralMode {
				/**
				* Each device manages its own ephemeral settings. 
				*/
				DeviceManaged = 0,
				/**
				* Ephemeral settings are chatroom wide and only admins can change them. 
				*/
				AdminManaged = 1
			};

			/**
			* @ref EncryptionBackend is used to indicate the encryption engine used by a chat
			* room. 
			*
			*/
			enum class EncryptionBackend {
				/**
				* No encryption. 
				*/
				None = 0,
				/**
				* Lime x3dh encryption. 
				*/
				Lime = 1<<0
			};

			/**
			* @ref State is used to indicate the current state of a chat room. 
			*
			*/
			enum class State {
				/**
				* Initial state. 
				*/
				None = 0,
				/**
				* Chat room is now instantiated on local. 
				*/
				Instantiated = 1,
				/**
				* One creation request was sent to the server. 
				*/
				CreationPending = 2,
				/**
				* Chat room was created on the server. 
				*/
				Created = 3,
				/**
				* Chat room creation failed. 
				*/
				CreationFailed = 4,
				/**
				* Wait for chat room termination. 
				*/
				TerminationPending = 5,
				/**
				* Chat room exists on server but not in local. 
				*/
				Terminated = 6,
				/**
				* The chat room termination failed. 
				*/
				TerminationFailed = 7,
				/**
				* Chat room was deleted on the server. 
				*/
				Deleted = 8
			};


			LINPHONECXX_PUBLIC ChatRoom(void *ptr, bool takeRef=true);
			LINPHONECXX_PUBLIC _LinphoneChatRoom *cPtr() {return (_LinphoneChatRoom *)mPrivPtr;}

			/**
			 * @brief Add an application listener to the ChatRoom instance.
			 *
			 * @param listener the application listener
			 */
			LINPHONECXX_PUBLIC void addListener(const std::shared_ptr<ChatRoomListener> &listener);
			/**
			 * @brief Remove a previously added listener from the ChatRoom instance.
			 *
			 * @param listener the application listener
			 */
			LINPHONECXX_PUBLIC void removeListener(const std::shared_ptr<ChatRoomListener> &listener);
	
		public:
			
		
			/**
			 * @brief Gets the current call associated to this chatroom if any To commit a
			 * message, use ChatMessage::send() 
			 *
			 * @return @ref Call or nullptr.    
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<linphone::Call> getCall() const;
			
			/**
			 * @brief Get the capabilities of a chat room. 
			 *
			 * @return The capabilities of the chat room (as a
			 * LinphoneChatRoomCapabilitiesMask) 
			 */
			LINPHONECXX_PUBLIC unsigned int getCapabilities() const;
			
			/**
			 * @brief When realtime text is enabled CallParams::realtimeTextEnabled(),
			 * LinphoneCoreIsComposingReceivedCb is call everytime a char is received from
			 * peer. 
			 *
			 * At the end of remote typing a regular @ref ChatMessage is received with
			 * committed data from LinphoneCoreCbsMessageReceivedCb. 
			 * @return RFC 4103/T.140 char 
			 */
			LINPHONECXX_PUBLIC uint32_t getChar();
			
			/**
			 * @brief Gets the list of participants that are currently composing. 
			 *
			 * @return List of addresses that are in the is_composing state.   
			 */
			LINPHONECXX_PUBLIC std::list<std::shared_ptr<linphone::Address>> getComposingAddresses();
			
			/**
			 * @brief Get the conference address of the chat room. 
			 *
			 * @return The conference address of the chat room or nullptr if this type of chat
			 * room is not conference based.    
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<const linphone::Address> getConferenceAddress() const;
			
			/**
			 * @brief Set the conference address of a group chat room. 
			 *
			 * This function needs to be called from the
			 * LinphoneChatRoomCbsConferenceAddressGenerationCb callback and only there. This
			 * function is meaningful only for server implementation of chatroom, and shall
			 * not by used by client applications. 
			 * @param conferenceAddress The conference @ref Address to be used by the group
			 * chat room    
			 */
			LINPHONECXX_PUBLIC void setConferenceAddress(const std::shared_ptr<linphone::Address> & conferenceAddress);
			
			/**
			 * @brief Returns back pointer to @ref Core object. 
			 *
			 * @return the @ref Core object this chat room is attached to.    
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<linphone::Core> getCore() const;
			
			/**
			 * @brief Return the creation time for the chat room. 
			 *
			 * @return the time at which the chat room was created 
			 */
			LINPHONECXX_PUBLIC time_t getCreationTime() const;
			
			/**
			 * @brief Returns current parameters associated with the chat room. 
			 *
			 * This is typically the parameters passed at chat room chat_roomeation to
			 * linphone_core_chat_roomeate_chat_room() or some default parameters if no @ref
			 * ChatRoomParams was explicitely passed during chat room chat_roomeation. 
			 * @return the current @ref ChatRoomParams parameters.    
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<const linphone::ChatRoomParams> getCurrentParams() const;
			
			/**
			 * @brief Returns whether or not the ephemeral message feature is enabled in the
			 * chat room. 
			 *
			 * @return true if ephemeral is enabled, false otherwise. 
			 */
			LINPHONECXX_PUBLIC bool ephemeralEnabled() const;
			
			/**
			 * @brief Enable or disable the ephemeral message feature in the chat room. 
			 *
			 * Works only for flexisip-based chat room. An ephemeral message will
			 * automatically disappear from the sender and recipient's chatrooms after a
			 * specified timeout configurable with setEphemeralLifetime(). The timer starts
			 * when the message has been displayed at the recipent, which means:
			 * @param enable true if the ephemeral message feature is enabled, false
			 * otherwise. 
			 */
			LINPHONECXX_PUBLIC void enableEphemeral(bool enable);
			
			/**
			 * @brief Get lifetime (in seconds) for all new ephemeral messages in the chat
			 * room. 
			 *
			 * After the message is read, it will be deleted after "time" seconds. @see
			 * ephemeralEnabled() 
			 * @return the ephemeral lifetime (in secoonds) 
			 */
			LINPHONECXX_PUBLIC long getEphemeralLifetime() const;
			
			/**
			 * @brief Set lifetime (in seconds) for all new ephemeral messages in the chat
			 * room. 
			 *
			 * After the message is read, it will be deleted after "time" seconds. @see
			 * ephemeralEnabled() 
			 * @param time The ephemeral lifetime, default is 0 (disabled) 
			 * @warning A value of "time" equal to 0 disables ephemeral messages 
			 */
			LINPHONECXX_PUBLIC void setEphemeralLifetime(long time);
			
			/**
			 * @brief Get the ephemeral mode of the chat room. 
			 *
			 * @see ephemeralEnabled() 
			 * @return the ephemeral mode @ref EphemeralMode 
			 */
			LINPHONECXX_PUBLIC EphemeralMode getEphemeralMode() const;
			
			/**
			 * @brief Set the ephemeral mode of the chat room. 
			 *
			 * @see ephemeralEnabled() 
			 * @param mode The ephemeral mode @ref EphemeralMode 
			 * @warning This function only changes the mode of ephemeral messages @ref
			 * EphemeralMode. It is required to manually enable ephemeral messages after
			 * setting the mode by calling enableEphemeral() 
			 */
			LINPHONECXX_PUBLIC void setEphemeralMode(EphemeralMode mode);
			
			/**
			 * @brief Gets the number of events in a chat room. 
			 *
			 * @return the number of events. 
			 */
			LINPHONECXX_PUBLIC int getHistoryEventsSize();
			
			/**
			 * @brief Gets the number of messages in a chat room. 
			 *
			 * @return the number of messages. 
			 */
			LINPHONECXX_PUBLIC int getHistorySize();
			
			/**
			 * @brief Returns whether or not a @ref ChatRoom has at least one @ref ChatMessage
			 * or not. 
			 *
			 * @return true if there are no @ref ChatMessage, false otherwise. 
			 */
			LINPHONECXX_PUBLIC bool isEmpty();
			
			/**
			 * @brief Return whether or not a message can be sent using this chat room. 
			 *
			 * A chat room may be read only until it's created, or when it's a group you have
			 * left. 
			 * @return true if a chat message can't be sent in it, false otherwise. 
			 */
			LINPHONECXX_PUBLIC bool isReadOnly() const;
			
			/**
			 * @brief Tells whether the remote is currently composing a message. 
			 *
			 * @return true if the remote is currently composing a message, false otherwise. 
			 */
			LINPHONECXX_PUBLIC bool isRemoteComposing() const;
			
			/**
			 * @brief Gets the last chat message sent or received in this chat room. 
			 *
			 * @return the latest @ref ChatMessage or nullptr if no message.    
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<linphone::ChatMessage> getLastMessageInHistory();
			
			/**
			 * @brief Return the last updated time for the chat room. 
			 *
			 * @return the last updated time 
			 */
			LINPHONECXX_PUBLIC time_t getLastUpdateTime() const;
			
			/**
			 * @brief Get the local address associated to this chat room. 
			 *
			 * @return The local address.    
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<const linphone::Address> getLocalAddress();
			
			/**
			 * @brief Get the participant representing myself in the chat room. 
			 *
			 * @return The participant representing myself in the conference or nullptr if me
			 * is not set.    
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<linphone::Participant> getMe() const;
			
			/**
			 * @brief Gets if a chat room has been flagged as muted (not by default). 
			 *
			 * A muted chat room isn't used to compute unread messages total count. 
			 * @return true if the chat room is muted, false otherwise. 
			 */
			LINPHONECXX_PUBLIC bool getMuted() const;
			
			/**
			 * @brief Sets if a chat room should be considered as muted or not. 
			 *
			 * A muted chat room isn't used to compute unread messages total count. 
			 * @param muted true to flag it as muted, false to un-mute it. 
			 */
			LINPHONECXX_PUBLIC void setMuted(bool muted);
			
			/**
			 * @brief Get the number of participants in the chat room (that is without
			 * ourselves). 
			 *
			 * @return The number of participants in the chat room 
			 */
			LINPHONECXX_PUBLIC int getNbParticipants() const;
			
			/**
			 * @brief Get the list of participants of a chat room. 
			 *
			 * @return A   of the participants       
			 */
			LINPHONECXX_PUBLIC std::list<std::shared_ptr<linphone::Participant>> getParticipants() const;
			
			/**
			 * @brief Get the peer address associated to this chat room. 
			 *
			 * @return The peer address.    
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<const linphone::Address> getPeerAddress();
			
			/**
			 * @brief Get the security level of a chat room. 
			 *
			 * @return The current @ref SecurityLevel of the chat room 
			 */
			LINPHONECXX_PUBLIC SecurityLevel getSecurityLevel();
			
			/**
			 * @brief Get the state of the chat room. 
			 *
			 * @return The current @ref State of the chat room 
			 */
			LINPHONECXX_PUBLIC State getState() const;
			
			/**
			 * @brief Get the subject of a chat room. 
			 *
			 * @return The subject of the chat room.    
			 */
			LINPHONECXX_PUBLIC std::string getSubject() const;
			
			/**
			 * @brief Set the subject of a chat room. 
			 *
			 * @param subject The new subject to set for the chat room    
			 */
			LINPHONECXX_PUBLIC void setSubject(const std::string & subject);
			
			/**
			 * @brief Gets all unread messages for this chat room, sorted from oldest to most
			 * recent. 
			 *
			 * @return A list of unread chat messages.      
			 */
			LINPHONECXX_PUBLIC std::list<std::shared_ptr<linphone::ChatMessage>> getUnreadHistory();
			
			/**
			 * @brief Gets the number of unread messages in the chatroom. 
			 *
			 * @return the number of unread messages. 
			 */
			LINPHONECXX_PUBLIC int getUnreadMessagesCount();
			
			/**
			 * @brief Add a participant to a chat room. 
			 *
			 * This may fail if this type of chat room does not handle participants. Use
			 * canHandleParticipants() to know if this chat room handles participants. 
			 * @param addr The address of the participant to add to the chat room    
			 */
			LINPHONECXX_PUBLIC void addParticipant(const std::shared_ptr<linphone::Address> & addr);
			
			/**
			 * @brief Add several participants to a chat room at once. 
			 *
			 * This may fail if this type of chat room does not handle participants. Use
			 * canHandleParticipants() to know if this chat room handles participants. 
			 * @param addresses The participants to add.      
			 * @return true if everything is OK, false otherwise 
			 */
			LINPHONECXX_PUBLIC bool addParticipants(const std::list<std::shared_ptr<linphone::Address>> & addresses);
			
			/**
			 * @brief Allow cpim on a basic chat room   . 
			 *
			 */
			LINPHONECXX_PUBLIC void allowCpim();
			
			/**
			 * @brief Allow multipart on a basic chat room   . 
			 *
			 */
			LINPHONECXX_PUBLIC void allowMultipart();
			
			/**
			 * @brief Tells whether a chat room is able to handle participants. 
			 *
			 * @return true if the chat room can handle participants, false otherwise 
			 */
			LINPHONECXX_PUBLIC bool canHandleParticipants() const;
			
			/**
			 * @brief Notifies the destination of the chat message being composed that the
			 * user is typing a new message. 
			 *
			 */
			LINPHONECXX_PUBLIC void compose();
			
			/**
			 * @brief Creates an empty message attached to the given chat room. 
			 *
			 * @return a new @ref ChatMessage    
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<linphone::ChatMessage> createEmptyMessage();
			
			/**
			 * @brief Creates a message attached to the given chat room with a particular
			 * content. 
			 *
			 * Use ChatMessage::send() to initiate the transfer 
			 * @param initialContent @ref Content initial content.    
			 * @return a new @ref ChatMessage    
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<linphone::ChatMessage> createFileTransferMessage(const std::shared_ptr<linphone::Content> & initialContent);
			
			/**
			 * @brief Creates a forward message attached to the given chat room with a
			 * particular message. 
			 *
			 * @param message @ref ChatMessage message to be forwarded.    
			 * @return a new @ref ChatMessage    
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<linphone::ChatMessage> createForwardMessage(const std::shared_ptr<linphone::ChatMessage> & message);
			
			/**
			 * @brief Creates a message attached to the given chat room with a plain text
			 * content filled with the given message. 
			 *
			 * @param message text message, nullptr if absent.    
			 * @return a new @ref ChatMessage    
			 * @deprecated 01/07/2020. Use createMessageFromUtf8() instead. 
			 */
			LINPHONECXX_PUBLIC LINPHONECXX_DEPRECATED std::shared_ptr<linphone::ChatMessage> createMessage(const std::string & message);
			
			/**
			 * @brief Creates a message attached to the given chat room with a plain text
			 * content filled with the given message. 
			 *
			 * Introduced in 01/07/2020 
			 * @param message text message in UTF8, nullptr if absent.    
			 * @return a new @ref ChatMessage    
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<linphone::ChatMessage> createMessageFromUtf8(const std::string & message);
			
			/**
			 * @brief Creates a reply message attached to the given chat room with a
			 * particular message. 
			 *
			 * @param message @ref ChatMessage message to reply to.    
			 * @return a new @ref ChatMessage    
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<linphone::ChatMessage> createReplyMessage(const std::shared_ptr<linphone::ChatMessage> & message);
			
			/**
			 * @brief Creates a chat message with a voice recording attached to the given chat
			 * room. 
			 *
			 * @warning If the recorder isn't in Closed state, it will return an empty
			 * message! 
			 * @param recorder the @ref Recorder object used to record the voice message.    
			 * @return a new @ref ChatMessage    
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<linphone::ChatMessage> createVoiceRecordingMessage(const std::shared_ptr<linphone::Recorder> & recorder);
			
			/**
			 * @brief Delete all messages from the history. 
			 *
			 */
			LINPHONECXX_PUBLIC void deleteHistory();
			
			/**
			 * @brief Delete a message from the chat room history. 
			 *
			 * @param message The @ref ChatMessage object to remove.    
			 */
			LINPHONECXX_PUBLIC void deleteMessage(const std::shared_ptr<linphone::ChatMessage> & message);
			
			/**
			 * @brief Uses linphone spec to check if all participants support ephemeral
			 * messages. 
			 *
			 * It doesn't prevent to send ephemeral messages in the room but those who don't
			 * support it won't delete messages after lifetime has expired. @see
			 * ephemeralEnabled() 
			 * @return true if all participants in the chat room support ephemeral messages,
			 * false otherwise 
			 */
			LINPHONECXX_PUBLIC bool ephemeralSupportedByAllParticipants() const;
			
			/**
			 * @brief Gets the chat message sent or received in this chat room that matches
			 * the message_id. 
			 *
			 * @param messageId The id of the message to find    
			 * @return the @ref ChatMessage if found or nullptr.    
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<linphone::ChatMessage> findMessage(const std::string & messageId);
			
			/**
			 * @brief Find a participant of a chat room from its address. 
			 *
			 * @param address The @ref Address to search in the list of participants of the
			 * chat room    
			 * @return The participant if found, nullptr otherwise.    
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<linphone::Participant> findParticipant(const std::shared_ptr<linphone::Address> & address) const;
			
			/**
			 * @brief Gets nb_message most recent messages from chat_room chat room, sorted
			 * from oldest to most recent. 
			 *
			 * @param nbMessage Number of message to retrieve. 0 means everything. 
			 * @return A list of chat messages.      
			 */
			LINPHONECXX_PUBLIC std::list<std::shared_ptr<linphone::ChatMessage>> getHistory(int nbMessage);
			
			/**
			 * @brief Gets nb_events most recent events from chat_room chat room, sorted from
			 * oldest to most recent. 
			 *
			 * @param nbEvents Number of events to retrieve. 0 means everything. 
			 * @return The list of the most recent events.      
			 */
			LINPHONECXX_PUBLIC std::list<std::shared_ptr<linphone::EventLog>> getHistoryEvents(int nbEvents);
			
			/**
			 * @brief Gets nb_events most recent chat message events from chat_room chat room,
			 * sorted from oldest to most recent. 
			 *
			 * @param nbEvents Number of events to retrieve. 0 means everything. 
			 * @return A list      
			 */
			LINPHONECXX_PUBLIC std::list<std::shared_ptr<linphone::EventLog>> getHistoryMessageEvents(int nbEvents);
			
			/**
			 * @brief Gets the partial list of messages in the given range, sorted from oldest
			 * to most recent. 
			 *
			 * @param begin The first message of the range to be retrieved. History most
			 * recent message has index 0. 
			 * @param end The last message of the range to be retrieved. History oldest
			 * message has index of history size - 1 (use getHistorySize() to retrieve history
			 * size) 
			 * @return A list of chat messages.      
			 */
			LINPHONECXX_PUBLIC std::list<std::shared_ptr<linphone::ChatMessage>> getHistoryRange(int begin, int end);
			
			/**
			 * @brief Gets the partial list of events in the given range, sorted from oldest
			 * to most recent. 
			 *
			 * @param begin The first event of the range to be retrieved. History most recent
			 * event has index 0. 
			 * @param end The last event of the range to be retrieved. History oldest event
			 * has index of history size - 1 
			 * @return The list of the found events.      
			 */
			LINPHONECXX_PUBLIC std::list<std::shared_ptr<linphone::EventLog>> getHistoryRangeEvents(int begin, int end);
			
			/**
			 * @brief Gets the partial list of chat message events in the given range, sorted
			 * from oldest to most recent. 
			 *
			 * @param begin The first event of the range to be retrieved. History most recent
			 * event has index 0. 
			 * @param end The last event of the range to be retrieved. History oldest event
			 * has index of history size - 1 
			 * @return The list of chat message events.      
			 */
			LINPHONECXX_PUBLIC std::list<std::shared_ptr<linphone::EventLog>> getHistoryRangeMessageEvents(int begin, int end);
			
			/**
			 * @brief Return whether or not the chat room has been left. 
			 *
			 * @return true if the chat room has been left, false otherwise. 
			 * @deprecated 16/03/2022 use isReadOnly() instead. 
			 */
			LINPHONECXX_PUBLIC LINPHONECXX_DEPRECATED bool hasBeenLeft() const;
			
			/**
			 * @brief Check if a chat room has given capabilities. 
			 *
			 * @param mask a LinphoneChatRoomCapabilitiesMask mask 
			 * @return true if the mask matches, false otherwise 
			 */
			LINPHONECXX_PUBLIC bool hasCapability(int mask) const;
			
			/**
			 * @brief Leave a chat room. 
			 *
			 */
			LINPHONECXX_PUBLIC void leave();
			
			/**
			 * @brief Mark all messages of the conversation as read. 
			 *
			 */
			LINPHONECXX_PUBLIC void markAsRead();
			
			/**
			 * @brief Notify the chatroom that a participant device has just registered. 
			 *
			 * This function is meaningful only for server implementation of chatroom, and
			 * shall not by used by client applications. 
			 * @param participantDevice list of the participant devices to be used by the
			 * group chat room    
			 */
			LINPHONECXX_PUBLIC void notifyParticipantDeviceRegistration(const std::shared_ptr<const linphone::Address> & participantDevice);
			
			/**
			 * @brief Used to receive a chat message when using async mechanism with IM
			 * enchat_roomyption engine. 
			 *
			 * @param message @ref ChatMessage object    
			 */
			LINPHONECXX_PUBLIC void receiveChatMessage(const std::shared_ptr<linphone::ChatMessage> & message);
			
			/**
			 * @brief Remove a participant of a chat room. 
			 *
			 * @param participant The participant to remove from the chat room    
			 */
			LINPHONECXX_PUBLIC void removeParticipant(const std::shared_ptr<linphone::Participant> & participant);
			
			/**
			 * @brief Remove several participants of a chat room at once. 
			 *
			 * @param participants The participants to remove.      
			 */
			LINPHONECXX_PUBLIC void removeParticipants(const std::list<std::shared_ptr<linphone::Participant>> & participants);
			
			/**
			 * @brief Change the admin status of a participant of a chat room (you need to be
			 * an admin yourself to do this). 
			 *
			 * @param participant The Participant for which to change the admin status    
			 * @param isAdmin A boolean value telling whether the participant should now be an
			 * admin or not 
			 */
			LINPHONECXX_PUBLIC void setParticipantAdminStatus(const std::shared_ptr<linphone::Participant> & participant, bool isAdmin);
			
			/**
			 * @brief Set the list of participant devices in the form of SIP URIs with GRUUs
			 * for a given participant. 
			 *
			 * This function is meaningful only for server implementation of chatroom, and
			 * shall not by used by client applications. 
			 * @param participantAddress The participant address    
			 * @param deviceIdentities List of the participant devices to be used by the group
			 * chat room      
			 */
			LINPHONECXX_PUBLIC void setParticipantDevices(const std::shared_ptr<linphone::Address> & participantAddress, const std::list<std::shared_ptr<linphone::ParticipantDeviceIdentity>> & deviceIdentities);
			
			;
			/**
			 * @brief Converts a @ref State enum to a string. 
			 *
			 * @param state a @ref State to convert to string 
			 * @return the string representation of the @ref State    
			 */
			LINPHONECXX_PUBLIC static std::string stateToString(State state);
			

		private:
			void *createCallbacks() override;
	};

};

#endif // _CHAT_ROOM_HH

#ifndef _MSC_VER
#pragma GCC diagnostic pop
#endif // _MSC_VER
