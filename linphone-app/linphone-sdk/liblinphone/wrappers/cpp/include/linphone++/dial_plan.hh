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

#ifndef _DIAL_PLAN_HH
#define _DIAL_PLAN_HH

#include <string>
#include <list>
#include "object.hh"




struct _LinphoneDialPlan;


namespace linphone {

	class DialPlan;

	/**
	 * @brief Represents a dial plan. 
	 *
	 */
	class DialPlan: public Object {
	
		public:

			LINPHONECXX_PUBLIC DialPlan(void *ptr, bool takeRef=true);
			LINPHONECXX_PUBLIC _LinphoneDialPlan *cPtr() {return (_LinphoneDialPlan *)mPrivPtr;}

	
		public:
			
		
			/**
			 * @brief Returns the country name of the dialplan. 
			 *
			 * @return the country name 
			 */
			LINPHONECXX_PUBLIC std::string getCountry() const;
			
			/**
			 * @brief Returns the country calling code of the dialplan. 
			 *
			 * @return the country calling code    
			 */
			LINPHONECXX_PUBLIC std::string getCountryCallingCode() const;
			
			/**
			 * @brief Returns the flag of the teritory as unicode characters. 
			 *
			 * @return the flag as unicode characters    
			 */
			LINPHONECXX_PUBLIC std::string getFlag() const;
			
			/**
			 * @brief Returns the international call prefix of the dialplan. 
			 *
			 * @return the international call prefix    
			 */
			LINPHONECXX_PUBLIC std::string getInternationalCallPrefix() const;
			
			/**
			 * @brief Return if given plan is generic. 
			 *
			 * @return true if generic, false otherwise 
			 */
			LINPHONECXX_PUBLIC bool isGeneric() const;
			
			/**
			 * @brief Returns the iso country code of the dialplan. 
			 *
			 * @return the iso country code    
			 */
			LINPHONECXX_PUBLIC std::string getIsoCountryCode() const;
			
			/**
			 * @brief Returns the national number length of the dialplan. 
			 *
			 * @return the national number length 
			 */
			LINPHONECXX_PUBLIC int getNationalNumberLength() const;
			
			;
			/**
			 * @brief Find best match for given CCC. 
			 *
			 * @param ccc The country calling code    
			 * @return the matching dial plan, or a generic one if none found    
			 */
			LINPHONECXX_PUBLIC static std::shared_ptr<const linphone::DialPlan> byCcc(const std::string & ccc);
			
;
			/**
			 * @brief Find best match for given CCC. 
			 *
			 * @param ccc the country calling code    
			 * @return the matching dial plan, or a generic one if none found    
			 */
			LINPHONECXX_PUBLIC static std::shared_ptr<const linphone::DialPlan> byCccAsInt(int ccc);
			
;
			/**
			 * @brief Returns a list of all known dial plans. 
			 *
			 * @return The list of all known dial plans.         
			 */
			LINPHONECXX_PUBLIC static std::list<std::shared_ptr<linphone::DialPlan>> getAllList();
			
;
			/**
			 * @brief Function to get call country code from an e164 number, ex: +33952650121
			 * will return 33. 
			 *
			 * @param e164 phone number    
			 * @return call country code or -1 if not found 
			 */
			LINPHONECXX_PUBLIC static int lookupCccFromE164(const std::string & e164);
			
;
			/**
			 * @brief Function to get call country code from ISO 3166-1 alpha-2 code, ex: FR
			 * returns 33. 
			 *
			 * @param iso country code alpha2    
			 * @return call country code or -1 if not found 
			 */
			LINPHONECXX_PUBLIC static int lookupCccFromIso(const std::string & iso);
			

	};

};

#endif // _DIAL_PLAN_HH

#ifndef _MSC_VER
#pragma GCC diagnostic pop
#endif // _MSC_VER
