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

#ifndef _FRIEND_LISTENER_HH
#define _FRIEND_LISTENER_HH

#include "object.hh"






namespace linphone {

	class Friend;

	/**
	 * @brief An object to handle the callbacks for @ref Friend. 
	 *
	 */
	class FriendListener: public Listener {
	
		public:


	
		public:
			
		
			/**
			 * @brief Callback used to notify a friend that it has received presence
			 * information. 
			 *
			 * @param linphoneFriend The @ref Friend object for which the status has changed  
			 *  
			 */
			LINPHONECXX_PUBLIC virtual void onPresenceReceived(const std::shared_ptr<linphone::Friend> & linphoneFriend) {};
			
			
	};

};

#endif // _FRIEND_LISTENER_HH

#ifndef _MSC_VER
#pragma GCC diagnostic pop
#endif // _MSC_VER
