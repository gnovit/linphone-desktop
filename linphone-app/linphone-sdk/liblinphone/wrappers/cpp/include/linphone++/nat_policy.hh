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

#ifndef _NAT_POLICY_HH
#define _NAT_POLICY_HH

#include <string>
#include "object.hh"




struct _LinphoneNatPolicy;


namespace linphone {

	class Core;
	class NatPolicy;

	/**
	 * @brief Policy to use to pass through NATs/firewalls. 
	 *
	 */
	class NatPolicy: public Object {
	
		public:

			LINPHONECXX_PUBLIC NatPolicy(void *ptr, bool takeRef=true);
			LINPHONECXX_PUBLIC _LinphoneNatPolicy *cPtr() {return (_LinphoneNatPolicy *)mPrivPtr;}

	
		public:
			
		
			/**
			 * @brief Returns the @ref Core object managing this nat policy, if any. 
			 *
			 * @return the @ref Core object associated.    
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<linphone::Core> getCore() const;
			
			/**
			 * @brief Tell whether ICE is enabled. 
			 *
			 * @return Boolean value telling whether ICE is enabled. 
			 */
			LINPHONECXX_PUBLIC bool iceEnabled() const;
			
			/**
			 * @brief Enable ICE. 
			 *
			 * ICE can be enabled without STUN/TURN, in which case only the local candidates
			 * will be used. 
			 * @param enable Boolean value telling whether to enable ICE. 
			 */
			LINPHONECXX_PUBLIC void enableIce(bool enable);
			
			/**
			 * @brief Get the mandatory v4 IP address to use with this NAT policy as
			 * server-reflexive candidate for ICE. 
			 *
			 * Used when STUN or TURN are enabled. 
			 * @return the nat v4 address.    
			 */
			LINPHONECXX_PUBLIC std::string getNatV4Address() const;
			
			/**
			 * @brief Set the mandatory v4 IP address to use with this NAT policy as
			 * server-reflexive candidate for ICE. 
			 *
			 * The IP address is used only if no stun server is set for server-reflexive
			 * candidate gathering. Using this method is useful when Liblinphone is used in a
			 * server product, when the server does not own the public IP address. Used when
			 * STUN or TURN are enabled. 
			 * @param v4Address The STUN server to use with this NAT policy.    
			 */
			LINPHONECXX_PUBLIC void setNatV4Address(const std::string & v4Address);
			
			/**
			 * @brief Get the mandatory v6 IP address to use with this NAT policy as
			 * server-reflexive candidate for ICE. 
			 *
			 * Used when STUN or TURN are enabled. 
			 * @return the nat v4 address.    
			 */
			LINPHONECXX_PUBLIC std::string getNatV6Address() const;
			
			/**
			 * @brief Set the mandatory v6 IP address to use with this NAT policy as
			 * server-reflexive candidate for ICE. 
			 *
			 * The IP address is used only if no stun server is set for server-reflexive
			 * candidate gathering. Using this method is useful when Liblinphone is used in a
			 * server product, when the server does not own the public IP address. Used when
			 * STUN or TURN are enabled. 
			 * @param v4Address The STUN server to use with this NAT policy.    
			 */
			LINPHONECXX_PUBLIC void setNatV6Address(const std::string & v4Address);
			
			/**
			 * @brief Tell whether STUN is enabled. 
			 *
			 * @return Boolean value telling whether STUN is enabled. 
			 */
			LINPHONECXX_PUBLIC bool stunEnabled() const;
			
			/**
			 * @brief Enable STUN. 
			 *
			 * If TURN is also enabled, TURN will be used instead of STUN. 
			 * @param enable Boolean value telling whether to enable STUN. 
			 */
			LINPHONECXX_PUBLIC void enableStun(bool enable);
			
			/**
			 * @brief Get the STUN/TURN server to use with this NAT policy. 
			 *
			 * Used when STUN or TURN are enabled. 
			 * @return The STUN server used by this NAT policy.    
			 */
			LINPHONECXX_PUBLIC std::string getStunServer() const;
			
			/**
			 * @brief Set the STUN/TURN server to use with this NAT policy. 
			 *
			 * Used when STUN or TURN are enabled. 
			 * @param stunServer The STUN server to use with this NAT policy.    
			 */
			LINPHONECXX_PUBLIC void setStunServer(const std::string & stunServer);
			
			/**
			 * @brief Get the username used to authenticate with the STUN/TURN server. 
			 *
			 * The authentication will search for a @ref AuthInfo with this username. If it is
			 * not set the username of the currently used @ref ProxyConfig is used to search
			 * for a LinphoneAuthInfo. 
			 * @return The username used to authenticate with the STUN/TURN server.    
			 */
			LINPHONECXX_PUBLIC std::string getStunServerUsername() const;
			
			/**
			 * @brief Set the username used to authenticate with the STUN/TURN server. 
			 *
			 * The authentication will search for a @ref AuthInfo with this username. If it is
			 * not set the username of the currently used @ref ProxyConfig is used to search
			 * for a LinphoneAuthInfo. 
			 * @param username The username used to authenticate with the STUN/TURN server.    
			 */
			LINPHONECXX_PUBLIC void setStunServerUsername(const std::string & username);
			
			/**
			 * @brief Tells whether TCP TURN transport is enabled. 
			 *
			 * Used when TURN is enabled. 
			 * @return Boolean value telling whether TCP TURN transport is enabled. 
			 */
			LINPHONECXX_PUBLIC bool tcpTurnTransportEnabled() const;
			
			/**
			 * @brief Enable TCP TURN transport. 
			 *
			 * Used when TURN is enabled. 
			 * @param enable Boolean value telling whether to enable TCP TURN transport. 
			 */
			LINPHONECXX_PUBLIC void enableTcpTurnTransport(bool enable);
			
			/**
			 * @brief Tells whether TLS TURN transport is enabled. 
			 *
			 * Used when TURN is enabled. 
			 * @return Boolean value telling whether TLS TURN transport is enabled. 
			 */
			LINPHONECXX_PUBLIC bool tlsTurnTransportEnabled() const;
			
			/**
			 * @brief Enable TLS TURN transport. 
			 *
			 * Used when TURN is enabled. 
			 * @param enable Boolean value telling whether to enable TLS TURN transport. 
			 */
			LINPHONECXX_PUBLIC void enableTlsTurnTransport(bool enable);
			
			/**
			 * @brief Tell whether TURN is enabled. 
			 *
			 * @return Boolean value telling whether TURN is enabled. 
			 */
			LINPHONECXX_PUBLIC bool turnEnabled() const;
			
			/**
			 * @brief Enable TURN. 
			 *
			 * If STUN is also enabled, it is ignored and TURN is used. 
			 * @param enable Boolean value telling whether to enable TURN. 
			 */
			LINPHONECXX_PUBLIC void enableTurn(bool enable);
			
			/**
			 * @brief Tells whether UDP TURN transport is enabled. 
			 *
			 * Used when TURN is enabled. 
			 * @return Boolean value telling whether UDP TURN transport is enabled. 
			 */
			LINPHONECXX_PUBLIC bool udpTurnTransportEnabled() const;
			
			/**
			 * @brief Enable UDP TURN transport. 
			 *
			 * Used when TURN is enabled. 
			 * @param enable Boolean value telling whether to enable UDP TURN transport. 
			 */
			LINPHONECXX_PUBLIC void enableUdpTurnTransport(bool enable);
			
			/**
			 * @brief Tell whether uPnP is enabled. 
			 *
			 * @return Boolean value telling whether uPnP is enabled. 
			 */
			LINPHONECXX_PUBLIC bool upnpEnabled() const;
			
			/**
			 * @brief Enable uPnP. 
			 *
			 * This has the effect to disable every other policies (ICE, STUN and TURN). 
			 * @param enable Boolean value telling whether to enable uPnP. 
			 */
			LINPHONECXX_PUBLIC void enableUpnp(bool enable);
			
			/**
			 * @brief Clear a NAT policy (deactivate all protocols and unset the STUN server). 
			 *
			 */
			LINPHONECXX_PUBLIC void clear();
			
			/**
			 * @brief Clone an existing @ref NatPolicy object. 
			 *
			 * Clone a @ref NatPolicy object.
			 * @return A clone of the original @ref NatPolicy object.   
			 * @return a new @ref NatPolicy object.    
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<linphone::NatPolicy> clone() const;
			
			/**
			 * @brief Start a STUN server DNS resolution. 
			 *
			 */
			LINPHONECXX_PUBLIC void resolveStunServer();
			
			
	};

};

#endif // _NAT_POLICY_HH

#ifndef _MSC_VER
#pragma GCC diagnostic pop
#endif // _MSC_VER
