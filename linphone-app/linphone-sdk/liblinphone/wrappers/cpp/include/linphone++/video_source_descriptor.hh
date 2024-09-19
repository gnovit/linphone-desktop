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

#ifndef _VIDEO_SOURCE_DESCRIPTOR_HH
#define _VIDEO_SOURCE_DESCRIPTOR_HH

#include <string>
#include "enums.hh"
#include "object.hh"




struct _LinphoneVideoSourceDescriptor;


namespace linphone {

	class Call;
	class VideoSourceDescriptor;

	/**
	 * @brief Object that is used to describe a video source. 
	 *
	 */
	class VideoSourceDescriptor: public Object {
	
		public:

			LINPHONECXX_PUBLIC VideoSourceDescriptor(void *ptr, bool takeRef=true);
			LINPHONECXX_PUBLIC _LinphoneVideoSourceDescriptor *cPtr() {return (_LinphoneVideoSourceDescriptor *)mPrivPtr;}

	
		public:
			
		
			/**
			 * @brief Gets the call of a @ref VideoSourceDescriptor. 
			 *
			 * @return The @ref Call of the video source descriptor if it's type is
			 * LinphoneVideoSourceCall, nullptr otherwise.    
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<linphone::Call> getCall() const;
			
			/**
			 * @brief Sets the source of a @ref VideoSourceDescriptor with a call. 
			 *
			 * Setting a @ref VideoSourceDescriptor with a call will require the lib to have
			 * two calls running at the same time. To do so the media resource mode has to be
			 * set to LinphoneSharedMediaResources with Core::setMediaResourceMode().
			 * @param call The @ref Call that will be used as a video source.    
			 */
			LINPHONECXX_PUBLIC void setCall(const std::shared_ptr<linphone::Call> & call);
			
			/**
			 * @brief Gets the camera id of a @ref VideoSourceDescriptor. 
			 *
			 * @return The camera id of the video source descriptor if it's type is
			 * LinphoneVideoSourceCamera, nullptr otherwise.    
			 */
			LINPHONECXX_PUBLIC std::string getCameraId() const;
			
			/**
			 * @brief Sets the source of a @ref VideoSourceDescriptor with a camera id. 
			 *
			 * @param cameraId The camera id that will be used as a video source.    
			 */
			LINPHONECXX_PUBLIC void setCameraId(const std::string & cameraId);
			
			/**
			 * @brief Gets the image path of a @ref VideoSourceDescriptor. 
			 *
			 * @return The image path of the video source descriptor if it's type is
			 * LinphoneVideoSourceImage, nullptr otherwise.    
			 */
			LINPHONECXX_PUBLIC std::string getImage() const;
			
			/**
			 * @brief Sets the source of a @ref VideoSourceDescriptor with an image path. 
			 *
			 * @param imagePath The image path that will be used as a video source.    
			 */
			LINPHONECXX_PUBLIC void setImage(const std::string & imagePath);
			
			/**
			 * @brief Gets the type of a @ref VideoSourceDescriptor. 
			 *
			 * @return The @ref VideoSourceType corresponding to this video source descriptor. 
			 */
			LINPHONECXX_PUBLIC linphone::VideoSourceType getType() const;
			
			/**
			 * @brief Instantiate a new video source descriptor with values from source. 
			 *
			 * @return The newly created @ref VideoSourceDescriptor object.    
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<linphone::VideoSourceDescriptor> clone() const;
			
			
	};

};

#endif // _VIDEO_SOURCE_DESCRIPTOR_HH

#ifndef _MSC_VER
#pragma GCC diagnostic pop
#endif // _MSC_VER
