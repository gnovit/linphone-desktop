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

#ifndef _PLAYER_HH
#define _PLAYER_HH

#include <string>
#include "player.hh"
#include "object.hh"




struct _LinphonePlayer;


namespace linphone {

	class Core;
	class PlayerListener;

	/**
	 * @brief Player interface. 
	 *
	 */
	class Player: public MultiListenableObject {
	
		public:
			/**
			* The state of a @ref Player. 
			*
			*/
			enum class State {
				/**
				* No file is opened for playing. 
				*/
				Closed = 0,
				/**
				* The player is paused. 
				*/
				Paused = 1,
				/**
				* The player is playing. 
				*/
				Playing = 2
			};


			LINPHONECXX_PUBLIC Player(void *ptr, bool takeRef=true);
			LINPHONECXX_PUBLIC _LinphonePlayer *cPtr() {return (_LinphonePlayer *)mPrivPtr;}

			/**
			 * @brief Add an application listener to the Player instance.
			 *
			 * @param listener the application listener
			 */
			LINPHONECXX_PUBLIC void addListener(const std::shared_ptr<PlayerListener> &listener);
			/**
			 * @brief Remove a previously added listener from the Player instance.
			 *
			 * @param listener the application listener
			 */
			LINPHONECXX_PUBLIC void removeListener(const std::shared_ptr<PlayerListener> &listener);
	
		public:
			
		
			/**
			 * @brief Returns the @ref Core object managing this player's call, if any. 
			 *
			 * @return the @ref Core object associated    
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<linphone::Core> getCore() const;
			
			/**
			 * @brief Get the current position in the opened file. 
			 *
			 * @return The current position in the opened file 
			 */
			LINPHONECXX_PUBLIC int getCurrentPosition();
			
			/**
			 * @brief Get the duration of the opened file. 
			 *
			 * @return The duration of the opened file 
			 */
			LINPHONECXX_PUBLIC int getDuration();
			
			/**
			 * @brief Returns whether the file has video and if it can be displayed. 
			 *
			 * @return true if file has video and it can be displayed, false otherwise 
			 */
			LINPHONECXX_PUBLIC bool getIsVideoAvailable();
			
			/**
			 * @brief Get the current state of a player. 
			 *
			 * @return The current @ref State of the player. 
			 */
			LINPHONECXX_PUBLIC State getState();
			
			/**
			 * @brief Get the volume gain of the player. 
			 *
			 * @return Percentage of the gain. Valid values are in [ 0.0 : 1.0 ]. 
			 */
			LINPHONECXX_PUBLIC float getVolumeGain();
			
			/**
			 * @brief Set the volume gain of the player. 
			 *
			 * @param gain Percentage of the gain. Valid values are in [ 0.0 : 1.0 ]. 
			 */
			LINPHONECXX_PUBLIC void setVolumeGain(float gain);
			
			/**
			 * @brief Sets a window id to be used to display video if any. 
			 *
			 * @param windowId The window id pointer to use.    
			 */
			LINPHONECXX_PUBLIC void setWindowId(void * windowId);
			
			/**
			 * @brief Close the opened file. 
			 *
			 */
			LINPHONECXX_PUBLIC void close();
			
			/**
			 * @brief Create a window id to be used to display video if any. 
			 *
			 * @return window_id The window id pointer to use.    
			 */
			LINPHONECXX_PUBLIC void * createWindowId();
			
			/**
			 * @brief Open a file for playing. 
			 *
			 * Actually, only WAVE and MKV/MKA file formats are supported and a limited set of
			 * codecs depending of the selected format. Here are the list of working
			 * combinations:
			 * @param filename The path to the file to open    
			 */
			LINPHONECXX_PUBLIC linphone::Status open(const std::string & filename);
			
			/**
			 * @brief Pause the playing of a file. 
			 *
			 * @return 0 on success, a negative value otherwise 
			 */
			LINPHONECXX_PUBLIC linphone::Status pause();
			
			/**
			 * @brief Seek in an opened file. 
			 *
			 * @param timeMs The time we want to go to in the file (in milliseconds). 
			 * @return 0 on success, a negative value otherwise. 
			 */
			LINPHONECXX_PUBLIC linphone::Status seek(int timeMs);
			
			/**
			 * @brief Start playing a file that has been opened with open(). 
			 *
			 * @return 0 on success, a negative value otherwise 
			 */
			LINPHONECXX_PUBLIC linphone::Status start();
			
			
		private:
			void *createCallbacks() override;
	};

};

#endif // _PLAYER_HH

#ifndef _MSC_VER
#pragma GCC diagnostic pop
#endif // _MSC_VER
