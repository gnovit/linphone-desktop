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

#ifndef _FRIEND_LIST_LISTENER_HH
#define _FRIEND_LIST_LISTENER_HH

#include <string>
#include <list>
#include "friend_list.hh"
#include "object.hh"






namespace linphone {

	class FriendList;
	class Friend;

	/**
	 * @brief An object to handle the callbacks for @ref Friend synchronization. 
	 *
	 */
	class FriendListListener: public Listener {
	
		public:


	
		public:
			
		
			/**
			 * @brief Callback used to notify a new contact has been created on the CardDAV
			 * server and downloaded locally. 
			 *
			 * @param friendList The @ref FriendList object the new contact is added to    
			 * @param linphoneFriend The @ref Friend object that has been created    
			 */
			LINPHONECXX_PUBLIC virtual void onContactCreated(const std::shared_ptr<linphone::FriendList> & friendList, const std::shared_ptr<linphone::Friend> & linphoneFriend) {};
			
			/**
			 * @brief Callback used to notify a contact has been deleted on the CardDAV
			 * server. 
			 *
			 * @param friendList The @ref FriendList object a contact has been removed from    
			 * @param linphoneFriend The @ref Friend object that has been deleted    
			 */
			LINPHONECXX_PUBLIC virtual void onContactDeleted(const std::shared_ptr<linphone::FriendList> & friendList, const std::shared_ptr<linphone::Friend> & linphoneFriend) {};
			
			/**
			 * @brief Callback used to notify a contact has been updated on the CardDAV
			 * server. 
			 *
			 * @param friendList The @ref FriendList object in which a contact has been
			 * updated    
			 * @param newFriend The new @ref Friend object corresponding to the updated
			 * contact    
			 * @param oldFriend The old @ref Friend object before update    
			 */
			LINPHONECXX_PUBLIC virtual void onContactUpdated(const std::shared_ptr<linphone::FriendList> & friendList, const std::shared_ptr<linphone::Friend> & newFriend, const std::shared_ptr<linphone::Friend> & oldFriend) {};
			
			/**
			 * @brief Callback used to notify the status of the synchronization has changed. 
			 *
			 * @param friendList The @ref FriendList object for which the status has changed  
			 *  
			 * @param status The new @ref FriendList::SyncStatus 
			 * @param message An additional information on the status update    
			 */
			LINPHONECXX_PUBLIC virtual void onSyncStatusChanged(const std::shared_ptr<linphone::FriendList> & friendList, linphone::FriendList::SyncStatus status, const std::string & message) {};
			
			/**
			 * @brief Callback used to notify a list with all friends that have received
			 * presence information. 
			 *
			 * @param friendList The LinphoneFriendList object for which the status has
			 * changed    
			 * @param friends A   of the relevant friends    
			 */
			LINPHONECXX_PUBLIC virtual void onPresenceReceived(const std::shared_ptr<linphone::FriendList> & friendList, const std::list<std::shared_ptr<linphone::Friend>> & friends) {};
			
			
	};

};

#endif // _FRIEND_LIST_LISTENER_HH

#ifndef _MSC_VER
#pragma GCC diagnostic pop
#endif // _MSC_VER
