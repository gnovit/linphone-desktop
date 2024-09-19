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

#ifndef _VIDEO_DEFINITION_HH
#define _VIDEO_DEFINITION_HH

#include <string>
#include "object.hh"




struct _LinphoneVideoDefinition;


namespace linphone {

	class VideoDefinition;

	/**
	 * @brief This object represents a video definition, eg. 
	 *
	 * it's width, it's height and possibly it's name.
	 * It is mostly used to configure the default video size sent by your camera
	 * during a video call with Core::setPreferredVideoDefinition() method. 
	 */
	class VideoDefinition: public Object {
	
		public:

			LINPHONECXX_PUBLIC VideoDefinition(void *ptr, bool takeRef=true);
			LINPHONECXX_PUBLIC _LinphoneVideoDefinition *cPtr() {return (_LinphoneVideoDefinition *)mPrivPtr;}

	
		public:
			
		
			/**
			 * @brief Get the height of the video definition. 
			 *
			 * @return The height of the video definition 
			 */
			LINPHONECXX_PUBLIC unsigned int getHeight() const;
			
			/**
			 * @brief Set the height of the video definition. 
			 *
			 * @param height The height of the video definition 
			 */
			LINPHONECXX_PUBLIC void setHeight(unsigned int height);
			
			/**
			 * @brief Tells whether a @ref VideoDefinition is undefined. 
			 *
			 * @return A boolean value telling whether the @ref VideoDefinition is undefined. 
			 */
			LINPHONECXX_PUBLIC bool isUndefined() const;
			
			/**
			 * @brief Get the name of the video definition. 
			 *
			 * @return The name of the video definition    
			 */
			LINPHONECXX_PUBLIC std::string getName() const;
			
			/**
			 * @brief Set the name of the video definition. 
			 *
			 * @param name The name of the video definition    
			 */
			LINPHONECXX_PUBLIC void setName(const std::string & name);
			
			/**
			 * @brief Get the width of the video definition. 
			 *
			 * @return The width of the video definition 
			 */
			LINPHONECXX_PUBLIC unsigned int getWidth() const;
			
			/**
			 * @brief Set the width of the video definition. 
			 *
			 * @param width The width of the video definition 
			 */
			LINPHONECXX_PUBLIC void setWidth(unsigned int width);
			
			/**
			 * @brief Clone a video definition. 
			 *
			 * @return The new clone of the video definition    
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<linphone::VideoDefinition> clone() const;
			
			/**
			 * @brief Tells whether two @ref VideoDefinition objects are equal (the widths and
			 * the heights are the same but can be switched). 
			 *
			 * @param videoDefinition2 @ref VideoDefinition object    
			 * @return A boolean value telling whether the two @ref VideoDefinition objects
			 * are equal. 
			 */
			LINPHONECXX_PUBLIC bool equals(const std::shared_ptr<const linphone::VideoDefinition> & videoDefinition2) const;
			
			/**
			 * @brief Set the width and the height of the video definition. 
			 *
			 * @param width The width of the video definition 
			 * @param height The height of the video definition 
			 */
			LINPHONECXX_PUBLIC void setDefinition(unsigned int width, unsigned int height);
			
			/**
			 * @brief Tells whether two @ref VideoDefinition objects are strictly equal (the
			 * widths are the same and the heights are the same). 
			 *
			 * @param videoDefinition2 @ref VideoDefinition object    
			 * @return A boolean value telling whether the two @ref VideoDefinition objects
			 * are strictly equal. 
			 */
			LINPHONECXX_PUBLIC bool strictEquals(const std::shared_ptr<const linphone::VideoDefinition> & videoDefinition2) const;
			
			
	};

};

#endif // _VIDEO_DEFINITION_HH

#ifndef _MSC_VER
#pragma GCC diagnostic pop
#endif // _MSC_VER
