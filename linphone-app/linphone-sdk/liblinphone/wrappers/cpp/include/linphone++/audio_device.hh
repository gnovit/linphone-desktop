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

#ifndef _AUDIO_DEVICE_HH
#define _AUDIO_DEVICE_HH

#include <string>
#include "audio_device.hh"
#include "object.hh"




struct _LinphoneAudioDevice;


namespace linphone {


	/**
	 * @brief Object holding audio device information. 
	 *
	 * It contains the name of the device, it's type if available (Earpiece, Speaker,
	 * Bluetooth, etc..) and capabilities (input, output or both) the name of the
	 * driver that created it (filter in mediastreamer).
	 * You can use the @ref AudioDevice objects to configure default input/output
	 * devices or do it dynamically during a call.
	 * To get the list of available devices, use Core::getAudioDevices(). This list
	 * will be limited to one device of each type. Use Core::getExtendedAudioDevices()
	 * for a complete list. 
	 */
	class AudioDevice: public Object {
	
		public:
			/**
			* @ref Capabilities enum represents whether a device can record audio, play audio
			* or both 
			*
			*/
			enum class Capabilities {
				/**
				* Can record audio. 
				*/
				CapabilityRecord = 1<<0,
				/**
				* Can play audio. 
				*/
				CapabilityPlay = 1<<1,
				/**
				* Can play and record audio. 
				*/
				CapabilityAll = 3
			};

			/**
			* @ref Type enum represents the different types of an audio device. 
			*
			*/
			enum class Type {
				/**
				* Unknown. 
				*/
				Unknown = 0,
				/**
				* Microphone. 
				*/
				Microphone = 1,
				/**
				* Earpiece. 
				*/
				Earpiece = 2,
				/**
				* Speaker. 
				*/
				Speaker = 3,
				/**
				* Bluetooth. 
				*/
				Bluetooth = 4,
				/**
				* Bluetooth A2DP. 
				*/
				BluetoothA2DP = 5,
				/**
				* Telephony. 
				*/
				Telephony = 6,
				/**
				* AuxLine. 
				*/
				AuxLine = 7,
				/**
				* GenericUsb. 
				*/
				GenericUsb = 8,
				/**
				* Headset. 
				*/
				Headset = 9,
				/**
				* Headphones. 
				*/
				Headphones = 10,
				/**
				* Hearing Aid. 
				*/
				HearingAid = 11
			};


			LINPHONECXX_PUBLIC AudioDevice(void *ptr, bool takeRef=true);
			LINPHONECXX_PUBLIC _LinphoneAudioDevice *cPtr() {return (_LinphoneAudioDevice *)mPrivPtr;}

	
		public:
			
		
			/**
			 * @brief Returns the capabilities of the device. 
			 *
			 * @return the @ref Capabilities of the audio device (RECORD, PLAY or both) as a
			 * bit mask 
			 */
			LINPHONECXX_PUBLIC Capabilities getCapabilities() const;
			
			/**
			 * @brief Returns the name of the audio device. 
			 *
			 * @return the name of the audio device.    
			 */
			LINPHONECXX_PUBLIC std::string getDeviceName() const;
			
			/**
			 * @brief Returns the driver name used by the device. 
			 *
			 * @return the name of the driver used by this audio device.    
			 */
			LINPHONECXX_PUBLIC std::string getDriverName() const;
			
			/**
			 * @brief Returns whether the audio device automatically follows the system's
			 * audio routing policy. 
			 *
			 * This capability is available on some system (typically iOS) and might be
			 * convenient to simply specify liblinphone to let the system decide about which
			 * audio route is being used to handle a call. The actual @ref Type may be unknown
			 * at some point, typically when no calls are running, otherwise it is reflected
			 * to be the actual system's audio route. 
			 * @return true if the audio device automatically follows the system audio routing
			 * policy. 
			 */
			LINPHONECXX_PUBLIC bool getFollowsSystemRoutingPolicy() const;
			
			/**
			 * @brief Returns the id of the audio device. 
			 *
			 * @return the id of the audio device.    
			 */
			LINPHONECXX_PUBLIC std::string getId() const;
			
			/**
			 * @brief Returns the type of the device. 
			 *
			 * @return the @ref Type of the audio device (microphone, speaker, earpiece,
			 * bluetooth, etc...) 
			 */
			LINPHONECXX_PUBLIC Type getType() const;
			
			/**
			 * @brief Returns whether or not the audio device has the given capability. 
			 *
			 * @param capability the @ref Capabilities to check 
			 * @return true if the audio device has the capability, false otherwise 
			 */
			LINPHONECXX_PUBLIC bool hasCapability(Capabilities capability) const;
			
			
	};

};

#endif // _AUDIO_DEVICE_HH

#ifndef _MSC_VER
#pragma GCC diagnostic pop
#endif // _MSC_VER
