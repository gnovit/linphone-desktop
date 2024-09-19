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

#ifndef _PARTICIPANT_HH
#define _PARTICIPANT_HH

#include <list>
#include "participant.hh"
#include "chat_room.hh"
#include "object.hh"




struct _LinphoneParticipant;


namespace linphone {

	class Address;
	class ParticipantDevice;
	class Call;

	/**
	 * @brief Identifies a member of a @ref Conference or @ref ChatRoom. 
	 *
	 * A participant is identified by it's SIP address. It can have many @ref
	 * ParticipantDevice. 
	 */
	class Participant: public Object {
	
		public:
			/**
			* @ref Role is used to define a role of a participant within a conference 
			*
			*/
			enum class Role {
				/**
				* participant is a speaker in the conference 
				*/
				Speaker = 0,
				/**
				* participant is a listener in the conference. 
				*/
				Listener = 1,
				/**
				* participant role is unknown 
				*/
				Unknown = 2
			};


			LINPHONECXX_PUBLIC Participant(void *ptr, bool takeRef=true);
			LINPHONECXX_PUBLIC _LinphoneParticipant *cPtr() {return (_LinphoneParticipant *)mPrivPtr;}

	
		public:
			
		
			/**
			 * @brief Get the address of a conference participant. 
			 *
			 * @return The @ref Address of the participant    
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<const linphone::Address> getAddress() const;
			
			/**
			 * @brief Get the timestamp of the creation of the participant. 
			 *
			 * @return time of creation of the participant as returned by time(nullptr). For
			 * UNIX based systems it is the number of seconds since 00:00hours of the 1st of
			 * January 1970 
			 */
			LINPHONECXX_PUBLIC time_t getCreationTime() const;
			
			/**
			 * @brief Gets the list of devices from a chat room's participant. 
			 *
			 * @return List of devices.         
			 */
			LINPHONECXX_PUBLIC std::list<std::shared_ptr<linphone::ParticipantDevice>> getDevices() const;
			
			/**
			 * @brief Tells whether a conference participant is an administrator of the
			 * conference. 
			 *
			 * @return A boolean value telling whether the participant is an administrator 
			 */
			LINPHONECXX_PUBLIC bool isAdmin() const;
			
			/**
			 * @brief Tells whether a conference participant is the focus of the conference. 
			 *
			 * @return A boolean value telling whether the participant is a focus of a
			 * conference 
			 */
			LINPHONECXX_PUBLIC bool isFocus() const;
			
			/**
			 * @brief Get the role of the participant within the conference. 
			 *
			 * @return role within the conference @ref Role 
			 */
			LINPHONECXX_PUBLIC Role getRole() const;
			
			/**
			 * @brief Get the security level of a participant. 
			 *
			 * @return The @ref ChatRoom::SecurityLevel of the participant 
			 */
			LINPHONECXX_PUBLIC linphone::ChatRoom::SecurityLevel getSecurityLevel() const;
			
			/**
			 * @brief Find a device in the list of devices from a chat room's participant. 
			 *
			 * @param call A @ref Call object    
			 * @return a @ref ParticipantDevice or nullptr if not found.    
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<linphone::ParticipantDevice> findDevice(const std::shared_ptr<const linphone::Call> & call) const;
			
			/**
			 * @brief Find a device in the list of devices from a chat room's participant. 
			 *
			 * @param address A @ref Address object    
			 * @return a @ref ParticipantDevice or nullptr if not found.    
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<linphone::ParticipantDevice> findDevice(const std::shared_ptr<const linphone::Address> & address) const;
			
			
	};

};

#endif // _PARTICIPANT_HH

#ifndef _MSC_VER
#pragma GCC diagnostic pop
#endif // _MSC_VER
