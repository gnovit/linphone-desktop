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

#ifndef _SEARCH_RESULT_HH
#define _SEARCH_RESULT_HH

#include <string>
#include "friend.hh"
#include "object.hh"




struct _LinphoneSearchResult;


namespace linphone {

	class Address;
	class Friend;

	/**
	 * @brief The LinphoneSearchResult object represents a result of a search. 
	 *
	 */
	class SearchResult: public Object {
	
		public:

			LINPHONECXX_PUBLIC SearchResult(void *ptr, bool takeRef=true);
			LINPHONECXX_PUBLIC _LinphoneSearchResult *cPtr() {return (_LinphoneSearchResult *)mPrivPtr;}

	
		public:
			
		
			/**
			 * @brief Gets the address of the search result if any. 
			 *
			 * @return The associed @ref Address or nullptr.    
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<const linphone::Address> getAddress() const;
			
			/**
			 * @brief Returns the capabilities mask of the search result. 
			 *
			 * @return the capabilities mask associated to the search result 
			 */
			LINPHONECXX_PUBLIC int getCapabilities() const;
			
			/**
			 * @brief Gets the friend of the search result if any. 
			 *
			 * @return The associated @ref Friend or nullptr.    
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<linphone::Friend> getFriend() const;
			
			/**
			 * @brief Gets the phone number of the search result if any. 
			 *
			 * @return The associed phone number or nullptr.    
			 */
			LINPHONECXX_PUBLIC std::string getPhoneNumber() const;
			
			/**
			 * @brief Gets source flags of the search result. 
			 *
			 * @return the source flags from @ref MagicSearch::Source 
			 */
			LINPHONECXX_PUBLIC int getSourceFlags() const;
			
			/**
			 * @brief Gets the weight of the search result. 
			 *
			 * @return the result weight 
			 */
			LINPHONECXX_PUBLIC unsigned int getWeight() const;
			
			/**
			 * @brief Returns whether or not the search result has the given capability. 
			 *
			 * @param capability the @ref Friend::Capability to check 
			 * @return true if it has the capability, false otherwise. 
			 */
			LINPHONECXX_PUBLIC bool hasCapability(linphone::Friend::Capability capability) const;
			
			
	};

};

#endif // _SEARCH_RESULT_HH

#ifndef _MSC_VER
#pragma GCC diagnostic pop
#endif // _MSC_VER
