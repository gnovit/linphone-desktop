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

#ifndef _XML_RPC_SESSION_HH
#define _XML_RPC_SESSION_HH

#include <string>
#include "enums.hh"
#include "object.hh"




struct _LinphoneXmlRpcSession;


namespace linphone {

	class XmlRpcRequest;

	/**
	 * @brief The @ref XmlRpcSession object used to send XML-RPC requests and handle
	 * their responses. 
	 *
	 */
	class XmlRpcSession: public Object {
	
		public:

			LINPHONECXX_PUBLIC XmlRpcSession(void *ptr, bool takeRef=true);
			LINPHONECXX_PUBLIC _LinphoneXmlRpcSession *cPtr() {return (_LinphoneXmlRpcSession *)mPrivPtr;}

	
		public:
			
		
			/**
			 * @brief Creates a @ref XmlRpcRequest from a @ref XmlRpcSession. 
			 *
			 * @param returnType the return type of the request as a @ref XmlRpcArgType 
			 * @param method the function name to call    
			 * @return a @ref XmlRpcRequest object    
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<linphone::XmlRpcRequest> createRequest(linphone::XmlRpcArgType returnType, const std::string & method);
			
			/**
			 * @brief Stop and unref an XML rpc session. 
			 *
			 * Pending requests will be aborted. 
			 */
			LINPHONECXX_PUBLIC void release();
			
			/**
			 * @brief Send an XML-RPC request. 
			 *
			 * @param request The @ref XmlRpcRequest to be sent.    
			 */
			LINPHONECXX_PUBLIC void sendRequest(const std::shared_ptr<linphone::XmlRpcRequest> & request);
			
			
	};

};

#endif // _XML_RPC_SESSION_HH

#ifndef _MSC_VER
#pragma GCC diagnostic pop
#endif // _MSC_VER
