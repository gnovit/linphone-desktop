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

#ifndef _ACCOUNT_CREATOR_LISTENER_HH
#define _ACCOUNT_CREATOR_LISTENER_HH

#include <string>
#include "account_creator.hh"
#include "object.hh"






namespace linphone {

	class AccountCreator;

	/**
	 * @brief An object to handle the responses callbacks for handling the @ref
	 * AccountCreator operations. 
	 *
	 */
	class AccountCreatorListener: public Listener {
	
		public:


	
		public:
			
		
			/**
			 * @brief Callback to notify a response of server. 
			 *
			 * @param creator @ref AccountCreator object    
			 * @param status The status of the @ref AccountCreator test existence operation
			 * that has just finished 
			 * @param response The response has a string    
			 */
			LINPHONECXX_PUBLIC virtual void onCreateAccount(const std::shared_ptr<linphone::AccountCreator> & creator, linphone::AccountCreator::Status status, const std::string & response) {};
			
			/**
			 * @brief Callback to notify a response of server. 
			 *
			 * @param creator @ref AccountCreator object    
			 * @param status The status of the @ref AccountCreator test existence operation
			 * that has just finished 
			 * @param response The response has a string    
			 */
			LINPHONECXX_PUBLIC virtual void onIsAccountExist(const std::shared_ptr<linphone::AccountCreator> & creator, linphone::AccountCreator::Status status, const std::string & response) {};
			
			/**
			 * @brief Callback to notify a response of server. 
			 *
			 * @param creator @ref AccountCreator object    
			 * @param status The status of the @ref AccountCreator test existence operation
			 * that has just finished 
			 * @param response The response has a string    
			 */
			LINPHONECXX_PUBLIC virtual void onActivateAccount(const std::shared_ptr<linphone::AccountCreator> & creator, linphone::AccountCreator::Status status, const std::string & response) {};
			
			/**
			 * @brief Callback to notify a response of server. 
			 *
			 * @param creator @ref AccountCreator object    
			 * @param status The status of the @ref AccountCreator test existence operation
			 * that has just finished 
			 * @param response The response has a string    
			 */
			LINPHONECXX_PUBLIC virtual void onSendToken(const std::shared_ptr<linphone::AccountCreator> & creator, linphone::AccountCreator::Status status, const std::string & response) {};
			
			/**
			 * @brief Callback to notify a response of server. 
			 *
			 * @param creator @ref AccountCreator object    
			 * @param status The status of the @ref AccountCreator test existence operation
			 * that has just finished 
			 * @param response The response has a string    
			 */
			LINPHONECXX_PUBLIC virtual void onAccountCreationRequestToken(const std::shared_ptr<linphone::AccountCreator> & creator, linphone::AccountCreator::Status status, const std::string & response) {};
			
			/**
			 * @brief Callback to notify a response of server. 
			 *
			 * @param creator @ref AccountCreator object    
			 * @param status The status of the @ref AccountCreator test existence operation
			 * that has just finished 
			 * @param response The response has a string    
			 */
			LINPHONECXX_PUBLIC virtual void onAccountCreationTokenUsingRequestToken(const std::shared_ptr<linphone::AccountCreator> & creator, linphone::AccountCreator::Status status, const std::string & response) {};
			
			/**
			 * @brief Callback to notify a response of server. 
			 *
			 * @param creator @ref AccountCreator object    
			 * @param status The status of the @ref AccountCreator test existence operation
			 * that has just finished 
			 * @param response The response has a string    
			 */
			LINPHONECXX_PUBLIC virtual void onIsAccountActivated(const std::shared_ptr<linphone::AccountCreator> & creator, linphone::AccountCreator::Status status, const std::string & response) {};
			
			/**
			 * @brief Callback to notify a response of server. 
			 *
			 * @param creator @ref AccountCreator object    
			 * @param status The status of the @ref AccountCreator test existence operation
			 * that has just finished 
			 * @param response The response has a string    
			 */
			LINPHONECXX_PUBLIC virtual void onLinkAccount(const std::shared_ptr<linphone::AccountCreator> & creator, linphone::AccountCreator::Status status, const std::string & response) {};
			
			/**
			 * @brief Callback to notify a response of server. 
			 *
			 * @param creator @ref AccountCreator object    
			 * @param status The status of the @ref AccountCreator test existence operation
			 * that has just finished 
			 * @param response The response has a string    
			 */
			LINPHONECXX_PUBLIC virtual void onActivateAlias(const std::shared_ptr<linphone::AccountCreator> & creator, linphone::AccountCreator::Status status, const std::string & response) {};
			
			/**
			 * @brief Callback to notify a response of server. 
			 *
			 * @param creator @ref AccountCreator object    
			 * @param status The status of the @ref AccountCreator test existence operation
			 * that has just finished 
			 * @param response The response has a string    
			 */
			LINPHONECXX_PUBLIC virtual void onIsAliasUsed(const std::shared_ptr<linphone::AccountCreator> & creator, linphone::AccountCreator::Status status, const std::string & response) {};
			
			/**
			 * @brief Callback to notify a response of server. 
			 *
			 * @param creator @ref AccountCreator object    
			 * @param status The status of the @ref AccountCreator test existence operation
			 * that has just finished 
			 * @param response The response has a string    
			 */
			LINPHONECXX_PUBLIC virtual void onIsAccountLinked(const std::shared_ptr<linphone::AccountCreator> & creator, linphone::AccountCreator::Status status, const std::string & response) {};
			
			/**
			 * @brief Callback to notify a response of server. 
			 *
			 * @param creator @ref AccountCreator object    
			 * @param status The status of the @ref AccountCreator test existence operation
			 * that has just finished 
			 * @param response The response has a string    
			 */
			LINPHONECXX_PUBLIC virtual void onRecoverAccount(const std::shared_ptr<linphone::AccountCreator> & creator, linphone::AccountCreator::Status status, const std::string & response) {};
			
			/**
			 * @brief Callback to notify a response of server. 
			 *
			 * @param creator @ref AccountCreator object    
			 * @param status The status of the @ref AccountCreator test existence operation
			 * that has just finished 
			 * @param response The response has a string    
			 */
			LINPHONECXX_PUBLIC virtual void onUpdateAccount(const std::shared_ptr<linphone::AccountCreator> & creator, linphone::AccountCreator::Status status, const std::string & response) {};
			
			/**
			 * @brief Callback to notify a response of server. 
			 *
			 * @param creator @ref AccountCreator object    
			 * @param status The status of the @ref AccountCreator test existence operation
			 * that has just finished 
			 * @param response The response has a string    
			 */
			LINPHONECXX_PUBLIC virtual void onLoginLinphoneAccount(const std::shared_ptr<linphone::AccountCreator> & creator, linphone::AccountCreator::Status status, const std::string & response) {};
			
			
	};

};

#endif // _ACCOUNT_CREATOR_LISTENER_HH

#ifndef _MSC_VER
#pragma GCC diagnostic pop
#endif // _MSC_VER
