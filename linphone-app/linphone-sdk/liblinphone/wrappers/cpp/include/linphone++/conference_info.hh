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

#ifndef _CONFERENCE_INFO_HH
#define _CONFERENCE_INFO_HH

#include <string>
#include <list>
#include "conference.hh"
#include "conference_info.hh"
#include "object.hh"




struct _LinphoneConferenceInfo;


namespace linphone {

	class Address;
	class ParticipantInfo;
	class ConferenceInfo;

	/**
	 * @brief Object defining all information related to a conference. 
	 *
	 */
	class ConferenceInfo: public Object {
	
		public:
			/**
			* @ref State is used to list all states of a conference info object 
			*
			*/
			enum class State {
				/**
				* New conference. 
				*/
				New = 0,
				/**
				* Conference has been updated. 
				*/
				Updated = 1,
				/**
				* Canceling a conference. 
				*/
				Cancelled = 2
			};


			LINPHONECXX_PUBLIC ConferenceInfo(void *ptr, bool takeRef=true);
			LINPHONECXX_PUBLIC _LinphoneConferenceInfo *cPtr() {return (_LinphoneConferenceInfo *)mPrivPtr;}

	
		public:
			
		
			/**
			 * @brief Retrieve the date and time of the conference. 
			 *
			 * @return The date and time of the conference. 
			 */
			LINPHONECXX_PUBLIC time_t getDateTime() const;
			
			/**
			 * @brief Set the date and time of the conference. 
			 *
			 * @param datetime The date and time of the conference. 
			 */
			LINPHONECXX_PUBLIC void setDateTime(time_t datetime);
			
			/**
			 * @brief Retrieve the description of the conference. 
			 *
			 * @return The description of the conference.    
			 */
			LINPHONECXX_PUBLIC std::string getDescription() const;
			
			/**
			 * @brief Set the description of the conference. 
			 *
			 * @param description The description of the conference.    
			 */
			LINPHONECXX_PUBLIC void setDescription(const std::string & description);
			
			/**
			 * @brief Retrieve the duration (in minutes) of the conference. 
			 *
			 * @return The duration of the conference. 
			 */
			LINPHONECXX_PUBLIC unsigned int getDuration() const;
			
			/**
			 * @brief Set the duration (in minutes) of the conference. 
			 *
			 * @param duration The duration of the conference. 
			 */
			LINPHONECXX_PUBLIC void setDuration(unsigned int duration);
			
			/**
			 * @brief Retrieve the conference as an Icalendar string. 
			 *
			 * @return The conference as an Icalendar string. The returned char* must be freed
			 * by the caller.       
			 */
			LINPHONECXX_PUBLIC std::string getIcalendarString() const;
			
			/**
			 * @brief Retrieve the organizer of the conference. 
			 *
			 * @return The @ref Address of the conference's organizer.    
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<const linphone::Address> getOrganizer() const;
			
			/**
			 * @brief Set the organizer of the conference. 
			 *
			 * @param organizer The @ref Address of the conference's organizer.    
			 */
			LINPHONECXX_PUBLIC void setOrganizer(const std::shared_ptr<const linphone::Address> & organizer);
			
			/**
			 * @brief Retrieve the list of participants as list of participant infos. 
			 *
			 * @return The list of participant informations.      
			 */
			LINPHONECXX_PUBLIC std::list<std::shared_ptr<linphone::ParticipantInfo>> getParticipantInfos() const;
			
			/**
			 * @brief Set the list of participants. 
			 *
			 * @param participantInfos The list of participant informations to set.      
			 */
			LINPHONECXX_PUBLIC void setParticipantInfos(const std::list<std::shared_ptr<linphone::ParticipantInfo>> & participantInfos);
			
			/**
			 * @brief Retrieve the list of participants as list of addresses. 
			 *
			 * @return The list of participants.      
			 * @deprecated 24/08/2023 use linphone_conference_info_get_participant_infos
			 * instead 
			 */
			LINPHONECXX_PUBLIC LINPHONECXX_DEPRECATED std::list<std::shared_ptr<linphone::Address>> getParticipants() const;
			
			/**
			 * @brief Set the list of participants. 
			 *
			 * @param participants The list of participants to set.      
			 * @deprecated 24/08/2023 use linphone_conference_info_set_participant_infos
			 * instead 
			 */
			LINPHONECXX_PUBLIC LINPHONECXX_DEPRECATED void setParticipants(const std::list<std::shared_ptr<linphone::Address>> & participants);
			
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
			 * @brief Retrieve the state of the conference info. 
			 *
			 * @return @ref State object.    
			 */
			LINPHONECXX_PUBLIC State getState() const;
			
			/**
			 * @brief Retrieve the subject of the conference. 
			 *
			 * @return The subject of the conference.    
			 */
			LINPHONECXX_PUBLIC std::string getSubject() const;
			
			/**
			 * @brief Set the subject of the conference. 
			 *
			 * @param subject The subject of the conference.    
			 */
			LINPHONECXX_PUBLIC void setSubject(const std::string & subject);
			
			/**
			 * @brief Retrieve the URI of the conference. 
			 *
			 * @return The URI of the conference (@ref Address).    
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<const linphone::Address> getUri() const;
			
			/**
			 * @brief Add a participant to the conference. 
			 *
			 * @param participant The participant (@ref Address) to add.    
			 */
			LINPHONECXX_PUBLIC void addParticipant(const std::shared_ptr<const linphone::Address> & participant);
			
			/**
			 * @brief Add a participant to the conference. 
			 *
			 * @param participantInfo The participant information (@ref ParticipantInfo) to
			 * add. This method can be called to set attributes such as the role to the
			 * organizer of the conference    
			 */
			LINPHONECXX_PUBLIC void addParticipant(const std::shared_ptr<const linphone::ParticipantInfo> & participantInfo);
			
			/**
			 * @brief Add a list of participants. 
			 *
			 * @param participantInfos The list of participant informations to add.      
			 */
			LINPHONECXX_PUBLIC void addParticipantInfos(const std::list<std::shared_ptr<linphone::ParticipantInfo>> & participantInfos);
			
			/**
			 * @brief Clone an object @ref ConferenceInfo. 
			 *
			 * @return the cloned @ref ConferenceInfo object.    
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<linphone::ConferenceInfo> clone() const;
			
			/**
			 * @brief Find a participant information in the conference information. 
			 *
			 * @param participant The participant (@ref Address) to search.    
			 * @return The participant information (@ref ParticipantInfo).    
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<const linphone::ParticipantInfo> findParticipant(const std::shared_ptr<const linphone::Address> & participant);
			
			/**
			 * @brief Remove a participant from the conference. 
			 *
			 * @param participant The participant (@ref Address) to remove.    
			 */
			LINPHONECXX_PUBLIC void removeParticipant(const std::shared_ptr<const linphone::Address> & participant);
			
			/**
			 * @brief Update the participant information in the conference informations. 
			 *
			 * @param participantInfo The participant information (@ref ParticipantInfo) to
			 * update. This method can be called to change attributes such as the role to the
			 * organizer of the conference    
			 */
			LINPHONECXX_PUBLIC void updateParticipant(const std::shared_ptr<const linphone::ParticipantInfo> & participantInfo);
			
			
	};

};

#endif // _CONFERENCE_INFO_HH

#ifndef _MSC_VER
#pragma GCC diagnostic pop
#endif // _MSC_VER
