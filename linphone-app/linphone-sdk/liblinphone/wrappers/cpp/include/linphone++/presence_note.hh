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

#ifndef _PRESENCE_NOTE_HH
#define _PRESENCE_NOTE_HH

#include <string>
#include "object.hh"




struct _LinphonePresenceNote;


namespace linphone {


	/**
	 * @brief Presence note type holding information about a presence note. 
	 *
	 */
	class PresenceNote: public Object {
	
		public:

			LINPHONECXX_PUBLIC PresenceNote(void *ptr, bool takeRef=true);
			LINPHONECXX_PUBLIC _LinphonePresenceNote *cPtr() {return (_LinphonePresenceNote *)mPrivPtr;}

	
		public:
			
		
			/**
			 * @brief Gets the content of a presence note. 
			 *
			 * @return A pointer to the content of the presence note.    
			 */
			LINPHONECXX_PUBLIC std::string getContent() const;
			
			/**
			 * @brief Sets the content of a presence note. 
			 *
			 * @param content The content of the note.    
			 * @return 0 if successful, a value < 0 in case of error. 
			 */
			LINPHONECXX_PUBLIC linphone::Status setContent(const std::string & content);
			
			/**
			 * @brief Gets the language of a presence note. 
			 *
			 * @return A pointer to the language string of the presence note, or nullptr if no
			 * language is specified.    
			 */
			LINPHONECXX_PUBLIC std::string getLang() const;
			
			/**
			 * @brief Sets the language of a presence note. 
			 *
			 * @param lang The language of the note.    
			 * @return 0 if successful, a value < 0 in case of error. 
			 */
			LINPHONECXX_PUBLIC linphone::Status setLang(const std::string & lang);
			
			
	};

};

#endif // _PRESENCE_NOTE_HH

#ifndef _MSC_VER
#pragma GCC diagnostic pop
#endif // _MSC_VER
