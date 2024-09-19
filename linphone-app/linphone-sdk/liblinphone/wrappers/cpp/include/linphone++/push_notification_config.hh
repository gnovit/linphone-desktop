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

#ifndef _PUSH_NOTIFICATION_CONFIG_HH
#define _PUSH_NOTIFICATION_CONFIG_HH

#include <string>
#include "object.hh"




struct _LinphonePushNotificationConfig;


namespace linphone {

	class PushNotificationConfig;

	/**
	 * @brief Object holding push notification config that will be set in the contact
	 * URI parameters of the Contact header in the REGISTER, if the @ref AccountParams
	 * is configured to allow push notifications, see
	 * AccountParams::setPushNotificationAllowed(). 
	 *
	 * This object can be accessed through the @ref AccountParams object, which can be
	 * obtained from your @ref Account object. 
	 */
	class PushNotificationConfig: public Object {
	
		public:

			LINPHONECXX_PUBLIC PushNotificationConfig(void *ptr, bool takeRef=true);
			LINPHONECXX_PUBLIC _LinphonePushNotificationConfig *cPtr() {return (_LinphonePushNotificationConfig *)mPrivPtr;}

	
		public:
			
		
			/**
			 * @brief Gets the app's bundle identifier for "contact uri parameter". 
			 *
			 * @return The app's bundle identifier if set, nullptr otherwise.    
			 */
			LINPHONECXX_PUBLIC std::string getBundleIdentifier() const;
			
			/**
			 * @brief Sets the bundle_identifier for "contact uri parameter". 
			 *
			 * It's not necessary if param is set. See setParam(). 
			 * @param bundleIdentifier The new bundle_identifier set for push notification
			 * config.    
			 */
			LINPHONECXX_PUBLIC void setBundleIdentifier(const std::string & bundleIdentifier);
			
			/**
			 * @brief Gets the call_snd for "contact uri parameter". 
			 *
			 * @return The call_snd, default value "notes_of_the_optimistic.caf".    
			 */
			LINPHONECXX_PUBLIC std::string getCallSnd() const;
			
			/**
			 * @brief Sets the call_snd for "contact uri parameter", specific for remote push
			 * notification. 
			 *
			 * @param callSnd The new call_snd set for push notification config.    
			 */
			LINPHONECXX_PUBLIC void setCallSnd(const std::string & callSnd);
			
			/**
			 * @brief Gets the call_str for "contact uri parameter". 
			 *
			 * @return The call_str, default value "IC_MSG".    
			 */
			LINPHONECXX_PUBLIC std::string getCallStr() const;
			
			/**
			 * @brief Sets the call_str for "contact uri parameter", specific for remote push
			 * notification. 
			 *
			 * @param callStr The new call_str set for push notification config.    
			 */
			LINPHONECXX_PUBLIC void setCallStr(const std::string & callStr);
			
			/**
			 * @brief Gets the groupchat_str for "contact uri parameter". 
			 *
			 * @return The groupchat_str, default value "GC_MSG".    
			 */
			LINPHONECXX_PUBLIC std::string getGroupChatStr() const;
			
			/**
			 * @brief Sets the group_chat_str for "contact uri parameter", specific for remote
			 * push notification. 
			 *
			 * @param groupChatStr The new group_chat_str set for push notification config.    
			 */
			LINPHONECXX_PUBLIC void setGroupChatStr(const std::string & groupChatStr);
			
			/**
			 * @brief Gets the msg_snd for "contact uri parameter". 
			 *
			 * @return The msg_snd, default value "msg.caf".    
			 */
			LINPHONECXX_PUBLIC std::string getMsgSnd() const;
			
			/**
			 * @brief Sets the msg_snd for "contact uri parameter", specific for remote push
			 * notification. 
			 *
			 * @param msgSnd The new msg_snd set for push notification config.    
			 */
			LINPHONECXX_PUBLIC void setMsgSnd(const std::string & msgSnd);
			
			/**
			 * @brief Gets the msg_str for "contact uri parameter". 
			 *
			 * @return The msg_str, default value "IM_MSG".    
			 */
			LINPHONECXX_PUBLIC std::string getMsgStr() const;
			
			/**
			 * @brief Sets the msg_str for "contact uri parameter", specific for remote push
			 * notification. 
			 *
			 * @param msgStr The new msg_str set for push notification config.    
			 */
			LINPHONECXX_PUBLIC void setMsgStr(const std::string & msgStr);
			
			/**
			 * @brief Gets the param for "contact uri parameter". 
			 *
			 * @return The param if set, nullptr otherwise.    
			 */
			LINPHONECXX_PUBLIC std::string getParam() const;
			
			/**
			 * @brief Sets the param for "contact uri parameter". 
			 *
			 * If it's not set, "team_id.bundle_identifier.services" will be used. 
			 * @param param The new param set for push notification config.    
			 */
			LINPHONECXX_PUBLIC void setParam(const std::string & param);
			
			/**
			 * @brief Gets the prid for "contact uri parameter". 
			 *
			 * @return The prid if set, nullptr otherwise.    
			 */
			LINPHONECXX_PUBLIC std::string getPrid() const;
			
			/**
			 * @brief Sets the prid for "contact uri parameter". 
			 *
			 * If it's not set, "voip_token&remote_token" will be used. 
			 * @param prid The new prid set for push notification config.    
			 */
			LINPHONECXX_PUBLIC void setPrid(const std::string & prid);
			
			/**
			 * @brief Gets the provider for "contact uri parameter". 
			 *
			 * @return The provider if set, nullptr otherwise.    
			 */
			LINPHONECXX_PUBLIC std::string getProvider() const;
			
			/**
			 * @brief Sets the provider for "contact uri parameter". 
			 *
			 * If not set, the default value will be used for "contact uri
			 * parameter", "firebase" for android or "apns" for ios. 
			 * @param provider The new provider set for push notification config.    
			 */
			LINPHONECXX_PUBLIC void setProvider(const std::string & provider);
			
			/**
			 * @brief Specifies the interval in seconds between to subsequent remote push
			 * notifications when remote push notifications are used to notify a call invite
			 * to clients that haven't published any token for VoIP and background push
			 * notifications. 
			 *
			 * In that case, several PNs are sent subsequently until the call is picked up,
			 * declined or canceled. This parameter sets a value for
			 * 'pn-call-remote-push-interval' Contact header inside SIP REGISTER requests. A
			 * value of zero will cause the deactivation of push notification repetitions and
			 * the sending of the final notification. Thus, only the first push notification
			 * will be sent. If specified the value must be in [0;30] If not specified
			 * 'pn-call-remote-push-interval' will not be added to Contact header. 
			 * @param remotePushInterval The new remote push interval set for push
			 * notification config.    
			 */
			LINPHONECXX_PUBLIC void setRemotePushInterval(const std::string & remotePushInterval);
			
			/**
			 * @brief Gets the remote token for "contact uri parameter". 
			 *
			 * @return The remote token if set, nullptr otherwise.    
			 */
			LINPHONECXX_PUBLIC std::string getRemoteToken() const;
			
			/**
			 * @brief Sets the remote_token for "contact uri parameter", specific for remote
			 * push notification. 
			 *
			 * It's not necessary if prid is set. See setPrid(). 
			 * @param remoteToken The new remote_token set for push notification config.    
			 */
			LINPHONECXX_PUBLIC void setRemoteToken(const std::string & remoteToken);
			
			/**
			 * @brief Gets the team id for "contact uri parameter". 
			 *
			 * @return The team id if set, nullptr otherwise.    
			 */
			LINPHONECXX_PUBLIC std::string getTeamId() const;
			
			/**
			 * @brief Sets the team id for "contact uri parameter". 
			 *
			 * It's not necessary if param is set. See setParam(). 
			 * @param teamId The new team id set for push notification config.    
			 */
			LINPHONECXX_PUBLIC void setTeamId(const std::string & teamId);
			
			/**
			 * @brief Gets the voip token for "contact uri parameter". 
			 *
			 * @return The voip token if set, nullptr otherwise.    
			 */
			LINPHONECXX_PUBLIC std::string getVoipToken() const;
			
			/**
			 * @brief Sets the voip_token for "contact uri parameter", specific for voip push
			 * notification. 
			 *
			 * It's not necessary if prid is set. See setPrid(). 
			 * @param voipToken The new voip_token set for push notification config.    
			 */
			LINPHONECXX_PUBLIC void setVoipToken(const std::string & voipToken);
			
			/**
			 * @brief Instantiate a new push notification parameters with values from source. 
			 *
			 * @return The newly created @ref PushNotificationConfig object.    
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<linphone::PushNotificationConfig> clone() const;
			
			/**
			 * @brief Checks if two Push Notification Configurations are identical. 
			 *
			 * @param otherConfig The @ref PushNotificationConfig object to compare to.    
			 * @return True only if the two configurations are identical.    
			 */
			LINPHONECXX_PUBLIC bool isEqual(const std::shared_ptr<const linphone::PushNotificationConfig> & otherConfig) const;
			
			
	};

};

#endif // _PUSH_NOTIFICATION_CONFIG_HH

#ifndef _MSC_VER
#pragma GCC diagnostic pop
#endif // _MSC_VER
