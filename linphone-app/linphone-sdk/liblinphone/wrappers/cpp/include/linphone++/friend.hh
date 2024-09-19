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

#ifndef _FRIEND_HH
#define _FRIEND_HH

#include <list>
#include <string>
#include "enums.hh"
#include "friend.hh"
#include "object.hh"




struct _LinphoneFriend;


namespace linphone {

	class Address;
	class Core;
	class FriendPhoneNumber;
	class PresenceModel;
	class Vcard;
	class Friend;
	class FriendListener;

	/**
	 * @brief This object is used to store a SIP address. 
	 *
	 * @ref Friend is mainly used to implement an adressbook feature, and are used as
	 * data for the @ref MagicSearch object. If your proxy supports it, you can also
	 * use it to subscribe to presence information.
	 * The objects are stored in a @ref FriendList which are in turn stored inside the
	 * @ref Core. They can be stored inside a database if the path to it is
	 * configured, otherwise they will be lost after the @ref Core is destroyed.
	 * Thanks to the vCard plugin, you can also store more information like phone
	 * numbers, organization, etc... 
	 */
	class Friend: public MultiListenableObject {
	
		public:
			/**
			* Enum describing the capabilities of a @ref Friend, populated through presence
			* subscribe/notify process. 
			*
			*/
			enum class Capability {
				/**
				* No capabilities populated. 
				*/
				None = 0,
				/**
				* This friend can be invited in a Flexisip backend @ref ChatRoom. 
				*/
				GroupChat = 1<<0,
				/**
				* This friend can be invited in a Flexisip backend end-to-end encrypted @ref
				* ChatRoom. 
				*/
				LimeX3Dh = 1<<1,
				/**
				* This friend is able to delete ephemeral messages once they have expired. 
				*/
				EphemeralMessages = 1<<2
			};


			LINPHONECXX_PUBLIC Friend(void *ptr, bool takeRef=true);
			LINPHONECXX_PUBLIC _LinphoneFriend *cPtr() {return (_LinphoneFriend *)mPrivPtr;}

			/**
			 * @brief Add an application listener to the Friend instance.
			 *
			 * @param listener the application listener
			 */
			LINPHONECXX_PUBLIC void addListener(const std::shared_ptr<FriendListener> &listener);
			/**
			 * @brief Remove a previously added listener from the Friend instance.
			 *
			 * @param listener the application listener
			 */
			LINPHONECXX_PUBLIC void removeListener(const std::shared_ptr<FriendListener> &listener);
	
		public:
			
		
			/**
			 * @brief Get address of this friend. 
			 *
			 * @note the @ref Address object returned is hold by the LinphoneFriend, however
			 * calling several time this function may return different objects. 
			 * @return the @ref Address.    
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<const linphone::Address> getAddress() const;
			
			/**
			 * @brief Set @ref Address for this friend. 
			 *
			 * @param address the @ref Address to set    return 0 if successful, -1 otherwise 
			 */
			LINPHONECXX_PUBLIC linphone::Status setAddress(const std::shared_ptr<const linphone::Address> & address);
			
			/**
			 * @brief Returns a list of @ref Address for this friend. 
			 *
			 * @return A list of @ref Address.      
			 */
			LINPHONECXX_PUBLIC std::list<std::shared_ptr<linphone::Address>> getAddresses() const;
			
			/**
			 * @brief Returns the capabilities associated to this friend. 
			 *
			 * @return an int representing the capabilities of the friend 
			 */
			LINPHONECXX_PUBLIC int getCapabilities() const;
			
			/**
			 * @brief Get the consolidated presence of a friend. 
			 *
			 * It will return the "most open" presence found if more than one presence model
			 * are found. 
			 * @return The @ref ConsolidatedPresence of the friend 
			 */
			LINPHONECXX_PUBLIC linphone::ConsolidatedPresence getConsolidatedPresence() const;
			
			/**
			 * @brief Returns the @ref Core object managing this friend, if any. 
			 *
			 * @return the @ref Core object associated.    
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<linphone::Core> getCore() const;
			
			/**
			 * @brief get current subscription policy for this @ref Friend 
			 *
			 * @return the @ref SubscribePolicy enum 
			 */
			LINPHONECXX_PUBLIC linphone::SubscribePolicy getIncSubscribePolicy() const;
			
			/**
			 * @brief Configure incoming subscription policy for this friend. 
			 *
			 * @param policy @ref SubscribePolicy policy to apply. 
			 * @return 0 
			 */
			LINPHONECXX_PUBLIC linphone::Status setIncSubscribePolicy(linphone::SubscribePolicy policy);
			
			/**
			 * @brief Tells whether we already received presence information for a friend. 
			 *
			 * @return true if presence information has been received for the friend, false
			 * otherwise. 
			 */
			LINPHONECXX_PUBLIC bool isPresenceReceived() const;
			
			/**
			 * @brief Gets the contact's job title from it's vCard. 
			 *
			 * It's a shortcut to getVcard() and Vcard::getJobTitle(). 
			 * @return the job_title set if any & vCard is available, nullptr otherwise.    
			 */
			LINPHONECXX_PUBLIC std::string getJobTitle() const;
			
			/**
			 * @brief Sets the contact's job title. 
			 *
			 * It's a shortcut to getVcard() and Vcard::setJobTitle(). 
			 * @param jobTitle the job title to store in Friend's vCard.    
			 */
			LINPHONECXX_PUBLIC void setJobTitle(const std::string & jobTitle);
			
			/**
			 * @brief Get the display name for this friend. 
			 *
			 * @return The display name of this friend.    
			 */
			LINPHONECXX_PUBLIC std::string getName() const;
			
			/**
			 * @brief Set the display name for this friend. 
			 *
			 * @param name the display name to set    
			 * @return 0 if successful, -1 otherwise 
			 */
			LINPHONECXX_PUBLIC linphone::Status setName(const std::string & name);
			
			/**
			 * @brief Gets the contact's native URI. 
			 *
			 * @return the native URI set if any, nullptr otherwise.    
			 */
			LINPHONECXX_PUBLIC std::string getNativeUri() const;
			
			/**
			 * @brief Sets the contact's native URI. 
			 *
			 * @param nativeUri the URI that matches the contact on the native system.    
			 */
			LINPHONECXX_PUBLIC void setNativeUri(const std::string & nativeUri);
			
			/**
			 * @brief Gets the contact's organization from it's vCard. 
			 *
			 * It's a shortcut to getVcard() and Vcard::getOrganization(). 
			 * @return the organization set if any & vCard is available, nullptr otherwise.    
			 */
			LINPHONECXX_PUBLIC std::string getOrganization() const;
			
			/**
			 * @brief Sets the contact's organization. 
			 *
			 * It's a shortcut to getVcard() and Vcard::setOrganization(). 
			 * @param organization the organization to store in Friend's vCard.    
			 */
			LINPHONECXX_PUBLIC void setOrganization(const std::string & organization);
			
			/**
			 * @brief Returns a list of phone numbers for this friend. 
			 *
			 * @return A list of phone numbers as string.         
			 */
			LINPHONECXX_PUBLIC std::list<std::string> getPhoneNumbers() const;
			
			/**
			 * @brief Returns a list of @ref FriendPhoneNumber for this friend. 
			 *
			 * @return A list of phone numbers as string.         
			 */
			LINPHONECXX_PUBLIC std::list<std::shared_ptr<linphone::FriendPhoneNumber>> getPhoneNumbersWithLabel() const;
			
			/**
			 * @brief Gets the contact's picture URI. 
			 *
			 * @return the picture URI set if any, nullptr otherwise.    
			 */
			LINPHONECXX_PUBLIC std::string getPhoto() const;
			
			/**
			 * @brief Sets the contact's picture URI. 
			 *
			 * @param pictureUri the picture URI to set.    
			 */
			LINPHONECXX_PUBLIC void setPhoto(const std::string & pictureUri);
			
			/**
			 * @brief Get the presence model of a friend. 
			 *
			 * If a friend has more than one SIP address and phone number, this method will
			 * return the most recent presence model using PresenceModel::getTimestamp(). 
			 * @return A @ref PresenceModel object, or nullptr if the friend do not have
			 * presence information (in which case he is considered offline).    
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<const linphone::PresenceModel> getPresenceModel() const;
			
			/**
			 * @brief Set the presence model of a friend. 
			 *
			 * @param presence The @ref PresenceModel object to set for the friend    
			 */
			LINPHONECXX_PUBLIC void setPresenceModel(const std::shared_ptr<linphone::PresenceModel> & presence);
			
			/**
			 * @brief Get the reference key of a friend. 
			 *
			 * @return The reference key of the friend.    
			 */
			LINPHONECXX_PUBLIC std::string getRefKey() const;
			
			/**
			 * @brief Set the reference key of a friend. 
			 *
			 * @param key The reference key to use for the friend.    
			 */
			LINPHONECXX_PUBLIC void setRefKey(const std::string & key);
			
			/**
			 * @brief Gets if the friend is to be considered as important for the user. 
			 *
			 * @return true if the contact is a user's favorite, false otherwise. 
			 */
			LINPHONECXX_PUBLIC bool getStarred() const;
			
			/**
			 * @brief Sets if the friend is a user's favorite or important contact. 
			 *
			 * @param isStarred true if the friend is to be considered as important, false
			 * otherwise. 
			 */
			LINPHONECXX_PUBLIC void setStarred(bool isStarred);
			
			/**
			 * @brief get subscription flag value 
			 *
			 * @return returns true is subscription is activated for this friend 
			 */
			LINPHONECXX_PUBLIC bool subscribesEnabled() const;
			
			/**
			 * @brief Configure @ref Friend to subscribe to presence information. 
			 *
			 * @param enable if true this friend will receive subscription message 
			 * @return 0 
			 */
			LINPHONECXX_PUBLIC linphone::Status enableSubscribes(bool enable);
			
			/**
			 * @brief Get subscription state of a friend. 
			 *
			 * @return the @ref SubscriptionState enum 
			 */
			LINPHONECXX_PUBLIC linphone::SubscriptionState getSubscriptionState() const;
			
			/**
			 * @brief Returns the vCard object associated to this friend, if any. 
			 *
			 * @return the @ref Vcard or nullptr.    
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<linphone::Vcard> getVcard() const;
			
			/**
			 * @brief Binds a vCard object to a friend. 
			 *
			 * @param vcard The @ref Vcard object to bind    
			 */
			LINPHONECXX_PUBLIC void setVcard(const std::shared_ptr<linphone::Vcard> & vcard);
			
			/**
			 * @brief Adds an address in this friend. 
			 *
			 * @param address @ref Address object    
			 */
			LINPHONECXX_PUBLIC void addAddress(const std::shared_ptr<const linphone::Address> & address);
			
			/**
			 * @brief Adds a phone number in this friend. 
			 *
			 * @param phoneNumber number to add    
			 */
			LINPHONECXX_PUBLIC void addPhoneNumber(const std::string & phoneNumber);
			
			/**
			 * @brief Adds a @ref FriendPhoneNumber to this friend. 
			 *
			 * @param phoneNumber the @ref FriendPhoneNumber to add    
			 */
			LINPHONECXX_PUBLIC void addPhoneNumberWithLabel(const std::shared_ptr<linphone::FriendPhoneNumber> & phoneNumber);
			
			/**
			 * @brief Creates a vCard object associated to this friend if there isn't one yet
			 * and if the full name is available, either by the parameter or the one in the
			 * friend's SIP URI. 
			 *
			 * @param name The full name of the friend or nullptr to use the one from the
			 * friend's SIP URI    
			 * @return true if the vCard has been created, false if it wasn't possible (for
			 * exemple if name and the friend's SIP URI are null or if the friend's SIP URI
			 * doesn't have a display name), or if there is already one vcard 
			 */
			LINPHONECXX_PUBLIC bool createVcard(const std::string & name);
			
			/**
			 * @brief Commits modification made to the friend configuration. 
			 *
			 */
			LINPHONECXX_PUBLIC void done();
			
			/**
			 * @brief Starts editing a friend configuration. 
			 *
			 * Because friend configuration must be consistent, applications MUST call edit()
			 * before doing any attempts to modify friend configuration (such as setAddress()
			 * or setIncSubscribePolicy()). Once the modifications are done, then the
			 * application must call done() to commit the changes. 
			 */
			LINPHONECXX_PUBLIC void edit();
			
			/**
			 * @brief Returns the version of a friend's capbility. 
			 *
			 * @param capability @ref Capability object 
			 * @return the version of a friend's capbility. 
			 */
			LINPHONECXX_PUBLIC float getCapabilityVersion(Capability capability) const;
			
			/**
			 * @brief Get the presence model for a specific SIP URI or phone number of a
			 * friend. 
			 *
			 * @param uriOrTel The SIP URI or phone number for which to get the presence model
			 *    
			 * @return A @ref PresenceModel object, or nullptr if the friend do not have
			 * presence information for this SIP URI or phone number.    
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<const linphone::PresenceModel> getPresenceModelForUriOrTel(const std::string & uriOrTel) const;
			
			/**
			 * @brief Returns whether or not a friend has a capbility. 
			 *
			 * @param capability @ref Capability object 
			 * @return whether or not a friend has a capbility 
			 */
			LINPHONECXX_PUBLIC bool hasCapability(Capability capability) const;
			
			/**
			 * @brief Returns whether or not a friend has a capbility with a given version. 
			 *
			 * @param capability @ref Capability object 
			 * @param version the version to test 
			 * @return whether or not a friend has a capbility with a given version or -1.0 if
			 * friend has not capability. 
			 */
			LINPHONECXX_PUBLIC bool hasCapabilityWithVersion(Capability capability, float version) const;
			
			/**
			 * @brief Returns whether or not a friend has a capbility with a given version or
			 * more. 
			 *
			 * @param capability @ref Capability object 
			 * @param version the version to test 
			 * @return whether or not a friend has a capbility with a given version or more. 
			 */
			LINPHONECXX_PUBLIC bool hasCapabilityWithVersionOrMore(Capability capability, float version) const;
			
			/**
			 * @brief Returns whether a friend contains the given phone number. 
			 *
			 * @param phoneNumber the phone number to search for    
			 * @return true if found, false otherwise 
			 */
			LINPHONECXX_PUBLIC bool hasPhoneNumber(const std::string & phoneNumber) const;
			
			/**
			 * @brief Check that the given friend is in a friend list. 
			 *
			 * @return true if the friend is in a friend list, false otherwise. 
			 */
			LINPHONECXX_PUBLIC bool inList() const;
			
			/**
			 * @brief Removes a friend from it's friend list and from the rc if exists. 
			 *
			 */
			LINPHONECXX_PUBLIC void remove();
			
			/**
			 * @brief Removes an address in this friend. 
			 *
			 * @param address @ref Address object    
			 */
			LINPHONECXX_PUBLIC void removeAddress(const std::shared_ptr<const linphone::Address> & address);
			
			/**
			 * @brief Removes a phone number in this friend. 
			 *
			 * @param phoneNumber number to remove    
			 */
			LINPHONECXX_PUBLIC void removePhoneNumber(const std::string & phoneNumber);
			
			/**
			 * @brief Removes a @ref FriendPhoneNumber from this friend. 
			 *
			 * @param phoneNumber the @ref FriendPhoneNumber to remove    
			 */
			LINPHONECXX_PUBLIC void removePhoneNumberWithLabel(const std::shared_ptr<const linphone::FriendPhoneNumber> & phoneNumber);
			
			/**
			 * @brief Saves a friend either in database if configured, otherwise in
			 * linphonerc. 
			 *
			 * @param core the linphone core    
			 */
			LINPHONECXX_PUBLIC void save(const std::shared_ptr<linphone::Core> & core);
			
			/**
			 * @brief Set the presence model for a specific SIP URI or phone number of a
			 * friend. 
			 *
			 * @param uriOrTel The SIP URI or phone number for which to set the presence model
			 *    
			 * @param presence The @ref PresenceModel object to set    
			 */
			LINPHONECXX_PUBLIC void setPresenceModelForUriOrTel(const std::string & uriOrTel, const std::shared_ptr<linphone::PresenceModel> & presence);
			
			;
			/**
			 * @brief Contructor same as linphone_friend_new + setAddress() 
			 *
			 * @param vcard a @ref Vcard object    
			 * @return a new @ref Friend which has its vCard attribute initialized from the
			 * given vCard. This can be get by getVcard().    
			 */
			LINPHONECXX_PUBLIC static std::shared_ptr<linphone::Friend> newFromVcard(const std::shared_ptr<linphone::Vcard> & vcard);
			

		private:
			void *createCallbacks() override;
	};

};

#endif // _FRIEND_HH

#ifndef _MSC_VER
#pragma GCC diagnostic pop
#endif // _MSC_VER
