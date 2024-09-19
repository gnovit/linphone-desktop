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

#ifndef _PARTICIPANT_IMDN_STATE_HH
#define _PARTICIPANT_IMDN_STATE_HH

#include "chat_message.hh"
#include "object.hh"




struct _LinphoneParticipantImdnState;


namespace linphone {

	class Participant;

	/**
	 * @brief This object represents the delivery/display state of a given chat
	 * message for a given participant. 
	 *
	 * It also contains a timestamp at which this participant state has changed.
	 * Use ChatMessage::getParticipantsByImdnState() to get all @ref
	 * ParticipantImdnState for a given state. From there use getParticipant() to get
	 * the @ref Participant object if you need it. 
	 */
	class ParticipantImdnState: public Object {
	
		public:

			LINPHONECXX_PUBLIC ParticipantImdnState(void *ptr, bool takeRef=true);
			LINPHONECXX_PUBLIC _LinphoneParticipantImdnState *cPtr() {return (_LinphoneParticipantImdnState *)mPrivPtr;}

	
		public:
			
		
			/**
			 * @brief Get the participant concerned by a LinphoneParticipantImdnState. 
			 *
			 * @return The @ref Participant concerned by the LinphoneParticipantImdnState    
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<const linphone::Participant> getParticipant() const;
			
			/**
			 * @brief Get the chat message state the participant is in. 
			 *
			 * @return The @ref ChatMessage::State the participant is in 
			 */
			LINPHONECXX_PUBLIC linphone::ChatMessage::State getState() const;
			
			/**
			 * @brief Get the timestamp at which a participant has reached the state described
			 * by a LinphoneParticipantImdnState. 
			 *
			 * @return The timestamp at which the participant has reached the state described
			 * in the LinphoneParticipantImdnState 
			 */
			LINPHONECXX_PUBLIC time_t getStateChangeTime() const;
			
			
	};

};

#endif // _PARTICIPANT_IMDN_STATE_HH

#ifndef _MSC_VER
#pragma GCC diagnostic pop
#endif // _MSC_VER
