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

#ifndef _EVENT_LOG_HH
#define _EVENT_LOG_HH

#include <string>
#include "event_log.hh"
#include "object.hh"




struct _LinphoneEventLog;


namespace linphone {

	class CallLog;
	class ChatMessage;
	class ConferenceInfo;
	class Address;

	/**
	 * @brief Object that represents an event that must be stored in database. 
	 *
	 * For example, all chat related events are wrapped in an @ref EventLog, and many
	 * callbacks use this kind of type as parameter.
	 * Use getType() to get the @ref Type it refers to, and then you can use one of
	 * the accessor methods to get the underlying object, for example getChatMessage()
	 * for a @ref ChatMessage. 
	 */
	class EventLog: public Object {
	
		public:
			/**
			* @ref SecurityEventType is used to indicate the type of security event. 
			*
			*/
			enum class SecurityEventType {
				/**
				* Event is not a security event. 
				*/
				None = 0,
				/**
				* Chatroom security level downgraded event. 
				*/
				SecurityLevelDowngraded = 1,
				/**
				* Participant has exceeded the maximum number of device event. 
				*/
				ParticipantMaxDeviceCountExceeded = 2,
				/**
				* Peer device instant messaging encryption identity key has changed event. 
				*/
				EncryptionIdentityKeyChanged = 3,
				/**
				* Man in the middle detected event. 
				*/
				ManInTheMiddleDetected = 4
			};

			/**
			* @ref Type is used to indicate the type of an event. 
			*
			*/
			enum class Type {
				/**
				* No defined event. 
				*/
				None = 0,
				/**
				* Conference (created) event. 
				*/
				ConferenceCreated = 1,
				/**
				* Conference (terminated) event. 
				*/
				ConferenceTerminated = 2,
				/**
				* Conference call (start) event. 
				*/
				ConferenceCallStarted = 3,
				/**
				* Conference call (connected) event. 
				*/
				ConferenceConnected = 21,
				/**
				* Conference call (end) event. 
				*/
				ConferenceCallEnded = 4,
				/**
				* Conference chat message event. 
				*/
				ConferenceChatMessage = 5,
				/**
				* Conference participant (added) event. 
				*/
				ConferenceParticipantAdded = 6,
				/**
				* Conference participant (removed) event. 
				*/
				ConferenceParticipantRemoved = 7,
				/**
				* Conference participant (role unknown) event. 
				*/
				ConferenceParticipantRoleUnknown = 25,
				/**
				* Conference participant (role speaker) event. 
				*/
				ConferenceParticipantRoleSpeaker = 26,
				/**
				* Conference participant (role listener) event. 
				*/
				ConferenceParticipantRoleListener = 27,
				/**
				* Conference participant (set admin) event. 
				*/
				ConferenceParticipantSetAdmin = 8,
				/**
				* Conference participant (unset admin) event. 
				*/
				ConferenceParticipantUnsetAdmin = 9,
				/**
				* Conference participant device (added) event. 
				*/
				ConferenceParticipantDeviceAdded = 10,
				/**
				* Conference participant device (removed) event. 
				*/
				ConferenceParticipantDeviceRemoved = 11,
				/**
				* Conference participant device (media capability changed) event. 
				*/
				ConferenceParticipantDeviceMediaCapabilityChanged = 17,
				/**
				* Conference participant device (media availability changed) event. 
				*/
				ConferenceParticipantDeviceMediaAvailabilityChanged = 23,
				/**
				* Conference participant device (left) event. 
				*/
				ConferenceParticipantDeviceStatusChanged = 22,
				/**
				* Conference subject event. 
				*/
				ConferenceSubjectChanged = 12,
				/**
				* Conference available media event. 
				*/
				ConferenceAvailableMediaChanged = 18,
				/**
				* Conference encryption security event. 
				*/
				ConferenceSecurityEvent = 13,
				/**
				* Conference ephemeral message (ephemeral message lifetime changed) event. 
				*/
				ConferenceEphemeralMessageLifetimeChanged = 14,
				/**
				* Conference ephemeral message (ephemeral message enabled) event. 
				*/
				ConferenceEphemeralMessageEnabled = 15,
				/**
				* Conference ephemeral message (ephemeral message disabled) event. 
				*/
				ConferenceEphemeralMessageDisabled = 16,
				/**
				* Conference ephemeral message (ephemeral message settings managed by admin)
				* event. 
				*/
				ConferenceEphemeralMessageManagedByAdmin = 19,
				/**
				* Conference ephemeral message (ephemeral message settings managed by
				* participants) event. 
				*/
				ConferenceEphemeralMessageManagedByParticipants = 20,
				/**
				* Reaction event to a chat message. 
				*/
				ConferenceChatMessageReaction = 24
			};


			LINPHONECXX_PUBLIC EventLog(void *ptr, bool takeRef=true);
			LINPHONECXX_PUBLIC _LinphoneEventLog *cPtr() {return (_LinphoneEventLog *)mPrivPtr;}

	
		public:
			
		
			/**
			 * @brief Returns the call log of a conference call event. 
			 *
			 * @return The conference @ref CallLog.    
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<linphone::CallLog> getCallLog() const;
			
			/**
			 * @brief Returns the chat message of a conference chat message event. 
			 *
			 * @return The conference @ref ChatMessage.    
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<linphone::ChatMessage> getChatMessage() const;
			
			/**
			 * @brief Returns the conference info of a conference call event. 
			 *
			 * @return The conference @ref ConferenceInfo.    
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<linphone::ConferenceInfo> getConferenceInfo() const;
			
			/**
			 * @brief Returns the creation time of a event log. 
			 *
			 * @return The event creation time 
			 */
			LINPHONECXX_PUBLIC time_t getCreationTime() const;
			
			/**
			 * @brief Returns the device address of a conference participant device event. 
			 *
			 * @return The conference device @ref Address.    
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<const linphone::Address> getDeviceAddress() const;
			
			/**
			 * @brief Returns the ephemeral message lifetime of a conference ephemeral message
			 * event. 
			 *
			 * Ephemeral lifetime means the time before an ephemeral message which has been
			 * viewed gets deleted. 
			 * @return The ephemeral message lifetime. 
			 */
			LINPHONECXX_PUBLIC long getEphemeralMessageLifetime() const;
			
			/**
			 * @brief Returns the local address of a conference event. 
			 *
			 * @return The local @ref Address.    
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<const linphone::Address> getLocalAddress() const;
			
			/**
			 * @brief Returns the notify id of a conference notified event. 
			 *
			 * @return The conference notify id. 
			 */
			LINPHONECXX_PUBLIC unsigned int getNotifyId() const;
			
			/**
			 * @brief Returns the participant address of a conference participant event. 
			 *
			 * @return The conference participant @ref Address.    
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<const linphone::Address> getParticipantAddress() const;
			
			/**
			 * @brief Returns the peer address of a conference event. 
			 *
			 * @return The peer @ref Address.    
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<const linphone::Address> getPeerAddress() const;
			
			/**
			 * @brief Returns the faulty device address of a conference security event. 
			 *
			 * @return The @ref Address of the faulty device.    
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<const linphone::Address> getSecurityEventFaultyDeviceAddress() const;
			
			/**
			 * @brief Returns the type of security event. 
			 *
			 * @return The @ref SecurityEventType type. 
			 */
			LINPHONECXX_PUBLIC SecurityEventType getSecurityEventType() const;
			
			/**
			 * @brief Returns the subject of a conference subject event. 
			 *
			 * @return The conference subject.    
			 */
			LINPHONECXX_PUBLIC std::string getSubject() const;
			
			/**
			 * @brief Returns the type of a event log. 
			 *
			 * @return The @ref Type type 
			 */
			LINPHONECXX_PUBLIC Type getType() const;
			
			/**
			 * @brief Delete event log from database. 
			 *
			 */
			LINPHONECXX_PUBLIC void deleteFromDatabase();
			
			
	};

};

#endif // _EVENT_LOG_HH

#ifndef _MSC_VER
#pragma GCC diagnostic pop
#endif // _MSC_VER
