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

#ifndef _PARTICIPANT_INFO_HH
#define _PARTICIPANT_INFO_HH

#include <string>
#include "participant.hh"
#include "object.hh"




struct _LinphoneParticipantInfo;


namespace linphone {

	class Address;
	class ParticipantInfo;

	/**
	 * @brief Object defining all information related to a participant. 
	 *
	 */
	class ParticipantInfo: public Object {
	
		public:

			LINPHONECXX_PUBLIC ParticipantInfo(void *ptr, bool takeRef=true);
			LINPHONECXX_PUBLIC _LinphoneParticipantInfo *cPtr() {return (_LinphoneParticipantInfo *)mPrivPtr;}

	
		public:
			
		
			/**
			 * @brief Get the address of the object @ref ParticipantInfo. 
			 *
			 * @return the @ref Address of the @ref ParticipantInfo object.    
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<const linphone::Address> getAddress() const;
			
			/**
			 * @brief Get the role of the object @ref ParticipantInfo. 
			 *
			 * @return the @ref Participant::Role of the @ref ParticipantInfo object.    
			 */
			LINPHONECXX_PUBLIC linphone::Participant::Role getRole() const;
			
			/**
			 * @brief Set the role of the object @ref ParticipantInfo. 
			 *
			 * @param role the @ref Participant::Role of the @ref ParticipantInfo object.    
			 */
			LINPHONECXX_PUBLIC void setRole(linphone::Participant::Role role);
			
			/**
			 * @brief Set the a custom parameter to object @ref ParticipantInfo. 
			 *
			 * @param name the name of the parameter.    
			 * @param value the value of the parameter.    
			 */
			LINPHONECXX_PUBLIC void addParameter(const std::string & name, const std::string & value);
			
			/**
			 * @brief Clone an object @ref ParticipantInfo. 
			 *
			 * @return the cloned @ref ParticipantInfo object.    
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<linphone::ParticipantInfo> clone() const;
			
			/**
			 * @brief Get the value of a custom parameter of the object @ref ParticipantInfo. 
			 *
			 * @param name the name of the parameter.    
			 * @return value the value of the parameter.    
			 */
			LINPHONECXX_PUBLIC std::string getParameterValue(const std::string & name) const;
			
			/**
			 * @brief Find whether a @ref ParticipantInfo has a parameter. 
			 *
			 * @param name the name of the parameter.    
			 * @return true if the parameter is present, false otherwise 
			 */
			LINPHONECXX_PUBLIC bool hasParameter(const std::string & name) const;
			
			/**
			 * @brief Find the value of a custom parameter of the object @ref ParticipantInfo. 
			 *
			 * @param name the name of the parameter.    
			 */
			LINPHONECXX_PUBLIC void removeParameter(const std::string & name);
			
			
	};

};

#endif // _PARTICIPANT_INFO_HH

#ifndef _MSC_VER
#pragma GCC diagnostic pop
#endif // _MSC_VER
