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

#ifndef _CONFERENCE_SCHEDULER_HH
#define _CONFERENCE_SCHEDULER_HH

#include "object.hh"




struct _LinphoneConferenceScheduler;


namespace linphone {

	class Account;
	class Core;
	class ConferenceInfo;
	class ChatRoomParams;
	class ConferenceSchedulerListener;

	/**
	 * @brief Object used to create remote conferences and send ICS to notify
	 * participants. 
	 *
	 */
	class ConferenceScheduler: public MultiListenableObject {
	
		public:
			/**
			* Describes conference scheduler possible states. 
			*
			*/
			enum class State {
				/**
				* Default state of a freshly created @ref ConferenceScheduler. 
				*/
				Idle = 0,
				/**
				* An error has happened during conference creation. 
				*/
				Error = 1,
				/**
				* Conference creation is in progress. 
				*/
				AllocationPending = 2,
				/**
				* Confererence has been created. 
				*/
				Ready = 3,
				/**
				* Conference has been updated. 
				*/
				Updating = 4
			};


			LINPHONECXX_PUBLIC ConferenceScheduler(void *ptr, bool takeRef=true);
			LINPHONECXX_PUBLIC _LinphoneConferenceScheduler *cPtr() {return (_LinphoneConferenceScheduler *)mPrivPtr;}

			/**
			 * @brief Add an application listener to the ConferenceScheduler instance.
			 *
			 * @param listener the application listener
			 */
			LINPHONECXX_PUBLIC void addListener(const std::shared_ptr<ConferenceSchedulerListener> &listener);
			/**
			 * @brief Remove a previously added listener from the ConferenceScheduler instance.
			 *
			 * @param listener the application listener
			 */
			LINPHONECXX_PUBLIC void removeListener(const std::shared_ptr<ConferenceSchedulerListener> &listener);
	
		public:
			
		
			/**
			 * @brief Get the @ref Account that is used for the conference scheduler. 
			 *
			 * @return The selected @ref Account for the call, or nullptr if none has been
			 * selected.    
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<linphone::Account> getAccount() const;
			
			/**
			 * @brief Set the @ref Account to use for the conference scheduler. 
			 *
			 * @param account The @ref Account to use, or nullptr if none has been selected.
			 * The @ref CallParams keeps a reference to it and removes the previous one, if
			 * any.    
			 */
			LINPHONECXX_PUBLIC void setAccount(const std::shared_ptr<linphone::Account> & account);
			
			/**
			 * @brief Gets the @ref Core from a @ref ConferenceScheduler object. 
			 *
			 * @return the @ref Core object.    
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<linphone::Core> getCore() const;
			
			/**
			 * @brief Returns the @ref ConferenceInfo currently set in this scheduler. 
			 *
			 * @return the currently configured @ref ConferenceInfo or nullptr if none is set.
			 *    
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<const linphone::ConferenceInfo> getInfo() const;
			
			/**
			 * @brief Sets the @ref ConferenceInfo to use to create/update the conference,
			 * which will be done right away. 
			 *
			 * @param conferenceInfo the @ref ConferenceInfo object to use to start
			 * creating/updating the remote conference.    
			 */
			LINPHONECXX_PUBLIC void setInfo(const std::shared_ptr<linphone::ConferenceInfo> & conferenceInfo);
			
			/**
			 * @brief Cancel the conference linked to the @ref ConferenceInfo provided as
			 * argument. 
			 *
			 * @param conferenceInfo the @ref ConferenceInfo object to linked to the
			 * conference to cancel.    
			 */
			LINPHONECXX_PUBLIC void cancelConference(const std::shared_ptr<linphone::ConferenceInfo> & conferenceInfo);
			
			/**
			 * @brief Sends an invitation to the scheduled conference to each participant by
			 * chat, using given chat rooms params to use/create the chat room in which to
			 * send it. 
			 *
			 * @param chatRoomParams the @ref ChatRoomParams object to use to use/create the
			 * @ref ChatRoom that will be used to send the invite.    
			 */
			LINPHONECXX_PUBLIC void sendInvitations(const std::shared_ptr<linphone::ChatRoomParams> & chatRoomParams);
			
			
		private:
			void *createCallbacks() override;
	};

};

#endif // _CONFERENCE_SCHEDULER_HH

#ifndef _MSC_VER
#pragma GCC diagnostic pop
#endif // _MSC_VER
