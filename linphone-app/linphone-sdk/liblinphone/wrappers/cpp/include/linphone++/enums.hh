/*
Copyright (c) 2010-2022 Belledonne Communications SARL.

This file is part of Liblinphone 
(see https://gitlab.linphone.org/BC/public/liblinphone).

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU Affero General Public License as
published by the Free Software Foundation, either version 3 of the
License, or (at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU Affero General Public License for more details.

You should have received a copy of the GNU Affero General Public License
along with this program. If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef _ENUMS_HH
#define _ENUMS_HH

/**
 * @brief Namespace that holds all liblinphone's API classes and enumerations.
 */
namespace linphone {
	
	/**
	 * Enum describing RTP AVPF activation modes. 
	 * 
	 */
	enum class AVPFMode {
		/**
		 * Use default value defined at upper level. 
		 */
		Default = -1,
		/**
		 * AVPF is disabled. 
		 */
		Disabled = 0,
		/**
		 * AVPF is enabled. 
		 */
		Enabled = 1
	};

	/**
	 * Enum describing the authentication methods. 
	 * 
	 */
	enum class AuthMethod {
		/**
		 * Digest authentication requested. 
		 */
		HttpDigest = 0,
		/**
		 * Client certificate requested. 
		 */
		Tls = 1
	};

	/**
	 * Codec priority policies. 
	 * 
	 */
	enum class CodecPriorityPolicy {
		/**
		 * In this mode, codecs have initial default ordering, that can be changed by the
		 * application The answerer of a call accepts codecs with the order given in the
		 * offer. 
		 */
		Basic = 0,
		/**
		 * In this mode, the codec list is managed by the @ref Core according to hardware
		 * capabilities in the goal of optimizing video quality and user experience. 
		 */
		Auto = 1
	};

	/**
	 * Describes the state of the remote configuring process of the @ref Core object,
	 * 'Skipped' when the feature is disabled. 
	 * 
	 */
	enum class ConfiguringState {
		/**
		 */
		Successful = 0,
		/**
		 */
		Failed = 1,
		/**
		 */
		Skipped = 2
	};

	/**
	 * Consolidated presence information: 'online' means the user is open for
	 * communication, 'busy' means the user is open for communication but involved in
	 * an other activity, 'do not disturb' means the user is not open for
	 * communication, and 'offline' means that no presence information is available. 
	 * 
	 */
	enum class ConsolidatedPresence {
		/**
		 */
		Online = 0,
		/**
		 */
		Busy = 1,
		/**
		 */
		DoNotDisturb = 2,
		/**
		 */
		Offline = 3
	};

	/**
	 * Enum describing the result of the echo canceller calibration process. 
	 * 
	 */
	enum class EcCalibratorStatus {
		/**
		 * The echo canceller calibration process is on going. 
		 */
		InProgress = 0,
		/**
		 * The echo canceller calibration has been performed and produced an echo delay
		 * measure. 
		 */
		Done = 1,
		/**
		 * The echo canceller calibration process has failed. 
		 */
		Failed = 2,
		/**
		 * The echo canceller calibration has been performed and no echo has been
		 * detected. 
		 */
		DoneNoEcho = 3
	};

	/**
	 * Describes the global state of the @ref Core object. 
	 * 
	 */
	enum class GlobalState {
		/**
		 * State in which we're in after Core::stop(). 
		 */
		Off = 0,
		/**
		 * Transient state for when we call Core::start() 
		 */
		Startup = 1,
		/**
		 * Indicates @ref Core has been started and is up and running. 
		 */
		On = 2,
		/**
		 * Transient state for when we call Core::stop() 
		 */
		Shutdown = 3,
		/**
		 * Transient state between Startup and On if there is a remote provisionning URI
		 * configured. 
		 */
		Configuring = 4,
		/**
		 * @ref Core state after being created by linphone_factory_create_core, generally
		 * followed by a call to Core::start() 
		 */
		Ready = 5
	};

	/**
	 * Enum describing ICE states. 
	 * 
	 */
	enum class IceState {
		/**
		 * ICE has not been activated for this call or stream. 
		 */
		NotActivated = 0,
		/**
		 * ICE processing has failed. 
		 */
		Failed = 1,
		/**
		 * ICE process is in progress. 
		 */
		InProgress = 2,
		/**
		 * ICE has established a direct connection to the remote host. 
		 */
		HostConnection = 3,
		/**
		 * ICE has established a connection to the remote host through one or several
		 * NATs. 
		 */
		ReflexiveConnection = 4,
		/**
		 * ICE has established a connection through a relay. 
		 */
		RelayConnection = 5
	};

	/**
	 * 
	 */
	enum class LimeState {
		/**
		 * Lime is not used at all. 
		 */
		Disabled = 0,
		/**
		 * Lime is always used. 
		 */
		Mandatory = 1,
		/**
		 * Lime is used only if we already shared a secret with remote. 
		 */
		Preferred = 2
	};

	/**
	 * Whether or not to keep a file with the logs. 
	 * 
	 */
	enum class LogCollectionState {
		/**
		 */
		Disabled = 0,
		/**
		 */
		Enabled = 1,
		/**
		 */
		EnabledWithoutPreviousLogHandler = 2
	};

	/**
	 * Verbosity levels of log messages. 
	 * 
	 */
	enum class LogLevel {
		/**
		 * Level for debug messages. 
		 */
		Debug = 1<<0,
		/**
		 * Level for traces. 
		 */
		Trace = 1<<1,
		/**
		 * Level for information messages. 
		 */
		Message = 1<<2,
		/**
		 * Level for warning messages. 
		 */
		Warning = 1<<3,
		/**
		 * Level for error messages. 
		 */
		Error = 1<<4,
		/**
		 * Level for fatal error messages. 
		 */
		Fatal = 1<<5
	};

	/**
	 * Indicates for a given media the stream direction. 
	 * 
	 */
	enum class MediaDirection {
		/**
		 * Default value, shouldn't be used. 
		 */
		Invalid = -1,
		/**
		 * No active media not supported yet. 
		 */
		Inactive = 0,
		/**
		 * Media is only being sent, it won't be received. 
		 */
		SendOnly = 1,
		/**
		 * Media will only be received, nothing will be sent. 
		 */
		RecvOnly = 2,
		/**
		 * Media will be sent and received. 
		 */
		SendRecv = 3
	};

	/**
	 * Enum describing type of media encryption types. 
	 * 
	 */
	enum class MediaEncryption {
		/**
		 * No media encryption is used. 
		 */
		None = 0,
		/**
		 * Use SRTP media encryption. 
		 */
		SRTP = 1,
		/**
		 * Use ZRTP media encryption. 
		 */
		ZRTP = 2,
		/**
		 * Use DTLS media encryption. 
		 */
		DTLS = 3
	};

	/**
	 * Media resource usage. 
	 * 
	 */
	enum class MediaResourceMode {
		/**
		 * Media resources are not shared. 
		 */
		ExclusiveMediaResources = 0,
		/**
		 * Media resources are shared. 
		 */
		SharedMediaResources = 1
	};

	/**
	 * Basic status as defined in section 4.1.4 of RFC 3863. 
	 * 
	 */
	enum class PresenceBasicStatus {
		/**
		 * This value means that the associated contact element, if any, is ready to
		 * accept communication. 
		 */
		Open = 0,
		/**
		 * This value means that the associated contact element, if any, is unable to
		 * accept communication. 
		 */
		Closed = 1
	};

	/**
	 * Defines privacy policy to apply as described by rfc3323. 
	 * 
	 */
	enum class Privacy {
		/**
		 * Privacy services must not perform any privacy function. 
		 */
		None = 0,
		/**
		 * Request that privacy services provide a user-level privacy function. 
		 */
		User = 1,
		/**
		 * Request that privacy services modify headers that cannot be set arbitrarily by
		 * the user (Contact/Via). 
		 */
		Header = 2,
		/**
		 * Request that privacy services provide privacy for session media. 
		 */
		Session = 4,
		/**
		 * rfc3325 The presence of this privacy type in a Privacy header field indicates
		 * that the user would like the Network Asserted Identity to be kept private with
		 * respect to SIP entities outside the Trust Domain with which the user
		 * authenticated. 
		 */
		Id = 8,
		/**
		 * Privacy service must perform the specified services or fail the request. 
		 */
		Critical = 16,
		/**
		 * Special keyword to use privacy as defined either globally or by proxy using
		 * ProxyConfig::setPrivacy() 
		 */
		Default = 32768
	};

	/**
	 * Enum for publish states. 
	 * 
	 */
	enum class PublishState {
		/**
		 * Initial state, do not use. 
		 */
		None = 0,
		/**
		 * An incoming publish is received. 
		 */
		IncomingReceived = 1,
		/**
		 * Publish is accepted. 
		 */
		Ok = 2,
		/**
		 * Publish encoutered an error, Event::getReason() gives reason code. 
		 */
		Error = 3,
		/**
		 * Publish is about to expire, only sent if [sip]->refresh_generic_publish
		 * property is set to 0. 
		 */
		Expiring = 4,
		/**
		 * Event has been un published. 
		 */
		Cleared = 5,
		/**
		 * Publish is about to terminate. 
		 */
		Terminating = 6,
		/**
		 * An outgoing publish was created and submitted. 
		 */
		OutgoingProgress = 7
	};

	/**
	 * Enum describing various failure reasons or contextual information for some
	 * events. 
	 * 
	 */
	enum class Reason {
		/**
		 * No reason has been set by the core. 
		 */
		None = 0,
		/**
		 * No response received from remote. 
		 */
		NoResponse = 1,
		/**
		 * Authentication failed due to bad credentials or resource forbidden. 
		 */
		Forbidden = 2,
		/**
		 * The call has been declined. 
		 */
		Declined = 3,
		/**
		 * Destination of the call was not found. 
		 */
		NotFound = 4,
		/**
		 * The call was not answered in time (request timeout) 
		 */
		NotAnswered = 5,
		/**
		 * Phone line was busy. 
		 */
		Busy = 6,
		/**
		 * Unsupported content. 
		 */
		UnsupportedContent = 7,
		/**
		 * Bad event. 
		 */
		BadEvent = 8,
		/**
		 * Transport error: connection failures, disconnections etc... 
		 */
		IOError = 9,
		/**
		 * Do not disturb reason. 
		 */
		DoNotDisturb = 10,
		/**
		 * Operation is unauthorized because missing credential. 
		 */
		Unauthorized = 11,
		/**
		 * Operation is rejected due to incompatible or unsupported media parameters. 
		 */
		NotAcceptable = 12,
		/**
		 * Operation could not be executed by server or remote client because it didn't
		 * have any context for it. 
		 */
		NoMatch = 13,
		/**
		 * Resource moved permanently. 
		 */
		MovedPermanently = 14,
		/**
		 * Resource no longer exists. 
		 */
		Gone = 15,
		/**
		 * Temporarily unavailable. 
		 */
		TemporarilyUnavailable = 16,
		/**
		 * Address incomplete. 
		 */
		AddressIncomplete = 17,
		/**
		 * Not implemented. 
		 */
		NotImplemented = 18,
		/**
		 * Bad gateway. 
		 */
		BadGateway = 19,
		/**
		 * The received request contains a Session-Expires header field with a duration
		 * below the minimum timer. 
		 */
		SessionIntervalTooSmall = 20,
		/**
		 * Server timeout. 
		 */
		ServerTimeout = 21,
		/**
		 * Unknown reason. 
		 */
		Unknown = 22,
		/**
		 * The call has been transferred. 
		 */
		Transferred = 23,
		/**
		 * Conditional Request Failed. 
		 */
		ConditionalRequestFailed = 24
	};

	/**
	 * Describes proxy registration states. 
	 * 
	 */
	enum class RegistrationState {
		/**
		 * Initial state for registrations. 
		 */
		None = 0,
		/**
		 * Registration is in progress. 
		 */
		Progress = 1,
		/**
		 * Registration is successful. 
		 */
		Ok = 2,
		/**
		 * Unregistration succeeded. 
		 */
		Cleared = 3,
		/**
		 * Registration failed. 
		 */
		Failed = 4,
		/**
		 * Registration refreshing. 
		 */
		Refreshing = 5
	};

	/**
	 * Session Timers refresher. 
	 * 
	 */
	enum class SessionExpiresRefresher {
		/**
		 */
		Unspecified = 0,
		/**
		 */
		UAS = 1,
		/**
		 */
		UAC = 2
	};

	/**
	 * All signal units that a device can use. 
	 * 
	 */
	enum class SignalStrengthUnit {
		/**
		 */
		Rssi = 0,
		/**
		 */
		Dbm = 1
	};

	/**
	 * All signal types that a device can use. 
	 * 
	 */
	enum class SignalType {
		/**
		 */
		Wifi = 0,
		/**
		 */
		Mobile = 1,
		/**
		 */
		Other = 2
	};

	/**
	 * Enum describing type of SRTP encryption suite. 
	 * 
	 */
	enum class SrtpSuite {
		/**
		 */
		AESCM128HMACSHA180 = 0,
		/**
		 */
		AESCM128HMACSHA132 = 1,
		/**
		 */
		AES192CMHMACSHA180 = 2,
		/**
		 */
		AES192CMHMACSHA132 = 3,
		/**
		 */
		AES256CMHMACSHA180 = 4,
		/**
		 */
		AES256CMHMACSHA132 = 5,
		/**
		 */
		AEADAES128GCM = 6,
		/**
		 */
		AEADAES256GCM = 7,
		/**
		 */
		Invalid = 255
	};

	/**
	 * Enum describing the stream types. 
	 * 
	 */
	enum class StreamType {
		/**
		 */
		Audio = 0,
		/**
		 */
		Video = 1,
		/**
		 */
		Text = 2,
		/**
		 */
		Unknown = 3
	};

	/**
	 * Enum controlling behavior for incoming subscription request. 
	 * 
	 */
	enum class SubscribePolicy {
		/**
		 * Does not automatically accept an incoming subscription request. 
		 */
		SPWait = 0,
		/**
		 * Rejects incoming subscription request. 
		 */
		SPDeny = 1,
		/**
		 * Automatically accepts a subscription request. 
		 */
		SPAccept = 2
	};

	/**
	 * Enum for subscription direction (incoming or outgoing). 
	 * 
	 */
	enum class SubscriptionDir {
		/**
		 * Incoming subscription. 
		 */
		Incoming = 0,
		/**
		 * Outgoing subscription. 
		 */
		Outgoing = 1,
		/**
		 * Invalid subscription direction. 
		 */
		InvalidDir = 2
	};

	/**
	 * Enum for subscription states. 
	 * 
	 */
	enum class SubscriptionState {
		/**
		 * Initial state, should not be used. 
		 */
		None = 0,
		/**
		 * An outgoing subcription was sent. 
		 */
		OutgoingProgress = 1,
		/**
		 * An incoming subcription is received. 
		 */
		IncomingReceived = 2,
		/**
		 * Subscription is pending, waiting for user approval. 
		 */
		Pending = 3,
		/**
		 * Subscription is accepted. 
		 */
		Active = 4,
		/**
		 * Subscription is terminated normally. 
		 */
		Terminated = 5,
		/**
		 * Subscription was terminated by an error, indicated by Event::getReason() 
		 */
		Error = 6,
		/**
		 * Subscription is about to expire, only sent if [sip]->refresh_generic_subscribe
		 * property is set to 0. 
		 */
		Expiring = 7
	};

	/**
	 * 
	 */
	enum class SupportLevel {
		/**
		 * No support for the feature. 
		 */
		NoSupport = 0,
		/**
		 * Optional support for the feature. 
		 */
		Optional = 1,
		/**
		 * Mandatory support for the feature. 
		 */
		Mandatory = 2
	};

	/**
	 * Enum listing frequent telephony tones. 
	 * 
	 */
	enum class ToneID {
		/**
		 * Not a tone. 
		 */
		Undefined = 0,
		/**
		 * Busy tone. 
		 */
		Busy = 1,
		/**
		 * Call waiting tone. 
		 */
		CallWaiting = 2,
		/**
		 * Call on hold tone. 
		 */
		CallOnHold = 3,
		/**
		 * Tone played when call is abruptly disconnected (media lost) 
		 */
		CallLost = 4,
		/**
		 * When the call end for any reason but lost. 
		 */
		CallEnd = 5,
		/**
		 * When the call is not answered. 
		 */
		CallNotAnswered = 6
	};

	/**
	 * Enum describing transport type for LinphoneAddress. 
	 * 
	 */
	enum class TransportType {
		/**
		 */
		Udp = 0,
		/**
		 */
		Tcp = 1,
		/**
		 */
		Tls = 2,
		/**
		 */
		Dtls = 3
	};

	/**
	 * Enum describing uPnP states. 
	 * 
	 */
	enum class UpnpState {
		/**
		 * uPnP is not activate 
		 */
		Idle = 0,
		/**
		 * uPnP process is in progress 
		 */
		Pending = 1,
		/**
		 * Internal use: Only used by port binding. 
		 */
		Adding = 2,
		/**
		 * Internal use: Only used by port binding. 
		 */
		Removing = 3,
		/**
		 * uPnP is not available 
		 */
		NotAvailable = 4,
		/**
		 * uPnP is enabled 
		 */
		Ok = 5,
		/**
		 * uPnP processing has failed 
		 */
		Ko = 6,
		/**
		 * IGD router is blacklisted. 
		 */
		Blacklisted = 7
	};

	/**
	 * Enum describing the result of a version update check. 
	 * 
	 */
	enum class VersionUpdateCheckResult {
		/**
		 */
		UpToDate = 0,
		/**
		 */
		NewVersionAvailable = 1,
		/**
		 */
		Error = 2
	};

	/**
	 * Enum representing the type of a video source. 
	 * 
	 */
	enum class VideoSourceType {
		/**
		 */
		Unknown,
		/**
		 * The video source is another call. 
		 */
		Call,
		/**
		 * The video source is a camera. 
		 */
		Camera,
		/**
		 * The video source is an image. 
		 */
		Image
	};

	/**
	 * Enum describing the types of argument for LinphoneXmlRpcRequest. 
	 * 
	 */
	enum class XmlRpcArgType {
		/**
		 */
		None = 0,
		/**
		 */
		Int = 1,
		/**
		 */
		String = 2,
		/**
		 */
		StringStruct = 3
	};

	/**
	 * Enum describing the status of a LinphoneXmlRpcRequest. 
	 * 
	 */
	enum class XmlRpcStatus {
		/**
		 */
		Pending = 0,
		/**
		 */
		Ok = 1,
		/**
		 */
		Failed = 2
	};

	/**
	 * Enum describing the ZRTP key exchange algorithns. 
	 * 
	 */
	enum class ZrtpKeyAgreement {
		/**
		 */
		Invalid = 0,
		/**
		 */
		Dh2K = 1,
		/**
		 */
		Dh3K = 2,
		/**
		 */
		Ec25 = 3,
		/**
		 */
		Ec38 = 4,
		/**
		 */
		Ec52 = 5,
		/**
		 */
		X255 = 6,
		/**
		 */
		X448 = 7,
		/**
		 */
		K255 = 8,
		/**
		 */
		K448 = 9,
		/**
		 */
		Kyb1 = 10,
		/**
		 */
		Kyb2 = 11,
		/**
		 */
		Kyb3 = 12,
		/**
		 */
		Hqc1 = 13,
		/**
		 */
		Hqc2 = 14,
		/**
		 */
		Hqc3 = 15,
		/**
		 */
		K255Kyb512 = 16,
		/**
		 */
		K255Hqc128 = 17,
		/**
		 */
		K448Kyb1024 = 18,
		/**
		 */
		K448Hqc256 = 19,
		/**
		 */
		K255Kyb512Hqc128 = 20,
		/**
		 */
		K448Kyb1024Hqc256 = 21
	};

	/**
	 * Enum describing the ZRTP SAS validation status of a peer URI. 
	 * 
	 */
	enum class ZrtpPeerStatus {
		/**
		 * Peer URI unkown or never validated/invalidated the SAS. 
		 */
		Unknown = 0,
		/**
		 * Peer URI SAS rejected in database. 
		 */
		Invalid = 1,
		/**
		 * Peer URI SAS validated in database. 
		 */
		Valid = 2
	};

	
	typedef int Status;
};

#endif //_ENUMS_HH
