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

#ifndef _CONFERENCE_SCHEDULER_LISTENER_HH
#define _CONFERENCE_SCHEDULER_LISTENER_HH

#include <list>
#include "conference_scheduler.hh"
#include "object.hh"






namespace linphone {

	class ConferenceScheduler;
	class Address;

	/**
	 * @brief An object to handle the callbacks of @ref ConferenceScheduler object. 
	 *
	 */
	class ConferenceSchedulerListener: public Listener {
	
		public:


	
		public:
			
		
			/**
			 * @brief Callback for notifying when a registration state has changed for the
			 * conference scheduler. 
			 *
			 * @param conferenceScheduler LinphoneConferenceScheduler object whose state has
			 * changed.    
			 * @param state The current LinphoneConferenceSchedulerState. 
			 */
			LINPHONECXX_PUBLIC virtual void onStateChanged(const std::shared_ptr<linphone::ConferenceScheduler> & conferenceScheduler, linphone::ConferenceScheduler::State state) {};
			
			/**
			 * @brief Callback for notifying when conference invitations have been sent. 
			 *
			 * In case of error for some participants, their addresses will be given as
			 * parameter. 
			 * @param conferenceScheduler @ref ConferenceScheduler object whose state has
			 * changed.    
			 * @param failedInvitations a list of addresses for which invitation couldn't be
			 * sent.      
			 */
			LINPHONECXX_PUBLIC virtual void onInvitationsSent(const std::shared_ptr<linphone::ConferenceScheduler> & conferenceScheduler, const std::list<std::shared_ptr<linphone::Address>> & failedInvitations) {};
			
			
	};

};

#endif // _CONFERENCE_SCHEDULER_LISTENER_HH

#ifndef _MSC_VER
#pragma GCC diagnostic pop
#endif // _MSC_VER
