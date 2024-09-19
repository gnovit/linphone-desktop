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

#ifndef _CORE_LISTENER_HH
#define _CORE_LISTENER_HH

#include <string>
#include <list>
#include "enums.hh"
#include "call.hh"
#include "core.hh"
#include "conference.hh"
#include "chat_room.hh"
#include "object.hh"






namespace linphone {

	class Core;
	class Alert;
	class ProxyConfig;
	class ConferenceInfo;
	class Call;
	class Friend;
	class PresenceModel;
	class AuthInfo;
	class CallLog;
	class ChatRoom;
	class ChatMessage;
	class ChatMessageReaction;
	class Address;
	class CallStats;
	class InfoMessage;
	class Event;
	class Content;
	class FriendList;
	class Conference;
	class AudioDevice;
	class Account;

	/**
	 * @brief That class holds all the callbacks which are called by @ref Core. 
	 *
	 * Once created, add your @ref CoreListener using Core::addListener(). Keep a
	 * reference on it as long as you need it. You can use Core::removeListener() to
	 * remove it but that isn't mandatory.
	 * The same applies to all listeners in our API. 
	 */
	class CoreListener: public Listener {
	
		public:


	
		public:
			
		
			/**
			 * @brief Callback for notifying about an alert (e.g on Qos) 
			 *
			 * @param core @ref Core object    
			 * @param alert @ref Alert to notify    
			 */
			LINPHONECXX_PUBLIC virtual void onNewAlertTriggered(const std::shared_ptr<linphone::Core> & core, const std::shared_ptr<linphone::Alert> & alert) {};
			
			/**
			 * @brief Global state notification callback. 
			 *
			 * @param core the @ref Core.    
			 * @param state the @ref GlobalState 
			 * @param message informational message.    
			 */
			LINPHONECXX_PUBLIC virtual void onGlobalStateChanged(const std::shared_ptr<linphone::Core> & core, linphone::GlobalState state, const std::string & message) {};
			
			/**
			 * @brief Registration state notification callback prototype. 
			 *
			 * @param core the @ref Core    
			 * @param proxyConfig the @ref ProxyConfig which state has changed    
			 * @param state the current @ref RegistrationState 
			 * @param message a non nullptr informational message about the state    
			 * @deprecated 06/04/2020 Use LinphoneCoreCbsAccountRegistrationStateChangedCb
			 * instead
			 */
			LINPHONECXX_PUBLIC virtual void onRegistrationStateChanged(const std::shared_ptr<linphone::Core> & core, const std::shared_ptr<linphone::ProxyConfig> & proxyConfig, linphone::RegistrationState state, const std::string & message) {};
			
			/**
			 * @brief Callback prototype for notifying the application about a received
			 * conference info. 
			 *
			 * @param core @ref Core object    
			 * @param conferenceInfo the @ref ConferenceInfo received    
			 */
			LINPHONECXX_PUBLIC virtual void onConferenceInfoReceived(const std::shared_ptr<linphone::Core> & core, const std::shared_ptr<const linphone::ConferenceInfo> & conferenceInfo) {};
			
			/**
			 * @brief Callback prototype for notifying the application a push notification was
			 * received. 
			 *
			 * On iOS it only works with pushkit (VoIP) pushes. 
			 * @param core @ref Core object    
			 * @param payload the body of the push notification, if any    
			 */
			LINPHONECXX_PUBLIC virtual void onPushNotificationReceived(const std::shared_ptr<linphone::Core> & core, const std::string & payload) {};
			
			/**
			 * @brief Callback to notify that there are errors from the video rendering. 
			 *
			 * Check LinphoneCallCbsVideoDisplayErrorOccurredCb for more details.
			 * @param core @ref Core object    
			 * @param errorCode The error code. It depends of the display filter (available
			 * for OpenGL) 
			 */
			LINPHONECXX_PUBLIC virtual void onPreviewDisplayErrorOccurred(const std::shared_ptr<linphone::Core> & core, int errorCode) {};
			
			/**
			 * @brief Call state notification callback. 
			 *
			 * @param core the @ref Core    
			 * @param call the @ref Call object whose state is changed.    
			 * @param state the new @ref Call::State of the call 
			 * @param message a non nullptr informational message about the state.    
			 */
			LINPHONECXX_PUBLIC virtual void onCallStateChanged(const std::shared_ptr<linphone::Core> & core, const std::shared_ptr<linphone::Call> & call, linphone::Call::State state, const std::string & message) {};
			
			/**
			 * @brief Report status change for a friend previously added to the @ref Core with
			 * linphone_core_add_friend(). 
			 *
			 * @param core @ref Core object    
			 * @param linphoneFriend Updated @ref Friend    
			 */
			LINPHONECXX_PUBLIC virtual void onNotifyPresenceReceived(const std::shared_ptr<linphone::Core> & core, const std::shared_ptr<linphone::Friend> & linphoneFriend) {};
			
			/**
			 * @brief Reports presence model change for a specific URI or phone number of a
			 * friend. 
			 *
			 * @param core @ref Core object    
			 * @param linphoneFriend @ref Friend object    
			 * @param uriOrTel The URI or phone number for which the presence model has
			 * changed    
			 * @param presenceModel The new @ref PresenceModel    
			 */
			LINPHONECXX_PUBLIC virtual void onNotifyPresenceReceivedForUriOrTel(const std::shared_ptr<linphone::Core> & core, const std::shared_ptr<linphone::Friend> & linphoneFriend, const std::string & uriOrTel, const std::shared_ptr<const linphone::PresenceModel> & presenceModel) {};
			
			/**
			 * @brief Reports that a new subscription request has been received and wait for a
			 * decision. 
			 *
			 * @note A subscription request is notified by this function only if the @ref
			 * SubscribePolicy for the given @ref Friend has been set to @ref
			 * SubscribePolicy::SPWait. See Friend::setIncSubscribePolicy(). 
			 * @param core @ref Core object    
			 * @param linphoneFriend The @ref Friend aimed by the subscription.    
			 * @param url URI of the subscriber    
			 */
			LINPHONECXX_PUBLIC virtual void onNewSubscriptionRequested(const std::shared_ptr<linphone::Core> & core, const std::shared_ptr<linphone::Friend> & linphoneFriend, const std::string & url) {};
			
			/**
			 * @brief Callback for requesting authentication information to application or
			 * user. 
			 *
			 * @param core the @ref Core    
			 * @param authInfo a @ref AuthInfo pre-filled with username, realm and domain
			 * values as much as possible    
			 * @param method the type of authentication requested as @ref AuthMethod enum   
			 * Application shall reply to this callback using Core::addAuthInfo(). 
			 */
			LINPHONECXX_PUBLIC virtual void onAuthenticationRequested(const std::shared_ptr<linphone::Core> & core, const std::shared_ptr<linphone::AuthInfo> & authInfo, linphone::AuthMethod method) {};
			
			/**
			 * @brief Callback to notify a new call-log entry has been added. 
			 *
			 * This is done typically when a call terminates. 
			 * @param core the @ref Core    
			 * @param callLog the new @ref CallLog entry added.    
			 */
			LINPHONECXX_PUBLIC virtual void onCallLogUpdated(const std::shared_ptr<linphone::Core> & core, const std::shared_ptr<linphone::CallLog> & callLog) {};
			
			/**
			 * @brief Callback to notify the callid of a call has been updated. 
			 *
			 * This is done typically when a call retry. 
			 * @param core the @ref Core    
			 * @param previousCallId the previous callid.    
			 * @param currentCallId the new callid.    
			 */
			LINPHONECXX_PUBLIC virtual void onCallIdUpdated(const std::shared_ptr<linphone::Core> & core, const std::string & previousCallId, const std::string & currentCallId) {};
			
			/**
			 * @brief Chat message callback prototype. 
			 *
			 * @param core @ref Core object    
			 * @param chatRoom @ref ChatRoom involved in this conversation. Can be created by
			 * the framework in case the From-URI is not present in any chat room.    
			 * @param message @ref ChatMessage incoming message    
			 */
			LINPHONECXX_PUBLIC virtual void onMessageReceived(const std::shared_ptr<linphone::Core> & core, const std::shared_ptr<linphone::ChatRoom> & chatRoom, const std::shared_ptr<linphone::ChatMessage> & message) {};
			
			/**
			 * @brief Chat message new reaction callback prototype. 
			 *
			 * @param core @ref Core object    
			 * @param chatRoom @ref ChatRoom involved in this conversation. Can be created by
			 * the framework in case the From-URI is not present in any chat room.    
			 * @param message the @ref ChatMessage to which the reaction applies to    
			 * @param reaction the @ref ChatMessageReaction that has been sent or received    
			 */
			LINPHONECXX_PUBLIC virtual void onNewMessageReaction(const std::shared_ptr<linphone::Core> & core, const std::shared_ptr<linphone::ChatRoom> & chatRoom, const std::shared_ptr<linphone::ChatMessage> & message, const std::shared_ptr<const linphone::ChatMessageReaction> & reaction) {};
			
			/**
			 * @brief Chat message removed reaction callback prototype. 
			 *
			 * @param core @ref Core object    
			 * @param chatRoom @ref ChatRoom involved in this conversation. Can be created by
			 * the framework in case the From-URI is not present in any chat room.    
			 * @param message the @ref ChatMessage to which a reaction has been removed from  
			 *  
			 * @param address the @ref Address of the person that removed it's reaction    
			 */
			LINPHONECXX_PUBLIC virtual void onReactionRemoved(const std::shared_ptr<linphone::Core> & core, const std::shared_ptr<linphone::ChatRoom> & chatRoom, const std::shared_ptr<linphone::ChatMessage> & message, const std::shared_ptr<const linphone::Address> & address) {};
			
			/**
			 * @brief Chat messages callback prototype. 
			 *
			 * Only called when aggregation is enabled (aka [sip] chat_messages_aggregation ==
			 * 1 or using Core::setChatMessagesAggregationEnabled()), it replaces the single
			 * message received callback. 
			 * @param core @ref Core object    
			 * @param chatRoom @ref ChatRoom involved in this conversation. Can be created by
			 * the framework in case the From-URI is not present in any chat room.    
			 * @param messages The   of incoming messages    
			 */
			LINPHONECXX_PUBLIC virtual void onMessagesReceived(const std::shared_ptr<linphone::Core> & core, const std::shared_ptr<linphone::ChatRoom> & chatRoom, const std::list<std::shared_ptr<linphone::ChatMessage>> & messages) {};
			
			/**
			 * @brief Called after the ChatMessage::send() was called. 
			 *
			 * The message will be in state InProgress. In case of resend this callback won't
			 * be called. 
			 * @param core @ref Core object    
			 * @param chatRoom @ref ChatRoom involved in this conversation. Can be be created
			 * by the framework in case the From-URI is not present in any chat room.    
			 * @param message @ref ChatMessage outgoing message    
			 */
			LINPHONECXX_PUBLIC virtual void onMessageSent(const std::shared_ptr<linphone::Core> & core, const std::shared_ptr<linphone::ChatRoom> & chatRoom, const std::shared_ptr<linphone::ChatMessage> & message) {};
			
			/**
			 * @brief Chat room session state changed callback. 
			 *
			 * @param core @ref Core object    
			 * @param chatRoom @ref ChatRoom that has been marked as read.    
			 * @param state the new @ref Call::State of the call 
			 * @param message a non nullptr informational message about the state.    
			 */
			LINPHONECXX_PUBLIC virtual void onChatRoomSessionStateChanged(const std::shared_ptr<linphone::Core> & core, const std::shared_ptr<linphone::ChatRoom> & chatRoom, linphone::Call::State state, const std::string & message) {};
			
			/**
			 * @brief Chat room marked as read callback. 
			 *
			 * @param core @ref Core object    
			 * @param chatRoom @ref ChatRoom that has been marked as read.    
			 */
			LINPHONECXX_PUBLIC virtual void onChatRoomRead(const std::shared_ptr<linphone::Core> & core, const std::shared_ptr<linphone::ChatRoom> & chatRoom) {};
			
			/**
			 * @brief Chat message not decrypted callback prototype. 
			 *
			 * @param core @ref Core object    
			 * @param chatRoom @ref ChatRoom involved in this conversation. Can be be created
			 * by the framework in case the from-URI is not present in any chat room.    
			 * @param message @ref ChatMessage incoming message    
			 */
			LINPHONECXX_PUBLIC virtual void onMessageReceivedUnableDecrypt(const std::shared_ptr<linphone::Core> & core, const std::shared_ptr<linphone::ChatRoom> & chatRoom, const std::shared_ptr<linphone::ChatMessage> & message) {};
			
			/**
			 * @brief Is composing notification callback prototype. 
			 *
			 * @param core @ref Core object    
			 * @param chatRoom @ref ChatRoom involved in the conversation.    
			 */
			LINPHONECXX_PUBLIC virtual void onIsComposingReceived(const std::shared_ptr<linphone::Core> & core, const std::shared_ptr<linphone::ChatRoom> & chatRoom) {};
			
			/**
			 * @brief Callback for being notified of DTMFs received. 
			 *
			 * @param core the @ref Core    
			 * @param call the @ref Call that received the dtmf    
			 * @param dtmf the ascii code of the dtmf 
			 */
			LINPHONECXX_PUBLIC virtual void onDtmfReceived(const std::shared_ptr<linphone::Core> & core, const std::shared_ptr<linphone::Call> & call, int dtmf) {};
			
			/**
			 * @brief Callback prototype for when a refer is received. 
			 *
			 * @param core the @ref Core    
			 * @param referTo the address of the refer    
			 */
			LINPHONECXX_PUBLIC virtual void onReferReceived(const std::shared_ptr<linphone::Core> & core, const std::string & referTo) {};
			
			/**
			 * @brief GoClear ACK sent on call callback. 
			 *
			 * @param core the @ref Core    
			 * @param call the @ref Call on which the GoClear ACK was sent.    
			 */
			LINPHONECXX_PUBLIC virtual void onCallGoclearAckSent(const std::shared_ptr<linphone::Core> & core, const std::shared_ptr<linphone::Call> & call) {};
			
			/**
			 * @brief Call encryption changed callback. 
			 *
			 * @param core the @ref Core    
			 * @param call the @ref Call on which encryption is changed.    
			 * @param mediaEncryptionEnabled whether encryption is activated. 
			 * @param authenticationToken an authentication token, currently set for ZRTP kind
			 * of encryption only.    
			 */
			LINPHONECXX_PUBLIC virtual void onCallEncryptionChanged(const std::shared_ptr<linphone::Core> & core, const std::shared_ptr<linphone::Call> & call, bool mediaEncryptionEnabled, const std::string & authenticationToken) {};
			
			/**
			 * @brief Call send master key changed callback. 
			 *
			 * @param core the @ref Core    
			 * @param call the @ref Call on which the GoClear ACK was sent.    
			 * @param masterKey new master key.    
			 */
			LINPHONECXX_PUBLIC virtual void onCallSendMasterKeyChanged(const std::shared_ptr<linphone::Core> & core, const std::shared_ptr<linphone::Call> & call, const std::string & masterKey) {};
			
			/**
			 * @brief Call receive master key changed callback. 
			 *
			 * @param core the @ref Core    
			 * @param call the @ref Call on which the GoClear ACK was sent.    
			 * @param masterKey new master key.    
			 */
			LINPHONECXX_PUBLIC virtual void onCallReceiveMasterKeyChanged(const std::shared_ptr<linphone::Core> & core, const std::shared_ptr<linphone::Call> & call, const std::string & masterKey) {};
			
			/**
			 * @brief Callback for notifying progresses of transfers. 
			 *
			 * @param core the @ref Core    
			 * @param transfered the @ref Call that was transfered    
			 * @param callState the @ref Call::State of the call to transfer target at the far
			 * end. 
			 */
			LINPHONECXX_PUBLIC virtual void onTransferStateChanged(const std::shared_ptr<linphone::Core> & core, const std::shared_ptr<linphone::Call> & transfered, linphone::Call::State callState) {};
			
			/**
			 * @brief Callback prototype when using the buddy plugin. 
			 *
			 * @param core the @ref Core    
			 * @param linphoneFriend the @ref Friend that has been updated    
			 */
			LINPHONECXX_PUBLIC virtual void onBuddyInfoUpdated(const std::shared_ptr<linphone::Core> & core, const std::shared_ptr<linphone::Friend> & linphoneFriend) {};
			
			/**
			 * @brief Callback for receiving quality statistics for calls. 
			 *
			 * @param core the @ref Core    
			 * @param call the @ref Call    
			 * @param callStats the @ref CallStats statistics.    
			 */
			LINPHONECXX_PUBLIC virtual void onCallStatsUpdated(const std::shared_ptr<linphone::Core> & core, const std::shared_ptr<linphone::Call> & call, const std::shared_ptr<const linphone::CallStats> & callStats) {};
			
			/**
			 * @brief Callback prototype for receiving info messages. 
			 *
			 * @param core the @ref Core    
			 * @param call the call whose info message belongs to.    
			 * @param message the info message.    
			 */
			LINPHONECXX_PUBLIC virtual void onInfoReceived(const std::shared_ptr<linphone::Core> & core, const std::shared_ptr<linphone::Call> & call, const std::shared_ptr<const linphone::InfoMessage> & message) {};
			
			/**
			 * @brief Callback prototype for notifying the application about changes of
			 * subscription states, including arrival of new subscriptions. 
			 *
			 * @param core @ref Core object    
			 * @param linphoneEvent the @ref Event    
			 * @param state the new @ref SubscriptionState 
			 */
			LINPHONECXX_PUBLIC virtual void onSubscriptionStateChanged(const std::shared_ptr<linphone::Core> & core, const std::shared_ptr<linphone::Event> & linphoneEvent, linphone::SubscriptionState state) {};
			
			/**
			 * @brief Callback prototype for notifying the application about notification that
			 * is being sent. 
			 *
			 * @param core @ref Core object    
			 * @param linphoneEvent the @ref Event received    
			 * @param body the @ref Content of the event    
			 */
			LINPHONECXX_PUBLIC virtual void onNotifySent(const std::shared_ptr<linphone::Core> & core, const std::shared_ptr<linphone::Event> & linphoneEvent, const std::shared_ptr<const linphone::Content> & body) {};
			
			/**
			 * @brief Callback prototype for notifying the application about notification
			 * received from the network. 
			 *
			 * @param core @ref Core object    
			 * @param linphoneEvent the @ref Event received    
			 * @param notifiedEvent The event as string    
			 * @param body the @ref Content of the event    
			 */
			LINPHONECXX_PUBLIC virtual void onNotifyReceived(const std::shared_ptr<linphone::Core> & core, const std::shared_ptr<linphone::Event> & linphoneEvent, const std::string & notifiedEvent, const std::shared_ptr<const linphone::Content> & body) {};
			
			/**
			 * @brief Callback prototype for notifying the application about subscription
			 * received from the network. 
			 *
			 * @param core @ref Core object    
			 * @param linphoneEvent the @ref Event received    
			 * @param subscribeEvent The event as string    
			 * @param body the @ref Content of the event    
			 */
			LINPHONECXX_PUBLIC virtual void onSubscribeReceived(const std::shared_ptr<linphone::Core> & core, const std::shared_ptr<linphone::Event> & linphoneEvent, const std::string & subscribeEvent, const std::shared_ptr<const linphone::Content> & body) {};
			
			/**
			 * @brief Callback prototype for notifying the application about changes of
			 * publish states. 
			 *
			 * @param core @ref Core object    
			 * @param linphoneEvent the @ref Event    
			 * @param state the new @ref PublishState 
			 */
			LINPHONECXX_PUBLIC virtual void onPublishStateChanged(const std::shared_ptr<linphone::Core> & core, const std::shared_ptr<linphone::Event> & linphoneEvent, linphone::PublishState state) {};
			
			/**
			 * @brief Callback prototype for notifying the application about publish received
			 * from the network. 
			 *
			 * @param core @ref Core object    
			 * @param linphoneEvent the @ref Event received    
			 * @param publishEvent The event as string    
			 * @param body the @ref Content of the event    
			 */
			LINPHONECXX_PUBLIC virtual void onPublishReceived(const std::shared_ptr<linphone::Core> & core, const std::shared_ptr<linphone::Event> & linphoneEvent, const std::string & publishEvent, const std::shared_ptr<const linphone::Content> & body) {};
			
			/**
			 * @brief Callback prototype for configuring status changes notification. 
			 *
			 * @param core the @ref Core    
			 * @param status the current @ref ConfiguringState 
			 * @param message informational message.    
			 */
			LINPHONECXX_PUBLIC virtual void onConfiguringStatus(const std::shared_ptr<linphone::Core> & core, linphone::ConfiguringState status, const std::string & message) {};
			
			/**
			 * @brief Callback prototype for reporting network change either automatically
			 * detected or notified by Core::setNetworkReachable(). 
			 *
			 * @param core the @ref Core    
			 * @param reachable true if network is reachable. 
			 */
			LINPHONECXX_PUBLIC virtual void onNetworkReachable(const std::shared_ptr<linphone::Core> & core, bool reachable) {};
			
			/**
			 * @brief Callback prototype for reporting log collection upload state change. 
			 *
			 * @param core @ref Core object    
			 * @param state The state of the log collection upload 
			 * @param info Additional information: error message in case of error state, URL
			 * of uploaded file in case of success.    
			 */
			LINPHONECXX_PUBLIC virtual void onLogCollectionUploadStateChanged(const std::shared_ptr<linphone::Core> & core, linphone::Core::LogCollectionUploadState state, const std::string & info) {};
			
			/**
			 * @brief Callback prototype for reporting log collection upload progress
			 * indication. 
			 *
			 * @param core @ref Core object    
			 * @param offset the number of bytes sent since the start of the upload 
			 * @param total the total number of bytes to upload 
			 */
			LINPHONECXX_PUBLIC virtual void onLogCollectionUploadProgressIndication(const std::shared_ptr<linphone::Core> & core, size_t offset, size_t total) {};
			
			/**
			 * @brief Callback prototype for reporting when a friend list has been added to
			 * the core friend lists. 
			 *
			 * @param core @ref Core object    
			 * @param friendList @ref FriendList object    
			 */
			LINPHONECXX_PUBLIC virtual void onFriendListCreated(const std::shared_ptr<linphone::Core> & core, const std::shared_ptr<linphone::FriendList> & friendList) {};
			
			/**
			 * @brief Callback prototype for reporting when a friend list has been removed
			 * from the core friend lists. 
			 *
			 * @param core @ref Core object    
			 * @param friendList @ref FriendList object    
			 */
			LINPHONECXX_PUBLIC virtual void onFriendListRemoved(const std::shared_ptr<linphone::Core> & core, const std::shared_ptr<linphone::FriendList> & friendList) {};
			
			/**
			 * @brief Callback notifying that a new @ref Call (either incoming or outgoing)
			 * has been created. 
			 *
			 * @param core @ref Core object that has created the call    
			 * @param call The newly created @ref Call object    
			 */
			LINPHONECXX_PUBLIC virtual void onCallCreated(const std::shared_ptr<linphone::Core> & core, const std::shared_ptr<linphone::Call> & call) {};
			
			/**
			 * @brief Callback prototype for reporting the result of a version update check. 
			 *
			 * @param core @ref Core object    
			 * @param result The result of the version update check    
			 * @param url The url where to download the new version if the result is
			 * LinphoneVersionUpdateCheckNewVersionAvailable    
			 */
			LINPHONECXX_PUBLIC virtual void onVersionUpdateCheckResultReceived(const std::shared_ptr<linphone::Core> & core, linphone::VersionUpdateCheckResult result, const std::string & version, const std::string & url) {};
			
			/**
			 * @brief Callback prototype telling that a @ref Conference state has changed. 
			 *
			 * @param core @ref Core object    
			 * @param conference The @ref Conference object for which the state has changed    
			 * @param state the current @ref ChatRoom::State 
			 */
			LINPHONECXX_PUBLIC virtual void onConferenceStateChanged(const std::shared_ptr<linphone::Core> & core, const std::shared_ptr<linphone::Conference> & conference, linphone::Conference::State state) {};
			
			/**
			 * @brief Callback prototype telling that a @ref ChatRoom state has changed. 
			 *
			 * @param core @ref Core object    
			 * @param chatRoom The @ref ChatRoom object for which the state has changed    
			 * @param state the current @ref ChatRoom::State 
			 */
			LINPHONECXX_PUBLIC virtual void onChatRoomStateChanged(const std::shared_ptr<linphone::Core> & core, const std::shared_ptr<linphone::ChatRoom> & chatRoom, linphone::ChatRoom::State state) {};
			
			/**
			 * @brief Callback prototype telling that a @ref ChatRoom subject has changed. 
			 *
			 * @param core @ref Core object    
			 * @param chatRoom The @ref ChatRoom object for which the subject has changed    
			 */
			LINPHONECXX_PUBLIC virtual void onChatRoomSubjectChanged(const std::shared_ptr<linphone::Core> & core, const std::shared_ptr<linphone::ChatRoom> & chatRoom) {};
			
			/**
			 * @brief Callback prototype telling that a @ref ChatRoom ephemeral message has
			 * expired. 
			 *
			 * @param core @ref Core object    
			 * @param chatRoom The @ref ChatRoom object for which a message has expired.    
			 */
			LINPHONECXX_PUBLIC virtual void onChatRoomEphemeralMessageDeleted(const std::shared_ptr<linphone::Core> & core, const std::shared_ptr<linphone::ChatRoom> & chatRoom) {};
			
			/**
			 * @brief Callback prototype telling that an Instant Message Encryption Engine
			 * user registered on the server with or without success. 
			 *
			 * @param core @ref Core object    
			 * @param status the return status of the registration action. 
			 * @param userId the userId published on the encryption engine server    
			 * @param info information about failure    
			 */
			LINPHONECXX_PUBLIC virtual void onImeeUserRegistration(const std::shared_ptr<linphone::Core> & core, const bool status, const std::string & userId, const std::string & info) {};
			
			/**
			 * @brief Callback prototype telling the result of decoded qrcode. 
			 *
			 * @param core @ref Core object    
			 * @param result The result of the decoded qrcode    
			 */
			LINPHONECXX_PUBLIC virtual void onQrcodeFound(const std::shared_ptr<linphone::Core> & core, const std::string & result) {};
			
			/**
			 * @brief Callback prototype telling a call has started (incoming or outgoing)
			 * while there was no other call. 
			 *
			 * @param core @ref Core object    
			 */
			LINPHONECXX_PUBLIC virtual void onFirstCallStarted(const std::shared_ptr<linphone::Core> & core) {};
			
			/**
			 * @brief Callback prototype telling the last call has ended (Core::getCallsNb()
			 * returns 0) 
			 *
			 * @param core @ref Core object    
			 */
			LINPHONECXX_PUBLIC virtual void onLastCallEnded(const std::shared_ptr<linphone::Core> & core) {};
			
			/**
			 * @brief Callback prototype telling that the audio device for at least one call
			 * has changed. 
			 *
			 * @param core @ref Core object    
			 * @param audioDevice the newly used @ref AudioDevice object    
			 */
			LINPHONECXX_PUBLIC virtual void onAudioDeviceChanged(const std::shared_ptr<linphone::Core> & core, const std::shared_ptr<linphone::AudioDevice> & audioDevice) {};
			
			/**
			 * @brief Callback prototype telling the audio devices list has been updated. 
			 *
			 * Either a new device is available or a previously available device isn't
			 * anymore. You can call Core::getAudioDevices() to get the new list. 
			 * @param core @ref Core object    
			 */
			LINPHONECXX_PUBLIC virtual void onAudioDevicesListUpdated(const std::shared_ptr<linphone::Core> & core) {};
			
			/**
			 * @brief Function prototype used by linphone_core_cbs_set_ec_calibration_result. 
			 *
			 * @param core The @ref Core.    
			 * @param status The @ref EcCalibratorStatus of the calibrator. 
			 * @param delayMs The measured delay if available. 
			 */
			LINPHONECXX_PUBLIC virtual void onEcCalibrationResult(const std::shared_ptr<linphone::Core> & core, linphone::EcCalibratorStatus status, int delayMs) {};
			
			/**
			 * @brief Function prototype used by
			 * linphone_core_cbs_set_ec_calibration_audio_init. 
			 *
			 * @param core The @ref Core.    
			 */
			LINPHONECXX_PUBLIC virtual void onEcCalibrationAudioInit(const std::shared_ptr<linphone::Core> & core) {};
			
			/**
			 * @brief Function prototype used by
			 * linphone_core_cbs_set_ec_calibration_audio_uninit. 
			 *
			 * @param core The @ref Core.    
			 */
			LINPHONECXX_PUBLIC virtual void onEcCalibrationAudioUninit(const std::shared_ptr<linphone::Core> & core) {};
			
			/**
			 * @brief Callback notifying that a @ref Account has its registration state
			 * changed. 
			 *
			 * @param core The @ref Core object.    
			 * @param account The @ref Account object which has its registration changed.    
			 * @param state The new @ref RegistrationState for this account. 
			 * @param message a non nullptr informational message about the state    
			 */
			LINPHONECXX_PUBLIC virtual void onAccountRegistrationStateChanged(const std::shared_ptr<linphone::Core> & core, const std::shared_ptr<linphone::Account> & account, linphone::RegistrationState state, const std::string & message) {};
			
			/**
			 * @brief Default account changed callback prototype. 
			 *
			 * @param core @ref Core object    
			 * @param account @ref Account object that has been set as the default account,
			 * probably by calling Core::setDefaultAccount(), or nullptr if the default
			 * account was removed.    
			 */
			LINPHONECXX_PUBLIC virtual void onDefaultAccountChanged(const std::shared_ptr<linphone::Core> & core, const std::shared_ptr<linphone::Account> & account) {};
			
			/**
			 * @brief Account added callback prototype. 
			 *
			 * @param core @ref Core object    
			 * @param account @ref Account object that has been added to the Core using
			 * Core::addAccount() for example.    
			 */
			LINPHONECXX_PUBLIC virtual void onAccountAdded(const std::shared_ptr<linphone::Core> & core, const std::shared_ptr<linphone::Account> & account) {};
			
			/**
			 * @brief Account removed callback prototype. 
			 *
			 * @param core @ref Core object    
			 * @param account @ref Account object that has been added to the Core using
			 * Core::removeAccount() for example.    
			 */
			LINPHONECXX_PUBLIC virtual void onAccountRemoved(const std::shared_ptr<linphone::Core> & core, const std::shared_ptr<linphone::Account> & account) {};
			
			
	};

};

#endif // _CORE_LISTENER_HH

#ifndef _MSC_VER
#pragma GCC diagnostic pop
#endif // _MSC_VER
