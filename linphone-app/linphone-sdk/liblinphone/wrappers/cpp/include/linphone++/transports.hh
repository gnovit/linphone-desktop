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

#ifndef _TRANSPORTS_HH
#define _TRANSPORTS_HH

#include "object.hh"




struct _LinphoneTransports;


namespace linphone {


	/**
	 * @brief SIP transports & ports configuration object. 
	 *
	 * Indicates which transport among UDP, TCP, TLS and DTLS should be enabled and if
	 * so on which port to listen. You can use special values like
	 * LC_SIP_TRANSPORT_DISABLED (0), LC_SIP_TRANSPORT_RANDOM (-1) and
	 * LC_SIP_TRANSPORT_DONTBIND (-2).
	 * Once configuration is complete, use Core::setTransports() to apply it. This
	 * will be saved in configuration file so you don't have to do it each time the
	 * @ref Core starts. 
	 */
	class Transports: public Object {
	
		public:

			LINPHONECXX_PUBLIC Transports(void *ptr, bool takeRef=true);
			LINPHONECXX_PUBLIC _LinphoneTransports *cPtr() {return (_LinphoneTransports *)mPrivPtr;}

	
		public:
			
		
			/**
			 * @brief Gets the DTLS port in the @ref Transports object. 
			 *
			 * @return the DTLS port 
			 */
			LINPHONECXX_PUBLIC int getDtlsPort() const;
			
			/**
			 * @brief Sets the DTLS port in the @ref Transports object. 
			 *
			 * @param port the DTLS port 
			 */
			LINPHONECXX_PUBLIC void setDtlsPort(int port);
			
			/**
			 * @brief Gets the TCP port in the @ref Transports object. 
			 *
			 * @return the TCP port 
			 */
			LINPHONECXX_PUBLIC int getTcpPort() const;
			
			/**
			 * @brief Sets the TCP port in the @ref Transports object. 
			 *
			 * @param port the TCP port 
			 */
			LINPHONECXX_PUBLIC void setTcpPort(int port);
			
			/**
			 * @brief Gets the TLS port in the @ref Transports object. 
			 *
			 * @return the TLS port 
			 */
			LINPHONECXX_PUBLIC int getTlsPort() const;
			
			/**
			 * @brief Sets the TLS port in the @ref Transports object. 
			 *
			 * @param port the TLS port 
			 */
			LINPHONECXX_PUBLIC void setTlsPort(int port);
			
			/**
			 * @brief Gets the UDP port in the @ref Transports object. 
			 *
			 * @return the UDP port 
			 */
			LINPHONECXX_PUBLIC int getUdpPort() const;
			
			/**
			 * @brief Sets the UDP port in the @ref Transports object. 
			 *
			 * @param port the UDP port 
			 */
			LINPHONECXX_PUBLIC void setUdpPort(int port);
			
			
	};

};

#endif // _TRANSPORTS_HH

#ifndef _MSC_VER
#pragma GCC diagnostic pop
#endif // _MSC_VER
