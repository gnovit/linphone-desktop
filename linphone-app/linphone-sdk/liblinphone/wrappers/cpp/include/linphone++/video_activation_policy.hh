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

#ifndef _VIDEO_ACTIVATION_POLICY_HH
#define _VIDEO_ACTIVATION_POLICY_HH

#include "object.hh"




struct _LinphoneVideoActivationPolicy;


namespace linphone {


	/**
	 * @brief Object describing policy regarding video streams establishments. 
	 *
	 * Use setAutomaticallyAccept() and setAutomaticallyInitiate() to tell the Core to
	 * automatically accept or initiate video during calls.
	 * Even if disabled, you'll still be able to add it later while the call is
	 * running. 
	 */
	class VideoActivationPolicy: public Object {
	
		public:

			LINPHONECXX_PUBLIC VideoActivationPolicy(void *ptr, bool takeRef=true);
			LINPHONECXX_PUBLIC _LinphoneVideoActivationPolicy *cPtr() {return (_LinphoneVideoActivationPolicy *)mPrivPtr;}

	
		public:
			
		
			/**
			 * @brief Gets the value for the automatically accept video policy. 
			 *
			 * @return whether or not to automatically accept video requests is enabled 
			 */
			LINPHONECXX_PUBLIC bool getAutomaticallyAccept() const;
			
			/**
			 * @brief Sets the value for the automatically accept video policy. 
			 *
			 * @param enable whether or not to enable automatically accept video requests 
			 */
			LINPHONECXX_PUBLIC void setAutomaticallyAccept(bool enable);
			
			/**
			 * @brief Gets the value for the automatically initiate video policy. 
			 *
			 * @return whether or not to automatically initiate video calls is enabled 
			 */
			LINPHONECXX_PUBLIC bool getAutomaticallyInitiate() const;
			
			/**
			 * @brief Sets the value for the automatically initiate video policy. 
			 *
			 * @param enable whether or not to enable automatically initiate video calls 
			 */
			LINPHONECXX_PUBLIC void setAutomaticallyInitiate(bool enable);
			
			
	};

};

#endif // _VIDEO_ACTIVATION_POLICY_HH

#ifndef _MSC_VER
#pragma GCC diagnostic pop
#endif // _MSC_VER
