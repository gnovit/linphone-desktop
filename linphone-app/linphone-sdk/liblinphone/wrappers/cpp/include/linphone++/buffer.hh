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

#ifndef _BUFFER_HH
#define _BUFFER_HH

#include <cstdint>
#include <string>
#include "object.hh"




struct _LinphoneBuffer;


namespace linphone {

	class Buffer;

	/**
	 * @brief The object representing a data buffer. 
	 *
	 */
	class Buffer: public Object {
	
		public:

			LINPHONECXX_PUBLIC Buffer(void *ptr, bool takeRef=true);
			LINPHONECXX_PUBLIC _LinphoneBuffer *cPtr() {return (_LinphoneBuffer *)mPrivPtr;}

	
		public:
			
		
			/**
			 * @brief Get the content of the data buffer. 
			 *
			 * @return The content of the data buffer.    
			 */
			LINPHONECXX_PUBLIC const uint8_t * getContent() const;
			
			/**
			 * @brief Tell whether the @ref Buffer is empty. 
			 *
			 * @return A boolean value telling whether the @ref Buffer is empty or not. 
			 */
			LINPHONECXX_PUBLIC bool isEmpty() const;
			
			/**
			 * @brief Get the size of the content of the data buffer. 
			 *
			 * @return The size of the content of the data buffer. 
			 */
			LINPHONECXX_PUBLIC size_t getSize() const;
			
			/**
			 * @brief Set the size of the content of the data buffer. 
			 *
			 * @param size The size of the content of the data buffer. 
			 */
			LINPHONECXX_PUBLIC void setSize(size_t size);
			
			/**
			 * @brief Get the string content of the data buffer. 
			 *
			 * @return The string content of the data buffer.    
			 */
			LINPHONECXX_PUBLIC std::string getStringContent() const;
			
			/**
			 * @brief Set the string content of the data buffer. 
			 *
			 * @param content The string content of the data buffer.    
			 */
			LINPHONECXX_PUBLIC void setStringContent(const std::string & content);
			
			/**
			 * @brief Set the content of the data buffer. 
			 *
			 * @param content The content of the data buffer.    
			 * @param size The size of the content of the data buffer. 
			 */
			LINPHONECXX_PUBLIC void setContent(const uint8_t * content, size_t size);
			
			;
			/**
			 * @brief Create a new @ref Buffer object from existing data. 
			 *
			 * @param data The initial data to store in the LinphoneBuffer.    
			 * @param size The size of the initial data to stroe in the LinphoneBuffer. 
			 * @return A new @ref Buffer object.    
			 */
			LINPHONECXX_PUBLIC static std::shared_ptr<linphone::Buffer> newFromData(const uint8_t * data, size_t size);
			
;
			/**
			 * @brief Create a new @ref Buffer object from a string. 
			 *
			 * @param data The initial string content of the LinphoneBuffer.    
			 * @return A new @ref Buffer object.    
			 */
			LINPHONECXX_PUBLIC static std::shared_ptr<linphone::Buffer> newFromString(const std::string & data);
			

	};

};

#endif // _BUFFER_HH

#ifndef _MSC_VER
#pragma GCC diagnostic pop
#endif // _MSC_VER
