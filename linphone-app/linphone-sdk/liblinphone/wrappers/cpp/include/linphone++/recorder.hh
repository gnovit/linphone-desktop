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

#ifndef _RECORDER_HH
#define _RECORDER_HH

#include <string>
#include "recorder.hh"
#include "object.hh"




struct _LinphoneRecorder;


namespace linphone {

	class RecorderParams;
	class Content;

	/**
	 * @brief Object used to record the audio or video of a call. 
	 *
	 */
	class Recorder: public Object {
	
		public:
			/**
			* Enum representing the file format of a recording. 
			*
			*/
			enum class FileFormat {
				/**
				*/
				Unknown,
				/**
				*/
				Wav,
				/**
				*/
				Mkv
			};

			/**
			* Enum representing the state of a recording. 
			*
			*/
			enum class State {
				/**
				* No file is opened for recording. 
				*/
				Closed,
				/**
				* The recorder is paused. 
				*/
				Paused,
				/**
				* The recorder is running. 
				*/
				Running
			};


			LINPHONECXX_PUBLIC Recorder(void *ptr, bool takeRef=true);
			LINPHONECXX_PUBLIC _LinphoneRecorder *cPtr() {return (_LinphoneRecorder *)mPrivPtr;}

	
		public:
			
		
			/**
			 * @brief Get linear volume when capturing audio. 
			 *
			 * @return Linear volume. 
			 */
			LINPHONECXX_PUBLIC float getCaptureVolume() const;
			
			/**
			 * @brief Gets the duration of the recording. 
			 *
			 * @return the duration of the recording, in milliseconds. 
			 */
			LINPHONECXX_PUBLIC int getDuration() const;
			
			/**
			 * @brief Gets the file used for recording. 
			 *
			 * @return the file used for the recording if any.    
			 */
			LINPHONECXX_PUBLIC std::string getFile() const;
			
			/**
			 * @brief Retrieve the @ref RecorderParams object. 
			 *
			 * @return The @ref RecorderParams object.    
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<const linphone::RecorderParams> getParams() const;
			
			/**
			 * @brief Set the @ref RecorderParams object. 
			 *
			 * @param params The @ref RecorderParams object to set.    
			 */
			LINPHONECXX_PUBLIC void setParams(const std::shared_ptr<linphone::RecorderParams> & params);
			
			/**
			 * @brief Gets the current state of the recorder. 
			 *
			 * @return the current @ref State. 
			 */
			LINPHONECXX_PUBLIC State getState() const;
			
			/**
			 * @brief Close the opened file. 
			 *
			 */
			LINPHONECXX_PUBLIC void close();
			
			/**
			 * @brief Create a content from the recording, for example to send it in a chat
			 * message. 
			 *
			 * @warning Recorder must be in Closed state! 
			 * @return the @ref Content matching the recording, or nullptr.    
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<linphone::Content> createContent();
			
			/**
			 * @brief Open a file for recording. 
			 *
			 * @param file The path to the file to open.    
			 */
			LINPHONECXX_PUBLIC linphone::Status open(const std::string & file);
			
			/**
			 * @brief Pause the recording. 
			 *
			 */
			LINPHONECXX_PUBLIC linphone::Status pause();
			
			/**
			 * @brief Start the recording into the opened file. 
			 *
			 */
			LINPHONECXX_PUBLIC linphone::Status start();
			
			
	};

};

#endif // _RECORDER_HH

#ifndef _MSC_VER
#pragma GCC diagnostic pop
#endif // _MSC_VER
