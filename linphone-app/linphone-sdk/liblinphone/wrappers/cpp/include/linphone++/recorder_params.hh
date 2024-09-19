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

#ifndef _RECORDER_PARAMS_HH
#define _RECORDER_PARAMS_HH

#include <string>
#include "recorder.hh"
#include "object.hh"




struct _LinphoneRecorderParams;


namespace linphone {

	class AudioDevice;
	class RecorderParams;

	/**
	 * @brief Object containing various parameters of a @ref Recorder. 
	 *
	 */
	class RecorderParams: public Object {
	
		public:

			LINPHONECXX_PUBLIC RecorderParams(void *ptr, bool takeRef=true);
			LINPHONECXX_PUBLIC _LinphoneRecorderParams *cPtr() {return (_LinphoneRecorderParams *)mPrivPtr;}

	
		public:
			
		
			/**
			 * @brief Retrieve the @ref AudioDevice object. 
			 *
			 * @return the @ref AudioDevice object.    
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<const linphone::AudioDevice> getAudioDevice() const;
			
			/**
			 * @brief Set the @ref AudioDevice object. 
			 *
			 * @param device The @ref AudioDevice object to set.    
			 */
			LINPHONECXX_PUBLIC void setAudioDevice(const std::shared_ptr<const linphone::AudioDevice> & device);
			
			/**
			 * @brief Retrieves the @ref Recorder::FileFormat. 
			 *
			 * @return the @ref Recorder::FileFormat. 
			 */
			LINPHONECXX_PUBLIC linphone::Recorder::FileFormat getFileFormat() const;
			
			/**
			 * @brief Set the @ref Recorder::FileFormat. 
			 *
			 * @param format The @ref Recorder::FileFormat to set. 
			 */
			LINPHONECXX_PUBLIC void setFileFormat(linphone::Recorder::FileFormat format);
			
			/**
			 * @brief Retrieves the video codec. 
			 *
			 * @return the video codec.    
			 */
			LINPHONECXX_PUBLIC std::string getVideoCodec() const;
			
			/**
			 * @brief Set the video codec. 
			 *
			 * @param videoCodec The video codec to set.    
			 */
			LINPHONECXX_PUBLIC void setVideoCodec(const std::string & videoCodec);
			
			/**
			 * @brief Retrieves the webcam name. 
			 *
			 * @return the webcam name.    
			 */
			LINPHONECXX_PUBLIC std::string getWebcamName() const;
			
			/**
			 * @brief Set the webcam name. 
			 *
			 * @param webcamName The webcam name to set.    
			 */
			LINPHONECXX_PUBLIC void setWebcamName(const std::string & webcamName);
			
			/**
			 * @brief Retrieves the window id. 
			 *
			 * @return the window id.    
			 */
			LINPHONECXX_PUBLIC void * getWindowId() const;
			
			/**
			 * @brief Set the window id. 
			 *
			 * @param windowId The window id to set.    
			 */
			LINPHONECXX_PUBLIC void setWindowId(void * windowId);
			
			/**
			 * @brief Clone a @ref RecorderParams object. 
			 *
			 * @return the cloned @ref RecorderParams object.    
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<linphone::RecorderParams> clone() const;
			
			
	};

};

#endif // _RECORDER_PARAMS_HH

#ifndef _MSC_VER
#pragma GCC diagnostic pop
#endif // _MSC_VER
