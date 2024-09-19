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

#ifndef _FRIEND_PHONE_NUMBER_HH
#define _FRIEND_PHONE_NUMBER_HH

#include <string>
#include "object.hh"




struct _LinphoneFriendPhoneNumber;


namespace linphone {

	class FriendPhoneNumber;

	/**
	 * @brief Object that represents a @ref Friend's phone number. 
	 *
	 */
	class FriendPhoneNumber: public Object {
	
		public:

			LINPHONECXX_PUBLIC FriendPhoneNumber(void *ptr, bool takeRef=true);
			LINPHONECXX_PUBLIC _LinphoneFriendPhoneNumber *cPtr() {return (_LinphoneFriendPhoneNumber *)mPrivPtr;}

	
		public:
			
		
			/**
			 * @brief Gets the label associated to this phone number. 
			 *
			 * @return the label set if any, nullptr otherwise.    
			 */
			LINPHONECXX_PUBLIC std::string getLabel() const;
			
			/**
			 * @brief Sets the label for this phone number. 
			 *
			 * @param label the label to set.    
			 */
			LINPHONECXX_PUBLIC void setLabel(const std::string & label);
			
			/**
			 * @brief Gets the phone number. 
			 *
			 * @return the phone number stored.    
			 */
			LINPHONECXX_PUBLIC std::string getPhoneNumber() const;
			
			/**
			 * @brief Sets the phone number. 
			 *
			 * @param number the phone number to set.    
			 */
			LINPHONECXX_PUBLIC void setPhoneNumber(const std::string & number);
			
			/**
			 * @brief Clones a phone number. 
			 *
			 * @return The newly created @ref FriendPhoneNumber object.    
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<linphone::FriendPhoneNumber> clone() const;
			
			
	};

};

#endif // _FRIEND_PHONE_NUMBER_HH

#ifndef _MSC_VER
#pragma GCC diagnostic pop
#endif // _MSC_VER
