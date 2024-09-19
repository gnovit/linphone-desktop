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

#ifndef _LDAP_HH
#define _LDAP_HH

#include "object.hh"




struct _LinphoneLdap;


namespace linphone {

	class Core;
	class LdapParams;
	class Ldap;

	/**
	 * @brief Object that represents a Linphone Ldap. 
	 *
	 * Use a @ref LdapParams object to configure it. 
	 */
	class Ldap: public Object {
	
		public:
			/**
			* Enum Debug verbosity for OpenLdap. 
			*
			*/
			enum class DebugLevel {
				/**
				* Set OpenLdap verbosity to none. 
				*/
				Off = 0,
				/**
				* Set OpenLdap verbosity to debug level. 
				*/
				Verbose = 1
			};

			/**
			* Enum describing how the authentification will be made. 
			*
			*/
			enum class AuthMethod {
				/**
				* Connection without passwords. 
				*/
				Anonymous = 0,
				/**
				* Connection with username/password. 
				*/
				Simple = 1
			};

			/**
			* Enum describing server certificates verification modes. 
			*
			*/
			enum class CertVerificationMode {
				/**
				* Use default value defined on core. 
				*/
				Default = -1,
				/**
				* Verification is disabled. 
				*/
				Disabled = 0,
				/**
				* Verification is enabled. 
				*/
				Enabled = 1
			};

			/**
			* Enum describing errors in LDAP parameters. 
			*
			*/
			enum class Check {
				/**
				* No error. 
				*/
				Ok = 0,
				/**
				* Server field is empty. 
				*/
				ServerEmpty = 1,
				/**
				* The server is not an url. 
				*/
				ServerNotUrl = 2,
				/**
				* The server doesn't contain a scheme. 
				*/
				ServerNoScheme = 4,
				/**
				* The server is not a LDAP scheme. 
				*/
				ServerNotLdap = 8,
				/**
				* LDAP over SSL is non-standardized and deprecated: ldaps has been specified. 
				*/
				ServerLdaps = 16,
				/**
				* Base Object has been specified. 
				*/
				BaseObjectEmpty = 32,
				/**
				* Some required fields are missing. 
				*/
				MissingFields = 64
			};


			LINPHONECXX_PUBLIC Ldap(void *ptr, bool takeRef=true);
			LINPHONECXX_PUBLIC _LinphoneLdap *cPtr() {return (_LinphoneLdap *)mPrivPtr;}

	
		public:
			
		
			/**
			 * @brief Get the @ref Core object to which is associated the @ref Ldap. 
			 *
			 * @return The @ref Core object to which is associated the @ref Ldap.    
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<linphone::Core> getCore();
			
			/**
			 * @brief Get the index of the @ref Ldap. 
			 *
			 * @return The index of the Ldap 
			 */
			LINPHONECXX_PUBLIC int getIndex() const;
			
			/**
			 * @brief Set the index associated to the @ref Ldap. 
			 *
			 */
			LINPHONECXX_PUBLIC void setIndex(int index);
			
			/**
			 * @brief Get the @ref LdapParams as read-only object. 
			 *
			 * To make changes, clone the returned object using LdapParams::clone() method,
			 * make your changes on it and apply them using with setParams(). 
			 * @return The @ref LdapParams attached to this ldap.    
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<const linphone::LdapParams> getParams();
			
			/**
			 * @brief Set the @ref LdapParams used by this @ref Ldap. 
			 *
			 * The parameters will be saved in the configuration file.
			 * @param params The @ref LdapParams object.    
			 */
			LINPHONECXX_PUBLIC void setParams(const std::shared_ptr<linphone::LdapParams> & params);
			
			;
			/**
			 * @brief Create a new @ref Ldap, associate it with the @ref LdapParams and store
			 * it into the configuration file. 
			 *
			 * @param lc The @ref Core object.    
			 * @param params The @ref LdapParams object.    
			 * @return The newly created @ref Ldap object.       
			 */
			LINPHONECXX_PUBLIC static std::shared_ptr<linphone::Ldap> newWithParams(const std::shared_ptr<linphone::Core> & lc, const std::shared_ptr<linphone::LdapParams> & params);
			

	};

};

#endif // _LDAP_HH

#ifndef _MSC_VER
#pragma GCC diagnostic pop
#endif // _MSC_VER
