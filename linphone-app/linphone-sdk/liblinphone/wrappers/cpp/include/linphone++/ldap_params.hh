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

#ifndef _LDAP_PARAMS_HH
#define _LDAP_PARAMS_HH

#include <string>
#include "ldap.hh"
#include "object.hh"




struct _LinphoneLdapParams;


namespace linphone {

	class LdapParams;

	/**
	 * @brief Object that is used to set the different parameters of a @ref Ldap. 
	 *
	 */
	class LdapParams: public Object {
	
		public:

			LINPHONECXX_PUBLIC LdapParams(void *ptr, bool takeRef=true);
			LINPHONECXX_PUBLIC _LinphoneLdapParams *cPtr() {return (_LinphoneLdapParams *)mPrivPtr;}

	
		public:
			
		
			/**
			 * @brief Get the authentification method. 
			 *
			 * Check @ref Ldap::AuthMethod for authentification values.
			 * @return The @ref Ldap::AuthMethod. 
			 */
			LINPHONECXX_PUBLIC linphone::Ldap::AuthMethod getAuthMethod() const;
			
			/**
			 * @brief Authentification method. 
			 *
			 * Check @ref Ldap::AuthMethod for authentification values. Default value :
			 * LinphoneLdapAuthMethodSimple
			 * @param authMethod The @ref Ldap::AuthMethod. 
			 */
			LINPHONECXX_PUBLIC void setAuthMethod(linphone::Ldap::AuthMethod authMethod);
			
			/**
			 * @brief Get the BaseObject. 
			 *
			 * It is a specification for LDAP Search Scopes that specifies that the Search
			 * Request should only be performed against the entry specified as the search base
			 * DN. No entries above it will be considered. This field is required.
			 * @return The specification.    
			 */
			LINPHONECXX_PUBLIC std::string getBaseObject() const;
			
			/**
			 * @brief BaseObject is a specification for LDAP Search Scopes that specifies that
			 * the Search Request should only be performed against the entry specified as the
			 * search base DN. 
			 *
			 * No entries above it will be considered. This field is required. Default value :
			 * "dc=example,dc=com"
			 * @param baseObject The specification.    
			 */
			LINPHONECXX_PUBLIC void setBaseObject(const std::string & baseObject);
			
			/**
			 * @brief Get the Bind DN to use for bindings. 
			 *
			 * The bindDN DN is the credential that is used to authenticate against an LDAP.
			 * If empty, the connection will be Anonymous. eg:
			 * cn=ausername,ou=people,dc=bc,dc=com
			 * @return The Bind DN to use for bindings.    
			 */
			LINPHONECXX_PUBLIC std::string getBindDn() const;
			
			/**
			 * @brief Bind DN to use for bindings. 
			 *
			 * The bindDN DN is the credential that is used to authenticate against an LDAP.
			 * If empty, the connection will be Anonymous. eg:
			 * cn=ausername,ou=people,dc=bc,dc=com Default value : "".
			 * @param bindDn The Bind DN to use for bindings.    
			 */
			LINPHONECXX_PUBLIC void setBindDn(const std::string & bindDn);
			
			/**
			 * @brief Return the debug verbosity level. 
			 *
			 * @return The @ref Ldap::DebugLevel debug level. 
			 */
			LINPHONECXX_PUBLIC linphone::Ldap::DebugLevel getDebugLevel() const;
			
			/**
			 * @brief The debug verbosity level from internal LDAP API. 
			 *
			 * Values are @ref Ldap::DebugLevel Default value: LinphoneLdapDebugLevelOff
			 * @param level The @ref Ldap::DebugLevel debug level. 
			 */
			LINPHONECXX_PUBLIC void setDebugLevel(linphone::Ldap::DebugLevel level);
			
			/**
			 * @brief Get the delay between each search in milliseconds. 
			 *
			 * @return The delay in milliseconds. 
			 */
			LINPHONECXX_PUBLIC int getDelay() const;
			
			/**
			 * @brief Delay between each search in milliseconds Default value : 500. 
			 *
			 * @param delay The timeout in milliseconds. 
			 */
			LINPHONECXX_PUBLIC void setDelay(int delay);
			
			/**
			 * @brief Return if the configuration is enabled. 
			 *
			 * @return Enable or not the LDAP configuration. 
			 */
			LINPHONECXX_PUBLIC bool getEnabled() const;
			
			/**
			 * @brief If this config is enabled. 
			 *
			 * Default value : false.
			 * @param enable Enable or not the LDAP configuration. 
			 */
			LINPHONECXX_PUBLIC void setEnabled(bool enable);
			
			/**
			 * @brief Get the search is based on this filter to search contacts. 
			 *
			 * @return The filter to use.    
			 */
			LINPHONECXX_PUBLIC std::string getFilter() const;
			
			/**
			 * @brief The search is based on this filter to search contacts. 
			 *
			 * Default value : "(sn=*%s*)".
			 * @param filter The filter to use.    
			 */
			LINPHONECXX_PUBLIC void setFilter(const std::string & filter);
			
			/**
			 * @brief Get the max results when requesting searches. 
			 *
			 * @return The max results when requesting searches. 
			 */
			LINPHONECXX_PUBLIC int getMaxResults() const;
			
			/**
			 * @brief The max results when requesting searches. 
			 *
			 * Default value : 5. This value fit for standard cases where only first results
			 * are needed. Also, it avoids latency on each searchs.
			 * @param maxResults The max results when requesting searches. 
			 */
			LINPHONECXX_PUBLIC void setMaxResults(int maxResults);
			
			/**
			 * @brief Get the minimum characters needed for doing a search on LDAP servers. 
			 *
			 * @return The minimum characters needed by a search. 
			 */
			LINPHONECXX_PUBLIC int getMinChars() const;
			
			/**
			 * @brief The minimum characters needed for doing a search on LDAP servers. 
			 *
			 * Default value : 0.
			 * @param minChars The minimum characters needed by a search. 
			 */
			LINPHONECXX_PUBLIC void setMinChars(int minChars);
			
			/**
			 * @brief Get the attributes to build Name Friend, separated by a comma and the
			 * first is the highest priority. 
			 *
			 * @return The comma separated attributes for the search.    
			 */
			LINPHONECXX_PUBLIC std::string getNameAttribute() const;
			
			/**
			 * @brief Check these attributes to build Name Friend, separated by a comma and
			 * the first is the highest priority. 
			 *
			 * Default value : "sn".
			 * @param nameAttribute The comma separated attributes for the search.    
			 */
			LINPHONECXX_PUBLIC void setNameAttribute(const std::string & nameAttribute);
			
			/**
			 * @brief Get the password to pass to server when binding. 
			 *
			 * @return The password to pass to server when binding.    
			 */
			LINPHONECXX_PUBLIC std::string getPassword() const;
			
			/**
			 * @brief The password to pass to server when binding. 
			 *
			 * Default value : "".
			 * @param password The password to pass to server when binding.    
			 */
			LINPHONECXX_PUBLIC void setPassword(const std::string & password);
			
			/**
			 * @brief Return if the dns resolution is done by Linphone using Sal. 
			 *
			 * It will pass an IP to LDAP. By doing that, the TLS negociation could not check
			 * the hostname. You may deactivate the verifications if wanted to force the
			 * connection.
			 * @return Enable or not the use of sal. 
			 */
			LINPHONECXX_PUBLIC bool salEnabled() const;
			
			/**
			 * @brief The dns resolution is done by Linphone using Sal. 
			 *
			 * It will pass an IP to LDAP. By doing that, the TLS negociation could not check
			 * the hostname. You may deactivate the verifications if wanted to force the
			 * connection. Default value : false.
			 * @param enable Enable or not the use of sal. 
			 */
			LINPHONECXX_PUBLIC void enableSal(bool enable);
			
			/**
			 * @brief Get the LDAP Server. 
			 *
			 * @return LDAP Server address.    
			 */
			LINPHONECXX_PUBLIC std::string getServer() const;
			
			/**
			 * @brief LDAP Server. 
			 *
			 * eg: ldap:/// for a localhost server or ldap://ldap.example.org/ Default value:
			 * "ldap:///". This field is required.
			 * You must use 'ldap' scheme. 'ldaps' for LDAP over SSL is non-standardized and
			 * deprecated.
			 * @param server LDAP Server address.    
			 */
			LINPHONECXX_PUBLIC void setServer(const std::string & server);
			
			/**
			 * @brief Return whether the tls server certificate must be verified when
			 * connecting to a LDAP server. 
			 *
			 * @return The TLS verification mode from @ref Ldap::CertVerificationMode 
			 */
			LINPHONECXX_PUBLIC linphone::Ldap::CertVerificationMode getServerCertificatesVerificationMode() const;
			
			/**
			 * @brief Specify whether the tls server certificate must be verified when
			 * connecting to a LDAP server. 
			 *
			 * Values are @ref Ldap::CertVerificationMode Default value :
			 * LinphoneLdapCertVerificationDefault (auto)
			 * @param verifyServerCertificates The TLS verification mode from @ref
			 * Ldap::CertVerificationMode 
			 */
			LINPHONECXX_PUBLIC void setServerCertificatesVerificationMode(linphone::Ldap::CertVerificationMode verifyServerCertificates);
			
			/**
			 * @brief Get the attributes to build the SIP username in address of Friend. 
			 *
			 * Attributes are separated by a comma.
			 * @return The comma separated attributes for building Friend.    
			 */
			LINPHONECXX_PUBLIC std::string getSipAttribute() const;
			
			/**
			 * @brief Check these attributes to build the SIP username in address of Friend. 
			 *
			 * Attributes are separated by a comma. Default value :
			 * "mobile,telephoneNumber,homePhone,sn".
			 * @param sipAttribute The comma separated attributes for building Friend.    
			 */
			LINPHONECXX_PUBLIC void setSipAttribute(const std::string & sipAttribute);
			
			/**
			 * @brief Get the domain to the sip address(sip:username@domain). 
			 *
			 * @return The SIP domain for the friend.    
			 */
			LINPHONECXX_PUBLIC std::string getSipDomain() const;
			
			/**
			 * @brief Add the domain to the sip address(sip:username@domain). 
			 *
			 * By default or if it is empty, the domain will be specify while searching on the
			 * current proxy account. Default value : "".
			 * @param sipDomain The SIP domain for the friend.    
			 */
			LINPHONECXX_PUBLIC void setSipDomain(const std::string & sipDomain);
			
			/**
			 * @brief Get the timeout for requests in seconds. 
			 *
			 * @return The timeout in seconds. 
			 */
			LINPHONECXX_PUBLIC int getTimeout() const;
			
			/**
			 * @brief Timeout for requests in seconds. 
			 *
			 * It limits the time for searchs and the value is passed to Ldap with
			 * LDAP_OPT_NETWORK_TIMEOUT. Default value : 5.
			 * @param timeout The timeout in seconds. 
			 */
			LINPHONECXX_PUBLIC void setTimeout(int timeout);
			
			/**
			 * @brief Get the timeout for TLS connection in milliseconds. 
			 *
			 * @return The timeout in milliseconds. 
			 */
			LINPHONECXX_PUBLIC int getTimeoutTlsMs() const;
			
			/**
			 * @brief Timeout for TLS connection in milliseconds. 
			 *
			 * Default value : 1000.
			 * @param timeout The timeout in milliseconds. 
			 */
			LINPHONECXX_PUBLIC void setTimeoutTlsMs(int timeout);
			
			/**
			 * @brief Return if transactions are encrypted by LDAP over TLS(StartTLS). 
			 *
			 * You must use \'ldap\' scheme. \'ldaps\' for LDAP over SSL is non-standardized
			 * and deprecated. StartTLS in an extension to the LDAP protocol which uses the
			 * TLS protocol to encrypt communication. It works by establishing a normal - i.e.
			 * unsecured - connection with the LDAP server before a handshake negotiation
			 * between the server and the web services is carried out. Here, the server sends
			 * its certificate to prove its identity before the secure connection is
			 * established.
			 * @return Enable or not the use of TLS. 
			 */
			LINPHONECXX_PUBLIC bool tlsEnabled() const;
			
			/**
			 * @brief Encrypt transactions by LDAP over TLS(StartTLS). 
			 *
			 * You must use 'ldap' scheme. 'ldaps' for LDAP over SSL is non-standardized and
			 * deprecated. StartTLS in an extension to the LDAP protocol which uses the TLS
			 * protocol to encrypt communication. It works by establishing a normal - i.e.
			 * unsecured - connection with the LDAP server before a handshake negotiation
			 * between the server and the web services is carried out. Here, the server sends
			 * its certificate to prove its identity before the secure connection is
			 * established. Default value : true.
			 * @param enable Enable or not the use of TLS. 
			 */
			LINPHONECXX_PUBLIC void enableTls(bool enable);
			
			/**
			 * @brief Check parameters and return what are wrong. 
			 *
			 * @return The @ref Ldap::Check values. LinphoneLdapCheckOk if everything is ok. 
			 */
			LINPHONECXX_PUBLIC int check() const;
			
			/**
			 * @brief Instantiate a new @ref LdapParams with values from source. 
			 *
			 * @return The newly created @ref LdapParams object.    
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<linphone::LdapParams> clone() const;
			
			/**
			 * @brief Get the value from field. 
			 *
			 * @param key The key string.    
			 * @return The Value associated to the key.    
			 */
			LINPHONECXX_PUBLIC std::string getCustomValue(const std::string & key) const;
			
			/**
			 * @brief Set custom field. 
			 *
			 * @param key The key string.    
			 * @param value The value string.    
			 */
			LINPHONECXX_PUBLIC void setCustomValue(const std::string & key, const std::string & value);
			
			
	};

};

#endif // _LDAP_PARAMS_HH

#ifndef _MSC_VER
#pragma GCC diagnostic pop
#endif // _MSC_VER
