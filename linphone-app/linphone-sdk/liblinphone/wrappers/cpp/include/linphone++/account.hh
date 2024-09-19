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

#ifndef _ACCOUNT_HH
#define _ACCOUNT_HH

#include <list>
#include <string>
#include "enums.hh"
#include "object.hh"




struct _LinphoneAccount;


namespace linphone {

	class CallLog;
	class ChatRoom;
	class ConferenceInfo;
	class Address;
	class Core;
	class Account;
	class ErrorInfo;
	class AccountParams;
	class ProxyConfig;
	class AuthInfo;
	class AccountListener;

	/**
	 * @brief Object that represents a Linphone Account. 
	 *
	 * This object replaces the deprecated @ref ProxyConfig. Use a @ref AccountParams
	 * object to configure it. 
	 */
	class Account: public MultiListenableObject {
	
		public:

			LINPHONECXX_PUBLIC Account(void *ptr, bool takeRef=true);
			LINPHONECXX_PUBLIC _LinphoneAccount *cPtr() {return (_LinphoneAccount *)mPrivPtr;}

			/**
			 * @brief Add an application listener to the Account instance.
			 *
			 * @param listener the application listener
			 */
			LINPHONECXX_PUBLIC void addListener(const std::shared_ptr<AccountListener> &listener);
			/**
			 * @brief Remove a previously added listener from the Account instance.
			 *
			 * @param listener the application listener
			 */
			LINPHONECXX_PUBLIC void removeListener(const std::shared_ptr<AccountListener> &listener);
	
		public:
			
		
			/**
			 * @brief Indicates whether AVPF/SAVPF is being used for calls using this account. 
			 *
			 * @return true if AVPF/SAVPF is enabled, false otherwise. 
			 */
			LINPHONECXX_PUBLIC bool avpfEnabled();
			
			/**
			 * @brief Returns the list of call logs for a given account. 
			 *
			 * This list must be freed after use. 
			 * @return The list of call logs   .       
			 */
			LINPHONECXX_PUBLIC std::list<std::shared_ptr<linphone::CallLog>> getCallLogs() const;
			
			/**
			 * @brief Returns the list of chat rooms for a given account. 
			 *
			 * @return The list of chat rooms   .       
			 */
			LINPHONECXX_PUBLIC std::list<std::shared_ptr<linphone::ChatRoom>> getChatRooms() const;
			
			/**
			 * @brief Returns the list of conference information for a given account. 
			 *
			 * This list must be freed after use. 
			 * @return The list of call logs   .       
			 */
			LINPHONECXX_PUBLIC std::list<std::shared_ptr<linphone::ConferenceInfo>> getConferenceInformationList() const;
			
			/**
			 * @brief Return the contact address of the account. 
			 *
			 * @return a @ref Address correspong to the contact address of the account.    
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<linphone::Address> getContactAddress();
			
			/**
			 * @brief Set the contact address for the account. 
			 *
			 * A client application should not use this function, as the Contact address is
			 * provided by the registrar in the 200 Ok. This function is mainly intended for
			 * server applications. 
			 * @param addr a @ref Address to use as contact.    
			 */
			LINPHONECXX_PUBLIC void setContactAddress(const std::shared_ptr<const linphone::Address> & addr);
			
			/**
			 * @brief Get the @ref Core object to which is associated the @ref Account. 
			 *
			 * @return The @ref Core object to which is associated the @ref Account.    
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<linphone::Core> getCore();
			
			/**
			 * @brief Get the dependency of a @ref Account. 
			 *
			 * @return The account this one is dependent upon, or nullptr if not marked
			 * dependent.    
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<linphone::Account> getDependency();
			
			/**
			 * @brief Mark this account as being dependent on the given one. 
			 *
			 * The dependency must refer to an account previously added to the core and which
			 * idkey property is defined.
			 * @see AccountParams::setIdkey()
			 * The account marked as dependent will wait for successful registration on its
			 * dependency before triggering its own.
			 * Once registered, both accounts will share the same contact address (the
			 * 'dependency' one).
			 * This mecanism must be enabled before the account is added to the core
			 * @param dependsOn The @ref Account this one shall be depending on.    
			 */
			LINPHONECXX_PUBLIC void setDependency(const std::shared_ptr<linphone::Account> & dependsOn);
			
			/**
			 * @brief Get the reason why registration failed when the account state is
			 * LinphoneRegistrationFailed. 
			 *
			 * @return The @ref Reason why registration failed for this account. 
			 */
			LINPHONECXX_PUBLIC linphone::Reason getError();
			
			/**
			 * @brief Get detailed information why registration failed when the account state
			 * is LinphoneRegistrationFailed. 
			 *
			 * @return The @ref ErrorInfo explaining why registration failed for this account.
			 *    
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<const linphone::ErrorInfo> getErrorInfo();
			
			/**
			 * @brief Indicates whether AVPF/SAVPF is being used for calls using this account. 
			 *
			 * @return true if AVPF/SAVPF is enabled, false otherwise. 
			 * @deprecated 16/12/2021 Use avpfEnabled() instead. 
			 */
			LINPHONECXX_PUBLIC LINPHONECXX_DEPRECATED bool isAvpfEnabled();
			
			/**
			 * @brief Returns the missed calls count for a given account. 
			 *
			 * @return The missed calls count. 
			 */
			LINPHONECXX_PUBLIC int getMissedCallsCount() const;
			
			/**
			 * @brief Get the @ref AccountParams as read-only object. 
			 *
			 * To make changes, clone the returned object using AccountParams::clone() method,
			 * make your changes on it and apply them using with setParams(). 
			 * @return The @ref AccountParams attached to this account.    
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<const linphone::AccountParams> getParams() const;
			
			/**
			 * @brief Set the @ref AccountParams used by this @ref Account. 
			 *
			 * @param params The @ref AccountParams object.    
			 */
			LINPHONECXX_PUBLIC int setParams(const std::shared_ptr<linphone::AccountParams> & params);
			
			/**
			 * @brief Get the registration state of the given account. 
			 *
			 * @return The @ref RegistrationState of the account. 
			 */
			LINPHONECXX_PUBLIC linphone::RegistrationState getState();
			
			/**
			 * @brief Get the transport from either service route, route or addr. 
			 *
			 * @return The transport as a string (I.E udp, tcp, tls, dtls). 
			 * @deprecated 01/03/2021 Use Linphone_account_params_get_transport() instead. 
			 */
			LINPHONECXX_PUBLIC LINPHONECXX_DEPRECATED linphone::TransportType getTransport();
			
			/**
			 * @brief Returns the unread chat message count for a given account. 
			 *
			 * @return The unread chat message count. 
			 */
			LINPHONECXX_PUBLIC int getUnreadChatMessageCount() const;
			
			/**
			 * @brief Set one custom parameter to this @ref Account. 
			 *
			 * @param key key of the searched parameter.    
			 * @param value value of the searched parameter.    
			 */
			LINPHONECXX_PUBLIC void addCustomParam(const std::string & key, const std::string & value);
			
			/**
			 * @brief Deletes all the call logs related to this account from the database. 
			 *
			 */
			LINPHONECXX_PUBLIC void clearCallLogs() const;
			
			/**
			 * @brief Instantiate a new account with values from source. 
			 *
			 * @return The newly created @ref Account object.    
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<linphone::Account> clone() const;
			
			/**
			 * @brief Find authentication info matching account, if any, similarly to
			 * linphone_core_find_auth_info. 
			 *
			 * @return a @ref AuthInfo matching account criteria if possible, nullptr if
			 * nothing can be found.    
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<const linphone::AuthInfo> findAuthInfo();
			
			/**
			 * @brief Returns the list of call logs for a given account. 
			 *
			 * This list must be freed after use. 
			 * @param remoteAddress the @ref Address object to filter call logs.    
			 * @return The list of filtered call logs   .       
			 */
			LINPHONECXX_PUBLIC std::list<std::shared_ptr<linphone::CallLog>> getCallLogsForAddress(const std::shared_ptr<const linphone::Address> & remoteAddress) const;
			
			/**
			 * @brief Obtain the value of a header sent by the server in last answer to
			 * REGISTER. 
			 *
			 * @param headerName The header name for which to fetch corresponding value.    
			 * @return The value of the queried header.    
			 */
			LINPHONECXX_PUBLIC std::string getCustomHeader(const std::string & headerName);
			
			/**
			 * @brief Get the custom parameter with key to this @ref Account. 
			 *
			 * @param key key of the searched parameter.    
			 * @return The value of the parameter with key if found or an empty string
			 * otherwise.    
			 */
			LINPHONECXX_PUBLIC std::string getCustomParam(const std::string & key) const;
			
			/**
			 * @brief Detect if the given input is a phone number or not. 
			 *
			 * @param username The string to parse.    
			 * @return true if input is a phone number, false otherwise. 
			 */
			LINPHONECXX_PUBLIC bool isPhoneNumber(const std::string & username) const;
			
			/**
			 * @brief Normalize a human readable phone number into a basic string. 
			 *
			 * 888-444-222 becomes 888444222 or +33888444222 depending on the @ref Account
			 * object. This function will always generate a normalized username if input is a
			 * phone number. 
			 * @param username The string to parse.    
			 * @return nullptr if input is an invalid phone number, normalized phone number
			 * from username input otherwise.       
			 */
			LINPHONECXX_PUBLIC std::string normalizePhoneNumber(const std::string & username) const;
			
			/**
			 * @brief Normalize a human readable sip uri into a fully qualified
			 * LinphoneAddress. 
			 *
			 * A sip address should look like DisplayName <sip:username@domain:port> .
			 * Basically this function performs the following tasks
			 * The result is a syntactically correct SIP address. 
			 * @param username The string to parse.    
			 * @return nullptr if invalid input, normalized sip address otherwise.       
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<linphone::Address> normalizeSipUri(const std::string & username);
			
			/**
			 * @brief Prevent an account from refreshing its registration. 
			 *
			 * This is useful to let registrations to expire naturally (or) when the
			 * application wants to keep control on when refreshes are sent. However,
			 * linphone_core_set_network_reachable(lc,true) will always request the accounts
			 * to refresh their registrations. The refreshing operations can be resumed with
			 * refreshRegister(). 
			 */
			LINPHONECXX_PUBLIC void pauseRegister();
			
			/**
			 * @brief Refresh a proxy registration. 
			 *
			 * This is useful if for example you resuming from suspend, thus IP address may
			 * have changed. 
			 */
			LINPHONECXX_PUBLIC void refreshRegister();
			
			/**
			 * @brief Re-sets the number of missed calls for this account to 0. 
			 *
			 */
			LINPHONECXX_PUBLIC void resetMissedCallsCount();
			
			/**
			 * @brief Set the value of a custom header sent to the server in REGISTERs
			 * request. 
			 *
			 * @param headerName The header name.    
			 * @param headerValue The header value.    
			 */
			LINPHONECXX_PUBLIC void setCustomHeader(const std::string & headerName, const std::string & headerValue);
			
			;
			/**
			 * @brief Create a new @ref Account with a Proxy config backpointer. 
			 *
			 * This is only intended to be used while keeping a backward compatibility with
			 * proxy config. 
			 * @param lc The @ref Core object.    
			 * @param params The @ref AccountParams object.    
			 * @param config The @ref ProxyConfig object.    
			 * @return The newly created @ref Account object.    
			 */
			LINPHONECXX_PUBLIC static std::shared_ptr<linphone::Account> newWithConfig(const std::shared_ptr<linphone::Core> & lc, const std::shared_ptr<linphone::AccountParams> & params, const std::shared_ptr<linphone::ProxyConfig> & config);
			

		private:
			void *createCallbacks() override;
	};

};

#endif // _ACCOUNT_HH

#ifndef _MSC_VER
#pragma GCC diagnostic pop
#endif // _MSC_VER
