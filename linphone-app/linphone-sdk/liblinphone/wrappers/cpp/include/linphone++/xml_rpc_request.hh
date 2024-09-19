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

#ifndef _XML_RPC_REQUEST_HH
#define _XML_RPC_REQUEST_HH

#include <string>
#include <list>
#include "enums.hh"
#include "object.hh"




struct _LinphoneXmlRpcRequest;


namespace linphone {

	class XmlRpcRequestListener;

	/**
	 * @brief The @ref XmlRpcRequest object representing a XML-RPC request to be sent. 
	 *
	 */
	class XmlRpcRequest: public MultiListenableObject {
	
		public:

			LINPHONECXX_PUBLIC XmlRpcRequest(void *ptr, bool takeRef=true);
			LINPHONECXX_PUBLIC _LinphoneXmlRpcRequest *cPtr() {return (_LinphoneXmlRpcRequest *)mPrivPtr;}

			/**
			 * @brief Add an application listener to the XmlRpcRequest instance.
			 *
			 * @param listener the application listener
			 */
			LINPHONECXX_PUBLIC void addListener(const std::shared_ptr<XmlRpcRequestListener> &listener);
			/**
			 * @brief Remove a previously added listener from the XmlRpcRequest instance.
			 *
			 * @param listener the application listener
			 */
			LINPHONECXX_PUBLIC void removeListener(const std::shared_ptr<XmlRpcRequestListener> &listener);
	
		public:
			
		
			/**
			 * @brief Get the content of the XML-RPC request. 
			 *
			 * @return The string representation of the content of the XML-RPC request.    
			 */
			LINPHONECXX_PUBLIC std::string getContent() const;
			
			/**
			 * @brief Get the response to an XML-RPC request sent with
			 * XmlRpcSession::sendRequest() and returning an integer response. 
			 *
			 * @return The integer response to the XML-RPC request. 
			 */
			LINPHONECXX_PUBLIC int getIntResponse() const;
			
			/**
			 * @brief Get the response to an XML-RPC request sent with
			 * XmlRpcSession::sendRequest() and returning a string response. 
			 *
			 * @return A list of all string responses in the XML-RPC request.      
			 */
			LINPHONECXX_PUBLIC std::list<std::string> getListResponse() const;
			
			/**
			 * @brief Get the raw response to an XML-RPC request sent with
			 * XmlRpcSession::sendRequest() and returning http body as string. 
			 *
			 * @return The string response to the XML-RPC request.    
			 */
			LINPHONECXX_PUBLIC std::string getRawResponse() const;
			
			/**
			 * @brief Get the status of the XML-RPC request. 
			 *
			 * @return The @ref XmlRpcStatus of the XML-RPC request. 
			 */
			LINPHONECXX_PUBLIC linphone::XmlRpcStatus getStatus() const;
			
			/**
			 * @brief Get the response to an XML-RPC request sent with
			 * XmlRpcSession::sendRequest() and returning a string response. 
			 *
			 * @return The string response to the XML-RPC request.    
			 */
			LINPHONECXX_PUBLIC std::string getStringResponse() const;
			
			/**
			 * @brief Add an integer argument to an XML-RPC request. 
			 *
			 * @param value The integer value of the added argument. 
			 */
			LINPHONECXX_PUBLIC void addIntArg(int value);
			
			/**
			 * @brief Add a string argument to an XML-RPC request. 
			 *
			 * @param value The string value of the added argument.    
			 */
			LINPHONECXX_PUBLIC void addStringArg(const std::string & value);
			
			
		private:
			void *createCallbacks() override;
	};

};

#endif // _XML_RPC_REQUEST_HH

#ifndef _MSC_VER
#pragma GCC diagnostic pop
#endif // _MSC_VER
