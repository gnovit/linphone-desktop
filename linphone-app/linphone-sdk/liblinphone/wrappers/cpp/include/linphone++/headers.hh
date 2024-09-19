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

#ifndef _HEADERS_HH
#define _HEADERS_HH

#include <string>
#include "object.hh"




struct _LinphoneHeaders;


namespace linphone {


	/**
	 * @brief Object representing a chain of protocol headers. 
	 *
	 * It provides read/write access to the headers of the underlying protocol. 
	 */
	class Headers: public Object {
	
		public:

			LINPHONECXX_PUBLIC Headers(void *ptr, bool takeRef=true);
			LINPHONECXX_PUBLIC _LinphoneHeaders *cPtr() {return (_LinphoneHeaders *)mPrivPtr;}

	
		public:
			
		
			/**
			 * @brief Add given header name and corresponding value. 
			 *
			 * @param name the header's name    
			 * @param value the header's value    
			 */
			LINPHONECXX_PUBLIC void add(const std::string & name, const std::string & value);
			
			/**
			 * @brief Search for a given header name and return its value. 
			 *
			 * @return the header's value or nullptr if not found.    
			 */
			LINPHONECXX_PUBLIC std::string getValue(const std::string & headerName);
			
			/**
			 * @brief Add given header name and corresponding value. 
			 *
			 * @param name the header's name    
			 */
			LINPHONECXX_PUBLIC void remove(const std::string & name);
			
			
	};

};

#endif // _HEADERS_HH

#ifndef _MSC_VER
#pragma GCC diagnostic pop
#endif // _MSC_VER
