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

#ifndef _VCARD_HH
#define _VCARD_HH

#include <string>
#include <list>
#include "object.hh"


namespace belcard {
class BelCard;
}



struct _LinphoneVcard;


namespace linphone {

	class FriendPhoneNumber;
	class Address;
	class Vcard;

	/**
	 * @brief Object storing contact information using vCard 4.0 format. 
	 *
	 */
	class Vcard: public Object {
	
		public:

			LINPHONECXX_PUBLIC Vcard(void *ptr, bool takeRef=true);
			LINPHONECXX_PUBLIC _LinphoneVcard *cPtr() {return (_LinphoneVcard *)mPrivPtr;}

	
		public:
			LINPHONECXX_PUBLIC std::shared_ptr<belcard::BelCard> &getVcard();
			
		
			/**
			 * @brief Gets the eTag of the vCard. 
			 *
			 * @return the eTag of the vCard in the CardDAV server, otherwise nullptr.    
			 */
			LINPHONECXX_PUBLIC std::string getEtag() const;
			
			/**
			 * @brief Sets the eTAG of the vCard. 
			 *
			 * @param etag the eTAG.    
			 */
			LINPHONECXX_PUBLIC void setEtag(const std::string & etag);
			
			/**
			 * @brief Returns the family name in the N attribute of the vCard, or nullptr if
			 * it isn't set yet. 
			 *
			 * @return the family name of the vCard, or nullptr    
			 */
			LINPHONECXX_PUBLIC std::string getFamilyName() const;
			
			/**
			 * @brief Sets the family name in the N attribute of the vCard. 
			 *
			 * @param name the family name to set for the vCard    
			 */
			LINPHONECXX_PUBLIC void setFamilyName(const std::string & name);
			
			/**
			 * @brief Returns the FN attribute of the vCard, or nullptr if it isn't set yet. 
			 *
			 * @return the display name of the vCard, or nullptr.    
			 */
			LINPHONECXX_PUBLIC std::string getFullName() const;
			
			/**
			 * @brief Sets the FN attribute of the vCard (which is mandatory). 
			 *
			 * @param name the display name to set for the vCard    
			 */
			LINPHONECXX_PUBLIC void setFullName(const std::string & name);
			
			/**
			 * @brief Returns the given name in the N attribute of the vCard, or nullptr if it
			 * isn't set yet. 
			 *
			 * @return the given name of the vCard, or nullptr    
			 */
			LINPHONECXX_PUBLIC std::string getGivenName() const;
			
			/**
			 * @brief Sets the given name in the N attribute of the vCard. 
			 *
			 * @param name the given name to set for the vCard    
			 */
			LINPHONECXX_PUBLIC void setGivenName(const std::string & name);
			
			/**
			 * @brief Gets the Title of the vCard. 
			 *
			 * @return the Title of the vCard or nullptr.    
			 */
			LINPHONECXX_PUBLIC std::string getJobTitle() const;
			
			/**
			 * @brief Fills the Title field of the vCard. 
			 *
			 * @param jobTitle the job title.    
			 */
			LINPHONECXX_PUBLIC void setJobTitle(const std::string & jobTitle);
			
			/**
			 * @brief Gets the Organization of the vCard. 
			 *
			 * @return the Organization of the vCard or nullptr.    
			 */
			LINPHONECXX_PUBLIC std::string getOrganization() const;
			
			/**
			 * @brief Fills the Organization field of the vCard. 
			 *
			 * @param organization the Organization.    
			 */
			LINPHONECXX_PUBLIC void setOrganization(const std::string & organization);
			
			/**
			 * @brief Returns the list of phone numbers in the vCard (all the TEL attributes)
			 * or nullptr. 
			 *
			 * @return The phone numbers as string.         
			 */
			LINPHONECXX_PUBLIC std::list<std::string> getPhoneNumbers() const;
			
			/**
			 * @brief Returns the list of phone numbers in the vCard (all the TEL attributes)
			 * or nullptr. 
			 *
			 * @return The phone numbers as @ref FriendPhoneNumber.         
			 */
			LINPHONECXX_PUBLIC std::list<std::shared_ptr<linphone::FriendPhoneNumber>> getPhoneNumbersWithLabel() const;
			
			/**
			 * @brief Returns the first PHOTO property or nullptr. 
			 *
			 * @return The picture URI as string or nullptr if none has been set.    
			 */
			LINPHONECXX_PUBLIC std::string getPhoto() const;
			
			/**
			 * @brief Sets a picture URI in the vCard, using the PHOTO property. 
			 *
			 * @param picture the picture URI to add. If nullptr it will have the same effet
			 * as removePhoto().    
			 */
			LINPHONECXX_PUBLIC void setPhoto(const std::string & picture);
			
			/**
			 * @brief Returns the list of SIP addresses in the vCard (all the IMPP attributes
			 * that has an URI value starting by "sip:") or nullptr. 
			 *
			 * @return The SIP addresses.      
			 */
			LINPHONECXX_PUBLIC std::list<std::shared_ptr<linphone::Address>> getSipAddresses();
			
			/**
			 * @brief Returns the skipFieldValidation property of the vcard. 
			 *
			 * @return the skipFieldValidation property of the vcard 
			 */
			LINPHONECXX_PUBLIC bool getSkipValidation() const;
			
			/**
			 * @brief Sets the skipFieldValidation property of the vcard. 
			 *
			 * @param skip skipFieldValidation property of the vcard 
			 */
			LINPHONECXX_PUBLIC void setSkipValidation(bool skip);
			
			/**
			 * @brief Gets the UID of the vCard. 
			 *
			 * @return the UID of the vCard, otherwise nullptr.    
			 */
			LINPHONECXX_PUBLIC std::string getUid() const;
			
			/**
			 * @brief Sets the unique ID of the vCard. 
			 *
			 * @param uid the unique id    
			 */
			LINPHONECXX_PUBLIC void setUid(const std::string & uid);
			
			/**
			 * @brief Gets the URL of the vCard. 
			 *
			 * @return the URL of the vCard in the CardDAV server, otherwise nullptr.    
			 */
			LINPHONECXX_PUBLIC std::string getUrl() const;
			
			/**
			 * @brief Sets the URL of the vCard. 
			 *
			 * @param url the URL.    
			 */
			LINPHONECXX_PUBLIC void setUrl(const std::string & url);
			
			/**
			 * @brief Adds an extended property to the vCard. 
			 *
			 * @param name the name of the extended property to add    
			 * @param value the value of the extended property to add    
			 */
			LINPHONECXX_PUBLIC void addExtendedProperty(const std::string & name, const std::string & value);
			
			/**
			 * @brief Adds a phone number in the vCard, using the TEL property. 
			 *
			 * @param phone the phone number to add    
			 */
			LINPHONECXX_PUBLIC void addPhoneNumber(const std::string & phone);
			
			/**
			 * @brief Adds a @ref FriendPhoneNumber in the vCard, using the TEL property. 
			 *
			 * @param phoneNumber the @ref FriendPhoneNumber to add    
			 */
			LINPHONECXX_PUBLIC void addPhoneNumberWithLabel(const std::shared_ptr<linphone::FriendPhoneNumber> & phoneNumber);
			
			/**
			 * @brief Adds a SIP address in the vCard, using the IMPP property. 
			 *
			 * @param sipAddress the SIP address to add    
			 */
			LINPHONECXX_PUBLIC void addSipAddress(const std::string & sipAddress);
			
			/**
			 * @brief Returns the vCard4 representation of the LinphoneVcard. 
			 *
			 * @return a const char * that represents the vCard.    
			 */
			LINPHONECXX_PUBLIC std::string asVcard4String();
			
			/**
			 * @brief Clone a @ref Vcard. 
			 *
			 * @return a new @ref Vcard object    
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<linphone::Vcard> clone() const;
			
			/**
			 * @brief Edits the preferred SIP address in the vCard (or the first one), using
			 * the IMPP property. 
			 *
			 * @param sipAddress the new SIP address    
			 */
			LINPHONECXX_PUBLIC void editMainSipAddress(const std::string & sipAddress);
			
			/**
			 * @brief Generates a random unique id for the vCard. 
			 *
			 * If is required to be able to synchronize the vCard with a CardDAV server 
			 * @return true if operation is successful, otherwise false (for example if it
			 * already has an unique ID) 
			 */
			LINPHONECXX_PUBLIC bool generateUniqueId();
			
			/**
			 * @brief Get the vCard extended properties values per property name. 
			 *
			 * @param name the name to filter the extended properties on.    
			 * @return The extended properties values as string.         
			 */
			LINPHONECXX_PUBLIC std::list<std::string> getExtendedPropertiesValuesByName(const std::string & name) const;
			
			/**
			 * @brief Remove all the extend properties per property name. 
			 *
			 * @param name the name to remove the extended properties on.    
			 */
			LINPHONECXX_PUBLIC void removeExtentedPropertiesByName(const std::string & name);
			
			/**
			 * @brief Removes the Title field of the vCard. 
			 *
			 */
			LINPHONECXX_PUBLIC void removeJobTitle();
			
			/**
			 * @brief Removes the Organization field of the vCard. 
			 *
			 */
			LINPHONECXX_PUBLIC void removeOrganization();
			
			/**
			 * @brief Removes a phone number in the vCard (if it exists), using the TEL
			 * property. 
			 *
			 * @param phone the phone number to remove    
			 */
			LINPHONECXX_PUBLIC void removePhoneNumber(const std::string & phone);
			
			/**
			 * @brief Removes a @ref FriendPhoneNumber in the vCard (if it exists), using the
			 * TEL property. 
			 *
			 * @param phoneNumber the @ref FriendPhoneNumber to remove    
			 */
			LINPHONECXX_PUBLIC void removePhoneNumberWithLabel(const std::shared_ptr<const linphone::FriendPhoneNumber> & phoneNumber);
			
			/**
			 * @brief Removes any existing PHOTO property. 
			 *
			 */
			LINPHONECXX_PUBLIC void removePhoto();
			
			/**
			 * @brief Removes a SIP address in the vCard (if it exists), using the IMPP
			 * property. 
			 *
			 * @param sipAddress the SIP address to remove    
			 */
			LINPHONECXX_PUBLIC void removeSipAddress(const std::string & sipAddress);
			
			
	};

};

#endif // _VCARD_HH

#ifndef _MSC_VER
#pragma GCC diagnostic pop
#endif // _MSC_VER
