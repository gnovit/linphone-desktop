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

#ifndef _ALERT_HH
#define _ALERT_HH

#include <string>
#include "alert.hh"
#include "object.hh"




struct _LinphoneAlert;


namespace linphone {

	class Call;
	class Dictionary;
	class Alert;
	class AlertListener;

	/**
	 * @brief Object that represents an alert. 
	 *
	 * Alerts are raised at run-time when particular conditions are met, for example
	 * bad network quality. The full list of available alert types is described by the
	 * @ref Type enum. An application is notified of new alerts through the @ref
	 * CoreListener interface. Once raised, the application may use the @ref
	 * AlertListener interface to get notified when the alert stops. For each kind of
	 * alert, a @ref Dictionary is filled with relevant informations, returned by
	 * getInformations(). The keys available are documented per-type in @ref Type
	 * enum. 
	 */
	class Alert: public MultiListenableObject {
	
		public:
			/**
			* All kinds of alerts. 
			*
			*/
			enum class Type {
				/**
				* Camera is not working. 
				*/
				QoSCameraMisfunction,
				/**
				* Camera is capturing low framerate. 
				*/
				QoSCameraLowFramerate,
				/**
				* Video decoding has stopped for a given period (10 s by default). 
				*/
				QoSVideoStalled,
				/**
				* A received media stream suffers from high loss or late rate. 
				*/
				QoSHighLossLateRate,
				/**
				* A report of high loss rate is received from remote party. 
				*/
				QoSHighRemoteLossRate,
				/**
				* Packet Burst phenomenon. 
				*/
				QoSBurstOccured,
				/**
				* Loss rate is significant but retransmissions fail to arrive on time. 
				*/
				QoSRetransmissionFailures,
				/**
				* Low bandwidth detected. 
				*/
				QoSLowDownloadBandwidthEstimation,
				/**
				* Low quality (bitrate) video received. 
				*/
				QoSLowQualityReceivedVideo,
				/**
				* Low quality video is being sent. 
				*/
				QoSLowQualitySentVideo,
				/**
				* The operating system reports a low radio signal (wifi or mobile) 
				*/
				QoSLowSignal,
				/**
				* The operating system reports a loss of radio signal (wifi or mobile). 
				*/
				QoSLostSignal
			};


			LINPHONECXX_PUBLIC Alert(void *ptr, bool takeRef=true);
			LINPHONECXX_PUBLIC _LinphoneAlert *cPtr() {return (_LinphoneAlert *)mPrivPtr;}

			/**
			 * @brief Add an application listener to the Alert instance.
			 *
			 * @param listener the application listener
			 */
			LINPHONECXX_PUBLIC void addListener(const std::shared_ptr<AlertListener> &listener);
			/**
			 * @brief Remove a previously added listener from the Alert instance.
			 *
			 * @param listener the application listener
			 */
			LINPHONECXX_PUBLIC void removeListener(const std::shared_ptr<AlertListener> &listener);
	
		public:
			
		
			/**
			 * @brief Return the call from the alert. 
			 *
			 * @return A @ref Call from the alert.    
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<linphone::Call> getCall() const;
			
			/**
			 * @brief Return the end time of the alert. 
			 *
			 * @return the end time of the alert. 
			 */
			LINPHONECXX_PUBLIC time_t getEndTime() const;
			
			/**
			 * @brief Return more informations about the alerts. 
			 *
			 * @return A @ref Dictionary containing informations about the current alert.    
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<const linphone::Dictionary> getInformations() const;
			
			/**
			 * @brief Return the start time of the alert. 
			 *
			 * @return the start time of the alert. 
			 */
			LINPHONECXX_PUBLIC time_t getStartTime() const;
			
			/**
			 * @brief Return the state of the alert. 
			 *
			 * @return true if and only if the alert is active. 
			 */
			LINPHONECXX_PUBLIC bool getState() const;
			
			/**
			 * @brief Return the type of the alert. 
			 *
			 * @return A @ref Type corresponding to the current alert. 
			 */
			LINPHONECXX_PUBLIC Type getType() const;
			
			/**
			 * @brief Clone the given alert. 
			 *
			 * @return A new alert with exactly same informations that param.    
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<linphone::Alert> clone() const;
			
			/**
			 * @brief Notify the alert if it is terminated. 
			 *
			 */
			LINPHONECXX_PUBLIC void notifyOnTerminated();
			
			;
			/**
			 * @brief Provide a string describing the alert type. 
			 *
			 * @param type the @ref Type 
			 * @return a string 
			 */
			LINPHONECXX_PUBLIC static std::string typeToString(Type type);
			

		private:
			void *createCallbacks() override;
	};

};

#endif // _ALERT_HH

#ifndef _MSC_VER
#pragma GCC diagnostic pop
#endif // _MSC_VER
