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

#ifndef _LOGGING_SERVICE_LISTENER_HH
#define _LOGGING_SERVICE_LISTENER_HH

#include <string>
#include "enums.hh"
#include "object.hh"






namespace linphone {

	class LoggingService;

	/**
	 * @brief Listener for @ref LoggingService. 
	 *
	 */
	class LoggingServiceListener: public Listener {
	
		public:


	
		public:
			
		
			/**
			 * @brief Type of callbacks called each time liblinphone write a log message. 
			 *
			 * @param logService A pointer on the logging service singleton.    
			 * @param domain A string describing which sub-library of liblinphone the message
			 * is coming from.    
			 * @param level Verbosity @ref LogLevel of the message. 
			 * @param message Content of the message.    
			 */
			LINPHONECXX_PUBLIC virtual void onLogMessageWritten(const std::shared_ptr<linphone::LoggingService> & logService, const std::string & domain, linphone::LogLevel level, const std::string & message) {};
			
			
	};

};

#endif // _LOGGING_SERVICE_LISTENER_HH

#ifndef _MSC_VER
#pragma GCC diagnostic pop
#endif // _MSC_VER
