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

#ifndef _CHAT_MESSAGE_LISTENER_HH
#define _CHAT_MESSAGE_LISTENER_HH

#include "chat_message.hh"
#include "object.hh"






namespace linphone {

	class ChatMessage;
	class ChatMessageReaction;
	class Address;
	class Content;
	class Buffer;
	class ParticipantImdnState;

	/**
	 * @brief An object to handle the callbacks for the handling a @ref ChatMessage
	 * objects. 
	 *
	 */
	class ChatMessageListener: public Listener {
	
		public:


	
		public:
			
		
			/**
			 * @brief Call back used to notify message delivery status. 
			 *
			 * @param message @ref ChatMessage object    
			 * @param state @ref ChatMessage::State 
			 */
			LINPHONECXX_PUBLIC virtual void onMsgStateChanged(const std::shared_ptr<linphone::ChatMessage> & message, linphone::ChatMessage::State state) {};
			
			/**
			 * @brief Callback used to notify a reaction has been received or sent for a given
			 * message. 
			 *
			 * @param message LinphoneChatMessage object    
			 * @param reaction the LinphoneChatMessageReaction reaction that was sent or
			 * received    
			 */
			LINPHONECXX_PUBLIC virtual void onNewMessageReaction(const std::shared_ptr<linphone::ChatMessage> & message, const std::shared_ptr<const linphone::ChatMessageReaction> & reaction) {};
			
			/**
			 * @brief Callback used to notify a reaction has been removed from a given
			 * message. 
			 *
			 * @param message LinphoneChatMessage object    
			 * @param address the LinphoneAddress of the person that removed it's reaction    
			 */
			LINPHONECXX_PUBLIC virtual void onReactionRemoved(const std::shared_ptr<linphone::ChatMessage> & message, const std::shared_ptr<const linphone::Address> & address) {};
			
			/**
			 * @brief File transfer receive callback prototype. 
			 *
			 * This function is called by the core upon an incoming File transfer is started.
			 * This function may be call several time for the same file in case of large file. 
			 * @param message @ref ChatMessage message from which the body is received.    
			 * @param content @ref Content incoming content information    
			 * @param buffer @ref Buffer holding the received data. Empty buffer means end of
			 * file.    
			 */
			LINPHONECXX_PUBLIC virtual void onFileTransferRecv(const std::shared_ptr<linphone::ChatMessage> & message, const std::shared_ptr<linphone::Content> & content, const std::shared_ptr<const linphone::Buffer> & buffer) {};
			
			/**
			 * @brief File transfer send callback prototype. 
			 *
			 * This function is called by the core when an outgoing file transfer is started.
			 * This function is called until size is set to 0. 
			 * @param message @ref ChatMessage message from which the body is received.    
			 * @param content @ref Content outgoing content    
			 * @param offset the offset in the file from where to get the data to be sent 
			 * @param size the number of bytes expected by the framework 
			 * @return A @ref Buffer object holding the data written by the application. An
			 * empty buffer means end of file.    
			 * @warning The returned value isn't used, hence the deprecation! 
			 * @deprecated 17/08/2020 Use LinphoneChatMessageCbsFileTransferSendChunkCb
			 * instead. 
			 */
			LINPHONECXX_PUBLIC virtual std::shared_ptr<linphone::Buffer> onFileTransferSend(const std::shared_ptr<linphone::ChatMessage> & message, const std::shared_ptr<linphone::Content> & content, size_t offset, size_t size) = 0;
			
			/**
			 * @brief File transfer send callback prototype. 
			 *
			 * This function is called by the core when an outgoing file transfer is started.
			 * This function is called until size is set to 0. 
			 * @param message @ref ChatMessage message from which the body is received.    
			 * @param content @ref Content outgoing content    
			 * @param offset the offset in the file from where to get the data to be sent 
			 * @param size the number of bytes expected by the framework 
			 * @param buffer A @ref Buffer to be filled. Leave it empty when end of file has
			 * been reached.    
			 */
			LINPHONECXX_PUBLIC virtual void onFileTransferSendChunk(const std::shared_ptr<linphone::ChatMessage> & message, const std::shared_ptr<linphone::Content> & content, size_t offset, size_t size, const std::shared_ptr<linphone::Buffer> & buffer) {};
			
			/**
			 * @brief File transfer progress indication callback prototype. 
			 *
			 * @param message @ref ChatMessage message from which the body is received.    
			 * @param content @ref Content incoming content information    
			 * @param offset The number of bytes sent/received since the beginning of the
			 * transfer. 
			 * @param total The total number of bytes to be sent/received. 
			 */
			LINPHONECXX_PUBLIC virtual void onFileTransferProgressIndication(const std::shared_ptr<linphone::ChatMessage> & message, const std::shared_ptr<linphone::Content> & content, size_t offset, size_t total) {};
			
			/**
			 * @brief Call back used to notify participant IMDN state. 
			 *
			 * @param message @ref ChatMessage object    
			 * @param state @ref ParticipantImdnState    
			 */
			LINPHONECXX_PUBLIC virtual void onParticipantImdnStateChanged(const std::shared_ptr<linphone::ChatMessage> & message, const std::shared_ptr<const linphone::ParticipantImdnState> & state) {};
			
			/**
			 * @brief Callback used to notify an ephemeral message that its lifespan before
			 * disappearing has started to decrease. 
			 *
			 * This callback is called when the ephemeral message is read by the receiver. 
			 * @param message LinphoneChatMessage object    
			 */
			LINPHONECXX_PUBLIC virtual void onEphemeralMessageTimerStarted(const std::shared_ptr<linphone::ChatMessage> & message) {};
			
			/**
			 * @brief Call back used to notify ephemeral message is deleted. 
			 *
			 * @param message LinphoneChatMessage object    
			 */
			LINPHONECXX_PUBLIC virtual void onEphemeralMessageDeleted(const std::shared_ptr<linphone::ChatMessage> & message) {};
			
			
	};

};

#endif // _CHAT_MESSAGE_LISTENER_HH

#ifndef _MSC_VER
#pragma GCC diagnostic pop
#endif // _MSC_VER
