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

#ifndef _DIGEST_AUTHENTICATION_POLICY_HH
#define _DIGEST_AUTHENTICATION_POLICY_HH

#include "object.hh"




struct _LinphoneDigestAuthenticationPolicy;


namespace linphone {


	/**
	 * @brief The LinphoneDigestAuthenticationPolicy holds parameters relative to
	 * digest authentication procedures. 
	 *
	 */
	class DigestAuthenticationPolicy: public Object {
	
		public:

			LINPHONECXX_PUBLIC DigestAuthenticationPolicy(void *ptr, bool takeRef=true);
			LINPHONECXX_PUBLIC _LinphoneDigestAuthenticationPolicy *cPtr() {return (_LinphoneDigestAuthenticationPolicy *)mPrivPtr;}

	
		public:
			
		
			/**
			 * @brief Get whether MD5 hash algorithm is allowed. 
			 *
			 * The default value is true, in order to maximize interoperability. MD5 is
			 * considered as a weak algorithm, some might want to disable it, in which case
			 * SHA-256 will be required to perform digest authentication. 
			 * @return a boolean value 
			 */
			LINPHONECXX_PUBLIC bool getAllowMd5() const;
			
			/**
			 * @brief Set whether MD5 hash algorithm is allowed. 
			 *
			 * The default value is true, in order to maximize interoperability. MD5 is
			 * considered as a weak algorithm, some might want to disable it, in which case
			 * SHA-256 will be required to perform digest authentication. 
			 * @param value a boolean value. 
			 */
			LINPHONECXX_PUBLIC void setAllowMd5(bool value);
			
			/**
			 * @brief Get whether digest authentication without 'qop=auth' mode is allowed. 
			 *
			 * The default value is true, in order to maximize interoperability. 'qop=auth'
			 * mode enforces security thanks to the use of a client nonce, which makes
			 * password brute forcing more difficult. When set to false, linphone will refuse
			 * to authenticate to servers that are not implementing the qop=auth mode. 
			 * @return a boolean value 
			 */
			LINPHONECXX_PUBLIC bool getAllowNoQop() const;
			
			/**
			 * @brief Set whether digest authentication without 'qop=auth' mode is allowed. 
			 *
			 * The default value is true, in order to maximize interoperability. 'qop=auth'
			 * mode enforces security thanks to the use of a client nonce, which makes
			 * password brute forcing more difficult. When set to false, linphone will refuse
			 * to authenticate to servers that are not implementing the qop=auth mode. 
			 * @param value a boolean value. 
			 */
			LINPHONECXX_PUBLIC void setAllowNoQop(bool value);
			
			
	};

};

#endif // _DIGEST_AUTHENTICATION_POLICY_HH

#ifndef _MSC_VER
#pragma GCC diagnostic pop
#endif // _MSC_VER
