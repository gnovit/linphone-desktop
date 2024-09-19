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

#ifndef _ACCOUNT_PARAMS_HH
#define _ACCOUNT_PARAMS_HH

#include <cstdint>
#include <string>
#include <list>
#include "enums.hh"
#include "object.hh"




struct _LinphoneAccountParams;


namespace linphone {

	class Address;
	class NatPolicy;
	class PushNotificationConfig;
	class AccountParams;
	class Core;

	/**
	 * @brief Object that is used to set the different parameters of a @ref Account. 
	 *
	 * Note that authenticated accounts should have a corresponding @ref AuthInfo
	 * added to the @ref Core to register properly. 
	 */
	class AccountParams: public Object {
	
		public:

			LINPHONECXX_PUBLIC AccountParams(void *ptr, bool takeRef=true);
			LINPHONECXX_PUBLIC _LinphoneAccountParams *cPtr() {return (_LinphoneAccountParams *)mPrivPtr;}

	
		public:
			
		
			/**
			 * @brief Get the audio video conference factory uri. 
			 *
			 * @return The @ref Address of the audio video conference factory.    
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<const linphone::Address> getAudioVideoConferenceFactoryAddress() const;
			
			/**
			 * @brief Set the audio video conference factory uri. 
			 *
			 * @param address The @ref Address to set.    
			 */
			LINPHONECXX_PUBLIC void setAudioVideoConferenceFactoryAddress(const std::shared_ptr<const linphone::Address> & address);
			
			/**
			 * @brief Get enablement status of RTCP feedback (also known as AVPF profile). 
			 *
			 * @return the enablement mode, which can be @ref AVPFMode::Default (use
			 * LinphoneCore's mode), @ref AVPFMode::Enabled (avpf is enabled), or @ref
			 * AVPFMode::Disabled (disabled). 
			 */
			LINPHONECXX_PUBLIC linphone::AVPFMode getAvpfMode() const;
			
			/**
			 * @brief Enable the use of RTCP feedback (also known as AVPF profile). 
			 *
			 * @param mode the enablement mode, which can be @ref AVPFMode::Default (use
			 * LinphoneCore's mode), @ref AVPFMode::Enabled (avpf is enabled), or @ref
			 * AVPFMode::Disabled (disabled). 
			 */
			LINPHONECXX_PUBLIC void setAvpfMode(linphone::AVPFMode mode);
			
			/**
			 * @brief Get the interval between regular RTCP reports when using AVPF/SAVPF. 
			 *
			 * @return The interval in seconds. 
			 */
			LINPHONECXX_PUBLIC uint8_t getAvpfRrInterval() const;
			
			/**
			 * @brief Set the interval between regular RTCP reports when using AVPF/SAVPF. 
			 *
			 * @param interval The interval in seconds (between 0 and 5 seconds). 
			 */
			LINPHONECXX_PUBLIC void setAvpfRrInterval(uint8_t interval);
			
			/**
			 * @brief Get the conference factory uri. 
			 *
			 * @return The @ref Address of the conference factory.    
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<const linphone::Address> getConferenceFactoryAddress() const;
			
			/**
			 * @brief Set the conference factory uri. 
			 *
			 * @param address The @ref Address to set.    
			 */
			LINPHONECXX_PUBLIC void setConferenceFactoryAddress(const std::shared_ptr<const linphone::Address> & address);
			
			/**
			 * @brief Get the conference factory uri. 
			 *
			 * @return The uri of the conference factory.    
			 */
			LINPHONECXX_PUBLIC std::string getConferenceFactoryUri() const;
			
			/**
			 * @brief Set the conference factory uri. 
			 *
			 * @param uri The uri of the conference factory.    
			 * @deprecated 16/08/2023 Use setConferenceFactoryAddress() instead. 
			 */
			LINPHONECXX_PUBLIC LINPHONECXX_DEPRECATED void setConferenceFactoryUri(const std::string & uri);
			
			/**
			 * @brief Returns the contact parameters. 
			 *
			 * @return The previously set contact parameters.    
			 */
			LINPHONECXX_PUBLIC std::string getContactParameters() const;
			
			/**
			 * @brief Set optional contact parameters that will be added to the contact
			 * information sent in the registration. 
			 *
			 * @param contactParams A string contaning the additional parameters in text form,
			 * like "myparam=something;myparam2=something_else"   
			 * The main use case for this function is provide the proxy additional information
			 * regarding the user agent, like for example unique identifier or apple push id.
			 * As an example, the contact address in the SIP register sent will look like
			 * <sip:joe@15.128.128.93:50421>;apple-push-id=43143-DFE23F-2323-FA2232. 
			 */
			LINPHONECXX_PUBLIC void setContactParameters(const std::string & contactParams);
			
			/**
			 * @brief Return the contact URI parameters. 
			 *
			 * @return The previously set contact URI parameters.    
			 */
			LINPHONECXX_PUBLIC std::string getContactUriParameters() const;
			
			/**
			 * @brief Set optional contact parameters that will be added to the contact
			 * information sent in the registration, inside the URI. 
			 *
			 * @param contactUriParams A string containing the additional parameters in text
			 * form, like "myparam=something;myparam2=something_else"   
			 * The main use case for this function is provide the proxy additional information
			 * regarding the user agent, like for example unique identifier or apple push id.
			 * As an example, the contact address in the SIP register sent will look like
			 * <sip:joe@15.128.128.93:50421;apple-push-id=43143-DFE23F-2323-FA2232>. 
			 */
			LINPHONECXX_PUBLIC void setContactUriParameters(const std::string & contactUriParams);
			
			/**
			 * @brief Indicates whether chat messages sent by this account in a @ref
			 * ChatRoom::Backend::Basic chat room will be using CPIM format or not. 
			 *
			 * By default SIP SIMPLE format is used for "basic" chat rooms, CPIM is only used
			 * for @ref ChatRoom::Backend::FlexisipChat chat rooms. @see
			 * https://wiki.linphone.org/xwiki/wiki/public/view/Lib/Features/Instant%20Messaging/Reply%20to%20a%20specific%20message/ 
			 * @return true if chat messages will be sent out in CPIM format, false if chat
			 * messages will be sent out as SIP SIMPLE. 
			 */
			LINPHONECXX_PUBLIC bool cpimInBasicChatRoomEnabled() const;
			
			/**
			 * @brief Indicates whether chat messages sent by this account in a @ref
			 * ChatRoom::Backend::Basic chat room will be using CPIM format or not. 
			 *
			 * @param enable true to send messages in CPIM format, false to keep using the SIP
			 * SIMPLE format. 
			 */
			LINPHONECXX_PUBLIC void enableCpimInBasicChatRoom(bool enable);
			
			/**
			 * @brief Get the custom contact address previously used when registering to the
			 * SIP server. 
			 *
			 * @return a @ref Address    
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<const linphone::Address> getCustomContact() const;
			
			/**
			 * @brief Set a an optional custom contact address to be used when registering to
			 * the SIP server. 
			 *
			 * This is typically used to supply an alternative SIP address to call in case the
			 * main one is not reachable. 
			 * @param contact a @ref Address the optional alternative contact address.    
			 */
			LINPHONECXX_PUBLIC void setCustomContact(const std::shared_ptr<linphone::Address> & contact);
			
			/**
			 * @brief Return whether or not the + should be replaced by 00. 
			 *
			 * @return Whether liblinphone should replace "+" by "00" in dialed numbers
			 * (passed to Core::invite()). 
			 */
			LINPHONECXX_PUBLIC bool dialEscapePlusEnabled() const;
			
			/**
			 * @brief Set whether liblinphone should replace "+" by international calling
			 * prefix in dialed numbers (passed to linphone_core_invite). 
			 *
			 * @param enable true to replace + by the international prefix, false otherwise. 
			 */
			LINPHONECXX_PUBLIC void enableDialEscapePlus(bool enable);
			
			/**
			 * @brief Get the domain name of the given account params. 
			 *
			 * @return The domain name of the account params.    
			 */
			LINPHONECXX_PUBLIC std::string getDomain() const;
			
			/**
			 * @brief Get the account params expires. 
			 *
			 * @return The duration of registration. 
			 */
			LINPHONECXX_PUBLIC int getExpires() const;
			
			/**
			 * @brief Sets the registration expiration time in seconds. 
			 *
			 * @param expires The expiration time to set. 
			 */
			LINPHONECXX_PUBLIC void setExpires(int expires);
			
			/**
			 * @brief Get the identity of the account params. 
			 *
			 * @return The SIP identity that belongs to this account params.    
			 * @deprecated 01/03/2021 Use getIdentityAddress() instead. 
			 */
			LINPHONECXX_PUBLIC LINPHONECXX_DEPRECATED std::string getIdentity() const;
			
			/**
			 * @brief Get the identity address of the account params. 
			 *
			 * @return The SIP identity that belongs to this account params.    
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<const linphone::Address> getIdentityAddress() const;
			
			/**
			 * @brief Sets the user identity as a SIP address. 
			 *
			 * This identity is normally formed with display name, username and domain, such
			 * as: Alice <sip:alice@example.net> The REGISTER messages will have from and to
			 * set to this identity. 
			 * @param identity The @ref Address of the identity to set.    
			 * @return 0 if successful, -1 otherwise. 
			 */
			LINPHONECXX_PUBLIC linphone::Status setIdentityAddress(const std::shared_ptr<linphone::Address> & identity);
			
			/**
			 * @brief Get the idkey property of a @ref AccountParams. 
			 *
			 * @return The idkey string, or nullptr.    
			 */
			LINPHONECXX_PUBLIC std::string getIdkey() const;
			
			/**
			 * @brief Set the idkey property on the given account params. 
			 *
			 * This property can the be referenced by another account params 'depends_on' to
			 * create a dependency relation between them.
			 * @param idkey The idkey string to associate to the given @ref AccountParams.    
			 */
			LINPHONECXX_PUBLIC void setIdkey(const std::string & idkey);
			
			/**
			 * @brief Get the prefix set for this account params. 
			 *
			 * @return The international prefix.    
			 */
			LINPHONECXX_PUBLIC std::string getInternationalPrefix() const;
			
			/**
			 * @brief Set an international prefix to be automatically prepended when inviting
			 * a number with Core::invite(); This international prefix shall usually be the
			 * country code of the country where the user is living, without "+". 
			 *
			 * @param prefix The prefix to set (withouth the +).    
			 */
			LINPHONECXX_PUBLIC void setInternationalPrefix(const std::string & prefix);
			
			/**
			 * @brief Gets whether push notifications are available or not (Android & iOS
			 * only). 
			 *
			 * @return true if push notifications are available, false otherwise 
			 */
			LINPHONECXX_PUBLIC bool isPushNotificationAvailable() const;
			
			/**
			 * @brief Get the x3dh server url. 
			 *
			 * @return The x3dh server url.    
			 */
			LINPHONECXX_PUBLIC std::string getLimeServerUrl() const;
			
			/**
			 * @brief Set the x3dh server url. 
			 *
			 * If empty, this function will disable LIME X3DH from core. Otherwise, or if
			 * different from the existing value, this will (re-)initialize the LIME X3DH
			 * engine. 
			 * @param url The x3dh server url.    
			 */
			LINPHONECXX_PUBLIC void setLimeServerUrl(const std::string & url);
			
			/**
			 * @brief Get The policy that is used to pass through NATs/firewalls when using
			 * this account params. 
			 *
			 * If it is set to nullptr, the default NAT policy from the core will be used
			 * instead. 
			 * @return The @ref NatPolicy object in use.    
			 * @see Core::getNatPolicy() 
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<linphone::NatPolicy> getNatPolicy() const;
			
			/**
			 * @brief Set the policy to use to pass through NATs/firewalls when using this
			 * account params. 
			 *
			 * If it is set to nullptr, the default NAT policy from the core will be used
			 * instead. 
			 * @param policy The @ref NatPolicy object.    
			 * @see Core::setNatPolicy() 
			 */
			LINPHONECXX_PUBLIC void setNatPolicy(const std::shared_ptr<linphone::NatPolicy> & policy);
			
			/**
			 * @brief Tell if the proxy is used as the only route. 
			 *
			 * @return enable true if enabled, false otherwise. 
			 */
			LINPHONECXX_PUBLIC bool outboundProxyEnabled() const;
			
			/**
			 * @brief If enabled, the proxy will be used as the only route. 
			 *
			 * @param enable true to enable, false otherwise. 
			 */
			LINPHONECXX_PUBLIC void enableOutboundProxy(bool enable);
			
			/**
			 * @brief Gets the account picture URI if set, nullptr otherwise. 
			 *
			 * @return The account picture URI.    
			 */
			LINPHONECXX_PUBLIC std::string getPictureUri() const;
			
			/**
			 * @brief Sets an URI for the account picture. 
			 *
			 * @param uri The account picture URI.    
			 */
			LINPHONECXX_PUBLIC void setPictureUri(const std::string & uri);
			
			/**
			 * @brief Get default privacy policy for all calls routed through this proxy. 
			 *
			 * @return Privacy mode as LinphonePrivacyMask 
			 */
			LINPHONECXX_PUBLIC unsigned int getPrivacy() const;
			
			/**
			 * @brief Set default privacy policy for all calls routed through this proxy. 
			 *
			 * @param privacy @ref Privacy to configure privacy 
			 */
			LINPHONECXX_PUBLIC void setPrivacy(unsigned int privacy);
			
			/**
			 * @brief Tell if the PUBLISH is enabled. 
			 *
			 * @return true if PUBLISH request is enabled for this proxy. 
			 */
			LINPHONECXX_PUBLIC bool publishEnabled() const;
			
			/**
			 * @brief Indicates either or not, PUBLISH must be issued for this @ref
			 * AccountParams. 
			 *
			 * @param enable If true, publish will be engaged. 
			 */
			LINPHONECXX_PUBLIC void enablePublish(bool enable);
			
			/**
			 * @brief Get the publish expiration time in second. 
			 *
			 * Default value is the registration expiration value. 
			 * @return The expire time in seconds. 
			 */
			LINPHONECXX_PUBLIC int getPublishExpires() const;
			
			/**
			 * @brief Set the publish expiration time in second. 
			 *
			 * @param expires The expire time in seconds. 
			 */
			LINPHONECXX_PUBLIC void setPublishExpires(int expires);
			
			/**
			 * @brief Indicates whether to add to the contact parameters the push notification
			 * information. 
			 *
			 * For IOS, it indicates for VOIP push notification. 
			 * @return true if push notification informations should be added, false
			 * otherwise. 
			 */
			LINPHONECXX_PUBLIC bool getPushNotificationAllowed() const;
			
			/**
			 * @brief Indicates whether to add to the contact parameters the push notification
			 * information. 
			 *
			 * For IOS, it indicates for VOIP push notification. 
			 * @param allow true to allow push notification information, false otherwise. 
			 */
			LINPHONECXX_PUBLIC void setPushNotificationAllowed(bool allow);
			
			/**
			 * @brief Returns the push notification configuration. 
			 *
			 * @return The @ref PushNotificationConfig object.    
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<linphone::PushNotificationConfig> getPushNotificationConfig() const;
			
			/**
			 * @brief Sets the push notification configuration. 
			 *
			 * @param config The @ref PushNotificationConfig object.    
			 */
			LINPHONECXX_PUBLIC void setPushNotificationConfig(const std::shared_ptr<linphone::PushNotificationConfig> & config);
			
			/**
			 * @brief Get the route of the collector end-point when using quality reporting. 
			 *
			 * This SIP address should be used on server-side to process packets directly
			 * before discarding packets. Collector address should be a non existing account
			 * and will not receive any messages. If nullptr, reports will be send to the
			 * proxy domain. 
			 * @return The SIP address of the collector end-point.    
			 */
			LINPHONECXX_PUBLIC std::string getQualityReportingCollector() const;
			
			/**
			 * @brief Set the route of the collector end-point when using quality reporting. 
			 *
			 * This SIP address should be used on server-side to process packets directly
			 * before discarding packets. Collector address should be a non existing account
			 * and will not receive any messages. If nullptr, reports will be send to the
			 * proxy domain. 
			 * @param collector route of the collector end-point, if nullptr PUBLISH will be
			 * sent to the proxy domain.    
			 */
			LINPHONECXX_PUBLIC void setQualityReportingCollector(const std::string & collector);
			
			/**
			 * @brief Indicates whether quality statistics during call should be stored and
			 * sent to a collector according to RFC 6035. 
			 *
			 * @return true if quality repotring is enabled, false otherwise. 
			 */
			LINPHONECXX_PUBLIC bool qualityReportingEnabled() const;
			
			/**
			 * @brief Indicates whether quality statistics during call should be stored and
			 * sent to a collector according to RFC 6035. 
			 *
			 * @param enable true to store quality statistics and send them to the collector,
			 * false to disable it. 
			 */
			LINPHONECXX_PUBLIC void enableQualityReporting(bool enable);
			
			/**
			 * @brief Get the interval between interval reports when using quality reporting. 
			 *
			 * @return The interval in seconds, 0 means interval reports are disabled. 
			 */
			LINPHONECXX_PUBLIC int getQualityReportingInterval() const;
			
			/**
			 * @brief Set the interval between 2 interval reports sending when using quality
			 * reporting. 
			 *
			 * If call exceed interval size, an interval report will be sent to the collector.
			 * On call termination, a session report will be sent for the remaining period.
			 * Value must be 0 (disabled) or positive. 
			 * @param interval The interval in seconds, 0 means interval reports are disabled. 
			 */
			LINPHONECXX_PUBLIC void setQualityReportingInterval(int interval);
			
			/**
			 * @brief Get the realm of the given account params. 
			 *
			 * @return The realm of the account params.    
			 */
			LINPHONECXX_PUBLIC std::string getRealm() const;
			
			/**
			 * @brief Set the realm of the given account params. 
			 *
			 * @param realm New realm value.    
			 */
			LINPHONECXX_PUBLIC void setRealm(const std::string & realm);
			
			/**
			 * @brief Get the persistent reference key associated to the account params. 
			 *
			 * The reference key can be for example an id to an external database. It is
			 * stored in the config file, thus can survive to process exits/restarts.
			 * @return The reference key string that has been associated to the account
			 * params, or nullptr if none has been associated.    
			 */
			LINPHONECXX_PUBLIC std::string getRefKey() const;
			
			/**
			 * @brief Associate a persistent reference key to the account params. 
			 *
			 * The reference key can be for example an id to an external database. It is
			 * stored in the config file, thus can survive to process exits/restarts.
			 * @param refkey The reference key string to associate to the account params.    
			 */
			LINPHONECXX_PUBLIC void setRefKey(const std::string & refkey);
			
			/**
			 * @brief Returns whether the account params is enabled or not. 
			 *
			 * @return true if registration to the proxy is enabled. 
			 */
			LINPHONECXX_PUBLIC bool registerEnabled() const;
			
			/**
			 * @brief Indicates either or not, REGISTRATION must be issued for this @ref
			 * AccountParams. 
			 *
			 * @param enable If true, registration will be engaged. 
			 */
			LINPHONECXX_PUBLIC void enableRegister(bool enable);
			
			/**
			 * @brief Indicates whether to add to the contact parameters the push notification
			 * information. 
			 *
			 * @return true if remote push notification informations should be added, false
			 * otherwise. 
			 */
			LINPHONECXX_PUBLIC bool getRemotePushNotificationAllowed() const;
			
			/**
			 * @brief Indicates whether to add to the contact parameters the push notification
			 * information. 
			 *
			 * @param allow true to allow remote push notification information, false
			 * otherwise. 
			 */
			LINPHONECXX_PUBLIC void setRemotePushNotificationAllowed(bool allow);
			
			/**
			 * @brief Gets the list of the routes set for this account params. 
			 *
			 * @warning If linphone_account_params_is_outbound_proxy_enabled is true then it
			 * will only return the proxy address. 
			 * @return The list of routes.      
			 */
			LINPHONECXX_PUBLIC std::list<std::shared_ptr<linphone::Address>> getRoutesAddresses() const;
			
			/**
			 * @brief Sets a list of SIP route. 
			 *
			 * When a route is set, all outgoing calls will go to the route's destination if
			 * this account is the default one (see Core::setDefaultAccount()).
			 * @warning This function cannot be used if
			 * linphone_account_params_is_outbound_proxy_enabled is true. 
			 * @param routes A list of routes.      
			 * @return -1 if routes are invalid, 0 otherwise. 
			 */
			LINPHONECXX_PUBLIC linphone::Status setRoutesAddresses(const std::list<std::shared_ptr<linphone::Address>> & routes);
			
			/**
			 * @brief Returns whether RTP bundle mode is assumed. 
			 *
			 * See https://datatracker.ietf.org/doc/html/rfc8843 for more information. 
			 * @return a boolean indicating when rtp bundle support is assumed. 
			 */
			LINPHONECXX_PUBLIC bool rtpBundleAssumptionEnabled() const;
			
			/**
			 * @brief Indicates whether support of rtp bundle is assumed. 
			 *
			 * See enableRtpBundle() for background information about rtp bundle. Assumption
			 * that RTP bundling support allows interesting optimizations, such as not
			 * gathering RTCP candidates, and not gathering candidates for video stream when
			 * making an outgoing call. This setting is meaningful only if rtp bundle is
			 * enabled. See https://datatracker.ietf.org/doc/html/rfc8843 for more information
			 * about the feature. 
			 * @param value a boolean to indicate whether RTP bundle support can be assumed. 
			 */
			LINPHONECXX_PUBLIC void enableRtpBundleAssumption(bool value);
			
			/**
			 * @brief Returns whether RTP bundle mode (also known as Media Multiplexing) is
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
			 * single port for all streams when doing an outgoing call. It automatically
			 * enables rtcp-mux. 
			 * @param value a boolean to indicate whether the feature is to be enabled. 
			 */
			LINPHONECXX_PUBLIC void enableRtpBundle(bool value);
			
			/**
			 * @brief Get the account params proxy address. 
			 *
			 * @return The proxy's SIP address.    
			 * @deprecated 01/03/2021 Use getServerAddress() instead. 
			 */
			LINPHONECXX_PUBLIC LINPHONECXX_DEPRECATED std::string getServerAddr() const;
			
			/**
			 * @brief Sets the proxy address. 
			 *
			 * Examples of valid sip proxy address are:
			 * @param serverAddress The proxy address to set.    
			 * @return 0 if successful, -1 otherwise. 
			 * @deprecated 01/03/2021 Use setServerAddress() instead. 
			 */
			LINPHONECXX_PUBLIC LINPHONECXX_DEPRECATED linphone::Status setServerAddr(const std::string & serverAddress);
			
			/**
			 * @brief Get the account params proxy address. 
			 *
			 * @return The proxy's SIP @ref Address.    
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<const linphone::Address> getServerAddress() const;
			
			/**
			 * @brief Sets the proxy address. 
			 *
			 * Examples of valid sip proxy address are:
			 * @param serverAddress The proxy as @ref Address to set.    
			 * @return 0 if successful, -1 otherwise. 
			 */
			LINPHONECXX_PUBLIC linphone::Status setServerAddress(const std::shared_ptr<linphone::Address> & serverAddress);
			
			/**
			 * @brief Returns the transport type of the server address. 
			 *
			 * @return The @ref TransportType of the server address. 
			 */
			LINPHONECXX_PUBLIC linphone::TransportType getTransport() const;
			
			/**
			 * @brief Sets the transport type of the server address. 
			 *
			 * @param transport The @ref TransportType to set. 
			 */
			LINPHONECXX_PUBLIC void setTransport(linphone::TransportType transport);
			
			/**
			 * @brief Return whether or not the international prefix will automaticaly be used
			 * for calls and chats. 
			 *
			 * @return Whether we should use international prefix automatically for calls. 
			 */
			LINPHONECXX_PUBLIC bool getUseInternationalPrefixForCallsAndChats() const;
			
			/**
			 * @brief If enabled, the international prefix will automaticaly be used for calls
			 * and chats. 
			 *
			 * @param enable true to use the international prefix for calls, false otherwise. 
			 */
			LINPHONECXX_PUBLIC void setUseInternationalPrefixForCallsAndChats(bool enable);
			
			/**
			 * @brief Set one custom parameter to this @ref AccountParams. 
			 *
			 * @param key key of the searched parameter.    
			 * @param value value of the searched parameter.    
			 */
			LINPHONECXX_PUBLIC void addCustomParam(const std::string & key, const std::string & value);
			
			/**
			 * @brief Instantiate a new account params with values from source. 
			 *
			 * @return The newly created @ref AccountParams object.    
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<linphone::AccountParams> clone() const;
			
			/**
			 * @brief Get the custom parameter with key to this @ref AccountParams. 
			 *
			 * @param key key of the searched parameter.    
			 * @return The value of the parameter with key if found or an empty string
			 * otherwise.    
			 */
			LINPHONECXX_PUBLIC std::string getCustomParam(const std::string & key) const;
			
			;
			/**
			 * @brief Create a new @ref AccountParams object from a configuration. 
			 *
			 * @param lc The @ref Core object.    
			 * @param index The index of the configuration. 
			 * @return The newly created @ref AccountParams object.    
			 */
			LINPHONECXX_PUBLIC static std::shared_ptr<linphone::AccountParams> newWithConfig(const std::shared_ptr<linphone::Core> & lc, int index);
			

	};

};

#endif // _ACCOUNT_PARAMS_HH

#ifndef _MSC_VER
#pragma GCC diagnostic pop
#endif // _MSC_VER
