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

#ifndef _CALL_LISTENER_HH
#define _CALL_LISTENER_HH

#include <string>
#include "call.hh"
#include "object.hh"






namespace linphone {

	class Call;
	class InfoMessage;
	class CallStats;
	class Headers;
	class AudioDevice;

	/**
	 * @brief That class holds all the callbacks which are called by @ref Call
	 * objects. 
	 *
	 * Use Factory::createCallCbs() to create an instance. Then, call the callback
	 * setters on the events you need to monitor and pass the object to a @ref Call
	 * instance through Call::addListener(). 
	 */
	class CallListener: public Listener {
	
		public:


	
		public:
			
		
			/**
			 * @brief Callback for being notified of received DTMFs. 
			 *
			 * @param call LinphoneCall object that received the dtmf    
			 * @param dtmf The ascii code of the dtmf 
			 */
			LINPHONECXX_PUBLIC virtual void onDtmfReceived(const std::shared_ptr<linphone::Call> & call, int dtmf) {};
			
			/**
			 * @brief GoClear ACK sent callback. 
			 *
			 * @param call the @ref Call on which the GoClear ACK was sent.    
			 */
			LINPHONECXX_PUBLIC virtual void onGoclearAckSent(const std::shared_ptr<linphone::Call> & call) {};
			
			/**
			 * @brief Call encryption changed callback. 
			 *
			 * @param call @ref Call object whose encryption is changed.    
			 * @param on Whether encryption is activated. 
			 * @param authenticationToken An authentication_token, currently set for ZRTP kind
			 * of encryption only.    
			 */
			LINPHONECXX_PUBLIC virtual void onEncryptionChanged(const std::shared_ptr<linphone::Call> & call, bool on, const std::string & authenticationToken) {};
			
			/**
			 * @brief Call send master key changed callback. 
			 *
			 * @param call @ref Call object whose encryption is changed.    
			 */
			LINPHONECXX_PUBLIC virtual void onSendMasterKeyChanged(const std::shared_ptr<linphone::Call> & call, const std::string & sendMasterKey) {};
			
			/**
			 * @brief Call receive master key changed callback. 
			 *
			 * @param call @ref Call object whose encryption is changed.    
			 */
			LINPHONECXX_PUBLIC virtual void onReceiveMasterKeyChanged(const std::shared_ptr<linphone::Call> & call, const std::string & receiveMasterKey) {};
			
			/**
			 * @brief Callback for receiving info messages. 
			 *
			 * @param call @ref Call whose info message belongs to.    
			 * @param message @ref InfoMessage object.    
			 */
			LINPHONECXX_PUBLIC virtual void onInfoMessageReceived(const std::shared_ptr<linphone::Call> & call, const std::shared_ptr<const linphone::InfoMessage> & message) {};
			
			/**
			 * @brief Call state notification callback. 
			 *
			 * @param call @ref Call whose state is changed.    
			 * @param state The new @ref Call::State of the call 
			 * @param message An informational message about the state.    
			 */
			LINPHONECXX_PUBLIC virtual void onStateChanged(const std::shared_ptr<linphone::Call> & call, linphone::Call::State state, const std::string & message) {};
			
			/**
			 * @brief Callback for receiving quality statistics for calls. 
			 *
			 * @param call @ref Call object whose statistics are notified    
			 * @param stats @ref CallStats object    
			 */
			LINPHONECXX_PUBLIC virtual void onStatsUpdated(const std::shared_ptr<linphone::Call> & call, const std::shared_ptr<const linphone::CallStats> & stats) {};
			
			/**
			 * @brief Callback for notifying progresses of transfers. 
			 *
			 * @param call LinphoneCall that was transfered    
			 * @param state The LinphoneCallState of the call to transfer target at the far
			 * end. 
			 */
			LINPHONECXX_PUBLIC virtual void onTransferStateChanged(const std::shared_ptr<linphone::Call> & call, linphone::Call::State state) {};
			
			/**
			 * @brief Callback for notifying the processing SIP ACK messages. 
			 *
			 * @param call @ref Call for which an ACK is being received or sent    
			 * @param ack the ACK @ref Headers    
			 * @param isReceived if true this ACK is an incoming one, otherwise it is an ACK
			 * about to be sent. 
			 */
			LINPHONECXX_PUBLIC virtual void onAckProcessing(const std::shared_ptr<linphone::Call> & call, const std::shared_ptr<linphone::Headers> & ack, bool isReceived) {};
			
			/**
			 * @brief Callback for notifying a received TMMBR. 
			 *
			 * @param call LinphoneCall for which the TMMBR has changed    
			 * @param streamIndex the index of the current stream 
			 * @param tmmbr the value of the received TMMBR 
			 */
			LINPHONECXX_PUBLIC virtual void onTmmbrReceived(const std::shared_ptr<linphone::Call> & call, int streamIndex, int tmmbr) {};
			
			/**
			 * @brief Callback for notifying a snapshot taken. 
			 *
			 * @param call LinphoneCall for which the snapshot was taken    
			 * @param filePath the name of the saved file    
			 */
			LINPHONECXX_PUBLIC virtual void onSnapshotTaken(const std::shared_ptr<linphone::Call> & call, const std::string & filePath) {};
			
			/**
			 * @brief Callback to notify a next video frame has been decoded. 
			 *
			 * @param call LinphoneCall for which the next video frame has been decoded    
			 */
			LINPHONECXX_PUBLIC virtual void onNextVideoFrameDecoded(const std::shared_ptr<linphone::Call> & call) {};
			
			/**
			 * @brief Callback to notify that the camera is not working and has been changed
			 * to "No Webcam". 
			 *
			 * A camera is detected as mis-functionning as soon as it outputs no frames at all
			 * during a period of 5 seconds. This check is only performed on desktop
			 * platforms, in the purpose of notifying camera failures, for example if when a
			 * usb cable gets disconnected.
			 * @param call LinphoneCall for which the next video frame has been decoded    
			 * @param cameraName the name of the non-working camera    
			 */
			LINPHONECXX_PUBLIC virtual void onCameraNotWorking(const std::shared_ptr<linphone::Call> & call, const std::string & cameraName) {};
			
			/**
			 * @brief Callback to notify that there are errors from the video rendering. 
			 *
			 * The error code depends of the implementation.
			 * @param call LinphoneCall    
			 * @param errorCode error code from render. It depends of the renderer. 
			 */
			LINPHONECXX_PUBLIC virtual void onVideoDisplayErrorOccurred(const std::shared_ptr<linphone::Call> & call, int errorCode) {};
			
			/**
			 * @brief Callback to notify that the audio device has been changed. 
			 *
			 * @param call LinphoneCall for which the audio device has changed    
			 * @param audioDevice the new audio device used for this call    
			 */
			LINPHONECXX_PUBLIC virtual void onAudioDeviceChanged(const std::shared_ptr<linphone::Call> & call, const std::shared_ptr<linphone::AudioDevice> & audioDevice) {};
			
			/**
			 * @brief Callback to notify that the call is being recorded by the remote. 
			 *
			 * @param call LinphoneCall for which the audio is recorded    
			 * @param recording true if the call is being recorded by the remote, false
			 * otherwise 
			 */
			LINPHONECXX_PUBLIC virtual void onRemoteRecording(const std::shared_ptr<linphone::Call> & call, bool recording) {};
			
			
	};

};

#endif // _CALL_LISTENER_HH

#ifndef _MSC_VER
#pragma GCC diagnostic pop
#endif // _MSC_VER
