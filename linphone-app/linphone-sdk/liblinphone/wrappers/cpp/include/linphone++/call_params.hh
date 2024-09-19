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

#ifndef _CALL_PARAMS_HH
#define _CALL_PARAMS_HH

#include <list>
#include <string>
#include "enums.hh"
#include "conference.hh"
#include "object.hh"




struct _LinphoneCallParams;


namespace linphone {

	class Account;
	class Content;
	class AudioDevice;
	class ProxyConfig;
	class VideoDefinition;
	class PayloadType;
	class CallParams;

	/**
	 * @brief An object containing various parameters of a @ref Call. 
	 *
	 * You can specify your params while answering an incoming call using
	 * Call::acceptWithParams() or while initiating an outgoing call with
	 * Core::inviteAddressWithParams().
	 * This object can be created using Core::createCallParams(), using nullptr for
	 * the call pointer if you plan to use it for an outgoing call.
	 * For each call, three @ref CallParams are available: yours, your correspondent's
	 * and the one that describe the current state of the call that is the result of
	 * the negociation between the previous two. For example, you might enable a
	 * certain feature in your call param but this feature can be denied in the
	 * remote's configuration, hence the difference.
	 * @see Call::getCurrentParams(), Call::getRemoteParams() and Call::getParams(). 
	 */
	class CallParams: public Object {
	
		public:

			LINPHONECXX_PUBLIC CallParams(void *ptr, bool takeRef=true);
			LINPHONECXX_PUBLIC _LinphoneCallParams *cPtr() {return (_LinphoneCallParams *)mPrivPtr;}

	
		public:
			
		
			/**
			 * @brief Get the @ref Account that is used for the call. 
			 *
			 * @return The selected @ref Account for the call, or nullptr if none has been
			 * selected.    
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<linphone::Account> getAccount() const;
			
			/**
			 * @brief Set the @ref Account to use for the call. 
			 *
			 * @param account The @ref Account to use, or nullptr if none has been selected.
			 * The @ref CallParams keeps a reference to it and removes the previous one, if
			 * any.    
			 */
			LINPHONECXX_PUBLIC void setAccount(const std::shared_ptr<linphone::Account> & account);
			
			/**
			 * @brief Refine bandwidth settings for this call by setting a bandwidth limit for
			 * audio streams. 
			 *
			 * As a consequence, codecs whose bitrates are not compatible with this limit
			 * won't be used. 
			 * @param bandwidth The audio bandwidth limit to set in kbit/s. 
			 */
			LINPHONECXX_PUBLIC void setAudioBandwidthLimit(int bandwidth);
			
			/**
			 * @brief Get the audio stream direction. 
			 *
			 * @return The audio stream @ref MediaDirection associated with the call params. 
			 */
			LINPHONECXX_PUBLIC linphone::MediaDirection getAudioDirection() const;
			
			/**
			 * @brief Set the audio stream direction. 
			 *
			 * @param direction The audio stream @ref MediaDirection associated with this call
			 * params. 
			 */
			LINPHONECXX_PUBLIC void setAudioDirection(linphone::MediaDirection direction);
			
			/**
			 * @brief Tell whether audio is enabled or not. 
			 *
			 * @return A boolean value telling whether audio is enabled or not. 
			 */
			LINPHONECXX_PUBLIC bool audioEnabled() const;
			
			/**
			 * @brief Enable audio stream. 
			 *
			 * @param enabled A boolean value telling whether to enable audio or not. 
			 */
			LINPHONECXX_PUBLIC void enableAudio(bool enabled);
			
			/**
			 * @brief Use to get multicast state of audio stream. 
			 *
			 * @return true if subsequent calls will propose multicast ip set by
			 * Core::setAudioMulticastAddr() 
			 */
			LINPHONECXX_PUBLIC bool audioMulticastEnabled() const;
			
			/**
			 * @brief Use to enable multicast rtp for audio stream. 
			 *
			 */
			LINPHONECXX_PUBLIC void enableAudioMulticast(bool yesno);
			
			/**
			 * @brief Whether or not the feedback extension will be used for AVP. 
			 *
			 * @return true if AVPF is enabled, false otherwise 
			 */
			LINPHONECXX_PUBLIC bool avpfEnabled() const;
			
			/**
			 * @brief Toggle feedback extension for AVP. 
			 *
			 * @param enable wether or not AVPF should be enabled 
			 */
			LINPHONECXX_PUBLIC void enableAvpf(bool enable);
			
			/**
			 * @brief Check if the capability negotiation (RFC5939) reINVITE is enabled or
			 * not. 
			 *
			 * @return true if capability negotiation reINVITE is enabled; false otherwise.
			 * @deprecated 16/12/2021 Use capabilityNegotiationReinviteEnabled() instead. 
			 */
			LINPHONECXX_PUBLIC LINPHONECXX_DEPRECATED bool capabilityNegotiationReinviteEnabled() const;
			
			/**
			 * @brief Define whether capability negotiation (RFC5939) reINVITE is enabled. 
			 *
			 * @param enable true to enable capability negotiation reINVITE; false otherwise. 
			 */
			LINPHONECXX_PUBLIC void enableCapabilityNegotiationReinvite(bool enable);
			
			/**
			 * @brief Indicates whether capability negotiations (RFC5939) is enabled. 
			 *
			 * @return a boolean indicating the enablement of capability negotiations. 
			 */
			LINPHONECXX_PUBLIC bool capabilityNegotiationsEnabled() const;
			
			/**
			 * @brief Enable capability negotiations (RFC5939). 
			 *
			 * @param enabled A boolean value telling whether to enable capability
			 * negotiations or not. 
			 */
			LINPHONECXX_PUBLIC void enableCapabilityNegotiations(bool enabled);
			
			/**
			 * @brief Enable merging of cfg lines with consecutive indexes if capability
			 * negotiations (RFC5939) is enabled. 
			 *
			 * @param enabled A boolean value telling whether to merge pcfg and acfg lines 
			 */
			LINPHONECXX_PUBLIC void enableCfgLinesMerging(bool enabled);
			
			/**
			 * @brief Set video layout for conference. 
			 *
			 */
			LINPHONECXX_PUBLIC linphone::Conference::Layout getConferenceVideoLayout() const;
			
			/**
			 * @brief Set video layout for conference. 
			 *
			 * @param layout @ref Conference::Layout to use as default when creating a
			 * conference 
			 */
			LINPHONECXX_PUBLIC void setConferenceVideoLayout(linphone::Conference::Layout layout);
			
			/**
			 * @brief Gets a list of @ref Content set if exists. 
			 *
			 * @return A list of @ref Content set if exists, nullptr otherwise.         
			 */
			LINPHONECXX_PUBLIC std::list<std::shared_ptr<linphone::Content>> getCustomContents() const;
			
			/**
			 * @brief Indicate whether sending of early media was enabled. 
			 *
			 * @return A boolean value telling whether sending of early media was enabled. 
			 */
			LINPHONECXX_PUBLIC bool earlyMediaSendingEnabled() const;
			
			/**
			 * @brief Enable sending of real early media (during outgoing calls). 
			 *
			 * @param enabled A boolean value telling whether to enable early media sending or
			 * not. 
			 */
			LINPHONECXX_PUBLIC void enableEarlyMediaSending(bool enabled);
			
			/**
			 * @brief Get the from header in the CallParams. 
			 *
			 * @return The content of the from header, may be null.    
			 */
			LINPHONECXX_PUBLIC std::string getFromHeader() const;
			
			/**
			 * @brief Force the from header of a call when instanciating it (if set, it
			 * precludes the search in proxy and primary contact) 
			 *
			 * @param fromValue The value of the forced from, null to delete it.    
			 */
			LINPHONECXX_PUBLIC void setFromHeader(const std::string & fromValue);
			
			/**
			 * @brief Gets the default input audio device for a call that will be created
			 * using this call params. 
			 *
			 * @warning This method only concerns the call creation, it doesn't reflect the
			 * currently used input audio device of the call. Instead use
			 * Call::getInputAudioDevice() when call has been created. 
			 * @return the @ref AudioDevice that will be used by default as input when the
			 * call will be created    
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<const linphone::AudioDevice> getInputAudioDevice() const;
			
			/**
			 * @brief Sets the given @ref AudioDevice as default input for a call to be
			 * created later. 
			 *
			 * @warning This method won't have any effect once the call has been created!
			 * Instead use Call::setInputAudioDevice() when call has been created. 
			 * @param audioDevice The @ref AudioDevice. nullptr does nothing.    
			 */
			LINPHONECXX_PUBLIC void setInputAudioDevice(const std::shared_ptr<linphone::AudioDevice> & audioDevice);
			
			/**
			 * @brief Check if the capability negotiation (RFC5939) reINVITE is enabled or
			 * not. 
			 *
			 * @return true if capability negotiation reINVITE is enabled; false otherwise. 
			 * @deprecated 16/12/2021 Use capabilityNegotiationReinviteEnabled() instead.
			 */
			LINPHONECXX_PUBLIC LINPHONECXX_DEPRECATED bool isCapabilityNegotiationReinviteEnabled() const;
			
			/**
			 * @brief Indicates whether the call is being recorded. 
			 *
			 * @return true if the call is being recorded, false otherwise. 
			 */
			LINPHONECXX_PUBLIC bool isRecording() const;
			
			/**
			 * @brief Tell whether the call is part of the locally managed conference. 
			 *
			 * @warning If a conference server is used to manage conferences, that function
			 * does not return true even if the conference is running. If you want to test
			 * whether the conference is running, you should test whether
			 * Core::getConference() return a non-null pointer. 
			 * @return A boolean value telling whether the call is part of the locally managed
			 * conference. 
			 */
			LINPHONECXX_PUBLIC bool getLocalConferenceMode() const;
			
			/**
			 * @brief Tell whether the call has been configured in low bandwidth mode or not. 
			 *
			 * This mode can be automatically discovered thanks to a stun server when
			 * activate_edge_workarounds=1 in section [net] of configuration file. An
			 * application that would have reliable way to know network capacity may not use
			 * activate_edge_workarounds=1 but instead manually configure low bandwidth mode
			 * with enableLowBandwidth(). When enabled, this param may transform a call
			 * request with video in audio only mode. 
			 * @return A boolean value telling whether the low bandwidth mode has been
			 * configured/detected. 
			 */
			LINPHONECXX_PUBLIC bool lowBandwidthEnabled() const;
			
			/**
			 * @brief Indicate low bandwith mode. 
			 *
			 * Configuring a call to low bandwidth mode will result in the core to activate
			 * several settings for the call in order to ensure that bitrate usage is lowered
			 * to the minimum possible. Typically, ptime (packetization time) will be
			 * increased, audio codec's output bitrate will be targetted to 20kbit/s provided
			 * that it is achievable by the codec selected after SDP handshake. Video is
			 * automatically disabled. 
			 * @param enabled A boolean value telling whether to activate the low bandwidth
			 * mode or not. 
			 */
			LINPHONECXX_PUBLIC void enableLowBandwidth(bool enabled);
			
			/**
			 * @brief Get the kind of media encryption selected for the call. 
			 *
			 * @return The kind of @ref MediaEncryption selected for the call. 
			 */
			LINPHONECXX_PUBLIC linphone::MediaEncryption getMediaEncryption() const;
			
			/**
			 * @brief Set requested media encryption for a call. 
			 *
			 * @param encryption The @ref MediaEncryption to use for the call. 
			 */
			LINPHONECXX_PUBLIC void setMediaEncryption(linphone::MediaEncryption encryption);
			
			/**
			 * @brief Tells whether the microphone will be enabled when the call will be
			 * created. 
			 *
			 * @warning This method only concerns the call creation, it doesn't reflect the
			 * actual microphone status during a call. Instead use Call::getMicrophoneMuted()
			 * when call has been created. 
			 * @return true if the microphone will be enabled, false if disabled. 
			 */
			LINPHONECXX_PUBLIC bool micEnabled() const;
			
			/**
			 * @brief Enable or disable the microphone at the call creation. 
			 *
			 * @warning This method won't have any effect once the call has been created!
			 * Instead use Call::setMicrophoneMuted() when call has been created. 
			 * @param enable true to enable the microphone, false to disable it. 
			 */
			LINPHONECXX_PUBLIC void enableMic(bool enable);
			
			/**
			 * @brief Gets the default output audio device for a call that will be created
			 * using this call params. 
			 *
			 * @warning This method only concerns the call creation, it doesn't reflect the
			 * currently used output audio device of the call. Instead use
			 * Call::getOutputAudioDevice() when call has been created. 
			 * @return the @ref AudioDevice that will be used by default as output when the
			 * call will be created    
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<const linphone::AudioDevice> getOutputAudioDevice() const;
			
			/**
			 * @brief Sets the given @ref AudioDevice as default output for a call to be
			 * created later. 
			 *
			 * @warning This method won't have any effect once the call has been created!
			 * Instead use Call::setOutputAudioDevice() when call has been created. 
			 * @param audioDevice The @ref AudioDevice. nullptr does nothing.    
			 */
			LINPHONECXX_PUBLIC void setOutputAudioDevice(const std::shared_ptr<linphone::AudioDevice> & audioDevice);
			
			/**
			 * @brief Get requested level of privacy for the call. 
			 *
			 * @return The LinphonePrivacyMask used for the call. 
			 */
			LINPHONECXX_PUBLIC unsigned int getPrivacy() const;
			
			/**
			 * @brief Set requested level of privacy for the call. 
			 *
			 * @param privacy The LinphonePrivacyMask to used for the call. 
			 */
			LINPHONECXX_PUBLIC void setPrivacy(unsigned int privacy);
			
			/**
			 * @brief Get the @ref ProxyConfig that is used for the call. 
			 *
			 * @return The selected @ref ProxyConfig for the call, or nullptr if none has been
			 * selected.    
			 * @deprecated 28/02/2021 Use getAccount() instead. 
			 */
			LINPHONECXX_PUBLIC LINPHONECXX_DEPRECATED std::shared_ptr<linphone::ProxyConfig> getProxyConfig() const;
			
			/**
			 * @brief Set the @ref ProxyConfig to use for the call. 
			 *
			 * @param proxyConfig The @ref ProxyConfig to use, or nullptr if none has been
			 * selected. The @ref CallParams keep a reference on it and remove the older if it
			 * exists.    
			 * @deprecated 28/02/2021 Use setAccount() instead. 
			 */
			LINPHONECXX_PUBLIC LINPHONECXX_DEPRECATED void setProxyConfig(const std::shared_ptr<linphone::ProxyConfig> & proxyConfig);
			
			/**
			 * @brief Use to get real time text following rfc4103. 
			 *
			 * @return returns true if call rtt is activated. 
			 */
			LINPHONECXX_PUBLIC bool realtimeTextEnabled() const;
			
			/**
			 * @brief Use to enable real time text following rfc4103. 
			 *
			 * If enabled, outgoing calls put a m=text line in SDP offer . 
			 * @param yesno if yes, subsequent outgoing calls will propose rtt 
			 * @return 0 
			 */
			LINPHONECXX_PUBLIC linphone::Status enableRealtimeText(bool yesno);
			
			/**
			 * @brief Use to get keep alive interval of real time text following rfc4103. 
			 *
			 * @return returns keep alive interval of real time text. 
			 */
			LINPHONECXX_PUBLIC unsigned int getRealtimeTextKeepaliveInterval() const;
			
			/**
			 * @brief Use to set keep alive interval for real time text following rfc4103. 
			 *
			 * @param interval The keep alive interval for real time text, 25000 by default. 
			 */
			LINPHONECXX_PUBLIC void setRealtimeTextKeepaliveInterval(unsigned int interval);
			
			/**
			 * @brief Get the framerate of the video that is received. 
			 *
			 * @return The actual received framerate in frames per seconds, 0 if not
			 * available. 
			 */
			LINPHONECXX_PUBLIC float getReceivedFramerate() const;
			
			/**
			 * @brief Get the definition of the received video. 
			 *
			 * @return The received @ref VideoDefinition or nullptr.    
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<const linphone::VideoDefinition> getReceivedVideoDefinition() const;
			
			/**
			 * @brief Get the path for the audio recording of the call. 
			 *
			 * @return The path to the audio recording of the call or nullptr.    
			 */
			LINPHONECXX_PUBLIC std::string getRecordFile() const;
			
			/**
			 * @brief Enable recording of the call. 
			 *
			 * This function must be used before the call parameters are assigned to the call.
			 * The call recording can be started and paused after the call is established with
			 * Call::startRecording() and linphone_call_pause_recording(). 
			 * @param path A string containing the path and filename of the file where
			 * audio/video streams are to be written. The filename must have either .mkv or
			 * .wav extention. The video stream will be written only if a MKV file is given.  
			 *  
			 */
			LINPHONECXX_PUBLIC void setRecordFile(const std::string & path);
			
			/**
			 * @brief Indicates whether RTP bundle mode (also known as Media Multiplexing) is
			 * enabled. 
			 *
			 * See https://datatracker.ietf.org/doc/html/rfc8843 for more information. 
			 * @return a boolean indicating the enablement of rtp bundle mode. 
			 */
			LINPHONECXX_PUBLIC bool rtpBundleEnabled() const;
			
			/**
			 * @brief Enables or disables RTP bundle mode (Media Multiplexing). 
			 *
			 * See https://datatracker.ietf.org/doc/html/rfc8843 for more information about
			 * the feature. When enabled, liblinphone will try to negociate the use of a
			 * single port for all streams. It automatically enables rtcp-mux. 
			 * @param value a boolean to indicate whether the feature is to be enabled. 
			 * @deprecated This property can no longer be controlled via @ref CallParams. Use
			 * AccountParams::enableRtpBundle().
			 */
			LINPHONECXX_PUBLIC LINPHONECXX_DEPRECATED void enableRtpBundle(bool value);
			
			/**
			 * @brief Get the RTP profile being used. 
			 *
			 * @return The RTP profile.    
			 */
			LINPHONECXX_PUBLIC std::string getRtpProfile() const;
			
			/**
			 * @brief Get the framerate of the video that is sent. 
			 *
			 * @return The actual sent framerate in frames per seconds, 0 if not available. 
			 */
			LINPHONECXX_PUBLIC float getSentFramerate() const;
			
			/**
			 * @brief Get the definition of the sent video. 
			 *
			 * @return The sent @ref VideoDefinition or nullptr.    
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<const linphone::VideoDefinition> getSentVideoDefinition() const;
			
			/**
			 * @brief Get the session name of the media session (ie in SDP). 
			 *
			 * Subject from the SIP message can be retrieved using getCustomHeader() and is
			 * different. 
			 * @return The session name of the media session or nullptr.    
			 */
			LINPHONECXX_PUBLIC std::string getSessionName() const;
			
			/**
			 * @brief Set the session name of the media session (ie in SDP). 
			 *
			 * Subject from the SIP message (which is different) can be set using
			 * linphone_call_params_set_custom_header(). 
			 * @param name The session name to be used.    
			 */
			LINPHONECXX_PUBLIC void setSessionName(const std::string & name);
			
			/**
			 * @brief Returns the list of enable srtp suite in the call (enforced only if SDES
			 * is the selected encryption mode) 
			 *
			 * @return a list of srtp suite enabled in a given call      
			 */
			LINPHONECXX_PUBLIC std::list<linphone::SrtpSuite> getSrtpSuites() const;
			
			/**
			 * @brief Sets the list of srtp suite enabled(enforced only when SDES is the
			 * encryption mode) 
			 *
			 * @param srtpSuites list with the list of SRTP encryption suites enabled in a
			 * given call      
			 */
			LINPHONECXX_PUBLIC void setSrtpSuites(const std::list<linphone::SrtpSuite> & srtpSuites);
			
			/**
			 * @brief Enable merging of tcap lines with consecutive indexes if capability
			 * negotiations (RFC5939) is enabled. 
			 *
			 * @param enabled A boolean value telling whether to merge tcap lines 
			 */
			LINPHONECXX_PUBLIC void enableTcapLineMerging(bool enabled);
			
			/**
			 * @brief Check if tone indications are enabled. 
			 *
			 * @return true if tone indications are enabled; false otherwise. 
			 */
			LINPHONECXX_PUBLIC bool toneIndicationsEnabled() const;
			
			/**
			 * @brief Define whether tone indications are enabled. 
			 *
			 * @param enable true to enable tone indications; false otherwise. 
			 */
			LINPHONECXX_PUBLIC void enableToneIndications(bool enable);
			
			/**
			 * @brief Get the audio payload type that has been selected by a call. 
			 *
			 * @return The selected @ref PayloadType. nullptr is returned if no audio payload
			 * type has been selected by the call.    
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<const linphone::PayloadType> getUsedAudioPayloadType() const;
			
			/**
			 * @brief Get the text payload type that has been selected by a call. 
			 *
			 * @return The selected @ref PayloadType. nullptr is returned if no text payload
			 * type has been selected by the call.    
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<const linphone::PayloadType> getUsedTextPayloadType() const;
			
			/**
			 * @brief Get the video payload type that has been selected by a call. 
			 *
			 * @return The selected @ref PayloadType. nullptr is returned if no video payload
			 * type has been selected by the call.    
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<const linphone::PayloadType> getUsedVideoPayloadType() const;
			
			/**
			 * @brief Get the video stream direction. 
			 *
			 * @return The video stream @ref MediaDirection associated with the call params. 
			 */
			LINPHONECXX_PUBLIC linphone::MediaDirection getVideoDirection() const;
			
			/**
			 * @brief Set the video stream direction. 
			 *
			 * @param direction The video stream @ref MediaDirection associated with this call
			 * params. 
			 */
			LINPHONECXX_PUBLIC void setVideoDirection(linphone::MediaDirection direction);
			
			/**
			 * @brief Tell whether video is enabled or not. 
			 *
			 * @return A boolean value telling whether video is enabled or not. 
			 */
			LINPHONECXX_PUBLIC bool videoEnabled() const;
			
			/**
			 * @brief Enable video stream. 
			 *
			 * @param enabled A boolean value telling whether to enable video or not. 
			 */
			LINPHONECXX_PUBLIC void enableVideo(bool enabled);
			
			/**
			 * @brief Use to get multicast state of video stream. 
			 *
			 * @return true if subsequent calls will propose multicast ip set by
			 * Core::setVideoMulticastAddr() 
			 */
			LINPHONECXX_PUBLIC bool videoMulticastEnabled() const;
			
			/**
			 * @brief Use to enable multicast rtp for video stream. 
			 *
			 * If enabled, outgoing calls put a multicast address from
			 * Core::getVideoMulticastAddr() into video cline. In case of outgoing call video
			 * stream is sent to this multicast address.  For incoming calls behavior is
			 * unchanged. 
			 * @param yesno if yes, subsequent outgoing calls will propose multicast ip set by
			 * Core::setVideoMulticastAddr() 
			 */
			LINPHONECXX_PUBLIC void enableVideoMulticast(bool yesno);
			
			/**
			 * @brief Adds a @ref Content to be added to the INVITE SDP. 
			 *
			 * @param content The @ref Content to be added.    
			 */
			LINPHONECXX_PUBLIC void addCustomContent(const std::shared_ptr<linphone::Content> & content);
			
			/**
			 * @brief Add a custom SIP header in the INVITE for a call. 
			 *
			 * @param headerName The name of the header to add.    
			 * @param headerValue The content of the header to add.    
			 */
			LINPHONECXX_PUBLIC void addCustomHeader(const std::string & headerName, const std::string & headerValue);
			
			/**
			 * @brief Add a custom attribute related to all the streams in the SDP exchanged
			 * within SIP messages during a call. 
			 *
			 * @param attributeName The name of the attribute to add.    
			 * @param attributeValue The content value of the attribute to add.    
			 */
			LINPHONECXX_PUBLIC void addCustomSdpAttribute(const std::string & attributeName, const std::string & attributeValue);
			
			/**
			 * @brief Add a custom attribute related to a specific stream in the SDP exchanged
			 * within SIP messages during a call. 
			 *
			 * @param type The type of the stream to add a custom SDP attribute to. 
			 * @param attributeName The name of the attribute to add.    
			 * @param attributeValue The content value of the attribute to add.    
			 */
			LINPHONECXX_PUBLIC void addCustomSdpMediaAttribute(linphone::StreamType type, const std::string & attributeName, const std::string & attributeValue);
			
			/**
			 * @brief Indicates whether cfg lines with consecutive indexes are going to be
			 * merged or not if capability negotiations (RFC5939) is enabled. 
			 *
			 * @return a boolean indicating the enablement of pcfg and acfg line merging 
			 */
			LINPHONECXX_PUBLIC bool cfgLinesMerged() const;
			
			/**
			 * @brief Clear the custom SDP attributes related to all the streams in the SDP
			 * exchanged within SIP messages during a call. 
			 *
			 */
			LINPHONECXX_PUBLIC void clearCustomSdpAttributes();
			
			/**
			 * @brief Clear the custom SDP attributes related to a specific stream in the SDP
			 * exchanged within SIP messages during a call. 
			 *
			 * @param type The type of the stream to clear the custom SDP attributes from. 
			 */
			LINPHONECXX_PUBLIC void clearCustomSdpMediaAttributes(linphone::StreamType type);
			
			/**
			 * @brief Copy an existing @ref CallParams object to a new @ref CallParams object. 
			 *
			 * copy() is error-prone, leading to inconsistent parameters being passed to
			 * Core::inviteAddressWithParams() or Call::acceptWithParams(). @deprecated use
			 * exclusively Core::createCallParams() to create @ref CallParams object. 
			 * @return A copy of the @ref CallParams object.       
			 */
			LINPHONECXX_PUBLIC LINPHONECXX_DEPRECATED std::shared_ptr<linphone::CallParams> copy() const;
			
			/**
			 * @brief Get a custom SIP header. 
			 *
			 * @param headerName The name of the header to get.    
			 * @return The content of the header or nullptr if not found.    
			 */
			LINPHONECXX_PUBLIC std::string getCustomHeader(const std::string & headerName) const;
			
			/**
			 * @brief Get a custom SDP attribute that is related to all the streams. 
			 *
			 * @param attributeName The name of the attribute to get.    
			 * @return The content value of the attribute or nullptr if not found.    
			 */
			LINPHONECXX_PUBLIC std::string getCustomSdpAttribute(const std::string & attributeName) const;
			
			/**
			 * @brief Get a custom SDP attribute that is related to a specific stream. 
			 *
			 * @param type The type of the stream to add a custom SDP attribute to. 
			 * @param attributeName The name of the attribute to get.    
			 * @return The content value of the attribute or nullptr if not found.    
			 */
			LINPHONECXX_PUBLIC std::string getCustomSdpMediaAttribute(linphone::StreamType type, const std::string & attributeName) const;
			
			/**
			 * @brief Returns true if a custom SDP attribute that is related to all the
			 * streams is present. 
			 *
			 * @param attributeName The name of the attribute to get.    
			 * @return Whether the attribute is present. 
			 */
			LINPHONECXX_PUBLIC bool hasCustomSdpAttribute(const std::string & attributeName) const;
			
			/**
			 * @brief Indicates whether a custom SDP attribute that is related to a specific
			 * stream is present or not. 
			 *
			 * @param type The type of the stream to add a custom SDP attribute to. 
			 * @param attributeName The name of the attribute to get.    
			 * @return Whether the attribute is present. 
			 */
			LINPHONECXX_PUBLIC bool hasCustomSdpMediaAttribute(linphone::StreamType type, const std::string & attributeName) const;
			
			/**
			 * @brief Returns the encryption is supported. 
			 *
			 * @param encryption The @ref MediaEncryption to check whether is supported 
			 * @return a boolean indicating whether the encryption is supported 
			 */
			LINPHONECXX_PUBLIC bool isMediaEncryptionSupported(linphone::MediaEncryption encryption) const;
			
			/**
			 * @brief Indicates whether tcap lines with consecutive indexes are going to be
			 * merged or not if capability negotiations (RFC5939) is enabled. 
			 *
			 * @return a boolean indicating the enablement of tcap line merging 
			 */
			LINPHONECXX_PUBLIC bool tcapLinesMerged() const;
			
			
	};

};

#endif // _CALL_PARAMS_HH

#ifndef _MSC_VER
#pragma GCC diagnostic pop
#endif // _MSC_VER
