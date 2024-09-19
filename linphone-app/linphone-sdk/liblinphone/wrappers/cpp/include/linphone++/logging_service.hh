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

#ifndef _LOGGING_SERVICE_HH
#define _LOGGING_SERVICE_HH

#include <string>
#include "enums.hh"
#include "object.hh"




struct _LinphoneLoggingService;


namespace linphone {

	class LoggingService;
	class LoggingServiceListener;

	/**
	 * @brief Singleton class giving access to logging features. 
	 *
	 * It supports custom domain, writing into a file as well as several verbosity
	 * levels. The @ref LoggingServiceListener listener allows you to be notified each
	 * time a log is printed.
	 * As the @ref LoggingService is a singleton, use get() to get it. 
	 */
	class LoggingService: public MultiListenableObject {
	
		public:

			LINPHONECXX_PUBLIC LoggingService(void *ptr, bool takeRef=true);
			LINPHONECXX_PUBLIC _LinphoneLoggingService *cPtr() {return (_LinphoneLoggingService *)mPrivPtr;}

			/**
			 * @brief Add an application listener to the LoggingService instance.
			 *
			 * @param listener the application listener
			 */
			LINPHONECXX_PUBLIC void addListener(const std::shared_ptr<LoggingServiceListener> &listener);
			/**
			 * @brief Remove a previously added listener from the LoggingService instance.
			 *
			 * @param listener the application listener
			 */
			LINPHONECXX_PUBLIC void removeListener(const std::shared_ptr<LoggingServiceListener> &listener);
	
		public:
			
		
			/**
			 * @brief Get the domain where application logs are written (for example with
			 * message()). 
			 *
			 * @return The domain where application logs are written.    
			 */
			LINPHONECXX_PUBLIC std::string getDomain();
			
			/**
			 * @brief Set the domain where application logs are written (for example with
			 * message()). 
			 *
			 * @param domain The domain.    
			 * @note The domain is mandatory to write logs. This needs to be set before
			 * setting the log level. 
			 */
			LINPHONECXX_PUBLIC void setDomain(const std::string & domain);
			
			/**
			 * @brief Set the verbosity of the log. 
			 *
			 * For instance, a level of @ref LogLevel::Message will let pass fatal, error,
			 * warning and message-typed messages whereas trace and debug messages will be
			 * dumped out. 
			 * @param level the @ref LogLevel to set 
			 */
			LINPHONECXX_PUBLIC void setLogLevel(linphone::LogLevel level);
			
			/**
			 * @brief Gets the log level mask. 
			 *
			 * @return the log level mask 
			 */
			LINPHONECXX_PUBLIC unsigned int getLogLevelMask() const;
			
			/**
			 * @brief Sets the types of messages that will be authorized to be written in the
			 * log. 
			 *
			 * @param mask Example: @ref LogLevel::Message|@ref LogLevel::Error will ONLY let
			 * pass message-typed and error messages. 
			 * @note Calling that function reset the log level that has been specified by
			 * setLogLevel(). 
			 */
			LINPHONECXX_PUBLIC void setLogLevelMask(unsigned int mask);
			
			/**
			 * @brief Allow Linphone to set handlers for catching exceptions and write the
			 * stack trace into log. 
			 *
			 * Available for Windows. It keeps old handlers. 
			 * @param enable if true global handlers will be prepend by the logger handlers.
			 * By default, it is false. 
			 */
			LINPHONECXX_PUBLIC void enableStackTraceDumps(bool enable);
			
			/**
			 * @brief Write a LinphoneLogLevelDebug message to the logs. 
			 *
			 * @param message The log message.    
			 */
			LINPHONECXX_PUBLIC void debug(const std::string & message);
			
			/**
			 * @brief Write a LinphoneLogLevelError message to the logs. 
			 *
			 * @param message The log message.    
			 */
			LINPHONECXX_PUBLIC void error(const std::string & message);
			
			/**
			 * @brief Write a LinphoneLogLevelFatal message to the logs. 
			 *
			 * @param message The log message.    
			 */
			LINPHONECXX_PUBLIC void fatal(const std::string & message);
			
			/**
			 * @brief Write a LinphoneLogLevelMessage message to the logs. 
			 *
			 * @param message The log message.    
			 */
			LINPHONECXX_PUBLIC void message(const std::string & message);
			
			/**
			 * @brief Enables logging in a file. 
			 *
			 * That function enables an internal log handler that writes log messages in
			 * log-rotated files.
			 * @param dir Directory where to create the distinct parts of the log.    
			 * @param filename Name of the log file.    
			 * @param maxSize The maximal size of each part of the log. The log rotating is
			 * triggered each time the currently opened log part reach that limit. 
			 */
			LINPHONECXX_PUBLIC void setLogFile(const std::string & dir, const std::string & filename, size_t maxSize) const;
			
			/**
			 * @brief Write a LinphoneLogLevelTrace message to the logs. 
			 *
			 * @param message The log message.    
			 */
			LINPHONECXX_PUBLIC void trace(const std::string & message);
			
			/**
			 * @brief Write a LinphoneLogLevelWarning message to the logs. 
			 *
			 * @param message The log message.    
			 */
			LINPHONECXX_PUBLIC void warning(const std::string & message);
			
			;
			/**
			 * @brief Gets the singleton logging service object. 
			 *
			 * The singleton is automatically instantiated if it hasn't been done yet.
			 * @return A pointer on the @ref LoggingService singleton.    
			 */
			LINPHONECXX_PUBLIC static std::shared_ptr<linphone::LoggingService> get();
			

		private:
			void *createCallbacks() override;
	};

};

#endif // _LOGGING_SERVICE_HH

#ifndef _MSC_VER
#pragma GCC diagnostic pop
#endif // _MSC_VER
