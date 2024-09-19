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

#ifndef _PARTICIPANT_DEVICE_LISTENER_HH
#define _PARTICIPANT_DEVICE_LISTENER_HH

#include "participant_device.hh"
#include "enums.hh"
#include "object.hh"






namespace linphone {

	class ParticipantDevice;

	/**
	 * @brief An object to handle the callbacks for the handling a @ref
	 * ParticipantDevice objects. 
	 *
	 * Use Factory::createParticipantDeviceCbs() to create an instance. Then pass the
	 * object to a @ref ParticipantDevice instance through
	 * ParticipantDevice::addListener(). 
	 */
	class ParticipantDeviceListener: public Listener {
	
		public:


	
		public:
			
		
			/**
			 * @brief Callback used to notify that is this participant device speaking has
			 * changed. 
			 *
			 * @param participantDevice @ref ParticipantDevice object    
			 * @param isSpeaking is this participant device speaking 
			 */
			LINPHONECXX_PUBLIC virtual void onIsSpeakingChanged(const std::shared_ptr<linphone::ParticipantDevice> & participantDevice, bool isSpeaking) {};
			
			/**
			 * @brief Callback used to notify that this participant device is muted or is no
			 * longer muted. 
			 *
			 * @param participantDevice @ref ParticipantDevice object    
			 * @param isMuted is this participant device muted 
			 */
			LINPHONECXX_PUBLIC virtual void onIsMuted(const std::shared_ptr<linphone::ParticipantDevice> & participantDevice, bool isMuted) {};
			
			/**
			 * @brief Callback used to notify that participant device changed state. 
			 *
			 * @param participantDevice LinphoneParticipantDevice object    
			 */
			LINPHONECXX_PUBLIC virtual void onStateChanged(const std::shared_ptr<linphone::ParticipantDevice> & participantDevice, linphone::ParticipantDevice::State state) {};
			
			/**
			 * @brief Callback used to notify that participant device stream capability has
			 * changed. 
			 *
			 * @param participantDevice @ref ParticipantDevice object    
			 * @param direction participant device's audio direction 
			 */
			LINPHONECXX_PUBLIC virtual void onStreamCapabilityChanged(const std::shared_ptr<linphone::ParticipantDevice> & participantDevice, linphone::MediaDirection direction, linphone::StreamType streamType) {};
			
			/**
			 * @brief Callback used to notify that participant device stream availability has
			 * changed. 
			 *
			 * @param participantDevice @ref ParticipantDevice object    
			 */
			LINPHONECXX_PUBLIC virtual void onStreamAvailabilityChanged(const std::shared_ptr<linphone::ParticipantDevice> & participantDevice, bool available, linphone::StreamType streamType) {};
			
			/**
			 * @brief Callback to notify that there are errors from the video rendering of the
			 * participant device. 
			 *
			 * Check LinphoneCallCbsVideoDisplayErrorOccurredCb for more details.
			 * @param participantDevice LinphoneParticipantDevice object    
			 * @param errorCode the error code coming from the display render. 
			 */
			LINPHONECXX_PUBLIC virtual void onVideoDisplayErrorOccurred(const std::shared_ptr<linphone::ParticipantDevice> & participantDevice, int errorCode) {};
			
			
	};

};

#endif // _PARTICIPANT_DEVICE_LISTENER_HH

#ifndef _MSC_VER
#pragma GCC diagnostic pop
#endif // _MSC_VER
