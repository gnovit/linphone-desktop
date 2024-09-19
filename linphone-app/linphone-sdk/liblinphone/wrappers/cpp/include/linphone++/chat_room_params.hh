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

#ifndef _CHAT_ROOM_PARAMS_HH
#define _CHAT_ROOM_PARAMS_HH

#include <string>
#include "chat_room.hh"
#include "object.hh"




struct _LinphoneChatRoomParams;


namespace linphone {


	/**
	 * @brief Object defining parameters for a @ref ChatRoom. 
	 *
	 * Can be created with Core::createDefaultChatRoomParams(). You can use isValid()
	 * to check if your configuration is valid or not.
	 * If the @ref ChatRoom backend is @ref ChatRoom::Backend::Basic, then no other
	 * parameter is required, but @ref ChatMessage sent and received won't benefit
	 * from all features a @ref ChatRoom::Backend::FlexisipChat can offer like
	 * conversation with multiple participants and a subject, end-to-end encryption,
	 * ephemeral messages, etc... but this type is the only one that can interoperate
	 * with other SIP clients or with non-flexisip SIP proxies. 
	 */
	class ChatRoomParams: public Object {
	
		public:

			LINPHONECXX_PUBLIC ChatRoomParams(void *ptr, bool takeRef=true);
			LINPHONECXX_PUBLIC _LinphoneChatRoomParams *cPtr() {return (_LinphoneChatRoomParams *)mPrivPtr;}

	
		public:
			
		
			/**
			 * @brief Get the backend implementation of the chat room associated with the
			 * given parameters. 
			 *
			 * @return the @ref ChatRoom::Backend 
			 */
			LINPHONECXX_PUBLIC linphone::ChatRoom::Backend getBackend() const;
			
			/**
			 * @brief Set the backend implementation of these chat room parameters. 
			 *
			 * @param backend The @ref ChatRoom::Backend enum value 
			 */
			LINPHONECXX_PUBLIC void setBackend(linphone::ChatRoom::Backend backend);
			
			/**
			 * @brief Get the encryption implementation of the chat room associated with the
			 * given parameters. 
			 *
			 * @return the @ref ChatRoom::EncryptionBackend 
			 */
			LINPHONECXX_PUBLIC linphone::ChatRoom::EncryptionBackend getEncryptionBackend() const;
			
			/**
			 * @brief Set the encryption backend implementation of these chat room parameters. 
			 *
			 * @param backend The @ref ChatRoom::EncryptionBackend enum value 
			 */
			LINPHONECXX_PUBLIC void setEncryptionBackend(linphone::ChatRoom::EncryptionBackend backend);
			
			/**
			 * @brief Get the encryption status of the chat room associated with the given
			 * parameters. 
			 *
			 * @return true if encryption is enabled, false otherwise 
			 */
			LINPHONECXX_PUBLIC bool encryptionEnabled() const;
			
			/**
			 * @brief Enables or disables encryption for the chat room associated with the
			 * given parameters. 
			 *
			 */
			LINPHONECXX_PUBLIC void enableEncryption(bool encrypted);
			
			/**
			 * @brief Get lifetime (in seconds) for all new ephemeral messages in the chat
			 * room. 
			 *
			 * After the message is read, it will be deleted after "time" seconds. @see
			 * linphone_chat_room_params_ephemeral_enabled() 
			 * @return the ephemeral lifetime (in seconds) 
			 */
			LINPHONECXX_PUBLIC long getEphemeralLifetime() const;
			
			/**
			 * @brief Set lifetime (in seconds) for all new ephemral messages in the chat
			 * room. 
			 *
			 * After the message is read, it will be deleted after "time" seconds. @see
			 * linphone_chat_room_params_ephemeral_enabled() 
			 * @param time The ephemeral lifetime, default is disabled (0) 
			 */
			LINPHONECXX_PUBLIC void setEphemeralLifetime(long time);
			
			/**
			 * @brief Get the ephemeral message mode of the chat room associated with the
			 * given parameters. 
			 *
			 * @return the ephemeral message mode @ref ChatRoom::EphemeralMode 
			 */
			LINPHONECXX_PUBLIC linphone::ChatRoom::EphemeralMode getEphemeralMode() const;
			
			/**
			 * @brief Enables or disables forcing of ephemeral messages for the chat room
			 * associated with the given parameters. 
			 *
			 * @param mode Ephemeral message mode @ref ChatRoom::EphemeralMode. 
			 */
			LINPHONECXX_PUBLIC void setEphemeralMode(linphone::ChatRoom::EphemeralMode mode);
			
			/**
			 * @brief Get the group chat status of the chat room associated with the given
			 * parameters. 
			 *
			 * @return true if group chat is enabled, false if one-to-one 
			 */
			LINPHONECXX_PUBLIC bool groupEnabled() const;
			
			/**
			 * @brief Enables or disables group chat for the chat room associated with the
			 * given parameters. 
			 *
			 */
			LINPHONECXX_PUBLIC void enableGroup(bool group);
			
			/**
			 * @brief Returns whether the given parameters are valid or not. 
			 *
			 * @return true if the given parameters are valid, false otherwise 
			 */
			LINPHONECXX_PUBLIC bool isValid() const;
			
			/**
			 * @brief Get the real time text status of the chat room associated with the given
			 * parameters. 
			 *
			 * @return true if real time text is enabled, false otherwise 
			 */
			LINPHONECXX_PUBLIC bool rttEnabled() const;
			
			/**
			 * @brief Enables or disables real time text for the chat room associated with the
			 * given parameters. 
			 *
			 */
			LINPHONECXX_PUBLIC void enableRtt(bool rtt);
			
			/**
			 * @brief Get the subject of the chat room. 
			 *
			 * @return The subject.    
			 */
			LINPHONECXX_PUBLIC std::string getSubject() const;
			
			/**
			 * @brief Set the subject of the chat room. 
			 *
			 * @param subject The subject to set.    
			 */
			LINPHONECXX_PUBLIC void setSubject(const std::string & subject);
			
			
	};

};

#endif // _CHAT_ROOM_PARAMS_HH

#ifndef _MSC_VER
#pragma GCC diagnostic pop
#endif // _MSC_VER
