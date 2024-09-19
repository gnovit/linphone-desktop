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

#ifndef _DICTIONARY_HH
#define _DICTIONARY_HH

#include <string>
#include <cstdint>
#include "object.hh"




struct _LinphoneDictionary;


namespace linphone {

	class Dictionary;

	/**
	 * @brief Object that represents key-value pair container. 
	 *
	 */
	class Dictionary: public Object {
	
		public:

			LINPHONECXX_PUBLIC Dictionary(void *ptr, bool takeRef=true);
			LINPHONECXX_PUBLIC _LinphoneDictionary *cPtr() {return (_LinphoneDictionary *)mPrivPtr;}

	
		public:
			
		
			/**
			 * @brief Clears the dictionary. 
			 *
			 */
			LINPHONECXX_PUBLIC void clear();
			
			/**
			 * @brief Instantiates a new dictionary with values from source. 
			 *
			 * @return The newly created @ref Dictionary object.    
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<linphone::Dictionary> clone() const;
			
			/**
			 * @brief Gets the float value of a key. 
			 *
			 * @param key The key.    
			 * @return The username.    
			 */
			LINPHONECXX_PUBLIC float getFloat(const std::string & key) const;
			
			/**
			 * @brief Gets the int value of a key. 
			 *
			 * @param key The key.    
			 * @return The username.    
			 */
			LINPHONECXX_PUBLIC int getInt(const std::string & key) const;
			
			/**
			 * @brief Gets the int64 value of a key. 
			 *
			 * @param key The key.    
			 * @return The username.    
			 */
			LINPHONECXX_PUBLIC int64_t getInt64(const std::string & key) const;
			
			/**
			 * @brief Gets the char* value of a key. 
			 *
			 * @param key The key.    
			 * @return The username.    
			 */
			LINPHONECXX_PUBLIC std::string getString(const std::string & key) const;
			
			/**
			 * @brief Search if the key is present in the dictionary. 
			 *
			 * @param key The key.    
			 * @return The LinphoneStatus of the operation. 
			 */
			LINPHONECXX_PUBLIC linphone::Status hasKey(const std::string & key) const;
			
			/**
			 * @brief Removes the pair of the key. 
			 *
			 * @param key The key.    
			 * @return The LinphoneStatus of the operation. 
			 */
			LINPHONECXX_PUBLIC linphone::Status remove(const std::string & key);
			
			/**
			 * @brief Sets a float value to a key. 
			 *
			 * @param key The key.    
			 * @param value The int value. 
			 */
			LINPHONECXX_PUBLIC void setFloat(const std::string & key, float value);
			
			/**
			 * @brief Sets a int value to a key. 
			 *
			 * @param key The key.    
			 * @param value The int value. 
			 */
			LINPHONECXX_PUBLIC void setInt(const std::string & key, int value);
			
			/**
			 * @brief Sets a int64 value to a key. 
			 *
			 * @param key The key.    
			 * @param value The int64 value. 
			 */
			LINPHONECXX_PUBLIC void setInt64(const std::string & key, int64_t value);
			
			/**
			 * @brief Sets a char* value to a key. 
			 *
			 * @param key The key.    
			 * @param value The char* value. 
			 */
			LINPHONECXX_PUBLIC void setString(const std::string & key, const std::string & value);
			
			
	};

};

#endif // _DICTIONARY_HH

#ifndef _MSC_VER
#pragma GCC diagnostic pop
#endif // _MSC_VER
