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

#ifndef _PARTICIPANT_DEVICE_HH
#define _PARTICIPANT_DEVICE_HH

#include <string>
#include <cstdint>
#include "participant_device.hh"
#include "chat_room.hh"
#include "enums.hh"
#include "object.hh"




struct _LinphoneParticipantDevice;


namespace linphone {

	class Address;
	class ParticipantDeviceListener;

	/**
	 * @brief This object represents a unique device for a member of a @ref Conference
	 * or @ref ChatRoom. 
	 *
	 * Devices are identified by the gruu parameter inside the @ref Address which can
	 * be obtained by getAddress(). It is specially usefull to know the security level
	 * of each device inside an end-to-end encrypted @ref ChatRoom.
	 * You can get a list of all @ref ParticipantDevice using
	 * Participant::getDevices(). 
	 */
	class ParticipantDevice: public MultiListenableObject {
	
		public:
			/**
			* @ref JoiningMethod is used to indicate how a participant joined a conference or
			* if it is the focus. 
			*
			*/
			enum class JoiningMethod {
				/**
				* device called the conference 
				*/
				DialedIn = 0,
				/**
				* device is called the conference 
				*/
				DialedOut = 1,
				/**
				* device is the focus 
				*/
				FocusOwner = 2
			};

			/**
			* @ref DisconnectionMethod is used to indicate how a participant left a
			* conference. 
			*
			*/
			enum class DisconnectionMethod {
				/**
				* an admin removes the device from a conference 
				*/
				Booted = 0,
				/**
				* the device disconnects from the conference 
				*/
				Departed = 1,
				/**
				* device is busy 
				*/
				Busy = 2,
				/**
				* an error occurred while the device is leaving the conference or he declined a
				* call from the server 
				*/
				Failed = 3
			};

			/**
			* @ref State is used to list all states a participant device can be in 
			*
			*/
			enum class State {
				/**
				* an INVITE has been sent 
				*/
				Joining = 0,
				/**
				* the SIP session has been concluded, participant is part of the conference 
				*/
				Present = 1,
				/**
				* A BYE is pending. 
				*/
				Leaving = 2,
				/**
				* The Session is terminated. 
				*/
				Left = 3,
				/**
				* Initial state for the server group chatroom, when the participant has not yet
				* been INVITEd. 
				*/
				ScheduledForJoining = 4,
				/**
				* Transitional state for a participant that will receive a BYE shortly. 
				*/
				ScheduledForLeaving = 5,
				/**
				* the SIP session has been concluded, participant is not media mixed 
				*/
				OnHold = 6,
				/**
				* 180 Ringing 
				*/
				Alerting = 7,
				/**
				* Some medias have been muted by the focus. 
				*/
				MutedByFocus = 8
			};


			LINPHONECXX_PUBLIC ParticipantDevice(void *ptr, bool takeRef=true);
			LINPHONECXX_PUBLIC _LinphoneParticipantDevice *cPtr() {return (_LinphoneParticipantDevice *)mPrivPtr;}

			/**
			 * @brief Add an application listener to the ParticipantDevice instance.
			 *
			 * @param listener the application listener
			 */
			LINPHONECXX_PUBLIC void addListener(const std::shared_ptr<ParticipantDeviceListener> &listener);
			/**
			 * @brief Remove a previously added listener from the ParticipantDevice instance.
			 *
			 * @param listener the application listener
			 */
			LINPHONECXX_PUBLIC void removeListener(const std::shared_ptr<ParticipantDeviceListener> &listener);
	
		public:
			
		
			/**
			 * @brief Get the address of a participant's device. 
			 *
			 * @return The @ref Address of the participant's device    
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<const linphone::Address> getAddress() const;
			
			/**
			 * @brief Get the disconnection method. 
			 *
			 * @return disconnection method @ref DisconnectionMethod 
			 */
			LINPHONECXX_PUBLIC DisconnectionMethod getDisconnectionMethod() const;
			
			/**
			 * @brief Get the disconnection reason. 
			 *
			 * @return disconnection reason    
			 */
			LINPHONECXX_PUBLIC std::string getDisconnectionReason() const;
			
			/**
			 * @brief Return whether the participant device is in a conference or not. 
			 *
			 * @return a boolean to state whether the device is in a conference 
			 */
			LINPHONECXX_PUBLIC bool isInConference() const;
			
			/**
			 * @brief Return whether the participant device is muted or not. 
			 *
			 * @return true if the participant device is muted, false otherwise. 
			 */
			LINPHONECXX_PUBLIC bool getIsMuted() const;
			
			/**
			 * @brief Return whether the participant device is speaking or not. 
			 *
			 * @return true if the participant device is speaking, false otherwise. 
			 */
			LINPHONECXX_PUBLIC bool getIsSpeaking() const;
			
			/**
			 * @brief Get the joining method or it the device is the focus owner. 
			 *
			 * @return joining method or focus owner @ref JoiningMethod 
			 */
			LINPHONECXX_PUBLIC JoiningMethod getJoiningMethod() const;
			
			/**
			 * @brief Return the name of the device or nullptr. 
			 *
			 * @return the name of the device or nullptr.    
			 */
			LINPHONECXX_PUBLIC std::string getName() const;
			
			/**
			 * @brief Get window ID. 
			 *
			 * @return the window ID of the device    
			 */
			LINPHONECXX_PUBLIC void * getNativeVideoWindowId() const;
			
			/**
			 * @brief Set window ID for a device. 
			 *
			 * @param windowId the window ID of the device    
			 */
			LINPHONECXX_PUBLIC void setNativeVideoWindowId(void * windowId);
			
			/**
			 * @brief Get the security level of a participant's device. 
			 *
			 * @return The @ref ChatRoom::SecurityLevel of the device 
			 */
			LINPHONECXX_PUBLIC linphone::ChatRoom::SecurityLevel getSecurityLevel() const;
			
			/**
			 * @brief Get the state of a participant device. 
			 *
			 * @return The @ref State of the device 
			 */
			LINPHONECXX_PUBLIC State getState() const;
			
			/**
			 * @brief Get the timestamp the device left a conference. 
			 *
			 * @return time of disconnection a conference as returned by time(nullptr). For
			 * UNIX based systems it is the number of seconds since 00:00hours of the 1st of
			 * January 1970 
			 */
			LINPHONECXX_PUBLIC time_t getTimeOfDisconnection() const;
			
			/**
			 * @brief Get the timestamp the device joined a conference. 
			 *
			 * @return time of joining a conference as returned by time(nullptr). For UNIX
			 * based systems it is the number of seconds since 00:00hours of the 1st of
			 * January 1970 
			 */
			LINPHONECXX_PUBLIC time_t getTimeOfJoining() const;
			
			/**
			 * @brief Create a window ID and return it. 
			 *
			 * @return the window ID of the device    
			 */
			LINPHONECXX_PUBLIC void * createNativeVideoWindowId() const;
			
			/**
			 * @brief Get the audio stream SSRC of the device. 
			 *
			 * @param streamType A @ref StreamType 
			 * @return the audio stream SSRC of the device 
			 */
			LINPHONECXX_PUBLIC uint32_t getSsrc(linphone::StreamType streamType) const;
			
			/**
			 * @brief Get the stream availability of the device. 
			 *
			 * The availability information represents whether a given stream type is
			 * currently available to be presented in the conference for a @ref
			 * ParticipantDevice 
			 * @param streamType A @ref StreamType 
			 * @return true if the stream of type stream_type is available for device, false
			 * otherwise 
			 */
			LINPHONECXX_PUBLIC bool getStreamAvailability(linphone::StreamType streamType) const;
			
			/**
			 * @brief Get the stream capability of the device. 
			 *
			 * The capability information represents the capability for the #ParticipantDevice
			 * to handle a given stream type (audio, video or text). 
			 * @param streamType A @ref StreamType 
			 * @return the capability of stream of type stream_type of the device @ref
			 * MediaDirection 
			 */
			LINPHONECXX_PUBLIC linphone::MediaDirection getStreamCapability(linphone::StreamType streamType) const;
			
			
		private:
			void *createCallbacks() override;
	};

};

#endif // _PARTICIPANT_DEVICE_HH

#ifndef _MSC_VER
#pragma GCC diagnostic pop
#endif // _MSC_VER
