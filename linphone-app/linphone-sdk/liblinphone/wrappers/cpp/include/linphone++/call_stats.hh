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

#ifndef _CALL_STATS_HH
#define _CALL_STATS_HH

#include <cstdint>
#include <string>
#include "enums.hh"
#include "address.hh"
#include "object.hh"




struct _LinphoneCallStats;


namespace linphone {


	/**
	 * @brief This object carry various statistic informations regarding the quality
	 * of an audio or video stream for a given @ref Call. 
	 *
	 * To receive these informations periodically and as soon as they are computed,
	 * implement the call_stats_updated() callback inside a @ref CoreListener.
	 * At any time, the application can access latest computed statistics using
	 * Call::getAudioStats() and Call::getVideoStats(). 
	 */
	class CallStats: public Object {
	
		public:

			LINPHONECXX_PUBLIC CallStats(void *ptr, bool takeRef=true);
			LINPHONECXX_PUBLIC _LinphoneCallStats *cPtr() {return (_LinphoneCallStats *)mPrivPtr;}

	
		public:
			
		
			/**
			 * @brief Get the bandwidth measurement of the received stream, expressed in
			 * kbit/s, including IP/UDP/RTP headers. 
			 *
			 * @return The bandwidth measurement of the received stream in kbit/s. 
			 */
			LINPHONECXX_PUBLIC float getDownloadBandwidth() const;
			
			/**
			 * @brief Get the estimated bandwidth measurement of the received stream,
			 * expressed in kbit/s, including IP/UDP/RTP headers. 
			 *
			 * @return The estimated bandwidth measurement of the received stream in kbit/s. 
			 */
			LINPHONECXX_PUBLIC float getEstimatedDownloadBandwidth() const;
			
			/**
			 * @brief Get the state of ICE processing. 
			 *
			 * @return The @ref IceState of ICE processing 
			 */
			LINPHONECXX_PUBLIC linphone::IceState getIceState() const;
			
			/**
			 * @brief Get the IP address family of the remote peer. 
			 *
			 * @return The IP address family @ref Address::Family of the remote peer. 
			 */
			LINPHONECXX_PUBLIC linphone::Address::Family getIpFamilyOfRemote() const;
			
			/**
			 * @brief Did ZRTP used a Post Quantum algorithm to perform a key exchange. 
			 *
			 * @return true if the ZRTP key exchange was performed using a PQ algo false
			 * otherwise: ZRTP exchange not completed or not using a PQ algo 
			 */
			LINPHONECXX_PUBLIC bool isZrtpKeyAgreementAlgoPostQuantum() const;
			
			/**
			 * @brief Get the jitter buffer size in ms. 
			 *
			 * @return The jitter buffer size in ms. 
			 */
			LINPHONECXX_PUBLIC float getJitterBufferSizeMs() const;
			
			/**
			 * @brief Gets the cumulative number of late packets. 
			 *
			 * @return The cumulative number of late packets 
			 */
			LINPHONECXX_PUBLIC uint64_t getLatePacketsCumulativeNumber() const;
			
			/**
			 * @brief Gets the local late rate since last report. 
			 *
			 * @return The local late rate 
			 */
			LINPHONECXX_PUBLIC float getLocalLateRate() const;
			
			/**
			 * @brief Get the local loss rate since last report. 
			 *
			 * @return The local loss rate 
			 */
			LINPHONECXX_PUBLIC float getLocalLossRate() const;
			
			/**
			 * @brief Gets the remote reported interarrival jitter. 
			 *
			 * @return The interarrival jitter at last received receiver report 
			 */
			LINPHONECXX_PUBLIC float getReceiverInterarrivalJitter() const;
			
			/**
			 * @brief Gets the remote reported loss rate since last report. 
			 *
			 * @return The receiver loss rate 
			 */
			LINPHONECXX_PUBLIC float getReceiverLossRate() const;
			
			/**
			 * @brief Get the round trip delay in s. 
			 *
			 * @return The round trip delay in s. 
			 */
			LINPHONECXX_PUBLIC float getRoundTripDelay() const;
			
			/**
			 * @brief Get the bandwidth measurement of the received RTCP, expressed in kbit/s,
			 * including IP/UDP/RTP headers. 
			 *
			 * @return The bandwidth measurement of the received RTCP in kbit/s. 
			 */
			LINPHONECXX_PUBLIC float getRtcpDownloadBandwidth() const;
			
			/**
			 * @brief Get the bandwidth measurement of the sent RTCP, expressed in kbit/s,
			 * including IP/UDP/RTP headers. 
			 *
			 * @return The bandwidth measurement of the sent RTCP in kbit/s. 
			 */
			LINPHONECXX_PUBLIC float getRtcpUploadBandwidth() const;
			
			/**
			 * @brief Gets the local interarrival jitter. 
			 *
			 * @return The interarrival jitter at last emitted sender report 
			 */
			LINPHONECXX_PUBLIC float getSenderInterarrivalJitter() const;
			
			/**
			 * @brief Get the local loss rate since last report. 
			 *
			 * @return The sender loss rate 
			 */
			LINPHONECXX_PUBLIC float getSenderLossRate() const;
			
			/**
			 * @brief Get the method used for SRTP key exchange. 
			 *
			 * @return The @ref MediaEncryption method used to exchange the SRTP keys    
			 */
			LINPHONECXX_PUBLIC linphone::MediaEncryption getSrtpSource() const;
			
			/**
			 * @brief Get the SRTP Cryto suite in use. 
			 *
			 * @return The SRTP crypto suite currently in use @ref SrtpSuite    
			 */
			LINPHONECXX_PUBLIC linphone::SrtpSuite getSrtpSuite() const;
			
			/**
			 * @brief Get the type of the stream the stats refer to. 
			 *
			 * @return The @ref StreamType the stats refer to 
			 */
			LINPHONECXX_PUBLIC linphone::StreamType getType() const;
			
			/**
			 * @brief Get the bandwidth measurement of the sent stream, expressed in kbit/s,
			 * including IP/UDP/RTP headers. 
			 *
			 * @return The bandwidth measurement of the sent stream in kbit/s. 
			 */
			LINPHONECXX_PUBLIC float getUploadBandwidth() const;
			
			/**
			 * @brief Get the state of uPnP processing. 
			 *
			 * @return The @ref UpnpState of uPnP processing. 
			 */
			LINPHONECXX_PUBLIC linphone::UpnpState getUpnpState() const;
			
			/**
			 * @brief Get the ZRTP algorithm statistics details (authentication method) 
			 *
			 * @return The auth tag algo 
			 */
			LINPHONECXX_PUBLIC std::string getZrtpAuthTagAlgo() const;
			
			/**
			 * @brief Get the ZRTP algorithm statistics details (cipher) 
			 *
			 * @return The cipher algo 
			 */
			LINPHONECXX_PUBLIC std::string getZrtpCipherAlgo() const;
			
			/**
			 * @brief Get the ZRTP algorithm statistics details (hash function) 
			 *
			 * @return The hash algo 
			 */
			LINPHONECXX_PUBLIC std::string getZrtpHashAlgo() const;
			
			/**
			 * @brief Get the ZRTP algorithm statistics details (key agreeement) 
			 *
			 * @return The key agreement algo 
			 */
			LINPHONECXX_PUBLIC std::string getZrtpKeyAgreementAlgo() const;
			
			/**
			 * @brief Get the ZRTP algorithm statistics details (SAS display) 
			 *
			 * @return The sas algo 
			 */
			LINPHONECXX_PUBLIC std::string getZrtpSasAlgo() const;
			
			
	};

};

#endif // _CALL_STATS_HH

#ifndef _MSC_VER
#pragma GCC diagnostic pop
#endif // _MSC_VER
