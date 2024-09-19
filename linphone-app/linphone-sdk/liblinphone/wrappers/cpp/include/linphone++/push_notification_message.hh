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

#ifndef _PUSH_NOTIFICATION_MESSAGE_HH
#define _PUSH_NOTIFICATION_MESSAGE_HH

#include <string>
#include "object.hh"




struct _LinphonePushNotificationMessage;


namespace linphone {


	/**
	 * @brief Object holding chat message data received by a push notification on iOS
	 * platform only. 
	 *
	 * This object is a subset of @ref ChatMessage, so only a few methods of it's
	 * parent are available, like linphone_push_notification_message_get_text_content
	 * and linphone_push_notification_message_get_subject, just enough to be able to
	 * build a notification to show the user. 
	 */
	class PushNotificationMessage: public Object {
	
		public:

			LINPHONECXX_PUBLIC PushNotificationMessage(void *ptr, bool takeRef=true);
			LINPHONECXX_PUBLIC _LinphonePushNotificationMessage *cPtr() {return (_LinphonePushNotificationMessage *)mPrivPtr;}

	
		public:
			
		
			/**
			 * @brief Tells whether or not this message contains a conference invitation
			 * cancellation. 
			 *
			 * @return true if this message carries a conference invitation cancellation,
			 * false otherwise. 
			 */
			LINPHONECXX_PUBLIC bool isConferenceInvitationCancellation() const;
			
			/**
			 * @brief Tells whether or not this message contains a new conference invitation. 
			 *
			 * @return true if this message carries a new conference invitation, false
			 * otherwise. 
			 */
			LINPHONECXX_PUBLIC bool isConferenceInvitationNew() const;
			
			/**
			 * @brief Tells whether or not this message contains a conference invitation
			 * update. 
			 *
			 * @return true if this message carries a conference invitation update, false
			 * otherwise. 
			 */
			LINPHONECXX_PUBLIC bool isConferenceInvitationUpdate() const;
			
			/**
			 * @brief Tells whether or not this message contains an icalendar by checking it's
			 * content type. 
			 *
			 * @return true if this content type is 'text/calendar;conference-event=yes',
			 * false otherwise. 
			 */
			LINPHONECXX_PUBLIC bool isIcalendar() const;
			
			/**
			 * @brief Gets the reaction content. 
			 *
			 * @return The reaction content or nullptr.    
			 */
			LINPHONECXX_PUBLIC std::string getReactionContent() const;
			
			
	};

};

#endif // _PUSH_NOTIFICATION_MESSAGE_HH

#ifndef _MSC_VER
#pragma GCC diagnostic pop
#endif // _MSC_VER
