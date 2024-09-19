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

#ifndef _CONFERENCE_HH
#define _CONFERENCE_HH

#include <string>
#include <list>
#include "conference.hh"
#include "enums.hh"
#include "object.hh"




struct _LinphoneConference;


namespace linphone {

	class ParticipantDevice;
	class Call;
	class Address;
	class Core;
	class ConferenceParams;
	class AudioDevice;
	class Participant;
	class CallParams;
	class ConferenceListener;

	/**
	 * @brief A conference is the object that allow to make calls when there are 2 or
	 * more participants. 
	 *
	 * To create (or find) a @ref Conference, you first need a @ref ConferenceParams
	 * object. Core::createConferenceWithParams() allows you to create a conference. A
	 * conference is uniquely identified by a conference address, meaning you can have
	 * more than one conference between two accounts. As of now, each @ref Core can
	 * host only 1 conference but it can be part of many conferences as a remote
	 * participant. To find a conference among those a core is part of, you can call
	 * Core::searchConference(). 
	 */
	class Conference: public MultiListenableObject {
	
		public:
			/**
			* Conference minimum security level. 
			*
			*/
			enum class SecurityLevel {
				/**
				* No security. 
				*/
				None = 0,
				/**
				* Point-to-point encryption. 
				*/
				PointToPoint = 1,
				/**
				* End-to-end encryption. 
				*/
				EndToEnd = 2
			};

			/**
			* Type of conference participant list. 
			*
			*/
			enum class ParticipantListType {
				/**
				* Only participants in the initiating INVITE are allowed to join the conference. 
				*/
				Closed = 0,
				/**
				* All devices calling the conference URI are allowed to join the conference. 
				*/
				Open = 1
			};

			/**
			* Mode of joining conference. 
			*
			*/
			enum class JoiningMode {
				/**
				* Participants must dial the conference server. 
				*/
				DialIn = 0,
				/**
				* Conference server dials participants. 
				*/
				DialOut = 1
			};

			/**
			* @ref Layout is used to indicate the layout used by the conference. 
			*
			*/
			enum class Layout {
				/**
				* Grid - each participant is given an equal sized image size. 
				*/
				Grid = 0,
				/**
				* Active speaker - participant who speaks is prominently displayed in the center
				* of the screen and other participants are minimized. 
				*/
				ActiveSpeaker = 1
			};

			/**
			* @ref State is used to indicate the current state of a conference. 
			*
			*/
			enum class State {
				/**
				* Initial state. 
				*/
				None = 0,
				/**
				* Conference is now instantiated locally. 
				*/
				Instantiated = 1,
				/**
				* One creation request was sent to the service. 
				*/
				CreationPending = 2,
				/**
				* Conference was created on the service. 
				*/
				Created = 3,
				/**
				* Conference creation on service failed. 
				*/
				CreationFailed = 4,
				/**
				* Wait for conference termination. 
				*/
				TerminationPending = 5,
				/**
				* The conference is terminated locally, though it may still exist on the service
				* for other participants. 
				*/
				Terminated = 6,
				/**
				* Conference termination failed. 
				*/
				TerminationFailed = 7,
				/**
				* Conference was deleted locally and on the service. 
				*/
				Deleted = 8
			};


			LINPHONECXX_PUBLIC Conference(void *ptr, bool takeRef=true);
			LINPHONECXX_PUBLIC _LinphoneConference *cPtr() {return (_LinphoneConference *)mPrivPtr;}

			/**
			 * @brief Add an application listener to the Conference instance.
			 *
			 * @param listener the application listener
			 */
			LINPHONECXX_PUBLIC void addListener(const std::shared_ptr<ConferenceListener> &listener);
			/**
			 * @brief Remove a previously added listener from the Conference instance.
			 *
			 * @param listener the application listener
			 */
			LINPHONECXX_PUBLIC void removeListener(const std::shared_ptr<ConferenceListener> &listener);
	
		public:
			
		
			/**
			 * @brief Get the currently active speaker participant device. 
			 *
			 * @return the @ref ParticipantDevice currently displayed as active speaker.    
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<linphone::ParticipantDevice> getActiveSpeakerParticipantDevice() const;
			
			/**
			 * @brief Gets the call that is controlling a conference. 
			 *
			 * @return the @ref Call controlling the conference or nullptr if none or local
			 * conference    
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<linphone::Call> getCall() const;
			
			/**
			 * @brief Get the conference address of the conference. 
			 *
			 * @return The conference address of the conference.    
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<const linphone::Address> getConferenceAddress() const;
			
			/**
			 * @brief Set the conference address. 
			 *
			 * @param address the conference address to set.    
			 * @warning This is only allowed for a remote conference if it is in state
			 * CreationPending or Instantiated 
			 */
			LINPHONECXX_PUBLIC void setConferenceAddress(const std::shared_ptr<linphone::Address> & address);
			
			/**
			 * @brief Returns core for a @ref Conference. 
			 *
			 * @return back pointer to @ref Core object.    Returns back pointer to @ref Core
			 * object. 
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<linphone::Core> getCore() const;
			
			/**
			 * @brief Get current parameters of the conference. 
			 *
			 * @return a @ref ConferenceParams .    
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<const linphone::ConferenceParams> getCurrentParams() const;
			
			/**
			 * @brief Get the conference duration. 
			 *
			 * @return conference duration.    
			 */
			LINPHONECXX_PUBLIC int getDuration() const;
			
			/**
			 * @brief Get the conference id as string. 
			 *
			 * @return the conference id    
			 * @deprecated 10/07/2020 Use getConferenceAddress() instead. 
			 */
			LINPHONECXX_PUBLIC LINPHONECXX_DEPRECATED std::string getId() const;
			
			/**
			 * @brief Set the conference id as string. 
			 *
			 * @param conferenceId the conference id to set.    
			 * @deprecated 10/07/2020 Use setConferenceAddress() instead. 
			 */
			LINPHONECXX_PUBLIC LINPHONECXX_DEPRECATED void setId(const std::string & conferenceId);
			
			/**
			 * @brief Gets the current input device for this conference. 
			 *
			 * @return the @ref AudioDevice used by this conference as input or nullptr if
			 * there is currently no soundcard configured (depending on the state of the
			 * conference)    
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<const linphone::AudioDevice> getInputAudioDevice() const;
			
			/**
			 * @brief Sets the given @ref AudioDevice as input for this conference only. 
			 *
			 * @param audioDevice The @ref AudioDevice. nullptr does nothing.    
			 */
			LINPHONECXX_PUBLIC void setInputAudioDevice(const std::shared_ptr<linphone::AudioDevice> & audioDevice);
			
			/**
			 * @brief Retrieves the volume of a specific participant. 
			 *
			 * @return The volume of the participant expressed in dbm0. 
			 */
			LINPHONECXX_PUBLIC float getInputVolume() const;
			
			/**
			 * @brief For a local conference, it returns whether the local participant is
			 * enabled For a remote conference, it return whether the remote participant has
			 * left the conference without bein removed from it. 
			 *
			 * @return true if the local participant is in a conference, false otherwise. 
			 */
			LINPHONECXX_PUBLIC bool isIn() const;
			
			/**
			 * @brief Gets whether the conference is currently being recorded. 
			 *
			 * @return true if conference is being recorded, false otherwise. 
			 */
			LINPHONECXX_PUBLIC bool isRecording() const;
			
			/**
			 * @brief For a local audio video conference, this function returns the
			 * participant hosting the conference For a remote audio video conference, this
			 * function returns the local participant of the conference. 
			 *
			 * @return a @ref Participant .    
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<linphone::Participant> getMe() const;
			
			/**
			 * @brief Retrieves the volume of a specific participant. 
			 *
			 * @return The volume of the participant expressed in dbm0. 
			 */
			LINPHONECXX_PUBLIC bool getMicrophoneMuted() const;
			
			/**
			 * @brief Get microphone muted state. 
			 *
			 * Note that the microphone may be disabled globally if false was given to
			 * Core::enableMic(). 
			 * @return The microphone muted state. 
			 */
			LINPHONECXX_PUBLIC void setMicrophoneMuted(bool muted);
			
			/**
			 * @brief Gets the current output device for this conference. 
			 *
			 * @return the @ref AudioDevice used by this conference as output or nullptr if
			 * there is currently no soundcard configured (depending on the state of the
			 * conference)    
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<const linphone::AudioDevice> getOutputAudioDevice() const;
			
			/**
			 * @brief Sets the given @ref AudioDevice as output for this conference only. 
			 *
			 * @param audioDevice The @ref AudioDevice. nullptr does nothing.    
			 */
			LINPHONECXX_PUBLIC void setOutputAudioDevice(const std::shared_ptr<linphone::AudioDevice> & audioDevice);
			
			/**
			 * @brief Get number of participants without me. 
			 *
			 * @return the number of participants excluding me in a @ref Conference 
			 */
			LINPHONECXX_PUBLIC int getParticipantCount() const;
			
			/**
			 * @brief Get list of all participant devices of a conference including me if it
			 * is in. 
			 *
			 * @return The list of participant devices of the conference.         
			 */
			LINPHONECXX_PUBLIC std::list<std::shared_ptr<linphone::ParticipantDevice>> getParticipantDeviceList() const;
			
			/**
			 * @brief Get list of all participants of a conference. 
			 *
			 * @warning The returned list does not include me. 
			 * @return The list of participants of the conference.         
			 */
			LINPHONECXX_PUBLIC std::list<std::shared_ptr<linphone::Participant>> getParticipantList() const;
			
			/**
			 * @brief Get URIs of all participants of one conference The returned bctbx_list_t
			 * contains URIs of all participants. 
			 *
			 * That list must be freed after use and each URI must be unref with
			 * linphone_address_unref @warning The returned list does not include me. 
			 * @return The list of the participants' address active in the conference.         
			 * @deprecated 10/07/2020 Use getParticipantList() instead. 
			 */
			LINPHONECXX_PUBLIC LINPHONECXX_DEPRECATED std::list<std::shared_ptr<linphone::Address>> getParticipants() const;
			
			/**
			 * @brief Get the conference start time. 
			 *
			 * @return conference start time.    
			 */
			LINPHONECXX_PUBLIC time_t getStartTime() const;
			
			/**
			 * @brief Get the current state of the conference. 
			 *
			 * @return the @ref State of the conference. 
			 */
			LINPHONECXX_PUBLIC State getState() const;
			
			/**
			 * @brief Get the conference subject. 
			 *
			 * @return conference subject.    
			 */
			LINPHONECXX_PUBLIC std::string getSubject() const;
			
			/**
			 * @brief Set the conference subject. 
			 *
			 * @param subject conference subject    
			 */
			LINPHONECXX_PUBLIC void setSubject(const std::string & subject);
			
			/**
			 * @brief Get the conference username. 
			 *
			 * @return conference subject.    
			 */
			LINPHONECXX_PUBLIC std::string getUsername() const;
			
			/**
			 * @brief Set the conference username. 
			 *
			 * @param username conference subject    
			 */
			LINPHONECXX_PUBLIC void setUsername(const std::string & username);
			
			/**
			 * @brief Join an existing call to the conference. 
			 *
			 * If the conference is in the state LinphoneConferenceStateCreationPending, then
			 * the conference will start on the input and output audio devices used for the
			 * currently active call, if any 
			 * @param call a @ref Call that has to be added to the conference.    
			 * @warning This function guarantees that the local endpoint is added to the
			 * conference only if one of calls added is in state StreamsRunning. It is highly
			 * recommended to call linphone_confererence_enter() to guarantee that the local
			 * endpoint is added to the conference. 
			 */
			LINPHONECXX_PUBLIC linphone::Status addParticipant(const std::shared_ptr<linphone::Call> & call);
			
			/**
			 * @brief Join a participant to the conference. 
			 *
			 * @param uri a @ref Address that has to be added to the conference.    
			 * @warning This function guarantees that the local endpoint is added to the
			 * conference only if there is a call state StreamsRunning towards one of the
			 * addresses. It is highly recommended to call linphone_confererence_enter() to
			 * guarantee that the local endpoint is added to the conference. 
			 */
			LINPHONECXX_PUBLIC linphone::Status addParticipant(const std::shared_ptr<const linphone::Address> & uri);
			
			/**
			 * @brief Add participants to the conference, by supplying a list of @ref Call. 
			 *
			 * If the conference is in the state LinphoneConferenceStateCreationPending, then
			 * the conference will start on the input and output audio devices used for the
			 * currently active call, if any 
			 * @param calls A list of calls to add to the conference.      
			 */
			LINPHONECXX_PUBLIC linphone::Status addParticipants(const std::list<std::shared_ptr<linphone::Call>> & calls);
			
			/**
			 * @brief Add participants to the conference, by supplying a list of @ref Address. 
			 *
			 * @param addresses A list of calls to add to the conference.      
			 */
			LINPHONECXX_PUBLIC linphone::Status addParticipants(const std::list<std::shared_ptr<linphone::Address>> & addresses);
			
			/**
			 * @brief For a local conference, the local participant joins the conference For a
			 * remote conference, the participant rejoins the conference after leaving it
			 * earlier on. 
			 *
			 * @return 0 if succeeded. Negative number if failed 
			 */
			LINPHONECXX_PUBLIC int enter();
			
			/**
			 * @brief Find a participant from a conference. 
			 *
			 * @param uri SIP URI of the participant to search.    
			 * @return a pointer to the participant found or nullptr.    
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<linphone::Participant> findParticipant(const std::shared_ptr<const linphone::Address> & uri);
			
			/**
			 * @brief Retrieves the volume of a specific participant. 
			 *
			 * @param device The Participant    
			 * @return The volume of the participant expressed in dbm0. 
			 */
			LINPHONECXX_PUBLIC int getParticipantDeviceVolume(const std::shared_ptr<linphone::ParticipantDevice> & device);
			
			/**
			 * @brief Invite participants to the conference, by supplying a list of @ref
			 * Address If the conference is in the state
			 * LinphoneConferenceStateCreationPending, then the conference will start on the
			 * input and output audio devices used for the currently active call, if any. 
			 *
			 * @param addresses A list of SIP addresses to invite.      
			 * @param params @ref CallParams to use for inviting the participants.    
			 */
			LINPHONECXX_PUBLIC linphone::Status inviteParticipants(const std::list<std::shared_ptr<linphone::Address>> & addresses, const std::shared_ptr<const linphone::CallParams> & params);
			
			/**
			 * @brief For a local audio video conference, this function compares the address
			 * provided as argument with that of participant hosting the conference For a
			 * remote audio video conference, this function compares the address provided as
			 * argument with that of the local participant of the conference. 
			 *
			 * @param uri A @ref Address object    
			 * @return true if the participant is me, false otherwise. 
			 */
			LINPHONECXX_PUBLIC bool isMe(const std::shared_ptr<const linphone::Address> & uri) const;
			
			/**
			 * @brief For a local conference, the local participant leaves the conference For
			 * a remote conference, the participant leaves the conference after joining it
			 * earlier on. 
			 *
			 * @return 0 if succeeded. Negative number if failed 
			 */
			LINPHONECXX_PUBLIC int leave();
			
			/**
			 *
			 * @param uri URI of the participant to remove    
			 * @warning The passed participant uri must be one of those returned by
			 * getParticipants() 
			 * @return 0 if succeeded, -1 if failed 
			 * @deprecated 10/07/2020 Use removeParticipant() instead. 
			 */
			LINPHONECXX_PUBLIC LINPHONECXX_DEPRECATED linphone::Status removeParticipant(const std::shared_ptr<const linphone::Address> & uri);
			
			/**
			 *
			 * @param participant participant to remove    
			 * @warning The passed participant must be one of those returned by
			 * getParticipantList() 
			 * @warning This method may destroy the conference if the only remaining
			 * participant had an existing call to the local participant before the conference
			 * was created 
			 * @return 0 if succeeded, -1 if failed 
			 */
			LINPHONECXX_PUBLIC linphone::Status removeParticipant(const std::shared_ptr<linphone::Participant> & participant);
			
			/**
			 *
			 * @param call call to remove    
			 * @return 0 if succeeded, -1 if failed 
			 * @deprecated 10/07/2020 Use removeParticipant() instead. 
			 */
			LINPHONECXX_PUBLIC LINPHONECXX_DEPRECATED linphone::Status removeParticipant(const std::shared_ptr<linphone::Call> & call);
			
			/**
			 * @brief Set stream capability on me device of a local conference. 
			 *
			 * @param direction the direction of stream of type stream_type 
			 */
			LINPHONECXX_PUBLIC void setLocalParticipantStreamCapability(linphone::MediaDirection direction, linphone::StreamType type);
			
			/**
			 * @brief Change the admin status of a participant of a conference (you need to be
			 * an admin yourself to do this). 
			 *
			 * @param participant The Participant for which to change the admin status    
			 * @param isAdmin A boolean value telling whether the participant should now be an
			 * admin or not 
			 */
			LINPHONECXX_PUBLIC void setParticipantAdminStatus(const std::shared_ptr<linphone::Participant> & participant, bool isAdmin);
			
			/**
			 * @brief Starts recording the conference. 
			 *
			 * @param path Where to record the conference    
			 * @return 0 if succeeded. Negative number in case of failure. 
			 */
			LINPHONECXX_PUBLIC int startRecording(const std::string & path);
			
			/**
			 * @brief Stops the conference recording. 
			 *
			 * @return 0 if succeeded. Negative number in case of failure. 
			 */
			LINPHONECXX_PUBLIC int stopRecording();
			
			/**
			 * @brief Terminates conference. 
			 *
			 * @return 0 if the termination is successful, -1 otherwise. 
			 */
			LINPHONECXX_PUBLIC int terminate();
			
			/**
			 * @brief Update parameters of the conference. 
			 *
			 * This is typically used enable or disable the video stream in the conference. 
			 * @param params the new parameters to apply.    
			 */
			LINPHONECXX_PUBLIC int updateParams(const std::shared_ptr<const linphone::ConferenceParams> & params);
			
			
		private:
			void *createCallbacks() override;
	};

};

#endif // _CONFERENCE_HH

#ifndef _MSC_VER
#pragma GCC diagnostic pop
#endif // _MSC_VER
