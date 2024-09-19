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

#ifndef _SIGNAL_INFORMATION_HH
#define _SIGNAL_INFORMATION_HH

#include "enums.hh"
#include "object.hh"




struct _LinphoneSignalInformation;


namespace linphone {

	class SignalInformation;

	/**
	 * @brief Object to get signal (wifi/4G etc...) informations. 
	 *
	 */
	class SignalInformation: public Object {
	
		public:

			LINPHONECXX_PUBLIC SignalInformation(void *ptr, bool takeRef=true);
			LINPHONECXX_PUBLIC _LinphoneSignalInformation *cPtr() {return (_LinphoneSignalInformation *)mPrivPtr;}

	
		public:
			
		
			/**
			 * @brief Get the @ref SignalType of the @ref SignalInformation. 
			 *
			 * @return A @ref SignalType. 
			 */
			LINPHONECXX_PUBLIC linphone::SignalType getSignalType();
			
			/**
			 * @brief Set a new @ref SignalType to a @ref SignalInformation. 
			 *
			 * @param type The new @ref SignalType to set. 
			 */
			LINPHONECXX_PUBLIC void setSignalType(linphone::SignalType type);
			
			/**
			 * @brief Get the @ref SignalStrengthUnit value of the @ref SignalInformation. 
			 *
			 * @return A @ref SignalStrengthUnit. 
			 */
			LINPHONECXX_PUBLIC linphone::SignalStrengthUnit getSignalUnit();
			
			/**
			 * @brief Set a new @ref SignalStrengthUnit to a @ref SignalInformation. 
			 *
			 * @param unit The new @ref SignalStrengthUnit to set. 
			 */
			LINPHONECXX_PUBLIC void setSignalUnit(linphone::SignalStrengthUnit unit);
			
			/**
			 * @brief Get the value of the @ref SignalInformation. 
			 *
			 * @return A float containing the value. 
			 */
			LINPHONECXX_PUBLIC float getStrength();
			
			/**
			 * @brief Set a new value to a @ref SignalInformation. 
			 *
			 * @param value a float containing the new value to set. 
			 */
			LINPHONECXX_PUBLIC void setValue(float value);
			
			/**
			 * @brief Clone the given signalInformation. 
			 *
			 * @return A new signalInformation with exactly same informations that param.    
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<linphone::SignalInformation> clone() const;
			
			
	};

};

#endif // _SIGNAL_INFORMATION_HH

#ifndef _MSC_VER
#pragma GCC diagnostic pop
#endif // _MSC_VER
