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

#ifndef _INFO_MESSAGE_HH
#define _INFO_MESSAGE_HH

#include <string>
#include "object.hh"




struct _LinphoneInfoMessage;


namespace linphone {

	class Content;

	/**
	 * @brief Object representing an informational message sent or received by the
	 * core. 
	 *
	 */
	class InfoMessage: public Object {
	
		public:

			LINPHONECXX_PUBLIC InfoMessage(void *ptr, bool takeRef=true);
			LINPHONECXX_PUBLIC _LinphoneInfoMessage *cPtr() {return (_LinphoneInfoMessage *)mPrivPtr;}

	
		public:
			
		
			/**
			 * @brief Returns the info message's content as a @ref Content structure. 
			 *
			 * @return the @ref Content object.    
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<const linphone::Content> getContent() const;
			
			/**
			 * @brief Assign a content to the info message. 
			 *
			 * All fields of the @ref Content are copied, thus the application can
			 * destroy/modify/recycloe the content object freely ater the function returns. 
			 * @param content the content described as a @ref Content structure.    
			 */
			LINPHONECXX_PUBLIC void setContent(const std::shared_ptr<const linphone::Content> & content);
			
			/**
			 * @brief Add a header to an info message to be sent. 
			 *
			 * @param name the header'name    
			 * @param value the header's value    
			 */
			LINPHONECXX_PUBLIC void addHeader(const std::string & name, const std::string & value);
			
			/**
			 * @brief Obtain a header value from a received info message. 
			 *
			 * @param name the header'name    
			 * @return the corresponding header's value, or nullptr if not exists.    
			 */
			LINPHONECXX_PUBLIC std::string getHeader(const std::string & name) const;
			
			
	};

};

#endif // _INFO_MESSAGE_HH

#ifndef _MSC_VER
#pragma GCC diagnostic pop
#endif // _MSC_VER
