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

#ifndef _ACCOUNT_CREATOR_HH
#define _ACCOUNT_CREATOR_HH

#include <string>
#include "account_creator.hh"
#include "enums.hh"
#include "object.hh"




struct _LinphoneAccountCreator;


namespace linphone {

	class ProxyConfig;
	class AccountCreator;
	class Core;
	class Account;
	class AccountCreatorListener;

	/**
	 * @brief The object used to configure an account on a server via XML-RPC, see
	 * https://wiki.linphone.org/xwiki/wiki/public/view/Lib/Features/Override%20account%20creator%20request/.
	 *
	 */
	class AccountCreator: public MultiListenableObject {
	
		public:
			/**
			* Enum describing the status of server request, used by the @ref AccountCreator. 
			*
			*/
			enum class Status {
				/**
				* Request status. 
				*/
				RequestOk = 0,
				/**
				* Request failed. 
				*/
				RequestFailed = 1,
				/**
				* Request failed due to missing argument(s) 
				*/
				MissingArguments = 2,
				/**
				* Request failed due to missing callback(s) 
				*/
				MissingCallbacks = 3,
				/**
				* Account status. 
				*/
				AccountCreated = 4,
				/**
				* Account not created. 
				*/
				AccountNotCreated = 5,
				/**
				* Account exist. 
				*/
				AccountExist = 6,
				/**
				* Account exist with alias. 
				*/
				AccountExistWithAlias = 7,
				/**
				* Account not exist. 
				*/
				AccountNotExist = 8,
				/**
				* Account was created with Alias. 
				*/
				AliasIsAccount = 9,
				/**
				* Alias exist. 
				*/
				AliasExist = 10,
				/**
				* Alias not exist. 
				*/
				AliasNotExist = 11,
				/**
				* Account activated. 
				*/
				AccountActivated = 12,
				/**
				* Account already activated. 
				*/
				AccountAlreadyActivated = 13,
				/**
				* Account not activated. 
				*/
				AccountNotActivated = 14,
				/**
				* Account linked. 
				*/
				AccountLinked = 15,
				/**
				* Account not linked. 
				*/
				AccountNotLinked = 16,
				/**
				* Server. 
				*/
				ServerError = 17,
				/**
				* Error cannot send SMS. 
				*/
				PhoneNumberInvalid = 18,
				/**
				* Error key doesn't match. 
				*/
				WrongActivationCode = 19,
				/**
				* Error too many SMS sent. 
				*/
				PhoneNumberOverused = 20,
				/**
				* Error algo isn't MD5 or SHA-256. 
				*/
				AlgoNotSupported = 21,
				/**
				* Generic error. 
				*/
				UnexpectedError = 22,
				/**
				* This API isn't implemented in the current backend. 
				*/
				NotImplementedError = 23,
				/**
				* Request has been denied, probably due to invalid auth token. 
				*/
				RequestNotAuthorized = 24,
				/**
				* Request has been denied, due to too many requests sent in given period. 
				*/
				RequestTooManyRequests = 25
			};

			/**
			* Enum describing transport checking, used by the @ref AccountCreator. 
			*
			*/
			enum class TransportStatus {
				/**
				* Transport ok. 
				*/
				Ok = 0,
				/**
				* Transport invalid. 
				*/
				Unsupported = 1
			};

			/**
			* Enum describing domain checking, used by the @ref AccountCreator. 
			*
			*/
			enum class DomainStatus {
				/**
				* Domain ok. 
				*/
				Ok = 0,
				/**
				* Domain invalid. 
				*/
				Invalid = 1
			};

			/**
			* Enum describing activation code checking, used by the @ref AccountCreator. 
			*
			*/
			enum class ActivationCodeStatus {
				/**
				* Activation code ok. 
				*/
				Ok = 0,
				/**
				* Activation code too short. 
				*/
				TooShort = 1,
				/**
				* Activation code too long. 
				*/
				TooLong = 2,
				/**
				* Contain invalid characters. 
				*/
				InvalidCharacters = 3
			};

			/**
			* Enum describing algorithm checking, used by the @ref AccountCreator. 
			*
			*/
			enum class AlgoStatus {
				/**
				* Algorithm ok. 
				*/
				Ok = 0,
				/**
				* Algorithm not supported. 
				*/
				NotSupported = 1
			};

			/**
			* Enum describing language checking, used by the @ref AccountCreator. 
			*
			*/
			enum class LanguageStatus {
				/**
				* Language ok. 
				*/
				Ok = 0
			};

			/**
			* Enum describing password checking, used by the @ref AccountCreator. 
			*
			*/
			enum class PasswordStatus {
				/**
				* Password ok. 
				*/
				Ok = 0,
				/**
				* Password too short. 
				*/
				TooShort = 1,
				/**
				* Password too long. 
				*/
				TooLong = 2,
				/**
				* Contain invalid characters. 
				*/
				InvalidCharacters = 3,
				/**
				* Missing specific characters. 
				*/
				MissingCharacters = 4
			};

			/**
			* Enum describing email checking, used by the @ref AccountCreator. 
			*
			*/
			enum class EmailStatus {
				/**
				* Email ok. 
				*/
				Ok = 0,
				/**
				* Email malformed. 
				*/
				Malformed = 1,
				/**
				* Contain invalid characters. 
				*/
				InvalidCharacters = 2
			};

			/**
			* Enum describing username checking, used by the @ref AccountCreator. 
			*
			*/
			enum class UsernameStatus {
				/**
				* Username ok. 
				*/
				Ok = 0,
				/**
				* Username too short. 
				*/
				TooShort = 1,
				/**
				* Username too long. 
				*/
				TooLong = 2,
				/**
				* Contain invalid characters. 
				*/
				InvalidCharacters = 3,
				/**
				* Invalid username. 
				*/
				Invalid = 4
			};

			/**
			* Enum describing backend used in the @ref AccountCreator. 
			*
			*/
			enum class Backend {
				/**
				* XMLRPC Backend. 
				*/
				XMLRPC = 0,
				/**
				* FlexiAPI Backend. 
				*/
				FlexiAPI = 1
			};

			/**
			* Enum describing phone number checking, used by the @ref AccountCreator. 
			*
			*/
			enum class PhoneNumberStatus {
				/**
				* Phone number ok. 
				*/
				Ok = 1,
				/**
				* Phone number too short. 
				*/
				TooShort = 2,
				/**
				* Phone number too long. 
				*/
				TooLong = 4,
				/**
				* Country code invalid. 
				*/
				InvalidCountryCode = 8,
				/**
				* Phone number invalid. 
				*/
				Invalid = 16
			};


			LINPHONECXX_PUBLIC AccountCreator(void *ptr, bool takeRef=true);
			LINPHONECXX_PUBLIC _LinphoneAccountCreator *cPtr() {return (_LinphoneAccountCreator *)mPrivPtr;}

			/**
			 * @brief Add an application listener to the AccountCreator instance.
			 *
			 * @param listener the application listener
			 */
			LINPHONECXX_PUBLIC void addListener(const std::shared_ptr<AccountCreatorListener> &listener);
			/**
			 * @brief Remove a previously added listener from the AccountCreator instance.
			 *
			 * @param listener the application listener
			 */
			LINPHONECXX_PUBLIC void removeListener(const std::shared_ptr<AccountCreatorListener> &listener);
	
		public:
			
		
			/**
			 * @brief Get the account creation request token received to be used to check user
			 * validation. 
			 *
			 * @return The token set, if any    
			 */
			LINPHONECXX_PUBLIC std::string getAccountCreationRequestToken() const;
			
			/**
			 * @brief Set the account creation request token received to be used to check user
			 * validation. 
			 *
			 * @param token The token to set    
			 */
			LINPHONECXX_PUBLIC void setAccountCreationRequestToken(const std::string & token);
			
			/**
			 * @brief Get the activation code. 
			 *
			 * @return The activation code of the @ref AccountCreator.    
			 */
			LINPHONECXX_PUBLIC std::string getActivationCode() const;
			
			/**
			 * @brief Set the activation code. 
			 *
			 * @param activationCode The activation code to set    
			 * @return @ref ActivationCodeStatus::Ok if everything is OK, or a specific error
			 * otherwise. 
			 */
			LINPHONECXX_PUBLIC ActivationCodeStatus setActivationCode(const std::string & activationCode);
			
			/**
			 * @brief Get the algorithm configured in the account creator. 
			 *
			 * @return The algorithm of the @ref AccountCreator.    
			 */
			LINPHONECXX_PUBLIC std::string getAlgorithm() const;
			
			/**
			 * @brief Set the supported algorithm. 
			 *
			 * @param algorithm The algorithm to use    
			 * @return LinphoneAccountCreatorAlgoStatusOk if everything is OK, or a specific
			 * error otherwise. 
			 */
			LINPHONECXX_PUBLIC AlgoStatus setAlgorithm(const std::string & algorithm);
			
			/**
			 * @brief Set the set_as_default property. 
			 *
			 * @param setAsDefault true for the created proxy config to be set as default in
			 * @ref Core, false otherwise 
			 * @return @ref Status::RequestOk if everything is OK, or a specific error
			 * otherwise. 
			 */
			LINPHONECXX_PUBLIC Status setAsDefault(bool setAsDefault);
			
			/**
			 * @brief Get the display name. 
			 *
			 * @return The display name of the @ref AccountCreator.    
			 */
			LINPHONECXX_PUBLIC std::string getDisplayName() const;
			
			/**
			 * @brief Set the display name. 
			 *
			 * @param displayName The display name to set    
			 * @return @ref UsernameStatus::Ok if everything is OK, or a specific error
			 * otherwise. 
			 */
			LINPHONECXX_PUBLIC UsernameStatus setDisplayName(const std::string & displayName);
			
			/**
			 * @brief Get the domain. 
			 *
			 * @return The domain of the @ref AccountCreator.    
			 */
			LINPHONECXX_PUBLIC std::string getDomain() const;
			
			/**
			 * @brief Set the domain. 
			 *
			 * @param domain The domain to set    
			 * @return @ref DomainStatus::Ok if everything is OK, or a specific error
			 * otherwise. 
			 */
			LINPHONECXX_PUBLIC DomainStatus setDomain(const std::string & domain);
			
			/**
			 * @brief Get the email. 
			 *
			 * @return The email of the @ref AccountCreator.    
			 */
			LINPHONECXX_PUBLIC std::string getEmail() const;
			
			/**
			 * @brief Set the email. 
			 *
			 * @param email The email to set    
			 * @return @ref EmailStatus::Ok if everything is OK, or a specific error
			 * otherwise. 
			 */
			LINPHONECXX_PUBLIC EmailStatus setEmail(const std::string & email);
			
			/**
			 * @brief Get the ha1. 
			 *
			 * @return The ha1 of the @ref AccountCreator.    
			 */
			LINPHONECXX_PUBLIC std::string getHa1() const;
			
			/**
			 * @brief Set the ha1. 
			 *
			 * @param ha1 The ha1 to set    
			 * @return @ref PasswordStatus::Ok if everything is OK, or a specific error
			 * otherwise. 
			 */
			LINPHONECXX_PUBLIC PasswordStatus setHa1(const std::string & ha1);
			
			/**
			 * @brief Get the language use in email of SMS. 
			 *
			 * @return The language of the @ref AccountCreator.    
			 */
			LINPHONECXX_PUBLIC std::string getLanguage() const;
			
			/**
			 * @brief Set the language to use in email or SMS if supported. 
			 *
			 * @param lang The language to use    
			 * @return @ref LanguageStatus::Ok if everything is OK, or a specific error
			 * otherwise. 
			 */
			LINPHONECXX_PUBLIC LanguageStatus setLanguage(const std::string & lang);
			
			/**
			 * @brief Get the password. 
			 *
			 * @return The password of the @ref AccountCreator.    
			 */
			LINPHONECXX_PUBLIC std::string getPassword() const;
			
			/**
			 * @brief Set the password. 
			 *
			 * @param password The password to set    
			 * @return @ref PasswordStatus::Ok if everything is OK, or specific(s) error(s)
			 * otherwise. 
			 */
			LINPHONECXX_PUBLIC PasswordStatus setPassword(const std::string & password);
			
			/**
			 * @brief Get the international prefix. 
			 *
			 * @return The international prefix (or phone country code) of the @ref
			 * AccountCreator.    
			 */
			LINPHONECXX_PUBLIC std::string getPhoneCountryCode() const;
			
			/**
			 * @brief Get the RFC 3966 normalized phone number. 
			 *
			 * @return The phone number of the @ref AccountCreator.    
			 */
			LINPHONECXX_PUBLIC std::string getPhoneNumber() const;
			
			/**
			 * @brief Get the param to be used by the backend to send the push notification to
			 * the device asking for an auth token. 
			 *
			 * @return The pn_param set, if any    
			 */
			LINPHONECXX_PUBLIC std::string getPnParam() const;
			
			/**
			 * @brief Set the param to be used by the backend to send the push notification to
			 * the device asking for an auth token. 
			 *
			 * @param pnParam The pn_param to set    
			 */
			LINPHONECXX_PUBLIC void setPnParam(const std::string & pnParam);
			
			/**
			 * @brief Get the prid to be used by the backend to send the push notification to
			 * the device asking for an auth token. 
			 *
			 * @return The pn_prid set, if any    
			 */
			LINPHONECXX_PUBLIC std::string getPnPrid() const;
			
			/**
			 * @brief Set the prid to be used by the backend to send the push notification to
			 * the device asking for an auth token. 
			 *
			 * @param pnPrid The pn_prid to set    
			 */
			LINPHONECXX_PUBLIC void setPnPrid(const std::string & pnPrid);
			
			/**
			 * @brief Get the provider to be used by the backend to send the push notification
			 * to the device asking for an auth token. 
			 *
			 * @return The pn_provider set, if any    
			 */
			LINPHONECXX_PUBLIC std::string getPnProvider() const;
			
			/**
			 * @brief Set the provider to be used by the backend to send the push notification
			 * to the device asking for an auth token. 
			 *
			 * @param pnProvider The pn_provider to set    
			 */
			LINPHONECXX_PUBLIC void setPnProvider(const std::string & pnProvider);
			
			/**
			 * @brief Assign a proxy config pointer to the LinphoneAccountCreator. 
			 *
			 * @param cfg The LinphoneProxyConfig to associate with the
			 * LinphoneAccountCreator.    
			 */
			LINPHONECXX_PUBLIC void setProxyConfig(const std::shared_ptr<linphone::ProxyConfig> & cfg);
			
			/**
			 * @brief Get the route. 
			 *
			 * @return The route of the @ref AccountCreator.    
			 */
			LINPHONECXX_PUBLIC std::string getRoute() const;
			
			/**
			 * @brief Set the route. 
			 *
			 * @param route The route to set    
			 * @return @ref Status::RequestOk if everything is OK, or a specific error
			 * otherwise. 
			 */
			LINPHONECXX_PUBLIC Status setRoute(const std::string & route);
			
			/**
			 * @brief Get the set_as_default property. 
			 *
			 * @return true if account will be set as default, false otherwise. 
			 */
			LINPHONECXX_PUBLIC bool getSetAsDefault() const;
			
			/**
			 * @brief Get the authentication token set (if any) to be used to authenticate
			 * next queries, if required. 
			 *
			 * @return The token set, if any    
			 */
			LINPHONECXX_PUBLIC std::string getToken() const;
			
			/**
			 * @brief Set the authentication token received by push notification to be used to
			 * authenticate next queries, if required. 
			 *
			 * @param token The token to set    
			 */
			LINPHONECXX_PUBLIC void setToken(const std::string & token);
			
			/**
			 * @brief Get Transport. 
			 *
			 * @return The @ref TransportType of the creator. 
			 */
			LINPHONECXX_PUBLIC linphone::TransportType getTransport() const;
			
			/**
			 * @brief Set Transport. 
			 *
			 * @param transport The @ref TransportType to set 
			 * @return @ref TransportStatus::Ok if everything is OK, or a specific error
			 * otherwise. 
			 */
			LINPHONECXX_PUBLIC TransportStatus setTransport(linphone::TransportType transport);
			
			/**
			 * @brief Get the username. 
			 *
			 * @return The username of the @ref AccountCreator.    
			 */
			LINPHONECXX_PUBLIC std::string getUsername() const;
			
			/**
			 * @brief Set the username. 
			 *
			 * @param username The username to set    
			 * @return @ref UsernameStatus::Ok if everything is OK, or a specific error
			 * otherwise. 
			 */
			LINPHONECXX_PUBLIC UsernameStatus setUsername(const std::string & username);
			
			/**
			 * @brief Send a request to activate an account on server. 
			 *
			 * @return @ref Status::RequestOk if the request has been sent, @ref
			 * Status::RequestFailed otherwise 
			 */
			LINPHONECXX_PUBLIC Status activateAccount();
			
			/**
			 * @brief Send a request to activate an alias. 
			 *
			 * @return @ref Status::RequestOk if the request has been sent, @ref
			 * Status::RequestFailed otherwise 
			 */
			LINPHONECXX_PUBLIC Status activateAlias();
			
			/**
			 * @brief Send a request to create an account on server. 
			 *
			 * @return @ref Status::RequestOk if the request has been sent, @ref
			 * Status::RequestFailed otherwise 
			 */
			LINPHONECXX_PUBLIC Status createAccount();
			
			/**
			 * @brief Create and configure a @ref Account and a @ref AuthInfo from
			 * informations set in the @ref AccountCreator. 
			 *
			 * @return A @ref Account object if successful, nullptr otherwise.       
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<linphone::Account> createAccountInCore() const;
			
			/**
			 * @brief Create and configure a proxy config and a authentication info for an
			 * account creator. 
			 *
			 * @return A @ref ProxyConfig object if successful, nullptr otherwise.    
			 * @deprecated 05/05/2023 Use createAccountInCore() instead. 
			 */
			LINPHONECXX_PUBLIC LINPHONECXX_DEPRECATED std::shared_ptr<linphone::ProxyConfig> createProxyConfig() const;
			
			/**
			 * @brief Send a request to create a push account on server. 
			 *
			 * Push accounts are used in account dependent situation when account cannot send
			 * push notifications. A username and password are automatically generated, an
			 * account is automatically activated. 
			 * @return @ref Status::RequestOk if the request has been sent, @ref
			 * Status::RequestFailed otherwise 
			 */
			LINPHONECXX_PUBLIC Status createPushAccount();
			
			/**
			 * @brief Send a request to know if an account is activated on server. 
			 *
			 * @return @ref Status::RequestOk if the request has been sent, @ref
			 * Status::RequestFailed otherwise 
			 */
			LINPHONECXX_PUBLIC Status isAccountActivated();
			
			/**
			 * @brief Send a request to know the existence of account on server. 
			 *
			 * @return @ref Status::RequestOk if the request has been sent, @ref
			 * Status::RequestFailed otherwise 
			 */
			LINPHONECXX_PUBLIC Status isAccountExist();
			
			/**
			 * @brief Send a request to know if an account is linked. 
			 *
			 * @return @ref Status::RequestOk if the request has been sent, @ref
			 * Status::RequestFailed otherwise 
			 */
			LINPHONECXX_PUBLIC Status isAccountLinked();
			
			/**
			 * @brief Send a request to know if an alias is used. 
			 *
			 * @return @ref Status::RequestOk if the request has been sent, @ref
			 * Status::RequestFailed otherwise 
			 */
			LINPHONECXX_PUBLIC Status isAliasUsed();
			
			/**
			 * @brief Send a request to link an account to an alias. 
			 *
			 * @return @ref Status::RequestOk if the request has been sent, @ref
			 * Status::RequestFailed otherwise 
			 */
			LINPHONECXX_PUBLIC Status linkAccount();
			
			/**
			 * @brief Send a request to get the password & algorithm of an account using the
			 * confirmation key. 
			 *
			 * @return @ref Status::RequestOk if everything is OK, or a specific error
			 * otherwise. 
			 */
			LINPHONECXX_PUBLIC Status loginLinphoneAccount();
			
			/**
			 * @brief Send a request to recover an account. 
			 *
			 * @return @ref Status::RequestOk if the request has been sent, @ref
			 * Status::RequestFailed otherwise 
			 */
			LINPHONECXX_PUBLIC Status recoverAccount();
			
			/**
			 * @brief Request an account creation "request_token" to be used on account
			 * creations. 
			 *
			 * The request_token is retrieved from the callback
			 * linphone_account_creator_cbs_get_account_creation_request_token 
			 * @return @ref Status::RequestOk if everything is OK, or a specific error
			 * otherwise. 
			 */
			LINPHONECXX_PUBLIC Status requestAccountCreationRequestToken();
			
			/**
			 * @brief Send a request to get a token to be used for account creation from a
			 * request_token. 
			 *
			 * The token is retrieved from the callback
			 * linphone_account_creator_cbs_get_account_creation_token_using_request_token 
			 * @return @ref Status::RequestOk if the request has been sent, @ref
			 * Status::RequestFailed otherwise 
			 */
			LINPHONECXX_PUBLIC Status requestAccountCreationTokenUsingRequestToken();
			
			/**
			 * @brief Request an auth token to be send by the backend by push notification. 
			 *
			 * @return @ref Status::RequestOk if everything is OK, or a specific error
			 * otherwise. 
			 */
			LINPHONECXX_PUBLIC Status requestAuthToken();
			
			/**
			 * @brief Reset the account creator entries like username, password, phone
			 * number... 
			 *
			 */
			LINPHONECXX_PUBLIC void reset();
			
			/**
			 * @brief Set the phone number normalized. 
			 *
			 * @param phoneNumber The phone number to set    
			 * @param countryCode Country code to associate phone number with    
			 * @return @ref PhoneNumberStatus::Ok if everything is OK, or specific(s) error(s)
			 * otherwise. 
			 */
			LINPHONECXX_PUBLIC unsigned int setPhoneNumber(const std::string & phoneNumber, const std::string & countryCode);
			
			/**
			 * @brief Send a request to update an account. 
			 *
			 * @return @ref Status::RequestOk if the request has been sent, @ref
			 * Status::RequestFailed otherwise 
			 */
			LINPHONECXX_PUBLIC Status updateAccount();
			
			/**
			 * @brief Require the account creator to use special "test admin account". 
			 *
			 * @warning The "test admin account" is a special feature required for automated
			 * test, and requires the APP_EVERYONE_IS_ADMIN property to be enabled on the
			 * remote Flexisip Account Manager (FlexiAPI). This feature must never be turned
			 * on for a production-stage app. 
			 */
			LINPHONECXX_PUBLIC void useTestAdminAccount();
			
			;
			/**
			 * @brief Create a @ref AccountCreator and set Linphone Request callbacks. 
			 *
			 * @param core The @ref Core used for the XML-RPC communication    
			 * @return The new @ref AccountCreator object.    
			 */
			LINPHONECXX_PUBLIC static std::shared_ptr<linphone::AccountCreator> create(const std::shared_ptr<linphone::Core> & core);
			

		private:
			void *createCallbacks() override;
	};

};

#endif // _ACCOUNT_CREATOR_HH

#ifndef _MSC_VER
#pragma GCC diagnostic pop
#endif // _MSC_VER
