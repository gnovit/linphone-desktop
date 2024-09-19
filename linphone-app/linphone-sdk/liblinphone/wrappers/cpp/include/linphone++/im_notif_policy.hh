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

#ifndef _IM_NOTIF_POLICY_HH
#define _IM_NOTIF_POLICY_HH

#include "object.hh"




struct _LinphoneImNotifPolicy;


namespace linphone {


	/**
	 * @brief Policy to use to send/receive instant messaging
	 * composing/delivery/display notifications. 
	 *
	 * The sending of this information is done as in the RFCs 3994 (is_composing) and
	 * 5438 (imdn delivered/displayed). 
	 */
	class ImNotifPolicy: public Object {
	
		public:

			LINPHONECXX_PUBLIC ImNotifPolicy(void *ptr, bool takeRef=true);
			LINPHONECXX_PUBLIC _LinphoneImNotifPolicy *cPtr() {return (_LinphoneImNotifPolicy *)mPrivPtr;}

	
		public:
			
		
			/**
			 * @brief Tell whether imdn delivered notifications are being notified when
			 * received. 
			 *
			 * @return Boolean value telling whether imdn delivered notifications are being
			 * notified when received. 
			 */
			LINPHONECXX_PUBLIC bool getRecvImdnDelivered() const;
			
			/**
			 * @brief Enable imdn delivered notifications receiving. 
			 *
			 * @param enable Boolean value telling whether to notify received imdn delivered
			 * notifications. 
			 */
			LINPHONECXX_PUBLIC void setRecvImdnDelivered(bool enable);
			
			/**
			 * @brief Tell whether imdn delivery error notifications are being notified when
			 * received. 
			 *
			 * @return Boolean value telling whether imdn delivery error notifications are
			 * being notified when received. 
			 */
			LINPHONECXX_PUBLIC bool getRecvImdnDeliveryError() const;
			
			/**
			 * @brief Enable imdn delivery error notifications receiving. 
			 *
			 * Note: Error IMDN must be enabled for Lime recovery mechanism 
			 * @param enable Boolean value telling whether to notify received imdn delivery
			 * error notifications. 
			 */
			LINPHONECXX_PUBLIC void setRecvImdnDeliveryError(bool enable);
			
			/**
			 * @brief Tell whether imdn displayed notifications are being notified when
			 * received. 
			 *
			 * @return Boolean value telling whether imdn displayed notifications are being
			 * notified when received. 
			 */
			LINPHONECXX_PUBLIC bool getRecvImdnDisplayed() const;
			
			/**
			 * @brief Enable imdn displayed notifications receiving. 
			 *
			 * @param enable Boolean value telling whether to notify received imdn displayed
			 * notifications. 
			 */
			LINPHONECXX_PUBLIC void setRecvImdnDisplayed(bool enable);
			
			/**
			 * @brief Tell whether is_composing notifications are being notified when
			 * received. 
			 *
			 * @return Boolean value telling whether is_composing notifications are being
			 * notified when received. 
			 */
			LINPHONECXX_PUBLIC bool getRecvIsComposing() const;
			
			/**
			 * @brief Enable is_composing notifications receiving. 
			 *
			 * @param enable Boolean value telling whether to notify received is_composing
			 * notifications. 
			 */
			LINPHONECXX_PUBLIC void setRecvIsComposing(bool enable);
			
			/**
			 * @brief Tell whether imdn delivered notifications are being sent. 
			 *
			 * @return Boolean value telling whether imdn delivered notifications are being
			 * sent. 
			 */
			LINPHONECXX_PUBLIC bool getSendImdnDelivered() const;
			
			/**
			 * @brief Enable imdn delivered notifications sending. 
			 *
			 * @param enable Boolean value telling whether to send imdn delivered
			 * notifications. 
			 */
			LINPHONECXX_PUBLIC void setSendImdnDelivered(bool enable);
			
			/**
			 * @brief Tell whether imdn delivery error notifications are being sent. 
			 *
			 * @return Boolean value telling whether imdn delivery error notifications are
			 * being sent. 
			 */
			LINPHONECXX_PUBLIC bool getSendImdnDeliveryError() const;
			
			/**
			 * @brief Enable imdn delivery error notifications sending. 
			 *
			 * Note: Error IMDN must be enabled for Lime recovery mechanism 
			 * @param enable Boolean value telling whether to send imdn delivery error
			 * notifications. 
			 */
			LINPHONECXX_PUBLIC void setSendImdnDeliveryError(bool enable);
			
			/**
			 * @brief Tell whether imdn displayed notifications are being sent. 
			 *
			 * @return Boolean value telling whether imdn displayed notifications are being
			 * sent. 
			 */
			LINPHONECXX_PUBLIC bool getSendImdnDisplayed() const;
			
			/**
			 * @brief Enable imdn displayed notifications sending. 
			 *
			 * @param enable Boolean value telling whether to send imdn displayed
			 * notifications. 
			 */
			LINPHONECXX_PUBLIC void setSendImdnDisplayed(bool enable);
			
			/**
			 * @brief Tell whether is_composing notifications are being sent. 
			 *
			 * @return Boolean value telling whether is_composing notifications are being
			 * sent. 
			 */
			LINPHONECXX_PUBLIC bool getSendIsComposing() const;
			
			/**
			 * @brief Enable is_composing notifications sending. 
			 *
			 * @param enable Boolean value telling whether to send is_composing notifications. 
			 */
			LINPHONECXX_PUBLIC void setSendIsComposing(bool enable);
			
			/**
			 * @brief Clear an IM notif policy (deactivate all receiving and sending of
			 * notifications). 
			 *
			 * Note: Error IMDN must be enabled for Lime recovery mechanism 
			 */
			LINPHONECXX_PUBLIC void clear();
			
			/**
			 * @brief Enable all receiving and sending of notifications. 
			 *
			 */
			LINPHONECXX_PUBLIC void enableAll();
			
			
	};

};

#endif // _IM_NOTIF_POLICY_HH

#ifndef _MSC_VER
#pragma GCC diagnostic pop
#endif // _MSC_VER
