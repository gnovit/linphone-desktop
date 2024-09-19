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

#ifndef _PARTICIPANT_DEVICE_IDENTITY_HH
#define _PARTICIPANT_DEVICE_IDENTITY_HH

#include <string>
#include <list>
#include "object.hh"




struct _LinphoneParticipantDeviceIdentity;


namespace linphone {

	class Address;

	/**
	 * @brief This object is only used on server side for @ref ChatRoom with @ref
	 * ChatRoom::Backend::FlexisipChat backend. 
	 *
	 */
	class ParticipantDeviceIdentity: public Object {
	
		public:

			LINPHONECXX_PUBLIC ParticipantDeviceIdentity(void *ptr, bool takeRef=true);
			LINPHONECXX_PUBLIC _LinphoneParticipantDeviceIdentity *cPtr() {return (_LinphoneParticipantDeviceIdentity *)mPrivPtr;}

	
		public:
			
		
			/**
			 * @brief Get the address of the participant device. 
			 *
			 * @return the address.    
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<const linphone::Address> getAddress() const;
			
			/**
			 * @brief Get the capability descriptor (currently +org.linphone.specs value) for
			 * this participant device identity. 
			 *
			 * @return the capability descriptor string. 
			 * @deprecated 12/06/2023 Use getCapabilityDescriptorList() instead
			 */
			LINPHONECXX_PUBLIC LINPHONECXX_DEPRECATED std::string getCapabilityDescriptor() const;
			
			/**
			 * @brief Set the capability descriptor (currently +org.linphone.specs value) for
			 * this participant device identity. 
			 *
			 * @param capabilityDescriptor the capability descriptor string. 
			 * @deprecated 12/06/2023 Use setCapabilityDescriptor() instead
			 */
			LINPHONECXX_PUBLIC LINPHONECXX_DEPRECATED void setCapabilityDescriptor(const std::string & capabilityDescriptor);
			
			/**
			 * @brief Set the capability descriptor (currently +org.linphone.specs value) for
			 * this participant device identity. 
			 *
			 * @param capabilityDescriptorList the capability descriptor list.      
			 */
			LINPHONECXX_PUBLIC void setCapabilityDescriptor(const std::list<std::string> & capabilityDescriptorList);
			
			/**
			 * @brief Get the capability descriptor (currently +org.linphone.specs value) for
			 * this participant device identity. 
			 *
			 * @return the capability descriptor list.      
			 */
			LINPHONECXX_PUBLIC std::list<std::string> getCapabilityDescriptorList() const;
			
			
	};

};

#endif // _PARTICIPANT_DEVICE_IDENTITY_HH

#ifndef _MSC_VER
#pragma GCC diagnostic pop
#endif // _MSC_VER
