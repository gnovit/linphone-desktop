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

#ifndef _CONFERENCE_PARAMS_HH
#define _CONFERENCE_PARAMS_HH

#include <string>
#include "conference.hh"
#include "object.hh"




struct _LinphoneConferenceParams;


namespace linphone {

	class Account;
	class Address;
	class ProxyConfig;
	class ConferenceParams;

	/**
	 * @brief Object defining parameters for a @ref Conference. 
	 *
	 * Can be created by calling function Core::createConferenceParams(). 
	 */
	class ConferenceParams: public Object {
	
		public:

			LINPHONECXX_PUBLIC ConferenceParams(void *ptr, bool takeRef=true);
			LINPHONECXX_PUBLIC _LinphoneConferenceParams *cPtr() {return (_LinphoneConferenceParams *)mPrivPtr;}

	
		public:
			
		
			/**
			 * @brief Returns the account for the conference. 
			 *
			 * @return a pointer to the account or nullptr if it is not set.    
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<linphone::Account> getAccount() const;
			
			/**
			 * @brief Check whether audio capabilities are enabled. 
			 *
			 * @return true if the conference supports audio capabilities, false otherwise 
			 */
			LINPHONECXX_PUBLIC bool audioEnabled() const;
			
			/**
			 * @brief Enable audio capabilities. 
			 *
			 * @param enable If true, audio will be enabled during conference 
			 */
			LINPHONECXX_PUBLIC void enableAudio(bool enable);
			
			/**
			 * @brief Check whether chat capabilities are enabled. 
			 *
			 * @return true if the conference supports chat capabilities, false otherwise 
			 */
			LINPHONECXX_PUBLIC bool chatEnabled() const;
			
			/**
			 * @brief Enable chat capabilities. 
			 *
			 * @param enable If true, chat is enabled during conference 
			 */
			LINPHONECXX_PUBLIC void enableChat(bool enable);
			
			/**
			 * @brief Get the conference factory address of the conference that has been set. 
			 *
			 * @return the factory address conference description.    
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<const linphone::Address> getConferenceFactoryAddress() const;
			
			/**
			 * @brief Set the conference factory address of the conference. 
			 *
			 * By default when creating a new conference, the factory address will come from
			 * the current proxy configuration. If nullptr then the conference will be local
			 * else it will be a remote conference. 
			 * @param address the conference factory address.    
			 */
			LINPHONECXX_PUBLIC void setConferenceFactoryAddress(const std::shared_ptr<const linphone::Address> & address);
			
			/**
			 * @brief Get conference description. 
			 *
			 * @return the conference description.    
			 */
			LINPHONECXX_PUBLIC std::string getDescription() const;
			
			/**
			 * @brief Set the description of the conference. 
			 *
			 * @param description the conference description.    
			 */
			LINPHONECXX_PUBLIC void setDescription(const std::string & description);
			
			/**
			 * @brief Get the end time of the conference. 
			 *
			 * @return end time of a conference as time_t type or 0 for open end of a
			 * conference. For UNIX based systems it is the number of seconds since 00:00hours
			 * of the 1st of January 1970 
			 */
			LINPHONECXX_PUBLIC time_t getEndTime() const;
			
			/**
			 * @brief Set the conference end time. 
			 *
			 * @param end the conference end time as the number of seconds between the desired
			 * end time and the 1st of January 1970. In order to program an undefined end of a
			 * conference, then program the end time to 0 
			 */
			LINPHONECXX_PUBLIC void setEndTime(time_t end);
			
			/**
			 * @brief Set the conference as hidden. 
			 *
			 * This means that the contact address will not have any conference releated
			 * attribute such as isfocus, the conference ID and the admin status. 
			 * @param hidden Boolean that states whether the conference is hidden or not 
			 */
			LINPHONECXX_PUBLIC void setHidden(bool hidden);
			
			/**
			 * @brief Check whether audio capabilities are enabled. 
			 *
			 * @return true if the conference supports audio capabilities, false otherwise 
			 * @deprecated 16/12/2021 Use audioEnabled() instead. 
			 */
			LINPHONECXX_PUBLIC LINPHONECXX_DEPRECATED bool isAudioEnabled() const;
			
			/**
			 * @brief Check whether chat capabilities are enabled. 
			 *
			 * @return true if the conference supports chat capabilities, false otherwise 
			 * @deprecated 16/12/2021 Use chatEnabled() instead. 
			 */
			LINPHONECXX_PUBLIC LINPHONECXX_DEPRECATED bool isChatEnabled() const;
			
			/**
			 * @brief Get the value of the hidden flag. 
			 *
			 * @return whether the conference is hidden or not 
			 */
			LINPHONECXX_PUBLIC bool isHidden() const;
			
			/**
			 * @brief Returns whether local participant has to enter the conference. 
			 *
			 * @return true if local participant is by default part of the conference, false
			 * otherwise 
			 * @deprecated 16/12/2021 Use localParticipantEnabled() instead. 
			 */
			LINPHONECXX_PUBLIC LINPHONECXX_DEPRECATED bool isLocalParticipantEnabled() const;
			
			/**
			 * @brief Returns whether conference can have only one participant. 
			 *
			 * @return true if the conference can have only one participant, false otherwise 
			 * @deprecated 16/12/2021 Use oneParticipantConferenceEnabled() instead. 
			 */
			LINPHONECXX_PUBLIC LINPHONECXX_DEPRECATED bool isOneParticipantConferenceEnabled() const;
			
			/**
			 * @brief Check whether video capabilities are enabled. 
			 *
			 * @return true if the conference supports video capabilities, false otherwise 
			 * @deprecated 16/12/2021 Use videoEnabled() instead. 
			 */
			LINPHONECXX_PUBLIC LINPHONECXX_DEPRECATED bool isVideoEnabled() const;
			
			/**
			 * @brief Returns whether local participant has to enter the conference. 
			 *
			 * @return true if local participant is by default part of the conference, false
			 * otherwise 
			 */
			LINPHONECXX_PUBLIC bool localParticipantEnabled() const;
			
			/**
			 * @brief Enable local participant to enter the conference. 
			 *
			 * The local participant is the one driving the local @ref Core. It uses the local
			 * sound devices. The default value is true. Setting to false is mostly helpful
			 * when using liblinphone on a server application. 
			 * @param enable true if local participant is automatically added to the
			 * conference, false otherwise 
			 */
			LINPHONECXX_PUBLIC void enableLocalParticipant(bool enable);
			
			/**
			 * @brief Returns whether conference can have only one participant. 
			 *
			 * @return true if the conference can have only one participant, false otherwise 
			 */
			LINPHONECXX_PUBLIC bool oneParticipantConferenceEnabled() const;
			
			/**
			 * @brief Enable conference with one participant. 
			 *
			 * @param enable true if conference can have only one participant, false otherwise 
			 */
			LINPHONECXX_PUBLIC void enableOneParticipantConference(bool enable);
			
			/**
			 * @brief Get the participant list type. 
			 *
			 * @return participant list type @ref Conference::ParticipantListType. 
			 */
			LINPHONECXX_PUBLIC linphone::Conference::ParticipantListType getParticipantListType() const;
			
			/**
			 * @brief Set the participant list type. 
			 *
			 * @param type Participant list type @ref Conference::ParticipantListType. This
			 * allows to restrict the access to the conference to a selected set of
			 * participants 
			 */
			LINPHONECXX_PUBLIC void setParticipantListType(linphone::Conference::ParticipantListType type);
			
			/**
			 * @brief Returns the proxy configuration for the conference. 
			 *
			 * @return a pointer to the proxy configuration or nullptr if it is not set.    
			 * @deprecated 11/01/2022 Use getAccount() instead. 
			 */
			LINPHONECXX_PUBLIC LINPHONECXX_DEPRECATED std::shared_ptr<linphone::ProxyConfig> getProxyCfg() const;
			
			/**
			 * @brief Retrieve the desired security level of the conference. 
			 *
			 * @return The desired security level of the conference. 
			 */
			LINPHONECXX_PUBLIC linphone::Conference::SecurityLevel getSecurityLevel() const;
			
			/**
			 * @brief Set the desired security level of the conference. 
			 *
			 * @param securityLevel The desired security level of the conference. 
			 */
			LINPHONECXX_PUBLIC void setSecurityLevel(linphone::Conference::SecurityLevel securityLevel);
			
			/**
			 * @brief Get the start time of the conference. 
			 *
			 * @return start time of a conference as time_t type or 0 for immediate start of a
			 * conference. For UNIX based systems it is the number of seconds since 00:00hours
			 * of the 1st of January 1970 
			 */
			LINPHONECXX_PUBLIC time_t getStartTime() const;
			
			/**
			 * @brief Set the conference start time. 
			 *
			 * @param start the conference start time as the number of seconds between the
			 * desired start time and the 1st of January
			 */
			LINPHONECXX_PUBLIC void setStartTime(time_t start);
			
			/**
			 * @brief Get conference subject. 
			 *
			 * @return the conference subject.    
			 */
			LINPHONECXX_PUBLIC std::string getSubject() const;
			
			/**
			 * @brief Set the subject of the conference. 
			 *
			 * @param subject the conference subject.    
			 */
			LINPHONECXX_PUBLIC void setSubject(const std::string & subject);
			
			/**
			 * @brief Check whether video capabilities are enabled. 
			 *
			 * @return true if the conference supports video capabilities, false otherwise 
			 */
			LINPHONECXX_PUBLIC bool videoEnabled() const;
			
			/**
			 * @brief Enable video capabilities. 
			 *
			 * @param enable If true, video will be enabled during conference 
			 */
			LINPHONECXX_PUBLIC void enableVideo(bool enable);
			
			/**
			 * @brief Clone a @ref ConferenceParams. 
			 *
			 * @return An allocated @ref ConferenceParams with the same parameters than params
			 *    
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<linphone::ConferenceParams> clone() const;
			
			
	};

};

#endif // _CONFERENCE_PARAMS_HH

#ifndef _MSC_VER
#pragma GCC diagnostic pop
#endif // _MSC_VER
