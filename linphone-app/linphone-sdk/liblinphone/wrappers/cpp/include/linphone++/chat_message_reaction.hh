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

#ifndef _CHAT_MESSAGE_REACTION_HH
#define _CHAT_MESSAGE_REACTION_HH

#include <string>
#include "object.hh"




struct _LinphoneChatMessageReaction;


namespace linphone {

	class Address;

	/**
	 * @brief A chat message reaction is an emoji sent by someone in the same chat
	 * room to react to a specific @ref ChatMessage. 
	 *
	 * To create a @ref ChatMessageReaction, use ChatMessage::createReaction(). Once
	 * you are ready, send the reaction using send().
	 * Reactions are available using ChatMessage::getReactions() and will be notified
	 * using dedicated callbacks either in #LinphoneCoreListener or
	 * #LinphoneChatMessageListener. 
	 */
	class ChatMessageReaction: public Object {
	
		public:

			LINPHONECXX_PUBLIC ChatMessageReaction(void *ptr, bool takeRef=true);
			LINPHONECXX_PUBLIC _LinphoneChatMessageReaction *cPtr() {return (_LinphoneChatMessageReaction *)mPrivPtr;}

	
		public:
			
		
			/**
			 * @brief Returns the emoji(s) used for the reaction. 
			 *
			 * @return the emoji(s) used as UTF-8 characters.    
			 */
			LINPHONECXX_PUBLIC std::string getBody() const;
			
			/**
			 * @brief Allows to get the Call ID associated with a @ref ChatMessageReaction. 
			 *
			 * @return the Call ID associated with this reaction. 
			 */
			LINPHONECXX_PUBLIC std::string getCallId() const;
			
			/**
			 * @brief Returns the @ref Address of the participant that sent this reaction. 
			 *
			 * @return the @ref Address that sent this reaction.    
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<const linphone::Address> getFromAddress() const;
			
			/**
			 * @brief Sends a @ref ChatMessageReaction. 
			 *
			 */
			LINPHONECXX_PUBLIC void send();
			
			
	};

};

#endif // _CHAT_MESSAGE_REACTION_HH

#ifndef _MSC_VER
#pragma GCC diagnostic pop
#endif // _MSC_VER
