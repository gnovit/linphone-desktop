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

#include <belle-sip/object.h>
#include <linphone/linphonecore.h>
#include <linphone/linphone_tunnel.h>
#include <linphone/linphonecore_utils.h>
#include <linphone/wrapper_utils.h>
#include <linphone/logging.h>
#include "linphone++/linphone.hh"
#include "tools.hh"

using namespace std;
using namespace linphone;



linphone::DigestAuthenticationPolicy::DigestAuthenticationPolicy(void *ptr, bool takeRef): Object(ptr, takeRef) {
}



bool linphone::DigestAuthenticationPolicy::getAllowMd5() const {
	return (linphone_digest_authentication_policy_get_allow_md5((::LinphoneDigestAuthenticationPolicy *)mPrivPtr) != FALSE);
}
void linphone::DigestAuthenticationPolicy::setAllowMd5(bool value) {
	linphone_digest_authentication_policy_set_allow_md5((::LinphoneDigestAuthenticationPolicy *)mPrivPtr, value);
}
bool linphone::DigestAuthenticationPolicy::getAllowNoQop() const {
	return (linphone_digest_authentication_policy_get_allow_no_qop((::LinphoneDigestAuthenticationPolicy *)mPrivPtr) != FALSE);
}
void linphone::DigestAuthenticationPolicy::setAllowNoQop(bool value) {
	linphone_digest_authentication_policy_set_allow_no_qop((::LinphoneDigestAuthenticationPolicy *)mPrivPtr, value);
}




linphone::ParticipantDeviceIdentity::ParticipantDeviceIdentity(void *ptr, bool takeRef): Object(ptr, takeRef) {
}



std::shared_ptr<const linphone::Address> linphone::ParticipantDeviceIdentity::getAddress() const {
	return Object::cPtrToSharedPtr<const linphone::Address>(linphone_participant_device_identity_get_address((::LinphoneParticipantDeviceIdentity *)mPrivPtr));
}
std::string linphone::ParticipantDeviceIdentity::getCapabilityDescriptor() const {
	return StringUtilities::cStringToCpp(linphone_participant_device_identity_get_capability_descriptor((::LinphoneParticipantDeviceIdentity *)mPrivPtr));
}
void linphone::ParticipantDeviceIdentity::setCapabilityDescriptor(const std::string & capabilityDescriptor) {
	linphone_participant_device_identity_set_capability_descriptor((::LinphoneParticipantDeviceIdentity *)mPrivPtr, StringUtilities::cppStringToC(capabilityDescriptor));
}
void linphone::ParticipantDeviceIdentity::setCapabilityDescriptor(const std::list<std::string> & capabilityDescriptorList) {
	linphone_participant_device_identity_set_capability_descriptor_2((::LinphoneParticipantDeviceIdentity *)mPrivPtr, StringBctbxListWrapper(capabilityDescriptorList).c_list());
}
std::list<std::string> linphone::ParticipantDeviceIdentity::getCapabilityDescriptorList() const {
	return StringBctbxListWrapper::bctbxListToCppList(linphone_participant_device_identity_get_capability_descriptor_list((::LinphoneParticipantDeviceIdentity *)mPrivPtr));
}




linphone::PushNotificationMessage::PushNotificationMessage(void *ptr, bool takeRef): Object(ptr, takeRef) {
}



bool linphone::PushNotificationMessage::isConferenceInvitationCancellation() const {
	return (linphone_push_notification_message_is_conference_invitation_cancellation((::LinphonePushNotificationMessage *)mPrivPtr) != FALSE);
}
bool linphone::PushNotificationMessage::isConferenceInvitationNew() const {
	return (linphone_push_notification_message_is_conference_invitation_new((::LinphonePushNotificationMessage *)mPrivPtr) != FALSE);
}
bool linphone::PushNotificationMessage::isConferenceInvitationUpdate() const {
	return (linphone_push_notification_message_is_conference_invitation_update((::LinphonePushNotificationMessage *)mPrivPtr) != FALSE);
}
bool linphone::PushNotificationMessage::isIcalendar() const {
	return (linphone_push_notification_message_is_icalendar((::LinphonePushNotificationMessage *)mPrivPtr) != FALSE);
}
std::string linphone::PushNotificationMessage::getReactionContent() const {
	return StringUtilities::cStringToCpp(linphone_push_notification_message_get_reaction_content((::LinphonePushNotificationMessage *)mPrivPtr));
}




linphone::PushNotificationConfig::PushNotificationConfig(void *ptr, bool takeRef): Object(ptr, takeRef) {
}



std::string linphone::PushNotificationConfig::getBundleIdentifier() const {
	return StringUtilities::cStringToCpp(linphone_push_notification_config_get_bundle_identifier((::LinphonePushNotificationConfig *)mPrivPtr));
}
void linphone::PushNotificationConfig::setBundleIdentifier(const std::string & bundleIdentifier) {
	linphone_push_notification_config_set_bundle_identifier((::LinphonePushNotificationConfig *)mPrivPtr, StringUtilities::cppStringToC(bundleIdentifier));
}
std::string linphone::PushNotificationConfig::getCallSnd() const {
	return StringUtilities::cStringToCpp(linphone_push_notification_config_get_call_snd((::LinphonePushNotificationConfig *)mPrivPtr));
}
void linphone::PushNotificationConfig::setCallSnd(const std::string & callSnd) {
	linphone_push_notification_config_set_call_snd((::LinphonePushNotificationConfig *)mPrivPtr, StringUtilities::cppStringToC(callSnd));
}
std::string linphone::PushNotificationConfig::getCallStr() const {
	return StringUtilities::cStringToCpp(linphone_push_notification_config_get_call_str((::LinphonePushNotificationConfig *)mPrivPtr));
}
void linphone::PushNotificationConfig::setCallStr(const std::string & callStr) {
	linphone_push_notification_config_set_call_str((::LinphonePushNotificationConfig *)mPrivPtr, StringUtilities::cppStringToC(callStr));
}
std::string linphone::PushNotificationConfig::getGroupChatStr() const {
	return StringUtilities::cStringToCpp(linphone_push_notification_config_get_group_chat_str((::LinphonePushNotificationConfig *)mPrivPtr));
}
void linphone::PushNotificationConfig::setGroupChatStr(const std::string & groupChatStr) {
	linphone_push_notification_config_set_group_chat_str((::LinphonePushNotificationConfig *)mPrivPtr, StringUtilities::cppStringToC(groupChatStr));
}
std::string linphone::PushNotificationConfig::getMsgSnd() const {
	return StringUtilities::cStringToCpp(linphone_push_notification_config_get_msg_snd((::LinphonePushNotificationConfig *)mPrivPtr));
}
void linphone::PushNotificationConfig::setMsgSnd(const std::string & msgSnd) {
	linphone_push_notification_config_set_msg_snd((::LinphonePushNotificationConfig *)mPrivPtr, StringUtilities::cppStringToC(msgSnd));
}
std::string linphone::PushNotificationConfig::getMsgStr() const {
	return StringUtilities::cStringToCpp(linphone_push_notification_config_get_msg_str((::LinphonePushNotificationConfig *)mPrivPtr));
}
void linphone::PushNotificationConfig::setMsgStr(const std::string & msgStr) {
	linphone_push_notification_config_set_msg_str((::LinphonePushNotificationConfig *)mPrivPtr, StringUtilities::cppStringToC(msgStr));
}
std::string linphone::PushNotificationConfig::getParam() const {
	return StringUtilities::cStringToCpp(linphone_push_notification_config_get_param((::LinphonePushNotificationConfig *)mPrivPtr));
}
void linphone::PushNotificationConfig::setParam(const std::string & param) {
	linphone_push_notification_config_set_param((::LinphonePushNotificationConfig *)mPrivPtr, StringUtilities::cppStringToC(param));
}
std::string linphone::PushNotificationConfig::getPrid() const {
	return StringUtilities::cStringToCpp(linphone_push_notification_config_get_prid((::LinphonePushNotificationConfig *)mPrivPtr));
}
void linphone::PushNotificationConfig::setPrid(const std::string & prid) {
	linphone_push_notification_config_set_prid((::LinphonePushNotificationConfig *)mPrivPtr, StringUtilities::cppStringToC(prid));
}
std::string linphone::PushNotificationConfig::getProvider() const {
	return StringUtilities::cStringToCpp(linphone_push_notification_config_get_provider((::LinphonePushNotificationConfig *)mPrivPtr));
}
void linphone::PushNotificationConfig::setProvider(const std::string & provider) {
	linphone_push_notification_config_set_provider((::LinphonePushNotificationConfig *)mPrivPtr, StringUtilities::cppStringToC(provider));
}
void linphone::PushNotificationConfig::setRemotePushInterval(const std::string & remotePushInterval) {
	linphone_push_notification_config_set_remote_push_interval((::LinphonePushNotificationConfig *)mPrivPtr, StringUtilities::cppStringToC(remotePushInterval));
}
std::string linphone::PushNotificationConfig::getRemoteToken() const {
	return StringUtilities::cStringToCpp(linphone_push_notification_config_get_remote_token((::LinphonePushNotificationConfig *)mPrivPtr));
}
void linphone::PushNotificationConfig::setRemoteToken(const std::string & remoteToken) {
	linphone_push_notification_config_set_remote_token((::LinphonePushNotificationConfig *)mPrivPtr, StringUtilities::cppStringToC(remoteToken));
}
std::string linphone::PushNotificationConfig::getTeamId() const {
	return StringUtilities::cStringToCpp(linphone_push_notification_config_get_team_id((::LinphonePushNotificationConfig *)mPrivPtr));
}
void linphone::PushNotificationConfig::setTeamId(const std::string & teamId) {
	linphone_push_notification_config_set_team_id((::LinphonePushNotificationConfig *)mPrivPtr, StringUtilities::cppStringToC(teamId));
}
std::string linphone::PushNotificationConfig::getVoipToken() const {
	return StringUtilities::cStringToCpp(linphone_push_notification_config_get_voip_token((::LinphonePushNotificationConfig *)mPrivPtr));
}
void linphone::PushNotificationConfig::setVoipToken(const std::string & voipToken) {
	linphone_push_notification_config_set_voip_token((::LinphonePushNotificationConfig *)mPrivPtr, StringUtilities::cppStringToC(voipToken));
}
std::shared_ptr<linphone::PushNotificationConfig> linphone::PushNotificationConfig::clone() const {
	return Object::cPtrToSharedPtr<linphone::PushNotificationConfig>(linphone_push_notification_config_clone((::LinphonePushNotificationConfig *)mPrivPtr), false);
}
bool linphone::PushNotificationConfig::isEqual(const std::shared_ptr<const linphone::PushNotificationConfig> & otherConfig) const {
	return (linphone_push_notification_config_is_equal((::LinphonePushNotificationConfig *)mPrivPtr, (::LinphonePushNotificationConfig *)Object::sharedPtrToCPtr(std::static_pointer_cast<const Object,const linphone::PushNotificationConfig>(otherConfig))) != FALSE);
}




linphone::VideoSourceDescriptor::VideoSourceDescriptor(void *ptr, bool takeRef): Object(ptr, takeRef) {
}



std::shared_ptr<linphone::Call> linphone::VideoSourceDescriptor::getCall() const {
	return Object::cPtrToSharedPtr<linphone::Call>(linphone_video_source_descriptor_get_call((::LinphoneVideoSourceDescriptor *)mPrivPtr));
}
void linphone::VideoSourceDescriptor::setCall(const std::shared_ptr<linphone::Call> & call) {
	linphone_video_source_descriptor_set_call((::LinphoneVideoSourceDescriptor *)mPrivPtr, (::LinphoneCall *)Object::sharedPtrToCPtr(std::static_pointer_cast<Object,linphone::Call>(call)));
}
std::string linphone::VideoSourceDescriptor::getCameraId() const {
	return StringUtilities::cStringToCpp(linphone_video_source_descriptor_get_camera_id((::LinphoneVideoSourceDescriptor *)mPrivPtr));
}
void linphone::VideoSourceDescriptor::setCameraId(const std::string & cameraId) {
	linphone_video_source_descriptor_set_camera_id((::LinphoneVideoSourceDescriptor *)mPrivPtr, StringUtilities::cppStringToC(cameraId));
}
std::string linphone::VideoSourceDescriptor::getImage() const {
	return StringUtilities::cStringToCpp(linphone_video_source_descriptor_get_image((::LinphoneVideoSourceDescriptor *)mPrivPtr));
}
void linphone::VideoSourceDescriptor::setImage(const std::string & imagePath) {
	linphone_video_source_descriptor_set_image((::LinphoneVideoSourceDescriptor *)mPrivPtr, StringUtilities::cppStringToC(imagePath));
}
linphone::VideoSourceType linphone::VideoSourceDescriptor::getType() const {
	return (linphone::VideoSourceType)linphone_video_source_descriptor_get_type((::LinphoneVideoSourceDescriptor *)mPrivPtr);
}
std::shared_ptr<linphone::VideoSourceDescriptor> linphone::VideoSourceDescriptor::clone() const {
	return Object::cPtrToSharedPtr<linphone::VideoSourceDescriptor>(linphone_video_source_descriptor_clone((::LinphoneVideoSourceDescriptor *)mPrivPtr), false);
}




linphone::VideoActivationPolicy::VideoActivationPolicy(void *ptr, bool takeRef): Object(ptr, takeRef) {
}



bool linphone::VideoActivationPolicy::getAutomaticallyAccept() const {
	return (linphone_video_activation_policy_get_automatically_accept((::LinphoneVideoActivationPolicy *)mPrivPtr) != FALSE);
}
void linphone::VideoActivationPolicy::setAutomaticallyAccept(bool enable) {
	linphone_video_activation_policy_set_automatically_accept((::LinphoneVideoActivationPolicy *)mPrivPtr, enable);
}
bool linphone::VideoActivationPolicy::getAutomaticallyInitiate() const {
	return (linphone_video_activation_policy_get_automatically_initiate((::LinphoneVideoActivationPolicy *)mPrivPtr) != FALSE);
}
void linphone::VideoActivationPolicy::setAutomaticallyInitiate(bool enable) {
	linphone_video_activation_policy_set_automatically_initiate((::LinphoneVideoActivationPolicy *)mPrivPtr, enable);
}




linphone::ParticipantImdnState::ParticipantImdnState(void *ptr, bool takeRef): Object(ptr, takeRef) {
}



std::shared_ptr<const linphone::Participant> linphone::ParticipantImdnState::getParticipant() const {
	return Object::cPtrToSharedPtr<const linphone::Participant>(linphone_participant_imdn_state_get_participant((::LinphoneParticipantImdnState *)mPrivPtr));
}
linphone::ChatMessage::State linphone::ParticipantImdnState::getState() const {
	return (linphone::ChatMessage::State)linphone_participant_imdn_state_get_state((::LinphoneParticipantImdnState *)mPrivPtr);
}
time_t linphone::ParticipantImdnState::getStateChangeTime() const {
	return linphone_participant_imdn_state_get_state_change_time((::LinphoneParticipantImdnState *)mPrivPtr);
}




linphone::ChatMessageReaction::ChatMessageReaction(void *ptr, bool takeRef): Object(ptr, takeRef) {
}



std::string linphone::ChatMessageReaction::getBody() const {
	return StringUtilities::cStringToCpp(linphone_chat_message_reaction_get_body((::LinphoneChatMessageReaction *)mPrivPtr));
}
std::string linphone::ChatMessageReaction::getCallId() const {
	return StringUtilities::cStringToCpp(linphone_chat_message_reaction_get_call_id((::LinphoneChatMessageReaction *)mPrivPtr));
}
std::shared_ptr<const linphone::Address> linphone::ChatMessageReaction::getFromAddress() const {
	return Object::cPtrToSharedPtr<const linphone::Address>(linphone_chat_message_reaction_get_from_address((::LinphoneChatMessageReaction *)mPrivPtr));
}
void linphone::ChatMessageReaction::send() {
	linphone_chat_message_reaction_send((::LinphoneChatMessageReaction *)mPrivPtr);
}



static void linphone_conference_scheduler_cbs_on_state_changed_cb(LinphoneConferenceScheduler * conference_scheduler, LinphoneConferenceSchedulerState state) {
	LinphoneConferenceSchedulerCbs *cbs = linphone_conference_scheduler_get_current_callbacks(conference_scheduler);
	if (cbs) {
		// Make a copy of the list of listeners, so that it is possible to remove a listener from a listener without corrupting the list.
		std::list<std::shared_ptr<Listener> > listeners = *static_cast<std::list<std::shared_ptr<Listener> > *>(belle_sip_object_data_get((::belle_sip_object_t *)cbs, MultiListenableObject::sListenerListName));
		for(std::list<std::shared_ptr<Listener> >::iterator it=listeners.begin(); it!=listeners.end(); it++) {
			std::shared_ptr<ConferenceSchedulerListener> listener = std::static_pointer_cast<ConferenceSchedulerListener,Listener>(*it);
			listener->onStateChanged(Object::cPtrToSharedPtr<ConferenceScheduler>(conference_scheduler), (ConferenceScheduler::State)state);
		}
	}
}
static void linphone_conference_scheduler_cbs_on_invitations_sent_cb(LinphoneConferenceScheduler * conference_scheduler, const bctbx_list_t * failed_invitations) {
	LinphoneConferenceSchedulerCbs *cbs = linphone_conference_scheduler_get_current_callbacks(conference_scheduler);
	if (cbs) {
		// Make a copy of the list of listeners, so that it is possible to remove a listener from a listener without corrupting the list.
		std::list<std::shared_ptr<Listener> > listeners = *static_cast<std::list<std::shared_ptr<Listener> > *>(belle_sip_object_data_get((::belle_sip_object_t *)cbs, MultiListenableObject::sListenerListName));
		for(std::list<std::shared_ptr<Listener> >::iterator it=listeners.begin(); it!=listeners.end(); it++) {
			std::shared_ptr<ConferenceSchedulerListener> listener = std::static_pointer_cast<ConferenceSchedulerListener,Listener>(*it);
			listener->onInvitationsSent(Object::cPtrToSharedPtr<ConferenceScheduler>(conference_scheduler), ObjectBctbxListWrapper<Address>::bctbxListToCppList(failed_invitations, true));
		}
	}
}

linphone::ConferenceScheduler::ConferenceScheduler(void *ptr, bool takeRef): MultiListenableObject(ptr, takeRef) {
}

void ConferenceScheduler::addListener(const std::shared_ptr<ConferenceSchedulerListener> &listener) {
	MultiListenableObject::addListener(std::static_pointer_cast<Listener,ConferenceSchedulerListener>(listener));
}

void ConferenceScheduler::removeListener(const std::shared_ptr<ConferenceSchedulerListener> &listener) {
	MultiListenableObject::removeListener(std::static_pointer_cast<Listener,ConferenceSchedulerListener>(listener));
}

void *ConferenceScheduler::createCallbacks() {
	LinphoneConferenceSchedulerCbs *cbs = linphone_factory_create_conference_scheduler_cbs(linphone_factory_get());
	linphone_conference_scheduler_cbs_set_state_changed(cbs, linphone_conference_scheduler_cbs_on_state_changed_cb);
	linphone_conference_scheduler_cbs_set_invitations_sent(cbs, linphone_conference_scheduler_cbs_on_invitations_sent_cb);
	belle_sip_object_data_set((::belle_sip_object_t *)(cbs), MultiListenableObject::sListenerListName, new list<shared_ptr<Listener>>(), (::belle_sip_data_destroy)deleteListenerList);
	belle_sip_object_data_set((::belle_sip_object_t *)(mPrivPtr), MultiListenableObject::sCbsPtrName, cbs, nullptr);
	linphone_conference_scheduler_add_callbacks(static_cast<::LinphoneConferenceScheduler *>(mPrivPtr), cbs);
	belle_sip_object_unref((::belle_sip_object_t *)cbs);
	return cbs;
}


std::shared_ptr<linphone::Account> linphone::ConferenceScheduler::getAccount() const {
	return Object::cPtrToSharedPtr<linphone::Account>(linphone_conference_scheduler_get_account((::LinphoneConferenceScheduler *)mPrivPtr));
}
void linphone::ConferenceScheduler::setAccount(const std::shared_ptr<linphone::Account> & account) {
	linphone_conference_scheduler_set_account((::LinphoneConferenceScheduler *)mPrivPtr, (::LinphoneAccount *)Object::sharedPtrToCPtr(std::static_pointer_cast<Object,linphone::Account>(account)));
}
std::shared_ptr<linphone::Core> linphone::ConferenceScheduler::getCore() const {
	return Object::cPtrToSharedPtr<linphone::Core>(linphone_conference_scheduler_get_core((::LinphoneConferenceScheduler *)mPrivPtr));
}
std::shared_ptr<const linphone::ConferenceInfo> linphone::ConferenceScheduler::getInfo() const {
	return Object::cPtrToSharedPtr<const linphone::ConferenceInfo>(linphone_conference_scheduler_get_info((::LinphoneConferenceScheduler *)mPrivPtr));
}
void linphone::ConferenceScheduler::setInfo(const std::shared_ptr<linphone::ConferenceInfo> & conferenceInfo) {
	linphone_conference_scheduler_set_info((::LinphoneConferenceScheduler *)mPrivPtr, (::LinphoneConferenceInfo *)Object::sharedPtrToCPtr(std::static_pointer_cast<Object,linphone::ConferenceInfo>(conferenceInfo)));
}
void linphone::ConferenceScheduler::cancelConference(const std::shared_ptr<linphone::ConferenceInfo> & conferenceInfo) {
	linphone_conference_scheduler_cancel_conference((::LinphoneConferenceScheduler *)mPrivPtr, (::LinphoneConferenceInfo *)Object::sharedPtrToCPtr(std::static_pointer_cast<Object,linphone::ConferenceInfo>(conferenceInfo)));
}
void linphone::ConferenceScheduler::sendInvitations(const std::shared_ptr<linphone::ChatRoomParams> & chatRoomParams) {
	linphone_conference_scheduler_send_invitations((::LinphoneConferenceScheduler *)mPrivPtr, (::LinphoneChatRoomParams *)Object::sharedPtrToCPtr(std::static_pointer_cast<Object,linphone::ChatRoomParams>(chatRoomParams)));
}




linphone::SignalInformation::SignalInformation(void *ptr, bool takeRef): Object(ptr, takeRef) {
}



linphone::SignalType linphone::SignalInformation::getSignalType() {
	return (linphone::SignalType)linphone_signal_information_get_signal_type((::LinphoneSignalInformation *)mPrivPtr);
}
void linphone::SignalInformation::setSignalType(linphone::SignalType type) {
	linphone_signal_information_set_signal_type((::LinphoneSignalInformation *)mPrivPtr, (::LinphoneSignalType)type);
}
linphone::SignalStrengthUnit linphone::SignalInformation::getSignalUnit() {
	return (linphone::SignalStrengthUnit)linphone_signal_information_get_signal_unit((::LinphoneSignalInformation *)mPrivPtr);
}
void linphone::SignalInformation::setSignalUnit(linphone::SignalStrengthUnit unit) {
	linphone_signal_information_set_signal_unit((::LinphoneSignalInformation *)mPrivPtr, (::LinphoneSignalStrengthUnit)unit);
}
float linphone::SignalInformation::getStrength() {
	return linphone_signal_information_get_strength((::LinphoneSignalInformation *)mPrivPtr);
}
void linphone::SignalInformation::setValue(float value) {
	linphone_signal_information_set_value((::LinphoneSignalInformation *)mPrivPtr, value);
}
std::shared_ptr<linphone::SignalInformation> linphone::SignalInformation::clone() const {
	return Object::cPtrToSharedPtr<linphone::SignalInformation>(linphone_signal_information_clone((::LinphoneSignalInformation *)mPrivPtr), false);
}




linphone::FriendPhoneNumber::FriendPhoneNumber(void *ptr, bool takeRef): Object(ptr, takeRef) {
}



std::string linphone::FriendPhoneNumber::getLabel() const {
	return StringUtilities::cStringToCpp(linphone_friend_phone_number_get_label((::LinphoneFriendPhoneNumber *)mPrivPtr));
}
void linphone::FriendPhoneNumber::setLabel(const std::string & label) {
	linphone_friend_phone_number_set_label((::LinphoneFriendPhoneNumber *)mPrivPtr, StringUtilities::cppStringToC(label));
}
std::string linphone::FriendPhoneNumber::getPhoneNumber() const {
	return StringUtilities::cStringToCpp(linphone_friend_phone_number_get_phone_number((::LinphoneFriendPhoneNumber *)mPrivPtr));
}
void linphone::FriendPhoneNumber::setPhoneNumber(const std::string & number) {
	linphone_friend_phone_number_set_phone_number((::LinphoneFriendPhoneNumber *)mPrivPtr, StringUtilities::cppStringToC(number));
}
std::shared_ptr<linphone::FriendPhoneNumber> linphone::FriendPhoneNumber::clone() const {
	return Object::cPtrToSharedPtr<linphone::FriendPhoneNumber>(linphone_friend_phone_number_clone((::LinphoneFriendPhoneNumber *)mPrivPtr), false);
}



static void linphone_participant_device_cbs_on_is_speaking_changed_cb(LinphoneParticipantDevice * participant_device, bool_t is_speaking) {
	LinphoneParticipantDeviceCbs *cbs = linphone_participant_device_get_current_callbacks(participant_device);
	if (cbs) {
		// Make a copy of the list of listeners, so that it is possible to remove a listener from a listener without corrupting the list.
		std::list<std::shared_ptr<Listener> > listeners = *static_cast<std::list<std::shared_ptr<Listener> > *>(belle_sip_object_data_get((::belle_sip_object_t *)cbs, MultiListenableObject::sListenerListName));
		for(std::list<std::shared_ptr<Listener> >::iterator it=listeners.begin(); it!=listeners.end(); it++) {
			std::shared_ptr<ParticipantDeviceListener> listener = std::static_pointer_cast<ParticipantDeviceListener,Listener>(*it);
			listener->onIsSpeakingChanged(Object::cPtrToSharedPtr<ParticipantDevice>(participant_device), (is_speaking != FALSE));
		}
	}
}
static void linphone_participant_device_cbs_on_is_muted_cb(LinphoneParticipantDevice * participant_device, bool_t is_muted) {
	LinphoneParticipantDeviceCbs *cbs = linphone_participant_device_get_current_callbacks(participant_device);
	if (cbs) {
		// Make a copy of the list of listeners, so that it is possible to remove a listener from a listener without corrupting the list.
		std::list<std::shared_ptr<Listener> > listeners = *static_cast<std::list<std::shared_ptr<Listener> > *>(belle_sip_object_data_get((::belle_sip_object_t *)cbs, MultiListenableObject::sListenerListName));
		for(std::list<std::shared_ptr<Listener> >::iterator it=listeners.begin(); it!=listeners.end(); it++) {
			std::shared_ptr<ParticipantDeviceListener> listener = std::static_pointer_cast<ParticipantDeviceListener,Listener>(*it);
			listener->onIsMuted(Object::cPtrToSharedPtr<ParticipantDevice>(participant_device), (is_muted != FALSE));
		}
	}
}
static void linphone_participant_device_cbs_on_state_changed_cb(LinphoneParticipantDevice * participant_device, const LinphoneParticipantDeviceState state) {
	LinphoneParticipantDeviceCbs *cbs = linphone_participant_device_get_current_callbacks(participant_device);
	if (cbs) {
		// Make a copy of the list of listeners, so that it is possible to remove a listener from a listener without corrupting the list.
		std::list<std::shared_ptr<Listener> > listeners = *static_cast<std::list<std::shared_ptr<Listener> > *>(belle_sip_object_data_get((::belle_sip_object_t *)cbs, MultiListenableObject::sListenerListName));
		for(std::list<std::shared_ptr<Listener> >::iterator it=listeners.begin(); it!=listeners.end(); it++) {
			std::shared_ptr<ParticipantDeviceListener> listener = std::static_pointer_cast<ParticipantDeviceListener,Listener>(*it);
			listener->onStateChanged(Object::cPtrToSharedPtr<ParticipantDevice>(participant_device), (ParticipantDevice::State)state);
		}
	}
}
static void linphone_participant_device_cbs_on_stream_capability_changed_cb(LinphoneParticipantDevice * participant_device, LinphoneMediaDirection direction, const LinphoneStreamType stream_type) {
	LinphoneParticipantDeviceCbs *cbs = linphone_participant_device_get_current_callbacks(participant_device);
	if (cbs) {
		// Make a copy of the list of listeners, so that it is possible to remove a listener from a listener without corrupting the list.
		std::list<std::shared_ptr<Listener> > listeners = *static_cast<std::list<std::shared_ptr<Listener> > *>(belle_sip_object_data_get((::belle_sip_object_t *)cbs, MultiListenableObject::sListenerListName));
		for(std::list<std::shared_ptr<Listener> >::iterator it=listeners.begin(); it!=listeners.end(); it++) {
			std::shared_ptr<ParticipantDeviceListener> listener = std::static_pointer_cast<ParticipantDeviceListener,Listener>(*it);
			listener->onStreamCapabilityChanged(Object::cPtrToSharedPtr<ParticipantDevice>(participant_device), (MediaDirection)direction, (StreamType)stream_type);
		}
	}
}
static void linphone_participant_device_cbs_on_stream_availability_changed_cb(LinphoneParticipantDevice * participant_device, bool_t available, const LinphoneStreamType stream_type) {
	LinphoneParticipantDeviceCbs *cbs = linphone_participant_device_get_current_callbacks(participant_device);
	if (cbs) {
		// Make a copy of the list of listeners, so that it is possible to remove a listener from a listener without corrupting the list.
		std::list<std::shared_ptr<Listener> > listeners = *static_cast<std::list<std::shared_ptr<Listener> > *>(belle_sip_object_data_get((::belle_sip_object_t *)cbs, MultiListenableObject::sListenerListName));
		for(std::list<std::shared_ptr<Listener> >::iterator it=listeners.begin(); it!=listeners.end(); it++) {
			std::shared_ptr<ParticipantDeviceListener> listener = std::static_pointer_cast<ParticipantDeviceListener,Listener>(*it);
			listener->onStreamAvailabilityChanged(Object::cPtrToSharedPtr<ParticipantDevice>(participant_device), (available != FALSE), (StreamType)stream_type);
		}
	}
}
static void linphone_participant_device_cbs_on_video_display_error_occurred_cb(LinphoneParticipantDevice * participant_device, int error_code) {
	LinphoneParticipantDeviceCbs *cbs = linphone_participant_device_get_current_callbacks(participant_device);
	if (cbs) {
		// Make a copy of the list of listeners, so that it is possible to remove a listener from a listener without corrupting the list.
		std::list<std::shared_ptr<Listener> > listeners = *static_cast<std::list<std::shared_ptr<Listener> > *>(belle_sip_object_data_get((::belle_sip_object_t *)cbs, MultiListenableObject::sListenerListName));
		for(std::list<std::shared_ptr<Listener> >::iterator it=listeners.begin(); it!=listeners.end(); it++) {
			std::shared_ptr<ParticipantDeviceListener> listener = std::static_pointer_cast<ParticipantDeviceListener,Listener>(*it);
			listener->onVideoDisplayErrorOccurred(Object::cPtrToSharedPtr<ParticipantDevice>(participant_device), error_code);
		}
	}
}

linphone::ParticipantDevice::ParticipantDevice(void *ptr, bool takeRef): MultiListenableObject(ptr, takeRef) {
}

void ParticipantDevice::addListener(const std::shared_ptr<ParticipantDeviceListener> &listener) {
	MultiListenableObject::addListener(std::static_pointer_cast<Listener,ParticipantDeviceListener>(listener));
}

void ParticipantDevice::removeListener(const std::shared_ptr<ParticipantDeviceListener> &listener) {
	MultiListenableObject::removeListener(std::static_pointer_cast<Listener,ParticipantDeviceListener>(listener));
}

void *ParticipantDevice::createCallbacks() {
	LinphoneParticipantDeviceCbs *cbs = linphone_factory_create_participant_device_cbs(linphone_factory_get());
	linphone_participant_device_cbs_set_is_speaking_changed(cbs, linphone_participant_device_cbs_on_is_speaking_changed_cb);
	linphone_participant_device_cbs_set_is_muted(cbs, linphone_participant_device_cbs_on_is_muted_cb);
	linphone_participant_device_cbs_set_state_changed(cbs, linphone_participant_device_cbs_on_state_changed_cb);
	linphone_participant_device_cbs_set_stream_capability_changed(cbs, linphone_participant_device_cbs_on_stream_capability_changed_cb);
	linphone_participant_device_cbs_set_stream_availability_changed(cbs, linphone_participant_device_cbs_on_stream_availability_changed_cb);
	linphone_participant_device_cbs_set_video_display_error_occurred(cbs, linphone_participant_device_cbs_on_video_display_error_occurred_cb);
	belle_sip_object_data_set((::belle_sip_object_t *)(cbs), MultiListenableObject::sListenerListName, new list<shared_ptr<Listener>>(), (::belle_sip_data_destroy)deleteListenerList);
	belle_sip_object_data_set((::belle_sip_object_t *)(mPrivPtr), MultiListenableObject::sCbsPtrName, cbs, nullptr);
	linphone_participant_device_add_callbacks(static_cast<::LinphoneParticipantDevice *>(mPrivPtr), cbs);
	belle_sip_object_unref((::belle_sip_object_t *)cbs);
	return cbs;
}


std::shared_ptr<const linphone::Address> linphone::ParticipantDevice::getAddress() const {
	return Object::cPtrToSharedPtr<const linphone::Address>(linphone_participant_device_get_address((::LinphoneParticipantDevice *)mPrivPtr));
}
linphone::ParticipantDevice::DisconnectionMethod linphone::ParticipantDevice::getDisconnectionMethod() const {
	return (DisconnectionMethod)linphone_participant_device_get_disconnection_method((::LinphoneParticipantDevice *)mPrivPtr);
}
std::string linphone::ParticipantDevice::getDisconnectionReason() const {
	return StringUtilities::cStringToCpp(linphone_participant_device_get_disconnection_reason((::LinphoneParticipantDevice *)mPrivPtr));
}
bool linphone::ParticipantDevice::isInConference() const {
	return (linphone_participant_device_is_in_conference((::LinphoneParticipantDevice *)mPrivPtr) != FALSE);
}
bool linphone::ParticipantDevice::getIsMuted() const {
	return (linphone_participant_device_get_is_muted((::LinphoneParticipantDevice *)mPrivPtr) != FALSE);
}
bool linphone::ParticipantDevice::getIsSpeaking() const {
	return (linphone_participant_device_get_is_speaking((::LinphoneParticipantDevice *)mPrivPtr) != FALSE);
}
linphone::ParticipantDevice::JoiningMethod linphone::ParticipantDevice::getJoiningMethod() const {
	return (JoiningMethod)linphone_participant_device_get_joining_method((::LinphoneParticipantDevice *)mPrivPtr);
}
std::string linphone::ParticipantDevice::getName() const {
	return StringUtilities::cStringToCpp(linphone_participant_device_get_name((::LinphoneParticipantDevice *)mPrivPtr));
}
void * linphone::ParticipantDevice::getNativeVideoWindowId() const {
	return linphone_participant_device_get_native_video_window_id((::LinphoneParticipantDevice *)mPrivPtr);
}
void linphone::ParticipantDevice::setNativeVideoWindowId(void * windowId) {
	linphone_participant_device_set_native_video_window_id((::LinphoneParticipantDevice *)mPrivPtr, windowId);
}
linphone::ChatRoom::SecurityLevel linphone::ParticipantDevice::getSecurityLevel() const {
	return (linphone::ChatRoom::SecurityLevel)linphone_participant_device_get_security_level((::LinphoneParticipantDevice *)mPrivPtr);
}
linphone::ParticipantDevice::State linphone::ParticipantDevice::getState() const {
	return (State)linphone_participant_device_get_state((::LinphoneParticipantDevice *)mPrivPtr);
}
time_t linphone::ParticipantDevice::getTimeOfDisconnection() const {
	return linphone_participant_device_get_time_of_disconnection((::LinphoneParticipantDevice *)mPrivPtr);
}
time_t linphone::ParticipantDevice::getTimeOfJoining() const {
	return linphone_participant_device_get_time_of_joining((::LinphoneParticipantDevice *)mPrivPtr);
}
void * linphone::ParticipantDevice::createNativeVideoWindowId() const {
	return linphone_participant_device_create_native_video_window_id((::LinphoneParticipantDevice *)mPrivPtr);
}
uint32_t linphone::ParticipantDevice::getSsrc(linphone::StreamType streamType) const {
	return linphone_participant_device_get_ssrc((::LinphoneParticipantDevice *)mPrivPtr, (::LinphoneStreamType)streamType);
}
bool linphone::ParticipantDevice::getStreamAvailability(linphone::StreamType streamType) const {
	return (linphone_participant_device_get_stream_availability((::LinphoneParticipantDevice *)mPrivPtr, (::LinphoneStreamType)streamType) != FALSE);
}
linphone::MediaDirection linphone::ParticipantDevice::getStreamCapability(linphone::StreamType streamType) const {
	return (linphone::MediaDirection)linphone_participant_device_get_stream_capability((::LinphoneParticipantDevice *)mPrivPtr, (::LinphoneStreamType)streamType);
}




linphone::PresenceActivity::PresenceActivity(void *ptr, bool takeRef): Object(ptr, takeRef) {
}



std::string linphone::PresenceActivity::getDescription() const {
	return StringUtilities::cStringToCpp(linphone_presence_activity_get_description((::LinphonePresenceActivity *)mPrivPtr));
}
linphone::Status linphone::PresenceActivity::setDescription(const std::string & description) {
	return linphone_presence_activity_set_description((::LinphonePresenceActivity *)mPrivPtr, StringUtilities::cppStringToC(description));
}
linphone::PresenceActivity::Type linphone::PresenceActivity::getType() const {
	return (Type)linphone_presence_activity_get_type((::LinphonePresenceActivity *)mPrivPtr);
}
linphone::Status linphone::PresenceActivity::setType(linphone::PresenceActivity::Type acttype) {
	return linphone_presence_activity_set_type((::LinphonePresenceActivity *)mPrivPtr, (::LinphonePresenceActivityType)acttype);
}
std::string linphone::PresenceActivity::toString() const {
	return StringUtilities::cStringToCpp(linphone_presence_activity_to_string((::LinphonePresenceActivity *)mPrivPtr));
}




linphone::ConferenceParams::ConferenceParams(void *ptr, bool takeRef): Object(ptr, takeRef) {
}



std::shared_ptr<linphone::Account> linphone::ConferenceParams::getAccount() const {
	return Object::cPtrToSharedPtr<linphone::Account>(linphone_conference_params_get_account((::LinphoneConferenceParams *)mPrivPtr));
}
bool linphone::ConferenceParams::audioEnabled() const {
	return (linphone_conference_params_audio_enabled((::LinphoneConferenceParams *)mPrivPtr) != FALSE);
}
void linphone::ConferenceParams::enableAudio(bool enable) {
	linphone_conference_params_enable_audio((::LinphoneConferenceParams *)mPrivPtr, enable);
}
bool linphone::ConferenceParams::chatEnabled() const {
	return (linphone_conference_params_chat_enabled((::LinphoneConferenceParams *)mPrivPtr) != FALSE);
}
void linphone::ConferenceParams::enableChat(bool enable) {
	linphone_conference_params_enable_chat((::LinphoneConferenceParams *)mPrivPtr, enable);
}
std::shared_ptr<const linphone::Address> linphone::ConferenceParams::getConferenceFactoryAddress() const {
	return Object::cPtrToSharedPtr<const linphone::Address>(linphone_conference_params_get_conference_factory_address((::LinphoneConferenceParams *)mPrivPtr));
}
void linphone::ConferenceParams::setConferenceFactoryAddress(const std::shared_ptr<const linphone::Address> & address) {
	linphone_conference_params_set_conference_factory_address((::LinphoneConferenceParams *)mPrivPtr, (::LinphoneAddress *)Object::sharedPtrToCPtr(std::static_pointer_cast<const Object,const linphone::Address>(address)));
}
std::string linphone::ConferenceParams::getDescription() const {
	return StringUtilities::cStringToCpp(linphone_conference_params_get_description((::LinphoneConferenceParams *)mPrivPtr));
}
void linphone::ConferenceParams::setDescription(const std::string & description) {
	linphone_conference_params_set_description((::LinphoneConferenceParams *)mPrivPtr, StringUtilities::cppStringToC(description));
}
time_t linphone::ConferenceParams::getEndTime() const {
	return linphone_conference_params_get_end_time((::LinphoneConferenceParams *)mPrivPtr);
}
void linphone::ConferenceParams::setEndTime(time_t end) {
	linphone_conference_params_set_end_time((::LinphoneConferenceParams *)mPrivPtr, end);
}
void linphone::ConferenceParams::setHidden(bool hidden) {
	linphone_conference_params_set_hidden((::LinphoneConferenceParams *)mPrivPtr, hidden);
}
bool linphone::ConferenceParams::isAudioEnabled() const {
	return (linphone_conference_params_is_audio_enabled((::LinphoneConferenceParams *)mPrivPtr) != FALSE);
}
bool linphone::ConferenceParams::isChatEnabled() const {
	return (linphone_conference_params_is_chat_enabled((::LinphoneConferenceParams *)mPrivPtr) != FALSE);
}
bool linphone::ConferenceParams::isHidden() const {
	return (linphone_conference_params_is_hidden((::LinphoneConferenceParams *)mPrivPtr) != FALSE);
}
bool linphone::ConferenceParams::isLocalParticipantEnabled() const {
	return (linphone_conference_params_is_local_participant_enabled((::LinphoneConferenceParams *)mPrivPtr) != FALSE);
}
bool linphone::ConferenceParams::isOneParticipantConferenceEnabled() const {
	return (linphone_conference_params_is_one_participant_conference_enabled((::LinphoneConferenceParams *)mPrivPtr) != FALSE);
}
bool linphone::ConferenceParams::isVideoEnabled() const {
	return (linphone_conference_params_is_video_enabled((::LinphoneConferenceParams *)mPrivPtr) != FALSE);
}
bool linphone::ConferenceParams::localParticipantEnabled() const {
	return (linphone_conference_params_local_participant_enabled((::LinphoneConferenceParams *)mPrivPtr) != FALSE);
}
void linphone::ConferenceParams::enableLocalParticipant(bool enable) {
	linphone_conference_params_enable_local_participant((::LinphoneConferenceParams *)mPrivPtr, enable);
}
bool linphone::ConferenceParams::oneParticipantConferenceEnabled() const {
	return (linphone_conference_params_one_participant_conference_enabled((::LinphoneConferenceParams *)mPrivPtr) != FALSE);
}
void linphone::ConferenceParams::enableOneParticipantConference(bool enable) {
	linphone_conference_params_enable_one_participant_conference((::LinphoneConferenceParams *)mPrivPtr, enable);
}
linphone::Conference::ParticipantListType linphone::ConferenceParams::getParticipantListType() const {
	return (linphone::Conference::ParticipantListType)linphone_conference_params_get_participant_list_type((::LinphoneConferenceParams *)mPrivPtr);
}
void linphone::ConferenceParams::setParticipantListType(linphone::Conference::ParticipantListType type) {
	linphone_conference_params_set_participant_list_type((::LinphoneConferenceParams *)mPrivPtr, (::LinphoneConferenceParticipantListType)type);
}
std::shared_ptr<linphone::ProxyConfig> linphone::ConferenceParams::getProxyCfg() const {
	return Object::cPtrToSharedPtr<linphone::ProxyConfig>(linphone_conference_params_get_proxy_cfg((::LinphoneConferenceParams *)mPrivPtr));
}
linphone::Conference::SecurityLevel linphone::ConferenceParams::getSecurityLevel() const {
	return (linphone::Conference::SecurityLevel)linphone_conference_params_get_security_level((::LinphoneConferenceParams *)mPrivPtr);
}
void linphone::ConferenceParams::setSecurityLevel(linphone::Conference::SecurityLevel securityLevel) {
	linphone_conference_params_set_security_level((::LinphoneConferenceParams *)mPrivPtr, (::LinphoneConferenceSecurityLevel)securityLevel);
}
time_t linphone::ConferenceParams::getStartTime() const {
	return linphone_conference_params_get_start_time((::LinphoneConferenceParams *)mPrivPtr);
}
void linphone::ConferenceParams::setStartTime(time_t start) {
	linphone_conference_params_set_start_time((::LinphoneConferenceParams *)mPrivPtr, start);
}
std::string linphone::ConferenceParams::getSubject() const {
	return StringUtilities::cStringToCpp(linphone_conference_params_get_subject((::LinphoneConferenceParams *)mPrivPtr));
}
void linphone::ConferenceParams::setSubject(const std::string & subject) {
	linphone_conference_params_set_subject((::LinphoneConferenceParams *)mPrivPtr, StringUtilities::cppStringToC(subject));
}
bool linphone::ConferenceParams::videoEnabled() const {
	return (linphone_conference_params_video_enabled((::LinphoneConferenceParams *)mPrivPtr) != FALSE);
}
void linphone::ConferenceParams::enableVideo(bool enable) {
	linphone_conference_params_enable_video((::LinphoneConferenceParams *)mPrivPtr, enable);
}
std::shared_ptr<linphone::ConferenceParams> linphone::ConferenceParams::clone() const {
	return Object::cPtrToSharedPtr<linphone::ConferenceParams>(linphone_conference_params_clone((::LinphoneConferenceParams *)mPrivPtr), false);
}




linphone::PresenceService::PresenceService(void *ptr, bool takeRef): Object(ptr, takeRef) {
}



linphone::PresenceBasicStatus linphone::PresenceService::getBasicStatus() const {
	return (linphone::PresenceBasicStatus)linphone_presence_service_get_basic_status((::LinphonePresenceService *)mPrivPtr);
}
linphone::Status linphone::PresenceService::setBasicStatus(linphone::PresenceBasicStatus basicStatus) {
	return linphone_presence_service_set_basic_status((::LinphonePresenceService *)mPrivPtr, (::LinphonePresenceBasicStatus)basicStatus);
}
std::string linphone::PresenceService::getContact() const {
	return StringUtilities::cStringToCpp(linphone_presence_service_get_contact((::LinphonePresenceService *)mPrivPtr));
}
linphone::Status linphone::PresenceService::setContact(const std::string & contact) {
	return linphone_presence_service_set_contact((::LinphonePresenceService *)mPrivPtr, StringUtilities::cppStringToC(contact));
}
std::string linphone::PresenceService::getId() const {
	return StringUtilities::cStringToCpp(linphone_presence_service_get_id((::LinphonePresenceService *)mPrivPtr));
}
linphone::Status linphone::PresenceService::setId(const std::string & id) {
	return linphone_presence_service_set_id((::LinphonePresenceService *)mPrivPtr, StringUtilities::cppStringToC(id));
}
unsigned int linphone::PresenceService::getNbNotes() const {
	return linphone_presence_service_get_nb_notes((::LinphonePresenceService *)mPrivPtr);
}
std::list<std::string> linphone::PresenceService::getServiceDescriptions() const {
	return StringBctbxListWrapper::bctbxListToCppList(linphone_presence_service_get_service_descriptions((::LinphonePresenceService *)mPrivPtr));
}
linphone::Status linphone::PresenceService::setServiceDescriptions(const std::list<std::string> & descriptions) {
	return linphone_presence_service_set_service_descriptions((::LinphonePresenceService *)mPrivPtr, StringBctbxListWrapper(descriptions).c_list());
}
linphone::Status linphone::PresenceService::addNote(const std::shared_ptr<linphone::PresenceNote> & note) {
	return linphone_presence_service_add_note((::LinphonePresenceService *)mPrivPtr, (::LinphonePresenceNote *)Object::sharedPtrToCPtr(std::static_pointer_cast<Object,linphone::PresenceNote>(note)));
}
linphone::Status linphone::PresenceService::clearNotes() {
	return linphone_presence_service_clear_notes((::LinphonePresenceService *)mPrivPtr);
}
std::shared_ptr<linphone::PresenceNote> linphone::PresenceService::getNthNote(unsigned int index) const {
	return Object::cPtrToSharedPtr<linphone::PresenceNote>(linphone_presence_service_get_nth_note((::LinphonePresenceService *)mPrivPtr, index));
}




linphone::ParticipantInfo::ParticipantInfo(void *ptr, bool takeRef): Object(ptr, takeRef) {
}



std::shared_ptr<const linphone::Address> linphone::ParticipantInfo::getAddress() const {
	return Object::cPtrToSharedPtr<const linphone::Address>(linphone_participant_info_get_address((::LinphoneParticipantInfo *)mPrivPtr));
}
linphone::Participant::Role linphone::ParticipantInfo::getRole() const {
	return (linphone::Participant::Role)linphone_participant_info_get_role((::LinphoneParticipantInfo *)mPrivPtr);
}
void linphone::ParticipantInfo::setRole(linphone::Participant::Role role) {
	linphone_participant_info_set_role((::LinphoneParticipantInfo *)mPrivPtr, (::LinphoneParticipantRole)role);
}
void linphone::ParticipantInfo::addParameter(const std::string & name, const std::string & value) {
	linphone_participant_info_add_parameter((::LinphoneParticipantInfo *)mPrivPtr, StringUtilities::cppStringToC(name), StringUtilities::cppStringToC(value));
}
std::shared_ptr<linphone::ParticipantInfo> linphone::ParticipantInfo::clone() const {
	return Object::cPtrToSharedPtr<linphone::ParticipantInfo>(linphone_participant_info_clone((::LinphoneParticipantInfo *)mPrivPtr), false);
}
std::string linphone::ParticipantInfo::getParameterValue(const std::string & name) const {
	return StringUtilities::cStringToCpp(linphone_participant_info_get_parameter_value((::LinphoneParticipantInfo *)mPrivPtr, StringUtilities::cppStringToC(name)));
}
bool linphone::ParticipantInfo::hasParameter(const std::string & name) const {
	return (linphone_participant_info_has_parameter((::LinphoneParticipantInfo *)mPrivPtr, StringUtilities::cppStringToC(name)) != FALSE);
}
void linphone::ParticipantInfo::removeParameter(const std::string & name) {
	linphone_participant_info_remove_parameter((::LinphoneParticipantInfo *)mPrivPtr, StringUtilities::cppStringToC(name));
}




linphone::VideoDefinition::VideoDefinition(void *ptr, bool takeRef): Object(ptr, takeRef) {
}



unsigned int linphone::VideoDefinition::getHeight() const {
	return linphone_video_definition_get_height((::LinphoneVideoDefinition *)mPrivPtr);
}
void linphone::VideoDefinition::setHeight(unsigned int height) {
	linphone_video_definition_set_height((::LinphoneVideoDefinition *)mPrivPtr, height);
}
bool linphone::VideoDefinition::isUndefined() const {
	return (linphone_video_definition_is_undefined((::LinphoneVideoDefinition *)mPrivPtr) != FALSE);
}
std::string linphone::VideoDefinition::getName() const {
	return StringUtilities::cStringToCpp(linphone_video_definition_get_name((::LinphoneVideoDefinition *)mPrivPtr));
}
void linphone::VideoDefinition::setName(const std::string & name) {
	linphone_video_definition_set_name((::LinphoneVideoDefinition *)mPrivPtr, StringUtilities::cppStringToC(name));
}
unsigned int linphone::VideoDefinition::getWidth() const {
	return linphone_video_definition_get_width((::LinphoneVideoDefinition *)mPrivPtr);
}
void linphone::VideoDefinition::setWidth(unsigned int width) {
	linphone_video_definition_set_width((::LinphoneVideoDefinition *)mPrivPtr, width);
}
std::shared_ptr<linphone::VideoDefinition> linphone::VideoDefinition::clone() const {
	return Object::cPtrToSharedPtr<linphone::VideoDefinition>(linphone_video_definition_clone((::LinphoneVideoDefinition *)mPrivPtr), false);
}
bool linphone::VideoDefinition::equals(const std::shared_ptr<const linphone::VideoDefinition> & videoDefinition2) const {
	return (linphone_video_definition_equals((::LinphoneVideoDefinition *)mPrivPtr, (::LinphoneVideoDefinition *)Object::sharedPtrToCPtr(std::static_pointer_cast<const Object,const linphone::VideoDefinition>(videoDefinition2))) != FALSE);
}
void linphone::VideoDefinition::setDefinition(unsigned int width, unsigned int height) {
	linphone_video_definition_set_definition((::LinphoneVideoDefinition *)mPrivPtr, width, height);
}
bool linphone::VideoDefinition::strictEquals(const std::shared_ptr<const linphone::VideoDefinition> & videoDefinition2) const {
	return (linphone_video_definition_strict_equals((::LinphoneVideoDefinition *)mPrivPtr, (::LinphoneVideoDefinition *)Object::sharedPtrToCPtr(std::static_pointer_cast<const Object,const linphone::VideoDefinition>(videoDefinition2))) != FALSE);
}



static void linphone_account_creator_cbs_on_create_account_cb(LinphoneAccountCreator * creator, LinphoneAccountCreatorStatus status, const char * response) {
	LinphoneAccountCreatorCbs *cbs = linphone_account_creator_get_current_callbacks(creator);
	if (cbs) {
		// Make a copy of the list of listeners, so that it is possible to remove a listener from a listener without corrupting the list.
		std::list<std::shared_ptr<Listener> > listeners = *static_cast<std::list<std::shared_ptr<Listener> > *>(belle_sip_object_data_get((::belle_sip_object_t *)cbs, MultiListenableObject::sListenerListName));
		for(std::list<std::shared_ptr<Listener> >::iterator it=listeners.begin(); it!=listeners.end(); it++) {
			std::shared_ptr<AccountCreatorListener> listener = std::static_pointer_cast<AccountCreatorListener,Listener>(*it);
			listener->onCreateAccount(Object::cPtrToSharedPtr<AccountCreator>(creator), (AccountCreator::Status)status, StringUtilities::cStringToCpp(response));
		}
	}
}
static void linphone_account_creator_cbs_on_is_account_exist_cb(LinphoneAccountCreator * creator, LinphoneAccountCreatorStatus status, const char * response) {
	LinphoneAccountCreatorCbs *cbs = linphone_account_creator_get_current_callbacks(creator);
	if (cbs) {
		// Make a copy of the list of listeners, so that it is possible to remove a listener from a listener without corrupting the list.
		std::list<std::shared_ptr<Listener> > listeners = *static_cast<std::list<std::shared_ptr<Listener> > *>(belle_sip_object_data_get((::belle_sip_object_t *)cbs, MultiListenableObject::sListenerListName));
		for(std::list<std::shared_ptr<Listener> >::iterator it=listeners.begin(); it!=listeners.end(); it++) {
			std::shared_ptr<AccountCreatorListener> listener = std::static_pointer_cast<AccountCreatorListener,Listener>(*it);
			listener->onIsAccountExist(Object::cPtrToSharedPtr<AccountCreator>(creator), (AccountCreator::Status)status, StringUtilities::cStringToCpp(response));
		}
	}
}
static void linphone_account_creator_cbs_on_activate_account_cb(LinphoneAccountCreator * creator, LinphoneAccountCreatorStatus status, const char * response) {
	LinphoneAccountCreatorCbs *cbs = linphone_account_creator_get_current_callbacks(creator);
	if (cbs) {
		// Make a copy of the list of listeners, so that it is possible to remove a listener from a listener without corrupting the list.
		std::list<std::shared_ptr<Listener> > listeners = *static_cast<std::list<std::shared_ptr<Listener> > *>(belle_sip_object_data_get((::belle_sip_object_t *)cbs, MultiListenableObject::sListenerListName));
		for(std::list<std::shared_ptr<Listener> >::iterator it=listeners.begin(); it!=listeners.end(); it++) {
			std::shared_ptr<AccountCreatorListener> listener = std::static_pointer_cast<AccountCreatorListener,Listener>(*it);
			listener->onActivateAccount(Object::cPtrToSharedPtr<AccountCreator>(creator), (AccountCreator::Status)status, StringUtilities::cStringToCpp(response));
		}
	}
}
static void linphone_account_creator_cbs_on_send_token_cb(LinphoneAccountCreator * creator, LinphoneAccountCreatorStatus status, const char * response) {
	LinphoneAccountCreatorCbs *cbs = linphone_account_creator_get_current_callbacks(creator);
	if (cbs) {
		// Make a copy of the list of listeners, so that it is possible to remove a listener from a listener without corrupting the list.
		std::list<std::shared_ptr<Listener> > listeners = *static_cast<std::list<std::shared_ptr<Listener> > *>(belle_sip_object_data_get((::belle_sip_object_t *)cbs, MultiListenableObject::sListenerListName));
		for(std::list<std::shared_ptr<Listener> >::iterator it=listeners.begin(); it!=listeners.end(); it++) {
			std::shared_ptr<AccountCreatorListener> listener = std::static_pointer_cast<AccountCreatorListener,Listener>(*it);
			listener->onSendToken(Object::cPtrToSharedPtr<AccountCreator>(creator), (AccountCreator::Status)status, StringUtilities::cStringToCpp(response));
		}
	}
}
static void linphone_account_creator_cbs_on_account_creation_request_token_cb(LinphoneAccountCreator * creator, LinphoneAccountCreatorStatus status, const char * response) {
	LinphoneAccountCreatorCbs *cbs = linphone_account_creator_get_current_callbacks(creator);
	if (cbs) {
		// Make a copy of the list of listeners, so that it is possible to remove a listener from a listener without corrupting the list.
		std::list<std::shared_ptr<Listener> > listeners = *static_cast<std::list<std::shared_ptr<Listener> > *>(belle_sip_object_data_get((::belle_sip_object_t *)cbs, MultiListenableObject::sListenerListName));
		for(std::list<std::shared_ptr<Listener> >::iterator it=listeners.begin(); it!=listeners.end(); it++) {
			std::shared_ptr<AccountCreatorListener> listener = std::static_pointer_cast<AccountCreatorListener,Listener>(*it);
			listener->onAccountCreationRequestToken(Object::cPtrToSharedPtr<AccountCreator>(creator), (AccountCreator::Status)status, StringUtilities::cStringToCpp(response));
		}
	}
}
static void linphone_account_creator_cbs_on_account_creation_token_using_request_token_cb(LinphoneAccountCreator * creator, LinphoneAccountCreatorStatus status, const char * response) {
	LinphoneAccountCreatorCbs *cbs = linphone_account_creator_get_current_callbacks(creator);
	if (cbs) {
		// Make a copy of the list of listeners, so that it is possible to remove a listener from a listener without corrupting the list.
		std::list<std::shared_ptr<Listener> > listeners = *static_cast<std::list<std::shared_ptr<Listener> > *>(belle_sip_object_data_get((::belle_sip_object_t *)cbs, MultiListenableObject::sListenerListName));
		for(std::list<std::shared_ptr<Listener> >::iterator it=listeners.begin(); it!=listeners.end(); it++) {
			std::shared_ptr<AccountCreatorListener> listener = std::static_pointer_cast<AccountCreatorListener,Listener>(*it);
			listener->onAccountCreationTokenUsingRequestToken(Object::cPtrToSharedPtr<AccountCreator>(creator), (AccountCreator::Status)status, StringUtilities::cStringToCpp(response));
		}
	}
}
static void linphone_account_creator_cbs_on_is_account_activated_cb(LinphoneAccountCreator * creator, LinphoneAccountCreatorStatus status, const char * response) {
	LinphoneAccountCreatorCbs *cbs = linphone_account_creator_get_current_callbacks(creator);
	if (cbs) {
		// Make a copy of the list of listeners, so that it is possible to remove a listener from a listener without corrupting the list.
		std::list<std::shared_ptr<Listener> > listeners = *static_cast<std::list<std::shared_ptr<Listener> > *>(belle_sip_object_data_get((::belle_sip_object_t *)cbs, MultiListenableObject::sListenerListName));
		for(std::list<std::shared_ptr<Listener> >::iterator it=listeners.begin(); it!=listeners.end(); it++) {
			std::shared_ptr<AccountCreatorListener> listener = std::static_pointer_cast<AccountCreatorListener,Listener>(*it);
			listener->onIsAccountActivated(Object::cPtrToSharedPtr<AccountCreator>(creator), (AccountCreator::Status)status, StringUtilities::cStringToCpp(response));
		}
	}
}
static void linphone_account_creator_cbs_on_link_account_cb(LinphoneAccountCreator * creator, LinphoneAccountCreatorStatus status, const char * response) {
	LinphoneAccountCreatorCbs *cbs = linphone_account_creator_get_current_callbacks(creator);
	if (cbs) {
		// Make a copy of the list of listeners, so that it is possible to remove a listener from a listener without corrupting the list.
		std::list<std::shared_ptr<Listener> > listeners = *static_cast<std::list<std::shared_ptr<Listener> > *>(belle_sip_object_data_get((::belle_sip_object_t *)cbs, MultiListenableObject::sListenerListName));
		for(std::list<std::shared_ptr<Listener> >::iterator it=listeners.begin(); it!=listeners.end(); it++) {
			std::shared_ptr<AccountCreatorListener> listener = std::static_pointer_cast<AccountCreatorListener,Listener>(*it);
			listener->onLinkAccount(Object::cPtrToSharedPtr<AccountCreator>(creator), (AccountCreator::Status)status, StringUtilities::cStringToCpp(response));
		}
	}
}
static void linphone_account_creator_cbs_on_activate_alias_cb(LinphoneAccountCreator * creator, LinphoneAccountCreatorStatus status, const char * response) {
	LinphoneAccountCreatorCbs *cbs = linphone_account_creator_get_current_callbacks(creator);
	if (cbs) {
		// Make a copy of the list of listeners, so that it is possible to remove a listener from a listener without corrupting the list.
		std::list<std::shared_ptr<Listener> > listeners = *static_cast<std::list<std::shared_ptr<Listener> > *>(belle_sip_object_data_get((::belle_sip_object_t *)cbs, MultiListenableObject::sListenerListName));
		for(std::list<std::shared_ptr<Listener> >::iterator it=listeners.begin(); it!=listeners.end(); it++) {
			std::shared_ptr<AccountCreatorListener> listener = std::static_pointer_cast<AccountCreatorListener,Listener>(*it);
			listener->onActivateAlias(Object::cPtrToSharedPtr<AccountCreator>(creator), (AccountCreator::Status)status, StringUtilities::cStringToCpp(response));
		}
	}
}
static void linphone_account_creator_cbs_on_is_alias_used_cb(LinphoneAccountCreator * creator, LinphoneAccountCreatorStatus status, const char * response) {
	LinphoneAccountCreatorCbs *cbs = linphone_account_creator_get_current_callbacks(creator);
	if (cbs) {
		// Make a copy of the list of listeners, so that it is possible to remove a listener from a listener without corrupting the list.
		std::list<std::shared_ptr<Listener> > listeners = *static_cast<std::list<std::shared_ptr<Listener> > *>(belle_sip_object_data_get((::belle_sip_object_t *)cbs, MultiListenableObject::sListenerListName));
		for(std::list<std::shared_ptr<Listener> >::iterator it=listeners.begin(); it!=listeners.end(); it++) {
			std::shared_ptr<AccountCreatorListener> listener = std::static_pointer_cast<AccountCreatorListener,Listener>(*it);
			listener->onIsAliasUsed(Object::cPtrToSharedPtr<AccountCreator>(creator), (AccountCreator::Status)status, StringUtilities::cStringToCpp(response));
		}
	}
}
static void linphone_account_creator_cbs_on_is_account_linked_cb(LinphoneAccountCreator * creator, LinphoneAccountCreatorStatus status, const char * response) {
	LinphoneAccountCreatorCbs *cbs = linphone_account_creator_get_current_callbacks(creator);
	if (cbs) {
		// Make a copy of the list of listeners, so that it is possible to remove a listener from a listener without corrupting the list.
		std::list<std::shared_ptr<Listener> > listeners = *static_cast<std::list<std::shared_ptr<Listener> > *>(belle_sip_object_data_get((::belle_sip_object_t *)cbs, MultiListenableObject::sListenerListName));
		for(std::list<std::shared_ptr<Listener> >::iterator it=listeners.begin(); it!=listeners.end(); it++) {
			std::shared_ptr<AccountCreatorListener> listener = std::static_pointer_cast<AccountCreatorListener,Listener>(*it);
			listener->onIsAccountLinked(Object::cPtrToSharedPtr<AccountCreator>(creator), (AccountCreator::Status)status, StringUtilities::cStringToCpp(response));
		}
	}
}
static void linphone_account_creator_cbs_on_recover_account_cb(LinphoneAccountCreator * creator, LinphoneAccountCreatorStatus status, const char * response) {
	LinphoneAccountCreatorCbs *cbs = linphone_account_creator_get_current_callbacks(creator);
	if (cbs) {
		// Make a copy of the list of listeners, so that it is possible to remove a listener from a listener without corrupting the list.
		std::list<std::shared_ptr<Listener> > listeners = *static_cast<std::list<std::shared_ptr<Listener> > *>(belle_sip_object_data_get((::belle_sip_object_t *)cbs, MultiListenableObject::sListenerListName));
		for(std::list<std::shared_ptr<Listener> >::iterator it=listeners.begin(); it!=listeners.end(); it++) {
			std::shared_ptr<AccountCreatorListener> listener = std::static_pointer_cast<AccountCreatorListener,Listener>(*it);
			listener->onRecoverAccount(Object::cPtrToSharedPtr<AccountCreator>(creator), (AccountCreator::Status)status, StringUtilities::cStringToCpp(response));
		}
	}
}
static void linphone_account_creator_cbs_on_update_account_cb(LinphoneAccountCreator * creator, LinphoneAccountCreatorStatus status, const char * response) {
	LinphoneAccountCreatorCbs *cbs = linphone_account_creator_get_current_callbacks(creator);
	if (cbs) {
		// Make a copy of the list of listeners, so that it is possible to remove a listener from a listener without corrupting the list.
		std::list<std::shared_ptr<Listener> > listeners = *static_cast<std::list<std::shared_ptr<Listener> > *>(belle_sip_object_data_get((::belle_sip_object_t *)cbs, MultiListenableObject::sListenerListName));
		for(std::list<std::shared_ptr<Listener> >::iterator it=listeners.begin(); it!=listeners.end(); it++) {
			std::shared_ptr<AccountCreatorListener> listener = std::static_pointer_cast<AccountCreatorListener,Listener>(*it);
			listener->onUpdateAccount(Object::cPtrToSharedPtr<AccountCreator>(creator), (AccountCreator::Status)status, StringUtilities::cStringToCpp(response));
		}
	}
}
static void linphone_account_creator_cbs_on_login_linphone_account_cb(LinphoneAccountCreator * creator, LinphoneAccountCreatorStatus status, const char * response) {
	LinphoneAccountCreatorCbs *cbs = linphone_account_creator_get_current_callbacks(creator);
	if (cbs) {
		// Make a copy of the list of listeners, so that it is possible to remove a listener from a listener without corrupting the list.
		std::list<std::shared_ptr<Listener> > listeners = *static_cast<std::list<std::shared_ptr<Listener> > *>(belle_sip_object_data_get((::belle_sip_object_t *)cbs, MultiListenableObject::sListenerListName));
		for(std::list<std::shared_ptr<Listener> >::iterator it=listeners.begin(); it!=listeners.end(); it++) {
			std::shared_ptr<AccountCreatorListener> listener = std::static_pointer_cast<AccountCreatorListener,Listener>(*it);
			listener->onLoginLinphoneAccount(Object::cPtrToSharedPtr<AccountCreator>(creator), (AccountCreator::Status)status, StringUtilities::cStringToCpp(response));
		}
	}
}

linphone::AccountCreator::AccountCreator(void *ptr, bool takeRef): MultiListenableObject(ptr, takeRef) {
}

void AccountCreator::addListener(const std::shared_ptr<AccountCreatorListener> &listener) {
	MultiListenableObject::addListener(std::static_pointer_cast<Listener,AccountCreatorListener>(listener));
}

void AccountCreator::removeListener(const std::shared_ptr<AccountCreatorListener> &listener) {
	MultiListenableObject::removeListener(std::static_pointer_cast<Listener,AccountCreatorListener>(listener));
}

void *AccountCreator::createCallbacks() {
	LinphoneAccountCreatorCbs *cbs = linphone_factory_create_account_creator_cbs(linphone_factory_get());
	linphone_account_creator_cbs_set_create_account(cbs, linphone_account_creator_cbs_on_create_account_cb);
	linphone_account_creator_cbs_set_is_account_exist(cbs, linphone_account_creator_cbs_on_is_account_exist_cb);
	linphone_account_creator_cbs_set_activate_account(cbs, linphone_account_creator_cbs_on_activate_account_cb);
	linphone_account_creator_cbs_set_send_token(cbs, linphone_account_creator_cbs_on_send_token_cb);
	linphone_account_creator_cbs_set_account_creation_request_token(cbs, linphone_account_creator_cbs_on_account_creation_request_token_cb);
	linphone_account_creator_cbs_set_account_creation_token_using_request_token(cbs, linphone_account_creator_cbs_on_account_creation_token_using_request_token_cb);
	linphone_account_creator_cbs_set_is_account_activated(cbs, linphone_account_creator_cbs_on_is_account_activated_cb);
	linphone_account_creator_cbs_set_link_account(cbs, linphone_account_creator_cbs_on_link_account_cb);
	linphone_account_creator_cbs_set_activate_alias(cbs, linphone_account_creator_cbs_on_activate_alias_cb);
	linphone_account_creator_cbs_set_is_alias_used(cbs, linphone_account_creator_cbs_on_is_alias_used_cb);
	linphone_account_creator_cbs_set_is_account_linked(cbs, linphone_account_creator_cbs_on_is_account_linked_cb);
	linphone_account_creator_cbs_set_recover_account(cbs, linphone_account_creator_cbs_on_recover_account_cb);
	linphone_account_creator_cbs_set_update_account(cbs, linphone_account_creator_cbs_on_update_account_cb);
	linphone_account_creator_cbs_set_login_linphone_account(cbs, linphone_account_creator_cbs_on_login_linphone_account_cb);
	belle_sip_object_data_set((::belle_sip_object_t *)(cbs), MultiListenableObject::sListenerListName, new list<shared_ptr<Listener>>(), (::belle_sip_data_destroy)deleteListenerList);
	belle_sip_object_data_set((::belle_sip_object_t *)(mPrivPtr), MultiListenableObject::sCbsPtrName, cbs, nullptr);
	linphone_account_creator_add_callbacks(static_cast<::LinphoneAccountCreator *>(mPrivPtr), cbs);
	belle_sip_object_unref((::belle_sip_object_t *)cbs);
	return cbs;
}


std::string linphone::AccountCreator::getAccountCreationRequestToken() const {
	return StringUtilities::cStringToCpp(linphone_account_creator_get_account_creation_request_token((::LinphoneAccountCreator *)mPrivPtr));
}
void linphone::AccountCreator::setAccountCreationRequestToken(const std::string & token) {
	linphone_account_creator_set_account_creation_request_token((::LinphoneAccountCreator *)mPrivPtr, StringUtilities::cppStringToC(token));
}
std::string linphone::AccountCreator::getActivationCode() const {
	return StringUtilities::cStringToCpp(linphone_account_creator_get_activation_code((::LinphoneAccountCreator *)mPrivPtr));
}
linphone::AccountCreator::ActivationCodeStatus linphone::AccountCreator::setActivationCode(const std::string & activationCode) {
	return (ActivationCodeStatus)linphone_account_creator_set_activation_code((::LinphoneAccountCreator *)mPrivPtr, StringUtilities::cppStringToC(activationCode));
}
std::string linphone::AccountCreator::getAlgorithm() const {
	return StringUtilities::cStringToCpp(linphone_account_creator_get_algorithm((::LinphoneAccountCreator *)mPrivPtr));
}
linphone::AccountCreator::AlgoStatus linphone::AccountCreator::setAlgorithm(const std::string & algorithm) {
	return (AlgoStatus)linphone_account_creator_set_algorithm((::LinphoneAccountCreator *)mPrivPtr, StringUtilities::cppStringToC(algorithm));
}
linphone::AccountCreator::Status linphone::AccountCreator::setAsDefault(bool setAsDefault) {
	return (Status)linphone_account_creator_set_as_default((::LinphoneAccountCreator *)mPrivPtr, setAsDefault);
}
std::string linphone::AccountCreator::getDisplayName() const {
	return StringUtilities::cStringToCpp(linphone_account_creator_get_display_name((::LinphoneAccountCreator *)mPrivPtr));
}
linphone::AccountCreator::UsernameStatus linphone::AccountCreator::setDisplayName(const std::string & displayName) {
	return (UsernameStatus)linphone_account_creator_set_display_name((::LinphoneAccountCreator *)mPrivPtr, StringUtilities::cppStringToC(displayName));
}
std::string linphone::AccountCreator::getDomain() const {
	return StringUtilities::cStringToCpp(linphone_account_creator_get_domain((::LinphoneAccountCreator *)mPrivPtr));
}
linphone::AccountCreator::DomainStatus linphone::AccountCreator::setDomain(const std::string & domain) {
	return (DomainStatus)linphone_account_creator_set_domain((::LinphoneAccountCreator *)mPrivPtr, StringUtilities::cppStringToC(domain));
}
std::string linphone::AccountCreator::getEmail() const {
	return StringUtilities::cStringToCpp(linphone_account_creator_get_email((::LinphoneAccountCreator *)mPrivPtr));
}
linphone::AccountCreator::EmailStatus linphone::AccountCreator::setEmail(const std::string & email) {
	return (EmailStatus)linphone_account_creator_set_email((::LinphoneAccountCreator *)mPrivPtr, StringUtilities::cppStringToC(email));
}
std::string linphone::AccountCreator::getHa1() const {
	return StringUtilities::cStringToCpp(linphone_account_creator_get_ha1((::LinphoneAccountCreator *)mPrivPtr));
}
linphone::AccountCreator::PasswordStatus linphone::AccountCreator::setHa1(const std::string & ha1) {
	return (PasswordStatus)linphone_account_creator_set_ha1((::LinphoneAccountCreator *)mPrivPtr, StringUtilities::cppStringToC(ha1));
}
std::string linphone::AccountCreator::getLanguage() const {
	return StringUtilities::cStringToCpp(linphone_account_creator_get_language((::LinphoneAccountCreator *)mPrivPtr));
}
linphone::AccountCreator::LanguageStatus linphone::AccountCreator::setLanguage(const std::string & lang) {
	return (LanguageStatus)linphone_account_creator_set_language((::LinphoneAccountCreator *)mPrivPtr, StringUtilities::cppStringToC(lang));
}
std::string linphone::AccountCreator::getPassword() const {
	return StringUtilities::cStringToCpp(linphone_account_creator_get_password((::LinphoneAccountCreator *)mPrivPtr));
}
linphone::AccountCreator::PasswordStatus linphone::AccountCreator::setPassword(const std::string & password) {
	return (PasswordStatus)linphone_account_creator_set_password((::LinphoneAccountCreator *)mPrivPtr, StringUtilities::cppStringToC(password));
}
std::string linphone::AccountCreator::getPhoneCountryCode() const {
	return StringUtilities::cStringToCpp(linphone_account_creator_get_phone_country_code((::LinphoneAccountCreator *)mPrivPtr));
}
std::string linphone::AccountCreator::getPhoneNumber() const {
	return StringUtilities::cStringToCpp(linphone_account_creator_get_phone_number((::LinphoneAccountCreator *)mPrivPtr));
}
std::string linphone::AccountCreator::getPnParam() const {
	return StringUtilities::cStringToCpp(linphone_account_creator_get_pn_param((::LinphoneAccountCreator *)mPrivPtr));
}
void linphone::AccountCreator::setPnParam(const std::string & pnParam) {
	linphone_account_creator_set_pn_param((::LinphoneAccountCreator *)mPrivPtr, StringUtilities::cppStringToC(pnParam));
}
std::string linphone::AccountCreator::getPnPrid() const {
	return StringUtilities::cStringToCpp(linphone_account_creator_get_pn_prid((::LinphoneAccountCreator *)mPrivPtr));
}
void linphone::AccountCreator::setPnPrid(const std::string & pnPrid) {
	linphone_account_creator_set_pn_prid((::LinphoneAccountCreator *)mPrivPtr, StringUtilities::cppStringToC(pnPrid));
}
std::string linphone::AccountCreator::getPnProvider() const {
	return StringUtilities::cStringToCpp(linphone_account_creator_get_pn_provider((::LinphoneAccountCreator *)mPrivPtr));
}
void linphone::AccountCreator::setPnProvider(const std::string & pnProvider) {
	linphone_account_creator_set_pn_provider((::LinphoneAccountCreator *)mPrivPtr, StringUtilities::cppStringToC(pnProvider));
}
void linphone::AccountCreator::setProxyConfig(const std::shared_ptr<linphone::ProxyConfig> & cfg) {
	linphone_account_creator_set_proxy_config((::LinphoneAccountCreator *)mPrivPtr, (::LinphoneProxyConfig *)Object::sharedPtrToCPtr(std::static_pointer_cast<Object,linphone::ProxyConfig>(cfg)));
}
std::string linphone::AccountCreator::getRoute() const {
	return StringUtilities::cStringToCpp(linphone_account_creator_get_route((::LinphoneAccountCreator *)mPrivPtr));
}
linphone::AccountCreator::Status linphone::AccountCreator::setRoute(const std::string & route) {
	return (Status)linphone_account_creator_set_route((::LinphoneAccountCreator *)mPrivPtr, StringUtilities::cppStringToC(route));
}
bool linphone::AccountCreator::getSetAsDefault() const {
	return (linphone_account_creator_get_set_as_default((::LinphoneAccountCreator *)mPrivPtr) != FALSE);
}
std::string linphone::AccountCreator::getToken() const {
	return StringUtilities::cStringToCpp(linphone_account_creator_get_token((::LinphoneAccountCreator *)mPrivPtr));
}
void linphone::AccountCreator::setToken(const std::string & token) {
	linphone_account_creator_set_token((::LinphoneAccountCreator *)mPrivPtr, StringUtilities::cppStringToC(token));
}
linphone::TransportType linphone::AccountCreator::getTransport() const {
	return (linphone::TransportType)linphone_account_creator_get_transport((::LinphoneAccountCreator *)mPrivPtr);
}
linphone::AccountCreator::TransportStatus linphone::AccountCreator::setTransport(linphone::TransportType transport) {
	return (TransportStatus)linphone_account_creator_set_transport((::LinphoneAccountCreator *)mPrivPtr, (::LinphoneTransportType)transport);
}
std::string linphone::AccountCreator::getUsername() const {
	return StringUtilities::cStringToCpp(linphone_account_creator_get_username((::LinphoneAccountCreator *)mPrivPtr));
}
linphone::AccountCreator::UsernameStatus linphone::AccountCreator::setUsername(const std::string & username) {
	return (UsernameStatus)linphone_account_creator_set_username((::LinphoneAccountCreator *)mPrivPtr, StringUtilities::cppStringToC(username));
}
linphone::AccountCreator::Status linphone::AccountCreator::activateAccount() {
	return (Status)linphone_account_creator_activate_account((::LinphoneAccountCreator *)mPrivPtr);
}
linphone::AccountCreator::Status linphone::AccountCreator::activateAlias() {
	return (Status)linphone_account_creator_activate_alias((::LinphoneAccountCreator *)mPrivPtr);
}
linphone::AccountCreator::Status linphone::AccountCreator::createAccount() {
	return (Status)linphone_account_creator_create_account((::LinphoneAccountCreator *)mPrivPtr);
}
std::shared_ptr<linphone::Account> linphone::AccountCreator::createAccountInCore() const {
	return Object::cPtrToSharedPtr<linphone::Account>(linphone_account_creator_create_account_in_core((::LinphoneAccountCreator *)mPrivPtr), false);
}
std::shared_ptr<linphone::ProxyConfig> linphone::AccountCreator::createProxyConfig() const {
	return Object::cPtrToSharedPtr<linphone::ProxyConfig>(linphone_account_creator_create_proxy_config((::LinphoneAccountCreator *)mPrivPtr), false);
}
linphone::AccountCreator::Status linphone::AccountCreator::createPushAccount() {
	return (Status)linphone_account_creator_create_push_account((::LinphoneAccountCreator *)mPrivPtr);
}
linphone::AccountCreator::Status linphone::AccountCreator::isAccountActivated() {
	return (Status)linphone_account_creator_is_account_activated((::LinphoneAccountCreator *)mPrivPtr);
}
linphone::AccountCreator::Status linphone::AccountCreator::isAccountExist() {
	return (Status)linphone_account_creator_is_account_exist((::LinphoneAccountCreator *)mPrivPtr);
}
linphone::AccountCreator::Status linphone::AccountCreator::isAccountLinked() {
	return (Status)linphone_account_creator_is_account_linked((::LinphoneAccountCreator *)mPrivPtr);
}
linphone::AccountCreator::Status linphone::AccountCreator::isAliasUsed() {
	return (Status)linphone_account_creator_is_alias_used((::LinphoneAccountCreator *)mPrivPtr);
}
linphone::AccountCreator::Status linphone::AccountCreator::linkAccount() {
	return (Status)linphone_account_creator_link_account((::LinphoneAccountCreator *)mPrivPtr);
}
linphone::AccountCreator::Status linphone::AccountCreator::loginLinphoneAccount() {
	return (Status)linphone_account_creator_login_linphone_account((::LinphoneAccountCreator *)mPrivPtr);
}
linphone::AccountCreator::Status linphone::AccountCreator::recoverAccount() {
	return (Status)linphone_account_creator_recover_account((::LinphoneAccountCreator *)mPrivPtr);
}
linphone::AccountCreator::Status linphone::AccountCreator::requestAccountCreationRequestToken() {
	return (Status)linphone_account_creator_request_account_creation_request_token((::LinphoneAccountCreator *)mPrivPtr);
}
linphone::AccountCreator::Status linphone::AccountCreator::requestAccountCreationTokenUsingRequestToken() {
	return (Status)linphone_account_creator_request_account_creation_token_using_request_token((::LinphoneAccountCreator *)mPrivPtr);
}
linphone::AccountCreator::Status linphone::AccountCreator::requestAuthToken() {
	return (Status)linphone_account_creator_request_auth_token((::LinphoneAccountCreator *)mPrivPtr);
}
void linphone::AccountCreator::reset() {
	linphone_account_creator_reset((::LinphoneAccountCreator *)mPrivPtr);
}
unsigned int linphone::AccountCreator::setPhoneNumber(const std::string & phoneNumber, const std::string & countryCode) {
	return linphone_account_creator_set_phone_number((::LinphoneAccountCreator *)mPrivPtr, StringUtilities::cppStringToC(phoneNumber), StringUtilities::cppStringToC(countryCode));
}
linphone::AccountCreator::Status linphone::AccountCreator::updateAccount() {
	return (Status)linphone_account_creator_update_account((::LinphoneAccountCreator *)mPrivPtr);
}
void linphone::AccountCreator::useTestAdminAccount() {
	linphone_account_creator_use_test_admin_account((::LinphoneAccountCreator *)mPrivPtr);
}

std::shared_ptr<linphone::AccountCreator> linphone::AccountCreator::create(const std::shared_ptr<linphone::Core> & core) {
	return Object::cPtrToSharedPtr<linphone::AccountCreator>(linphone_account_creator_create((::LinphoneCore *)Object::sharedPtrToCPtr(std::static_pointer_cast<Object,linphone::Core>(core))), false);
}



linphone::PresencePerson::PresencePerson(void *ptr, bool takeRef): Object(ptr, takeRef) {
}



std::string linphone::PresencePerson::getId() const {
	return StringUtilities::cStringToCpp(linphone_presence_person_get_id((::LinphonePresencePerson *)mPrivPtr));
}
linphone::Status linphone::PresencePerson::setId(const std::string & id) {
	return linphone_presence_person_set_id((::LinphonePresencePerson *)mPrivPtr, StringUtilities::cppStringToC(id));
}
unsigned int linphone::PresencePerson::getNbActivities() const {
	return linphone_presence_person_get_nb_activities((::LinphonePresencePerson *)mPrivPtr);
}
unsigned int linphone::PresencePerson::getNbActivitiesNotes() const {
	return linphone_presence_person_get_nb_activities_notes((::LinphonePresencePerson *)mPrivPtr);
}
unsigned int linphone::PresencePerson::getNbNotes() const {
	return linphone_presence_person_get_nb_notes((::LinphonePresencePerson *)mPrivPtr);
}
linphone::Status linphone::PresencePerson::addActivitiesNote(const std::shared_ptr<linphone::PresenceNote> & note) {
	return linphone_presence_person_add_activities_note((::LinphonePresencePerson *)mPrivPtr, (::LinphonePresenceNote *)Object::sharedPtrToCPtr(std::static_pointer_cast<Object,linphone::PresenceNote>(note)));
}
linphone::Status linphone::PresencePerson::addActivity(const std::shared_ptr<linphone::PresenceActivity> & activity) {
	return linphone_presence_person_add_activity((::LinphonePresencePerson *)mPrivPtr, (::LinphonePresenceActivity *)Object::sharedPtrToCPtr(std::static_pointer_cast<Object,linphone::PresenceActivity>(activity)));
}
linphone::Status linphone::PresencePerson::addNote(const std::shared_ptr<linphone::PresenceNote> & note) {
	return linphone_presence_person_add_note((::LinphonePresencePerson *)mPrivPtr, (::LinphonePresenceNote *)Object::sharedPtrToCPtr(std::static_pointer_cast<Object,linphone::PresenceNote>(note)));
}
linphone::Status linphone::PresencePerson::clearActivities() {
	return linphone_presence_person_clear_activities((::LinphonePresencePerson *)mPrivPtr);
}
linphone::Status linphone::PresencePerson::clearActivitiesNotes() {
	return linphone_presence_person_clear_activities_notes((::LinphonePresencePerson *)mPrivPtr);
}
linphone::Status linphone::PresencePerson::clearNotes() {
	return linphone_presence_person_clear_notes((::LinphonePresencePerson *)mPrivPtr);
}
std::shared_ptr<linphone::PresenceNote> linphone::PresencePerson::getNthActivitiesNote(unsigned int index) const {
	return Object::cPtrToSharedPtr<linphone::PresenceNote>(linphone_presence_person_get_nth_activities_note((::LinphonePresencePerson *)mPrivPtr, index));
}
std::shared_ptr<linphone::PresenceActivity> linphone::PresencePerson::getNthActivity(unsigned int index) const {
	return Object::cPtrToSharedPtr<linphone::PresenceActivity>(linphone_presence_person_get_nth_activity((::LinphonePresencePerson *)mPrivPtr, index));
}
std::shared_ptr<linphone::PresenceNote> linphone::PresencePerson::getNthNote(unsigned int index) const {
	return Object::cPtrToSharedPtr<linphone::PresenceNote>(linphone_presence_person_get_nth_note((::LinphonePresencePerson *)mPrivPtr, index));
}




linphone::RecorderParams::RecorderParams(void *ptr, bool takeRef): Object(ptr, takeRef) {
}



std::shared_ptr<const linphone::AudioDevice> linphone::RecorderParams::getAudioDevice() const {
	return Object::cPtrToSharedPtr<const linphone::AudioDevice>(linphone_recorder_params_get_audio_device((::LinphoneRecorderParams *)mPrivPtr));
}
void linphone::RecorderParams::setAudioDevice(const std::shared_ptr<const linphone::AudioDevice> & device) {
	linphone_recorder_params_set_audio_device((::LinphoneRecorderParams *)mPrivPtr, (::LinphoneAudioDevice *)Object::sharedPtrToCPtr(std::static_pointer_cast<const Object,const linphone::AudioDevice>(device)));
}
linphone::Recorder::FileFormat linphone::RecorderParams::getFileFormat() const {
	return (linphone::Recorder::FileFormat)linphone_recorder_params_get_file_format((::LinphoneRecorderParams *)mPrivPtr);
}
void linphone::RecorderParams::setFileFormat(linphone::Recorder::FileFormat format) {
	linphone_recorder_params_set_file_format((::LinphoneRecorderParams *)mPrivPtr, (::LinphoneRecorderFileFormat)format);
}
std::string linphone::RecorderParams::getVideoCodec() const {
	return StringUtilities::cStringToCpp(linphone_recorder_params_get_video_codec((::LinphoneRecorderParams *)mPrivPtr));
}
void linphone::RecorderParams::setVideoCodec(const std::string & videoCodec) {
	linphone_recorder_params_set_video_codec((::LinphoneRecorderParams *)mPrivPtr, StringUtilities::cppStringToC(videoCodec));
}
std::string linphone::RecorderParams::getWebcamName() const {
	return StringUtilities::cStringToCpp(linphone_recorder_params_get_webcam_name((::LinphoneRecorderParams *)mPrivPtr));
}
void linphone::RecorderParams::setWebcamName(const std::string & webcamName) {
	linphone_recorder_params_set_webcam_name((::LinphoneRecorderParams *)mPrivPtr, StringUtilities::cppStringToC(webcamName));
}
void * linphone::RecorderParams::getWindowId() const {
	return linphone_recorder_params_get_window_id((::LinphoneRecorderParams *)mPrivPtr);
}
void linphone::RecorderParams::setWindowId(void * windowId) {
	linphone_recorder_params_set_window_id((::LinphoneRecorderParams *)mPrivPtr, windowId);
}
std::shared_ptr<linphone::RecorderParams> linphone::RecorderParams::clone() const {
	return Object::cPtrToSharedPtr<linphone::RecorderParams>(linphone_recorder_params_clone((::LinphoneRecorderParams *)mPrivPtr), false);
}




linphone::ChatRoomParams::ChatRoomParams(void *ptr, bool takeRef): Object(ptr, takeRef) {
}



linphone::ChatRoom::Backend linphone::ChatRoomParams::getBackend() const {
	return (linphone::ChatRoom::Backend)linphone_chat_room_params_get_backend((::LinphoneChatRoomParams *)mPrivPtr);
}
void linphone::ChatRoomParams::setBackend(linphone::ChatRoom::Backend backend) {
	linphone_chat_room_params_set_backend((::LinphoneChatRoomParams *)mPrivPtr, (::LinphoneChatRoomBackend)backend);
}
linphone::ChatRoom::EncryptionBackend linphone::ChatRoomParams::getEncryptionBackend() const {
	return (linphone::ChatRoom::EncryptionBackend)linphone_chat_room_params_get_encryption_backend((::LinphoneChatRoomParams *)mPrivPtr);
}
void linphone::ChatRoomParams::setEncryptionBackend(linphone::ChatRoom::EncryptionBackend backend) {
	linphone_chat_room_params_set_encryption_backend((::LinphoneChatRoomParams *)mPrivPtr, (::LinphoneChatRoomEncryptionBackend)backend);
}
bool linphone::ChatRoomParams::encryptionEnabled() const {
	return (linphone_chat_room_params_encryption_enabled((::LinphoneChatRoomParams *)mPrivPtr) != FALSE);
}
void linphone::ChatRoomParams::enableEncryption(bool encrypted) {
	linphone_chat_room_params_enable_encryption((::LinphoneChatRoomParams *)mPrivPtr, encrypted);
}
long linphone::ChatRoomParams::getEphemeralLifetime() const {
	return linphone_chat_room_params_get_ephemeral_lifetime((::LinphoneChatRoomParams *)mPrivPtr);
}
void linphone::ChatRoomParams::setEphemeralLifetime(long time) {
	linphone_chat_room_params_set_ephemeral_lifetime((::LinphoneChatRoomParams *)mPrivPtr, time);
}
linphone::ChatRoom::EphemeralMode linphone::ChatRoomParams::getEphemeralMode() const {
	return (linphone::ChatRoom::EphemeralMode)linphone_chat_room_params_get_ephemeral_mode((::LinphoneChatRoomParams *)mPrivPtr);
}
void linphone::ChatRoomParams::setEphemeralMode(linphone::ChatRoom::EphemeralMode mode) {
	linphone_chat_room_params_set_ephemeral_mode((::LinphoneChatRoomParams *)mPrivPtr, (::LinphoneChatRoomEphemeralMode)mode);
}
bool linphone::ChatRoomParams::groupEnabled() const {
	return (linphone_chat_room_params_group_enabled((::LinphoneChatRoomParams *)mPrivPtr) != FALSE);
}
void linphone::ChatRoomParams::enableGroup(bool group) {
	linphone_chat_room_params_enable_group((::LinphoneChatRoomParams *)mPrivPtr, group);
}
bool linphone::ChatRoomParams::isValid() const {
	return (linphone_chat_room_params_is_valid((::LinphoneChatRoomParams *)mPrivPtr) != FALSE);
}
bool linphone::ChatRoomParams::rttEnabled() const {
	return (linphone_chat_room_params_rtt_enabled((::LinphoneChatRoomParams *)mPrivPtr) != FALSE);
}
void linphone::ChatRoomParams::enableRtt(bool rtt) {
	linphone_chat_room_params_enable_rtt((::LinphoneChatRoomParams *)mPrivPtr, rtt);
}
std::string linphone::ChatRoomParams::getSubject() const {
	return StringUtilities::cStringToCpp(linphone_chat_room_params_get_subject((::LinphoneChatRoomParams *)mPrivPtr));
}
void linphone::ChatRoomParams::setSubject(const std::string & subject) {
	linphone_chat_room_params_set_subject((::LinphoneChatRoomParams *)mPrivPtr, StringUtilities::cppStringToC(subject));
}




linphone::ConferenceInfo::ConferenceInfo(void *ptr, bool takeRef): Object(ptr, takeRef) {
}



time_t linphone::ConferenceInfo::getDateTime() const {
	return linphone_conference_info_get_date_time((::LinphoneConferenceInfo *)mPrivPtr);
}
void linphone::ConferenceInfo::setDateTime(time_t datetime) {
	linphone_conference_info_set_date_time((::LinphoneConferenceInfo *)mPrivPtr, datetime);
}
std::string linphone::ConferenceInfo::getDescription() const {
	return StringUtilities::cStringToCpp(linphone_conference_info_get_description((::LinphoneConferenceInfo *)mPrivPtr));
}
void linphone::ConferenceInfo::setDescription(const std::string & description) {
	linphone_conference_info_set_description((::LinphoneConferenceInfo *)mPrivPtr, StringUtilities::cppStringToC(description));
}
unsigned int linphone::ConferenceInfo::getDuration() const {
	return linphone_conference_info_get_duration((::LinphoneConferenceInfo *)mPrivPtr);
}
void linphone::ConferenceInfo::setDuration(unsigned int duration) {
	linphone_conference_info_set_duration((::LinphoneConferenceInfo *)mPrivPtr, duration);
}
std::string linphone::ConferenceInfo::getIcalendarString() const {
	return StringUtilities::cStringToCpp(linphone_conference_info_get_icalendar_string((::LinphoneConferenceInfo *)mPrivPtr));
}
std::shared_ptr<const linphone::Address> linphone::ConferenceInfo::getOrganizer() const {
	return Object::cPtrToSharedPtr<const linphone::Address>(linphone_conference_info_get_organizer((::LinphoneConferenceInfo *)mPrivPtr));
}
void linphone::ConferenceInfo::setOrganizer(const std::shared_ptr<const linphone::Address> & organizer) {
	linphone_conference_info_set_organizer((::LinphoneConferenceInfo *)mPrivPtr, (::LinphoneAddress *)Object::sharedPtrToCPtr(std::static_pointer_cast<const Object,const linphone::Address>(organizer)));
}
std::list<std::shared_ptr<linphone::ParticipantInfo>> linphone::ConferenceInfo::getParticipantInfos() const {
	return ObjectBctbxListWrapper<linphone::ParticipantInfo>::bctbxListToCppList(linphone_conference_info_get_participant_infos((::LinphoneConferenceInfo *)mPrivPtr), true);
}
void linphone::ConferenceInfo::setParticipantInfos(const std::list<std::shared_ptr<linphone::ParticipantInfo>> & participantInfos) {
	linphone_conference_info_set_participant_infos((::LinphoneConferenceInfo *)mPrivPtr, ObjectBctbxListWrapper<linphone::ParticipantInfo>(participantInfos).c_list());
}
std::list<std::shared_ptr<linphone::Address>> linphone::ConferenceInfo::getParticipants() const {
	return ObjectBctbxListWrapper<linphone::Address>::bctbxListToCppList(linphone_conference_info_get_participants((::LinphoneConferenceInfo *)mPrivPtr), true);
}
void linphone::ConferenceInfo::setParticipants(const std::list<std::shared_ptr<linphone::Address>> & participants) {
	linphone_conference_info_set_participants((::LinphoneConferenceInfo *)mPrivPtr, ObjectBctbxListWrapper<linphone::Address>(participants).c_list());
}
linphone::Conference::SecurityLevel linphone::ConferenceInfo::getSecurityLevel() const {
	return (linphone::Conference::SecurityLevel)linphone_conference_info_get_security_level((::LinphoneConferenceInfo *)mPrivPtr);
}
void linphone::ConferenceInfo::setSecurityLevel(linphone::Conference::SecurityLevel securityLevel) {
	linphone_conference_info_set_security_level((::LinphoneConferenceInfo *)mPrivPtr, (::LinphoneConferenceSecurityLevel)securityLevel);
}
linphone::ConferenceInfo::State linphone::ConferenceInfo::getState() const {
	return (State)linphone_conference_info_get_state((::LinphoneConferenceInfo *)mPrivPtr);
}
std::string linphone::ConferenceInfo::getSubject() const {
	return StringUtilities::cStringToCpp(linphone_conference_info_get_subject((::LinphoneConferenceInfo *)mPrivPtr));
}
void linphone::ConferenceInfo::setSubject(const std::string & subject) {
	linphone_conference_info_set_subject((::LinphoneConferenceInfo *)mPrivPtr, StringUtilities::cppStringToC(subject));
}
std::shared_ptr<const linphone::Address> linphone::ConferenceInfo::getUri() const {
	return Object::cPtrToSharedPtr<const linphone::Address>(linphone_conference_info_get_uri((::LinphoneConferenceInfo *)mPrivPtr));
}
void linphone::ConferenceInfo::addParticipant(const std::shared_ptr<const linphone::Address> & participant) {
	linphone_conference_info_add_participant((::LinphoneConferenceInfo *)mPrivPtr, (::LinphoneAddress *)Object::sharedPtrToCPtr(std::static_pointer_cast<const Object,const linphone::Address>(participant)));
}
void linphone::ConferenceInfo::addParticipant(const std::shared_ptr<const linphone::ParticipantInfo> & participantInfo) {
	linphone_conference_info_add_participant_2((::LinphoneConferenceInfo *)mPrivPtr, (::LinphoneParticipantInfo *)Object::sharedPtrToCPtr(std::static_pointer_cast<const Object,const linphone::ParticipantInfo>(participantInfo)));
}
void linphone::ConferenceInfo::addParticipantInfos(const std::list<std::shared_ptr<linphone::ParticipantInfo>> & participantInfos) {
	linphone_conference_info_add_participant_infos((::LinphoneConferenceInfo *)mPrivPtr, ObjectBctbxListWrapper<linphone::ParticipantInfo>(participantInfos).c_list());
}
std::shared_ptr<linphone::ConferenceInfo> linphone::ConferenceInfo::clone() const {
	return Object::cPtrToSharedPtr<linphone::ConferenceInfo>(linphone_conference_info_clone((::LinphoneConferenceInfo *)mPrivPtr), false);
}
std::shared_ptr<const linphone::ParticipantInfo> linphone::ConferenceInfo::findParticipant(const std::shared_ptr<const linphone::Address> & participant) {
	return Object::cPtrToSharedPtr<const linphone::ParticipantInfo>(linphone_conference_info_find_participant((::LinphoneConferenceInfo *)mPrivPtr, (::LinphoneAddress *)Object::sharedPtrToCPtr(std::static_pointer_cast<const Object,const linphone::Address>(participant))));
}
void linphone::ConferenceInfo::removeParticipant(const std::shared_ptr<const linphone::Address> & participant) {
	linphone_conference_info_remove_participant((::LinphoneConferenceInfo *)mPrivPtr, (::LinphoneAddress *)Object::sharedPtrToCPtr(std::static_pointer_cast<const Object,const linphone::Address>(participant)));
}
void linphone::ConferenceInfo::updateParticipant(const std::shared_ptr<const linphone::ParticipantInfo> & participantInfo) {
	linphone_conference_info_update_participant((::LinphoneConferenceInfo *)mPrivPtr, (::LinphoneParticipantInfo *)Object::sharedPtrToCPtr(std::static_pointer_cast<const Object,const linphone::ParticipantInfo>(participantInfo)));
}



static void linphone_logging_service_cbs_on_log_message_written_cb(LinphoneLoggingService * log_service, const char * domain, LinphoneLogLevel level, const char * message) {
	LinphoneLoggingServiceCbs *cbs = linphone_logging_service_get_current_callbacks(log_service);
	if (cbs) {
		// Make a copy of the list of listeners, so that it is possible to remove a listener from a listener without corrupting the list.
		std::list<std::shared_ptr<Listener> > listeners = *static_cast<std::list<std::shared_ptr<Listener> > *>(belle_sip_object_data_get((::belle_sip_object_t *)cbs, MultiListenableObject::sListenerListName));
		for(std::list<std::shared_ptr<Listener> >::iterator it=listeners.begin(); it!=listeners.end(); it++) {
			std::shared_ptr<LoggingServiceListener> listener = std::static_pointer_cast<LoggingServiceListener,Listener>(*it);
			listener->onLogMessageWritten(Object::cPtrToSharedPtr<LoggingService>(log_service), StringUtilities::cStringToCpp(domain), (LogLevel)level, StringUtilities::cStringToCpp(message));
		}
	}
}

linphone::LoggingService::LoggingService(void *ptr, bool takeRef): MultiListenableObject(ptr, takeRef) {
}

void LoggingService::addListener(const std::shared_ptr<LoggingServiceListener> &listener) {
	MultiListenableObject::addListener(std::static_pointer_cast<Listener,LoggingServiceListener>(listener));
}

void LoggingService::removeListener(const std::shared_ptr<LoggingServiceListener> &listener) {
	MultiListenableObject::removeListener(std::static_pointer_cast<Listener,LoggingServiceListener>(listener));
}

void *LoggingService::createCallbacks() {
	LinphoneLoggingServiceCbs *cbs = linphone_factory_create_logging_service_cbs(linphone_factory_get());
	linphone_logging_service_cbs_set_log_message_written(cbs, linphone_logging_service_cbs_on_log_message_written_cb);
	belle_sip_object_data_set((::belle_sip_object_t *)(cbs), MultiListenableObject::sListenerListName, new list<shared_ptr<Listener>>(), (::belle_sip_data_destroy)deleteListenerList);
	belle_sip_object_data_set((::belle_sip_object_t *)(mPrivPtr), MultiListenableObject::sCbsPtrName, cbs, nullptr);
	linphone_logging_service_add_callbacks(static_cast<::LinphoneLoggingService *>(mPrivPtr), cbs);
	belle_sip_object_unref((::belle_sip_object_t *)cbs);
	return cbs;
}


std::string linphone::LoggingService::getDomain() {
	return StringUtilities::cStringToCpp(linphone_logging_service_get_domain((::LinphoneLoggingService *)mPrivPtr));
}
void linphone::LoggingService::setDomain(const std::string & domain) {
	linphone_logging_service_set_domain((::LinphoneLoggingService *)mPrivPtr, StringUtilities::cppStringToC(domain));
}
void linphone::LoggingService::setLogLevel(linphone::LogLevel level) {
	linphone_logging_service_set_log_level((::LinphoneLoggingService *)mPrivPtr, (::LinphoneLogLevel)level);
}
unsigned int linphone::LoggingService::getLogLevelMask() const {
	return linphone_logging_service_get_log_level_mask((::LinphoneLoggingService *)mPrivPtr);
}
void linphone::LoggingService::setLogLevelMask(unsigned int mask) {
	linphone_logging_service_set_log_level_mask((::LinphoneLoggingService *)mPrivPtr, mask);
}
void linphone::LoggingService::enableStackTraceDumps(bool enable) {
	linphone_logging_service_enable_stack_trace_dumps((::LinphoneLoggingService *)mPrivPtr, enable);
}
void linphone::LoggingService::debug(const std::string & message) {
	linphone_logging_service_debug((::LinphoneLoggingService *)mPrivPtr, StringUtilities::cppStringToC(message));
}
void linphone::LoggingService::error(const std::string & message) {
	linphone_logging_service_error((::LinphoneLoggingService *)mPrivPtr, StringUtilities::cppStringToC(message));
}
void linphone::LoggingService::fatal(const std::string & message) {
	linphone_logging_service_fatal((::LinphoneLoggingService *)mPrivPtr, StringUtilities::cppStringToC(message));
}
void linphone::LoggingService::message(const std::string & message) {
	linphone_logging_service_message((::LinphoneLoggingService *)mPrivPtr, StringUtilities::cppStringToC(message));
}
void linphone::LoggingService::setLogFile(const std::string & dir, const std::string & filename, size_t maxSize) const {
	linphone_logging_service_set_log_file((::LinphoneLoggingService *)mPrivPtr, StringUtilities::cppStringToC(dir), StringUtilities::cppStringToC(filename), maxSize);
}
void linphone::LoggingService::trace(const std::string & message) {
	linphone_logging_service_trace((::LinphoneLoggingService *)mPrivPtr, StringUtilities::cppStringToC(message));
}
void linphone::LoggingService::warning(const std::string & message) {
	linphone_logging_service_warning((::LinphoneLoggingService *)mPrivPtr, StringUtilities::cppStringToC(message));
}

std::shared_ptr<linphone::LoggingService> linphone::LoggingService::get() {
	return Object::cPtrToSharedPtr<linphone::LoggingService>(linphone_logging_service_get());
}



linphone::AccountParams::AccountParams(void *ptr, bool takeRef): Object(ptr, takeRef) {
}



std::shared_ptr<const linphone::Address> linphone::AccountParams::getAudioVideoConferenceFactoryAddress() const {
	return Object::cPtrToSharedPtr<const linphone::Address>(linphone_account_params_get_audio_video_conference_factory_address((::LinphoneAccountParams *)mPrivPtr));
}
void linphone::AccountParams::setAudioVideoConferenceFactoryAddress(const std::shared_ptr<const linphone::Address> & address) {
	linphone_account_params_set_audio_video_conference_factory_address((::LinphoneAccountParams *)mPrivPtr, (::LinphoneAddress *)Object::sharedPtrToCPtr(std::static_pointer_cast<const Object,const linphone::Address>(address)));
}
linphone::AVPFMode linphone::AccountParams::getAvpfMode() const {
	return (linphone::AVPFMode)linphone_account_params_get_avpf_mode((::LinphoneAccountParams *)mPrivPtr);
}
void linphone::AccountParams::setAvpfMode(linphone::AVPFMode mode) {
	linphone_account_params_set_avpf_mode((::LinphoneAccountParams *)mPrivPtr, (::LinphoneAVPFMode)mode);
}
uint8_t linphone::AccountParams::getAvpfRrInterval() const {
	return linphone_account_params_get_avpf_rr_interval((::LinphoneAccountParams *)mPrivPtr);
}
void linphone::AccountParams::setAvpfRrInterval(uint8_t interval) {
	linphone_account_params_set_avpf_rr_interval((::LinphoneAccountParams *)mPrivPtr, interval);
}
std::shared_ptr<const linphone::Address> linphone::AccountParams::getConferenceFactoryAddress() const {
	return Object::cPtrToSharedPtr<const linphone::Address>(linphone_account_params_get_conference_factory_address((::LinphoneAccountParams *)mPrivPtr));
}
void linphone::AccountParams::setConferenceFactoryAddress(const std::shared_ptr<const linphone::Address> & address) {
	linphone_account_params_set_conference_factory_address((::LinphoneAccountParams *)mPrivPtr, (::LinphoneAddress *)Object::sharedPtrToCPtr(std::static_pointer_cast<const Object,const linphone::Address>(address)));
}
std::string linphone::AccountParams::getConferenceFactoryUri() const {
	return StringUtilities::cStringToCpp(linphone_account_params_get_conference_factory_uri((::LinphoneAccountParams *)mPrivPtr));
}
void linphone::AccountParams::setConferenceFactoryUri(const std::string & uri) {
	linphone_account_params_set_conference_factory_uri((::LinphoneAccountParams *)mPrivPtr, StringUtilities::cppStringToC(uri));
}
std::string linphone::AccountParams::getContactParameters() const {
	return StringUtilities::cStringToCpp(linphone_account_params_get_contact_parameters((::LinphoneAccountParams *)mPrivPtr));
}
void linphone::AccountParams::setContactParameters(const std::string & contactParams) {
	linphone_account_params_set_contact_parameters((::LinphoneAccountParams *)mPrivPtr, StringUtilities::cppStringToC(contactParams));
}
std::string linphone::AccountParams::getContactUriParameters() const {
	return StringUtilities::cStringToCpp(linphone_account_params_get_contact_uri_parameters((::LinphoneAccountParams *)mPrivPtr));
}
void linphone::AccountParams::setContactUriParameters(const std::string & contactUriParams) {
	linphone_account_params_set_contact_uri_parameters((::LinphoneAccountParams *)mPrivPtr, StringUtilities::cppStringToC(contactUriParams));
}
bool linphone::AccountParams::cpimInBasicChatRoomEnabled() const {
	return (linphone_account_params_cpim_in_basic_chat_room_enabled((::LinphoneAccountParams *)mPrivPtr) != FALSE);
}
void linphone::AccountParams::enableCpimInBasicChatRoom(bool enable) {
	linphone_account_params_enable_cpim_in_basic_chat_room((::LinphoneAccountParams *)mPrivPtr, enable);
}
std::shared_ptr<const linphone::Address> linphone::AccountParams::getCustomContact() const {
	return Object::cPtrToSharedPtr<const linphone::Address>(linphone_account_params_get_custom_contact((::LinphoneAccountParams *)mPrivPtr));
}
void linphone::AccountParams::setCustomContact(const std::shared_ptr<linphone::Address> & contact) {
	linphone_account_params_set_custom_contact((::LinphoneAccountParams *)mPrivPtr, (::LinphoneAddress *)Object::sharedPtrToCPtr(std::static_pointer_cast<Object,linphone::Address>(contact)));
}
bool linphone::AccountParams::dialEscapePlusEnabled() const {
	return (linphone_account_params_dial_escape_plus_enabled((::LinphoneAccountParams *)mPrivPtr) != FALSE);
}
void linphone::AccountParams::enableDialEscapePlus(bool enable) {
	linphone_account_params_enable_dial_escape_plus((::LinphoneAccountParams *)mPrivPtr, enable);
}
std::string linphone::AccountParams::getDomain() const {
	return StringUtilities::cStringToCpp(linphone_account_params_get_domain((::LinphoneAccountParams *)mPrivPtr));
}
int linphone::AccountParams::getExpires() const {
	return linphone_account_params_get_expires((::LinphoneAccountParams *)mPrivPtr);
}
void linphone::AccountParams::setExpires(int expires) {
	linphone_account_params_set_expires((::LinphoneAccountParams *)mPrivPtr, expires);
}
std::string linphone::AccountParams::getIdentity() const {
	return StringUtilities::cStringToCpp(linphone_account_params_get_identity((::LinphoneAccountParams *)mPrivPtr));
}
std::shared_ptr<const linphone::Address> linphone::AccountParams::getIdentityAddress() const {
	return Object::cPtrToSharedPtr<const linphone::Address>(linphone_account_params_get_identity_address((::LinphoneAccountParams *)mPrivPtr));
}
linphone::Status linphone::AccountParams::setIdentityAddress(const std::shared_ptr<linphone::Address> & identity) {
	return linphone_account_params_set_identity_address((::LinphoneAccountParams *)mPrivPtr, (::LinphoneAddress *)Object::sharedPtrToCPtr(std::static_pointer_cast<Object,linphone::Address>(identity)));
}
std::string linphone::AccountParams::getIdkey() const {
	return StringUtilities::cStringToCpp(linphone_account_params_get_idkey((::LinphoneAccountParams *)mPrivPtr));
}
void linphone::AccountParams::setIdkey(const std::string & idkey) {
	linphone_account_params_set_idkey((::LinphoneAccountParams *)mPrivPtr, StringUtilities::cppStringToC(idkey));
}
std::string linphone::AccountParams::getInternationalPrefix() const {
	return StringUtilities::cStringToCpp(linphone_account_params_get_international_prefix((::LinphoneAccountParams *)mPrivPtr));
}
void linphone::AccountParams::setInternationalPrefix(const std::string & prefix) {
	linphone_account_params_set_international_prefix((::LinphoneAccountParams *)mPrivPtr, StringUtilities::cppStringToC(prefix));
}
bool linphone::AccountParams::isPushNotificationAvailable() const {
	return (linphone_account_params_is_push_notification_available((::LinphoneAccountParams *)mPrivPtr) != FALSE);
}
std::string linphone::AccountParams::getLimeServerUrl() const {
	return StringUtilities::cStringToCpp(linphone_account_params_get_lime_server_url((::LinphoneAccountParams *)mPrivPtr));
}
void linphone::AccountParams::setLimeServerUrl(const std::string & url) {
	linphone_account_params_set_lime_server_url((::LinphoneAccountParams *)mPrivPtr, StringUtilities::cppStringToC(url));
}
std::shared_ptr<linphone::NatPolicy> linphone::AccountParams::getNatPolicy() const {
	return Object::cPtrToSharedPtr<linphone::NatPolicy>(linphone_account_params_get_nat_policy((::LinphoneAccountParams *)mPrivPtr));
}
void linphone::AccountParams::setNatPolicy(const std::shared_ptr<linphone::NatPolicy> & policy) {
	linphone_account_params_set_nat_policy((::LinphoneAccountParams *)mPrivPtr, (::LinphoneNatPolicy *)Object::sharedPtrToCPtr(std::static_pointer_cast<Object,linphone::NatPolicy>(policy)));
}
bool linphone::AccountParams::outboundProxyEnabled() const {
	return (linphone_account_params_outbound_proxy_enabled((::LinphoneAccountParams *)mPrivPtr) != FALSE);
}
void linphone::AccountParams::enableOutboundProxy(bool enable) {
	linphone_account_params_enable_outbound_proxy((::LinphoneAccountParams *)mPrivPtr, enable);
}
std::string linphone::AccountParams::getPictureUri() const {
	return StringUtilities::cStringToCpp(linphone_account_params_get_picture_uri((::LinphoneAccountParams *)mPrivPtr));
}
void linphone::AccountParams::setPictureUri(const std::string & uri) {
	linphone_account_params_set_picture_uri((::LinphoneAccountParams *)mPrivPtr, StringUtilities::cppStringToC(uri));
}
unsigned int linphone::AccountParams::getPrivacy() const {
	return linphone_account_params_get_privacy((::LinphoneAccountParams *)mPrivPtr);
}
void linphone::AccountParams::setPrivacy(unsigned int privacy) {
	linphone_account_params_set_privacy((::LinphoneAccountParams *)mPrivPtr, privacy);
}
bool linphone::AccountParams::publishEnabled() const {
	return (linphone_account_params_publish_enabled((::LinphoneAccountParams *)mPrivPtr) != FALSE);
}
void linphone::AccountParams::enablePublish(bool enable) {
	linphone_account_params_enable_publish((::LinphoneAccountParams *)mPrivPtr, enable);
}
int linphone::AccountParams::getPublishExpires() const {
	return linphone_account_params_get_publish_expires((::LinphoneAccountParams *)mPrivPtr);
}
void linphone::AccountParams::setPublishExpires(int expires) {
	linphone_account_params_set_publish_expires((::LinphoneAccountParams *)mPrivPtr, expires);
}
bool linphone::AccountParams::getPushNotificationAllowed() const {
	return (linphone_account_params_get_push_notification_allowed((::LinphoneAccountParams *)mPrivPtr) != FALSE);
}
void linphone::AccountParams::setPushNotificationAllowed(bool allow) {
	linphone_account_params_set_push_notification_allowed((::LinphoneAccountParams *)mPrivPtr, allow);
}
std::shared_ptr<linphone::PushNotificationConfig> linphone::AccountParams::getPushNotificationConfig() const {
	return Object::cPtrToSharedPtr<linphone::PushNotificationConfig>(linphone_account_params_get_push_notification_config((::LinphoneAccountParams *)mPrivPtr));
}
void linphone::AccountParams::setPushNotificationConfig(const std::shared_ptr<linphone::PushNotificationConfig> & config) {
	linphone_account_params_set_push_notification_config((::LinphoneAccountParams *)mPrivPtr, (::LinphonePushNotificationConfig *)Object::sharedPtrToCPtr(std::static_pointer_cast<Object,linphone::PushNotificationConfig>(config)));
}
std::string linphone::AccountParams::getQualityReportingCollector() const {
	return StringUtilities::cStringToCpp(linphone_account_params_get_quality_reporting_collector((::LinphoneAccountParams *)mPrivPtr));
}
void linphone::AccountParams::setQualityReportingCollector(const std::string & collector) {
	linphone_account_params_set_quality_reporting_collector((::LinphoneAccountParams *)mPrivPtr, StringUtilities::cppStringToC(collector));
}
bool linphone::AccountParams::qualityReportingEnabled() const {
	return (linphone_account_params_quality_reporting_enabled((::LinphoneAccountParams *)mPrivPtr) != FALSE);
}
void linphone::AccountParams::enableQualityReporting(bool enable) {
	linphone_account_params_enable_quality_reporting((::LinphoneAccountParams *)mPrivPtr, enable);
}
int linphone::AccountParams::getQualityReportingInterval() const {
	return linphone_account_params_get_quality_reporting_interval((::LinphoneAccountParams *)mPrivPtr);
}
void linphone::AccountParams::setQualityReportingInterval(int interval) {
	linphone_account_params_set_quality_reporting_interval((::LinphoneAccountParams *)mPrivPtr, interval);
}
std::string linphone::AccountParams::getRealm() const {
	return StringUtilities::cStringToCpp(linphone_account_params_get_realm((::LinphoneAccountParams *)mPrivPtr));
}
void linphone::AccountParams::setRealm(const std::string & realm) {
	linphone_account_params_set_realm((::LinphoneAccountParams *)mPrivPtr, StringUtilities::cppStringToC(realm));
}
std::string linphone::AccountParams::getRefKey() const {
	return StringUtilities::cStringToCpp(linphone_account_params_get_ref_key((::LinphoneAccountParams *)mPrivPtr));
}
void linphone::AccountParams::setRefKey(const std::string & refkey) {
	linphone_account_params_set_ref_key((::LinphoneAccountParams *)mPrivPtr, StringUtilities::cppStringToC(refkey));
}
bool linphone::AccountParams::registerEnabled() const {
	return (linphone_account_params_register_enabled((::LinphoneAccountParams *)mPrivPtr) != FALSE);
}
void linphone::AccountParams::enableRegister(bool enable) {
	linphone_account_params_enable_register((::LinphoneAccountParams *)mPrivPtr, enable);
}
bool linphone::AccountParams::getRemotePushNotificationAllowed() const {
	return (linphone_account_params_get_remote_push_notification_allowed((::LinphoneAccountParams *)mPrivPtr) != FALSE);
}
void linphone::AccountParams::setRemotePushNotificationAllowed(bool allow) {
	linphone_account_params_set_remote_push_notification_allowed((::LinphoneAccountParams *)mPrivPtr, allow);
}
std::list<std::shared_ptr<linphone::Address>> linphone::AccountParams::getRoutesAddresses() const {
	return ObjectBctbxListWrapper<linphone::Address>::bctbxListToCppList(linphone_account_params_get_routes_addresses((::LinphoneAccountParams *)mPrivPtr), true);
}
linphone::Status linphone::AccountParams::setRoutesAddresses(const std::list<std::shared_ptr<linphone::Address>> & routes) {
	return linphone_account_params_set_routes_addresses((::LinphoneAccountParams *)mPrivPtr, ObjectBctbxListWrapper<linphone::Address>(routes).c_list());
}
bool linphone::AccountParams::rtpBundleAssumptionEnabled() const {
	return (linphone_account_params_rtp_bundle_assumption_enabled((::LinphoneAccountParams *)mPrivPtr) != FALSE);
}
void linphone::AccountParams::enableRtpBundleAssumption(bool value) {
	linphone_account_params_enable_rtp_bundle_assumption((::LinphoneAccountParams *)mPrivPtr, value);
}
bool linphone::AccountParams::rtpBundleEnabled() const {
	return (linphone_account_params_rtp_bundle_enabled((::LinphoneAccountParams *)mPrivPtr) != FALSE);
}
void linphone::AccountParams::enableRtpBundle(bool value) {
	linphone_account_params_enable_rtp_bundle((::LinphoneAccountParams *)mPrivPtr, value);
}
std::string linphone::AccountParams::getServerAddr() const {
	return StringUtilities::cStringToCpp(linphone_account_params_get_server_addr((::LinphoneAccountParams *)mPrivPtr));
}
linphone::Status linphone::AccountParams::setServerAddr(const std::string & serverAddress) {
	return linphone_account_params_set_server_addr((::LinphoneAccountParams *)mPrivPtr, StringUtilities::cppStringToC(serverAddress));
}
std::shared_ptr<const linphone::Address> linphone::AccountParams::getServerAddress() const {
	return Object::cPtrToSharedPtr<const linphone::Address>(linphone_account_params_get_server_address((::LinphoneAccountParams *)mPrivPtr));
}
linphone::Status linphone::AccountParams::setServerAddress(const std::shared_ptr<linphone::Address> & serverAddress) {
	return linphone_account_params_set_server_address((::LinphoneAccountParams *)mPrivPtr, (::LinphoneAddress *)Object::sharedPtrToCPtr(std::static_pointer_cast<Object,linphone::Address>(serverAddress)));
}
linphone::TransportType linphone::AccountParams::getTransport() const {
	return (linphone::TransportType)linphone_account_params_get_transport((::LinphoneAccountParams *)mPrivPtr);
}
void linphone::AccountParams::setTransport(linphone::TransportType transport) {
	linphone_account_params_set_transport((::LinphoneAccountParams *)mPrivPtr, (::LinphoneTransportType)transport);
}
bool linphone::AccountParams::getUseInternationalPrefixForCallsAndChats() const {
	return (linphone_account_params_get_use_international_prefix_for_calls_and_chats((::LinphoneAccountParams *)mPrivPtr) != FALSE);
}
void linphone::AccountParams::setUseInternationalPrefixForCallsAndChats(bool enable) {
	linphone_account_params_set_use_international_prefix_for_calls_and_chats((::LinphoneAccountParams *)mPrivPtr, enable);
}
void linphone::AccountParams::addCustomParam(const std::string & key, const std::string & value) {
	linphone_account_params_add_custom_param((::LinphoneAccountParams *)mPrivPtr, StringUtilities::cppStringToC(key), StringUtilities::cppStringToC(value));
}
std::shared_ptr<linphone::AccountParams> linphone::AccountParams::clone() const {
	return Object::cPtrToSharedPtr<linphone::AccountParams>(linphone_account_params_clone((::LinphoneAccountParams *)mPrivPtr), false);
}
std::string linphone::AccountParams::getCustomParam(const std::string & key) const {
	return StringUtilities::cStringToCpp(linphone_account_params_get_custom_param((::LinphoneAccountParams *)mPrivPtr, StringUtilities::cppStringToC(key)));
}

std::shared_ptr<linphone::AccountParams> linphone::AccountParams::newWithConfig(const std::shared_ptr<linphone::Core> & lc, int index) {
	return Object::cPtrToSharedPtr<linphone::AccountParams>(linphone_account_params_new_with_config((::LinphoneCore *)Object::sharedPtrToCPtr(std::static_pointer_cast<Object,linphone::Core>(lc)), index), false);
}



linphone::PresenceModel::PresenceModel(void *ptr, bool takeRef): Object(ptr, takeRef) {
}



std::shared_ptr<linphone::PresenceActivity> linphone::PresenceModel::getActivity() const {
	return Object::cPtrToSharedPtr<linphone::PresenceActivity>(linphone_presence_model_get_activity((::LinphonePresenceModel *)mPrivPtr), false);
}
linphone::PresenceBasicStatus linphone::PresenceModel::getBasicStatus() const {
	return (linphone::PresenceBasicStatus)linphone_presence_model_get_basic_status((::LinphonePresenceModel *)mPrivPtr);
}
linphone::Status linphone::PresenceModel::setBasicStatus(linphone::PresenceBasicStatus basicStatus) {
	return linphone_presence_model_set_basic_status((::LinphonePresenceModel *)mPrivPtr, (::LinphonePresenceBasicStatus)basicStatus);
}
int linphone::PresenceModel::getCapabilities() const {
	return linphone_presence_model_get_capabilities((::LinphonePresenceModel *)mPrivPtr);
}
linphone::ConsolidatedPresence linphone::PresenceModel::getConsolidatedPresence() const {
	return (linphone::ConsolidatedPresence)linphone_presence_model_get_consolidated_presence((::LinphonePresenceModel *)mPrivPtr);
}
std::string linphone::PresenceModel::getContact() const {
	return StringUtilities::cStringToCpp(linphone_presence_model_get_contact((::LinphonePresenceModel *)mPrivPtr));
}
linphone::Status linphone::PresenceModel::setContact(const std::string & contact) {
	return linphone_presence_model_set_contact((::LinphonePresenceModel *)mPrivPtr, StringUtilities::cppStringToC(contact));
}
bool linphone::PresenceModel::isOnline() const {
	return (linphone_presence_model_is_online((::LinphonePresenceModel *)mPrivPtr) != FALSE);
}
time_t linphone::PresenceModel::getLatestActivityTimestamp() const {
	return linphone_presence_model_get_latest_activity_timestamp((::LinphonePresenceModel *)mPrivPtr);
}
unsigned int linphone::PresenceModel::getNbActivities() const {
	return linphone_presence_model_get_nb_activities((::LinphonePresenceModel *)mPrivPtr);
}
unsigned int linphone::PresenceModel::getNbPersons() const {
	return linphone_presence_model_get_nb_persons((::LinphonePresenceModel *)mPrivPtr);
}
unsigned int linphone::PresenceModel::getNbServices() const {
	return linphone_presence_model_get_nb_services((::LinphonePresenceModel *)mPrivPtr);
}
std::shared_ptr<const linphone::Address> linphone::PresenceModel::getPresentity() const {
	return Object::cPtrToSharedPtr<const linphone::Address>(linphone_presence_model_get_presentity((::LinphonePresenceModel *)mPrivPtr));
}
linphone::Status linphone::PresenceModel::setPresentity(const std::shared_ptr<const linphone::Address> & presentity) {
	return linphone_presence_model_set_presentity((::LinphonePresenceModel *)mPrivPtr, (::LinphoneAddress *)Object::sharedPtrToCPtr(std::static_pointer_cast<const Object,const linphone::Address>(presentity)));
}
time_t linphone::PresenceModel::getTimestamp() const {
	return linphone_presence_model_get_timestamp((::LinphonePresenceModel *)mPrivPtr);
}
linphone::Status linphone::PresenceModel::addActivity(const std::shared_ptr<linphone::PresenceActivity> & activity) {
	return linphone_presence_model_add_activity((::LinphonePresenceModel *)mPrivPtr, (::LinphonePresenceActivity *)Object::sharedPtrToCPtr(std::static_pointer_cast<Object,linphone::PresenceActivity>(activity)));
}
linphone::Status linphone::PresenceModel::addNote(const std::string & noteContent, const std::string & lang) {
	return linphone_presence_model_add_note((::LinphonePresenceModel *)mPrivPtr, StringUtilities::cppStringToC(noteContent), StringUtilities::cppStringToC(lang));
}
linphone::Status linphone::PresenceModel::addPerson(const std::shared_ptr<linphone::PresencePerson> & person) {
	return linphone_presence_model_add_person((::LinphonePresenceModel *)mPrivPtr, (::LinphonePresencePerson *)Object::sharedPtrToCPtr(std::static_pointer_cast<Object,linphone::PresencePerson>(person)));
}
linphone::Status linphone::PresenceModel::addService(const std::shared_ptr<linphone::PresenceService> & service) {
	return linphone_presence_model_add_service((::LinphonePresenceModel *)mPrivPtr, (::LinphonePresenceService *)Object::sharedPtrToCPtr(std::static_pointer_cast<Object,linphone::PresenceService>(service)));
}
linphone::Status linphone::PresenceModel::clearActivities() {
	return linphone_presence_model_clear_activities((::LinphonePresenceModel *)mPrivPtr);
}
linphone::Status linphone::PresenceModel::clearNotes() {
	return linphone_presence_model_clear_notes((::LinphonePresenceModel *)mPrivPtr);
}
linphone::Status linphone::PresenceModel::clearPersons() {
	return linphone_presence_model_clear_persons((::LinphonePresenceModel *)mPrivPtr);
}
linphone::Status linphone::PresenceModel::clearServices() {
	return linphone_presence_model_clear_services((::LinphonePresenceModel *)mPrivPtr);
}
float linphone::PresenceModel::getCapabilityVersion(linphone::Friend::Capability capability) const {
	return linphone_presence_model_get_capability_version((::LinphonePresenceModel *)mPrivPtr, (::LinphoneFriendCapability)capability);
}
std::shared_ptr<linphone::PresenceNote> linphone::PresenceModel::getNote(const std::string & lang) const {
	return Object::cPtrToSharedPtr<linphone::PresenceNote>(linphone_presence_model_get_note((::LinphonePresenceModel *)mPrivPtr, StringUtilities::cppStringToC(lang)));
}
std::shared_ptr<linphone::PresenceActivity> linphone::PresenceModel::getNthActivity(unsigned int index) const {
	return Object::cPtrToSharedPtr<linphone::PresenceActivity>(linphone_presence_model_get_nth_activity((::LinphonePresenceModel *)mPrivPtr, index), false);
}
std::shared_ptr<linphone::PresencePerson> linphone::PresenceModel::getNthPerson(unsigned int index) const {
	return Object::cPtrToSharedPtr<linphone::PresencePerson>(linphone_presence_model_get_nth_person((::LinphonePresenceModel *)mPrivPtr, index));
}
std::shared_ptr<linphone::PresenceService> linphone::PresenceModel::getNthService(unsigned int index) const {
	return Object::cPtrToSharedPtr<linphone::PresenceService>(linphone_presence_model_get_nth_service((::LinphonePresenceModel *)mPrivPtr, index));
}
bool linphone::PresenceModel::hasCapability(linphone::Friend::Capability capability) const {
	return (linphone_presence_model_has_capability((::LinphonePresenceModel *)mPrivPtr, (::LinphoneFriendCapability)capability) != FALSE);
}
bool linphone::PresenceModel::hasCapabilityWithVersion(linphone::Friend::Capability capability, float version) const {
	return (linphone_presence_model_has_capability_with_version((::LinphonePresenceModel *)mPrivPtr, (::LinphoneFriendCapability)capability, version) != FALSE);
}
bool linphone::PresenceModel::hasCapabilityWithVersionOrMore(linphone::Friend::Capability capability, float version) const {
	return (linphone_presence_model_has_capability_with_version_or_more((::LinphonePresenceModel *)mPrivPtr, (::LinphoneFriendCapability)capability, version) != FALSE);
}
linphone::Status linphone::PresenceModel::setActivity(linphone::PresenceActivity::Type activity, const std::string & description) {
	return linphone_presence_model_set_activity((::LinphonePresenceModel *)mPrivPtr, (::LinphonePresenceActivityType)activity, StringUtilities::cppStringToC(description));
}

std::shared_ptr<linphone::PresenceModel> linphone::PresenceModel::newWithActivity(linphone::PresenceActivity::Type activity, const std::string & description) {
	return Object::cPtrToSharedPtr<linphone::PresenceModel>(linphone_presence_model_new_with_activity((::LinphonePresenceActivityType)activity, StringUtilities::cppStringToC(description)), false);
}
std::shared_ptr<linphone::PresenceModel> linphone::PresenceModel::newWithActivityAndNote(linphone::PresenceActivity::Type activity, const std::string & description, const std::string & note, const std::string & lang) {
	return Object::cPtrToSharedPtr<linphone::PresenceModel>(linphone_presence_model_new_with_activity_and_note((::LinphonePresenceActivityType)activity, StringUtilities::cppStringToC(description), StringUtilities::cppStringToC(note), StringUtilities::cppStringToC(lang)), false);
}



linphone::ImNotifPolicy::ImNotifPolicy(void *ptr, bool takeRef): Object(ptr, takeRef) {
}



bool linphone::ImNotifPolicy::getRecvImdnDelivered() const {
	return (linphone_im_notif_policy_get_recv_imdn_delivered((::LinphoneImNotifPolicy *)mPrivPtr) != FALSE);
}
void linphone::ImNotifPolicy::setRecvImdnDelivered(bool enable) {
	linphone_im_notif_policy_set_recv_imdn_delivered((::LinphoneImNotifPolicy *)mPrivPtr, enable);
}
bool linphone::ImNotifPolicy::getRecvImdnDeliveryError() const {
	return (linphone_im_notif_policy_get_recv_imdn_delivery_error((::LinphoneImNotifPolicy *)mPrivPtr) != FALSE);
}
void linphone::ImNotifPolicy::setRecvImdnDeliveryError(bool enable) {
	linphone_im_notif_policy_set_recv_imdn_delivery_error((::LinphoneImNotifPolicy *)mPrivPtr, enable);
}
bool linphone::ImNotifPolicy::getRecvImdnDisplayed() const {
	return (linphone_im_notif_policy_get_recv_imdn_displayed((::LinphoneImNotifPolicy *)mPrivPtr) != FALSE);
}
void linphone::ImNotifPolicy::setRecvImdnDisplayed(bool enable) {
	linphone_im_notif_policy_set_recv_imdn_displayed((::LinphoneImNotifPolicy *)mPrivPtr, enable);
}
bool linphone::ImNotifPolicy::getRecvIsComposing() const {
	return (linphone_im_notif_policy_get_recv_is_composing((::LinphoneImNotifPolicy *)mPrivPtr) != FALSE);
}
void linphone::ImNotifPolicy::setRecvIsComposing(bool enable) {
	linphone_im_notif_policy_set_recv_is_composing((::LinphoneImNotifPolicy *)mPrivPtr, enable);
}
bool linphone::ImNotifPolicy::getSendImdnDelivered() const {
	return (linphone_im_notif_policy_get_send_imdn_delivered((::LinphoneImNotifPolicy *)mPrivPtr) != FALSE);
}
void linphone::ImNotifPolicy::setSendImdnDelivered(bool enable) {
	linphone_im_notif_policy_set_send_imdn_delivered((::LinphoneImNotifPolicy *)mPrivPtr, enable);
}
bool linphone::ImNotifPolicy::getSendImdnDeliveryError() const {
	return (linphone_im_notif_policy_get_send_imdn_delivery_error((::LinphoneImNotifPolicy *)mPrivPtr) != FALSE);
}
void linphone::ImNotifPolicy::setSendImdnDeliveryError(bool enable) {
	linphone_im_notif_policy_set_send_imdn_delivery_error((::LinphoneImNotifPolicy *)mPrivPtr, enable);
}
bool linphone::ImNotifPolicy::getSendImdnDisplayed() const {
	return (linphone_im_notif_policy_get_send_imdn_displayed((::LinphoneImNotifPolicy *)mPrivPtr) != FALSE);
}
void linphone::ImNotifPolicy::setSendImdnDisplayed(bool enable) {
	linphone_im_notif_policy_set_send_imdn_displayed((::LinphoneImNotifPolicy *)mPrivPtr, enable);
}
bool linphone::ImNotifPolicy::getSendIsComposing() const {
	return (linphone_im_notif_policy_get_send_is_composing((::LinphoneImNotifPolicy *)mPrivPtr) != FALSE);
}
void linphone::ImNotifPolicy::setSendIsComposing(bool enable) {
	linphone_im_notif_policy_set_send_is_composing((::LinphoneImNotifPolicy *)mPrivPtr, enable);
}
void linphone::ImNotifPolicy::clear() {
	linphone_im_notif_policy_clear((::LinphoneImNotifPolicy *)mPrivPtr);
}
void linphone::ImNotifPolicy::enableAll() {
	linphone_im_notif_policy_enable_all((::LinphoneImNotifPolicy *)mPrivPtr);
}



static void linphone_xml_rpc_request_cbs_on_response_cb(LinphoneXmlRpcRequest * request) {
	LinphoneXmlRpcRequestCbs *cbs = linphone_xml_rpc_request_get_current_callbacks(request);
	if (cbs) {
		// Make a copy of the list of listeners, so that it is possible to remove a listener from a listener without corrupting the list.
		std::list<std::shared_ptr<Listener> > listeners = *static_cast<std::list<std::shared_ptr<Listener> > *>(belle_sip_object_data_get((::belle_sip_object_t *)cbs, MultiListenableObject::sListenerListName));
		for(std::list<std::shared_ptr<Listener> >::iterator it=listeners.begin(); it!=listeners.end(); it++) {
			std::shared_ptr<XmlRpcRequestListener> listener = std::static_pointer_cast<XmlRpcRequestListener,Listener>(*it);
			listener->onResponse(Object::cPtrToSharedPtr<XmlRpcRequest>(request));
		}
	}
}

linphone::XmlRpcRequest::XmlRpcRequest(void *ptr, bool takeRef): MultiListenableObject(ptr, takeRef) {
}

void XmlRpcRequest::addListener(const std::shared_ptr<XmlRpcRequestListener> &listener) {
	MultiListenableObject::addListener(std::static_pointer_cast<Listener,XmlRpcRequestListener>(listener));
}

void XmlRpcRequest::removeListener(const std::shared_ptr<XmlRpcRequestListener> &listener) {
	MultiListenableObject::removeListener(std::static_pointer_cast<Listener,XmlRpcRequestListener>(listener));
}

void *XmlRpcRequest::createCallbacks() {
	LinphoneXmlRpcRequestCbs *cbs = linphone_factory_create_xml_rpc_request_cbs(linphone_factory_get());
	linphone_xml_rpc_request_cbs_set_response(cbs, linphone_xml_rpc_request_cbs_on_response_cb);
	belle_sip_object_data_set((::belle_sip_object_t *)(cbs), MultiListenableObject::sListenerListName, new list<shared_ptr<Listener>>(), (::belle_sip_data_destroy)deleteListenerList);
	belle_sip_object_data_set((::belle_sip_object_t *)(mPrivPtr), MultiListenableObject::sCbsPtrName, cbs, nullptr);
	linphone_xml_rpc_request_add_callbacks(static_cast<::LinphoneXmlRpcRequest *>(mPrivPtr), cbs);
	belle_sip_object_unref((::belle_sip_object_t *)cbs);
	return cbs;
}


std::string linphone::XmlRpcRequest::getContent() const {
	return StringUtilities::cStringToCpp(linphone_xml_rpc_request_get_content((::LinphoneXmlRpcRequest *)mPrivPtr));
}
int linphone::XmlRpcRequest::getIntResponse() const {
	return linphone_xml_rpc_request_get_int_response((::LinphoneXmlRpcRequest *)mPrivPtr);
}
std::list<std::string> linphone::XmlRpcRequest::getListResponse() const {
	return StringBctbxListWrapper::bctbxListToCppList(linphone_xml_rpc_request_get_list_response((::LinphoneXmlRpcRequest *)mPrivPtr));
}
std::string linphone::XmlRpcRequest::getRawResponse() const {
	return StringUtilities::cStringToCpp(linphone_xml_rpc_request_get_raw_response((::LinphoneXmlRpcRequest *)mPrivPtr));
}
linphone::XmlRpcStatus linphone::XmlRpcRequest::getStatus() const {
	return (linphone::XmlRpcStatus)linphone_xml_rpc_request_get_status((::LinphoneXmlRpcRequest *)mPrivPtr);
}
std::string linphone::XmlRpcRequest::getStringResponse() const {
	return StringUtilities::cStringToCpp(linphone_xml_rpc_request_get_string_response((::LinphoneXmlRpcRequest *)mPrivPtr));
}
void linphone::XmlRpcRequest::addIntArg(int value) {
	linphone_xml_rpc_request_add_int_arg((::LinphoneXmlRpcRequest *)mPrivPtr, value);
}
void linphone::XmlRpcRequest::addStringArg(const std::string & value) {
	linphone_xml_rpc_request_add_string_arg((::LinphoneXmlRpcRequest *)mPrivPtr, StringUtilities::cppStringToC(value));
}




linphone::XmlRpcSession::XmlRpcSession(void *ptr, bool takeRef): Object(ptr, takeRef) {
}



std::shared_ptr<linphone::XmlRpcRequest> linphone::XmlRpcSession::createRequest(linphone::XmlRpcArgType returnType, const std::string & method) {
	return Object::cPtrToSharedPtr<linphone::XmlRpcRequest>(linphone_xml_rpc_session_create_request((::LinphoneXmlRpcSession *)mPrivPtr, (::LinphoneXmlRpcArgType)returnType, StringUtilities::cppStringToC(method)), false);
}
void linphone::XmlRpcSession::release() {
	linphone_xml_rpc_session_release((::LinphoneXmlRpcSession *)mPrivPtr);
}
void linphone::XmlRpcSession::sendRequest(const std::shared_ptr<linphone::XmlRpcRequest> & request) {
	linphone_xml_rpc_session_send_request((::LinphoneXmlRpcSession *)mPrivPtr, (::LinphoneXmlRpcRequest *)Object::sharedPtrToCPtr(std::static_pointer_cast<Object,linphone::XmlRpcRequest>(request)));
}




linphone::PresenceNote::PresenceNote(void *ptr, bool takeRef): Object(ptr, takeRef) {
}



std::string linphone::PresenceNote::getContent() const {
	return StringUtilities::cStringToCpp(linphone_presence_note_get_content((::LinphonePresenceNote *)mPrivPtr));
}
linphone::Status linphone::PresenceNote::setContent(const std::string & content) {
	return linphone_presence_note_set_content((::LinphonePresenceNote *)mPrivPtr, StringUtilities::cppStringToC(content));
}
std::string linphone::PresenceNote::getLang() const {
	return StringUtilities::cStringToCpp(linphone_presence_note_get_lang((::LinphonePresenceNote *)mPrivPtr));
}
linphone::Status linphone::PresenceNote::setLang(const std::string & lang) {
	return linphone_presence_note_set_lang((::LinphonePresenceNote *)mPrivPtr, StringUtilities::cppStringToC(lang));
}




linphone::SearchResult::SearchResult(void *ptr, bool takeRef): Object(ptr, takeRef) {
}



std::shared_ptr<const linphone::Address> linphone::SearchResult::getAddress() const {
	return Object::cPtrToSharedPtr<const linphone::Address>(linphone_search_result_get_address((::LinphoneSearchResult *)mPrivPtr));
}
int linphone::SearchResult::getCapabilities() const {
	return linphone_search_result_get_capabilities((::LinphoneSearchResult *)mPrivPtr);
}
std::shared_ptr<linphone::Friend> linphone::SearchResult::getFriend() const {
	return Object::cPtrToSharedPtr<linphone::Friend>(linphone_search_result_get_friend((::LinphoneSearchResult *)mPrivPtr));
}
std::string linphone::SearchResult::getPhoneNumber() const {
	return StringUtilities::cStringToCpp(linphone_search_result_get_phone_number((::LinphoneSearchResult *)mPrivPtr));
}
int linphone::SearchResult::getSourceFlags() const {
	return linphone_search_result_get_source_flags((::LinphoneSearchResult *)mPrivPtr);
}
unsigned int linphone::SearchResult::getWeight() const {
	return linphone_search_result_get_weight((::LinphoneSearchResult *)mPrivPtr);
}
bool linphone::SearchResult::hasCapability(linphone::Friend::Capability capability) const {
	return (linphone_search_result_has_capability((::LinphoneSearchResult *)mPrivPtr, (::LinphoneFriendCapability)capability) != FALSE);
}




linphone::TunnelConfig::TunnelConfig(void *ptr, bool takeRef): Object(ptr, takeRef) {
}



int linphone::TunnelConfig::getDelay() const {
	return linphone_tunnel_config_get_delay((::LinphoneTunnelConfig *)mPrivPtr);
}
void linphone::TunnelConfig::setDelay(int delay) {
	linphone_tunnel_config_set_delay((::LinphoneTunnelConfig *)mPrivPtr, delay);
}
std::string linphone::TunnelConfig::getHost() const {
	return StringUtilities::cStringToCpp(linphone_tunnel_config_get_host((::LinphoneTunnelConfig *)mPrivPtr));
}
void linphone::TunnelConfig::setHost(const std::string & host) {
	linphone_tunnel_config_set_host((::LinphoneTunnelConfig *)mPrivPtr, StringUtilities::cppStringToC(host));
}
std::string linphone::TunnelConfig::getHost2() const {
	return StringUtilities::cStringToCpp(linphone_tunnel_config_get_host2((::LinphoneTunnelConfig *)mPrivPtr));
}
void linphone::TunnelConfig::setHost2(const std::string & host) {
	linphone_tunnel_config_set_host2((::LinphoneTunnelConfig *)mPrivPtr, StringUtilities::cppStringToC(host));
}
int linphone::TunnelConfig::getPort() const {
	return linphone_tunnel_config_get_port((::LinphoneTunnelConfig *)mPrivPtr);
}
void linphone::TunnelConfig::setPort(int port) {
	linphone_tunnel_config_set_port((::LinphoneTunnelConfig *)mPrivPtr, port);
}
int linphone::TunnelConfig::getPort2() const {
	return linphone_tunnel_config_get_port2((::LinphoneTunnelConfig *)mPrivPtr);
}
void linphone::TunnelConfig::setPort2(int port) {
	linphone_tunnel_config_set_port2((::LinphoneTunnelConfig *)mPrivPtr, port);
}
int linphone::TunnelConfig::getRemoteUdpMirrorPort() const {
	return linphone_tunnel_config_get_remote_udp_mirror_port((::LinphoneTunnelConfig *)mPrivPtr);
}
void linphone::TunnelConfig::setRemoteUdpMirrorPort(int remoteUdpMirrorPort) {
	linphone_tunnel_config_set_remote_udp_mirror_port((::LinphoneTunnelConfig *)mPrivPtr, remoteUdpMirrorPort);
}




linphone::AudioDevice::AudioDevice(void *ptr, bool takeRef): Object(ptr, takeRef) {
}



linphone::AudioDevice::Capabilities linphone::AudioDevice::getCapabilities() const {
	return (Capabilities)linphone_audio_device_get_capabilities((::LinphoneAudioDevice *)mPrivPtr);
}
std::string linphone::AudioDevice::getDeviceName() const {
	return StringUtilities::cStringToCpp(linphone_audio_device_get_device_name((::LinphoneAudioDevice *)mPrivPtr));
}
std::string linphone::AudioDevice::getDriverName() const {
	return StringUtilities::cStringToCpp(linphone_audio_device_get_driver_name((::LinphoneAudioDevice *)mPrivPtr));
}
bool linphone::AudioDevice::getFollowsSystemRoutingPolicy() const {
	return (linphone_audio_device_get_follows_system_routing_policy((::LinphoneAudioDevice *)mPrivPtr) != FALSE);
}
std::string linphone::AudioDevice::getId() const {
	return StringUtilities::cStringToCpp(linphone_audio_device_get_id((::LinphoneAudioDevice *)mPrivPtr));
}
linphone::AudioDevice::Type linphone::AudioDevice::getType() const {
	return (Type)linphone_audio_device_get_type((::LinphoneAudioDevice *)mPrivPtr);
}
bool linphone::AudioDevice::hasCapability(linphone::AudioDevice::Capabilities capability) const {
	return (linphone_audio_device_has_capability((::LinphoneAudioDevice *)mPrivPtr, (::LinphoneAudioDeviceCapabilities)capability) != FALSE);
}



static void linphone_chat_message_cbs_on_msg_state_changed_cb(LinphoneChatMessage * message, LinphoneChatMessageState state) {
	LinphoneChatMessageCbs *cbs = linphone_chat_message_get_current_callbacks(message);
	if (cbs) {
		// Make a copy of the list of listeners, so that it is possible to remove a listener from a listener without corrupting the list.
		std::list<std::shared_ptr<Listener> > listeners = *static_cast<std::list<std::shared_ptr<Listener> > *>(belle_sip_object_data_get((::belle_sip_object_t *)cbs, MultiListenableObject::sListenerListName));
		for(std::list<std::shared_ptr<Listener> >::iterator it=listeners.begin(); it!=listeners.end(); it++) {
			std::shared_ptr<ChatMessageListener> listener = std::static_pointer_cast<ChatMessageListener,Listener>(*it);
			listener->onMsgStateChanged(Object::cPtrToSharedPtr<ChatMessage>(message), (ChatMessage::State)state);
		}
	}
}
static void linphone_chat_message_cbs_on_new_message_reaction_cb(LinphoneChatMessage * message, const LinphoneChatMessageReaction * reaction) {
	LinphoneChatMessageCbs *cbs = linphone_chat_message_get_current_callbacks(message);
	if (cbs) {
		// Make a copy of the list of listeners, so that it is possible to remove a listener from a listener without corrupting the list.
		std::list<std::shared_ptr<Listener> > listeners = *static_cast<std::list<std::shared_ptr<Listener> > *>(belle_sip_object_data_get((::belle_sip_object_t *)cbs, MultiListenableObject::sListenerListName));
		for(std::list<std::shared_ptr<Listener> >::iterator it=listeners.begin(); it!=listeners.end(); it++) {
			std::shared_ptr<ChatMessageListener> listener = std::static_pointer_cast<ChatMessageListener,Listener>(*it);
			listener->onNewMessageReaction(Object::cPtrToSharedPtr<ChatMessage>(message), Object::cPtrToSharedPtr<const ChatMessageReaction>(reaction));
		}
	}
}
static void linphone_chat_message_cbs_on_reaction_removed_cb(LinphoneChatMessage * message, const LinphoneAddress * address) {
	LinphoneChatMessageCbs *cbs = linphone_chat_message_get_current_callbacks(message);
	if (cbs) {
		// Make a copy of the list of listeners, so that it is possible to remove a listener from a listener without corrupting the list.
		std::list<std::shared_ptr<Listener> > listeners = *static_cast<std::list<std::shared_ptr<Listener> > *>(belle_sip_object_data_get((::belle_sip_object_t *)cbs, MultiListenableObject::sListenerListName));
		for(std::list<std::shared_ptr<Listener> >::iterator it=listeners.begin(); it!=listeners.end(); it++) {
			std::shared_ptr<ChatMessageListener> listener = std::static_pointer_cast<ChatMessageListener,Listener>(*it);
			listener->onReactionRemoved(Object::cPtrToSharedPtr<ChatMessage>(message), Object::cPtrToSharedPtr<const Address>(address));
		}
	}
}
static void linphone_chat_message_cbs_on_file_transfer_recv_cb(LinphoneChatMessage * message, LinphoneContent * content, const LinphoneBuffer * buffer) {
	LinphoneChatMessageCbs *cbs = linphone_chat_message_get_current_callbacks(message);
	if (cbs) {
		// Make a copy of the list of listeners, so that it is possible to remove a listener from a listener without corrupting the list.
		std::list<std::shared_ptr<Listener> > listeners = *static_cast<std::list<std::shared_ptr<Listener> > *>(belle_sip_object_data_get((::belle_sip_object_t *)cbs, MultiListenableObject::sListenerListName));
		for(std::list<std::shared_ptr<Listener> >::iterator it=listeners.begin(); it!=listeners.end(); it++) {
			std::shared_ptr<ChatMessageListener> listener = std::static_pointer_cast<ChatMessageListener,Listener>(*it);
			listener->onFileTransferRecv(Object::cPtrToSharedPtr<ChatMessage>(message), Object::cPtrToSharedPtr<Content>(content), Object::cPtrToSharedPtr<const Buffer>(buffer));
		}
	}
}
static void linphone_chat_message_cbs_on_file_transfer_send_chunk_cb(LinphoneChatMessage * message, LinphoneContent * content, size_t offset, size_t size, LinphoneBuffer * buffer) {
	LinphoneChatMessageCbs *cbs = linphone_chat_message_get_current_callbacks(message);
	if (cbs) {
		// Make a copy of the list of listeners, so that it is possible to remove a listener from a listener without corrupting the list.
		std::list<std::shared_ptr<Listener> > listeners = *static_cast<std::list<std::shared_ptr<Listener> > *>(belle_sip_object_data_get((::belle_sip_object_t *)cbs, MultiListenableObject::sListenerListName));
		for(std::list<std::shared_ptr<Listener> >::iterator it=listeners.begin(); it!=listeners.end(); it++) {
			std::shared_ptr<ChatMessageListener> listener = std::static_pointer_cast<ChatMessageListener,Listener>(*it);
			listener->onFileTransferSendChunk(Object::cPtrToSharedPtr<ChatMessage>(message), Object::cPtrToSharedPtr<Content>(content), offset, size, Object::cPtrToSharedPtr<Buffer>(buffer));
		}
	}
}
static void linphone_chat_message_cbs_on_file_transfer_progress_indication_cb(LinphoneChatMessage * message, LinphoneContent * content, size_t offset, size_t total) {
	LinphoneChatMessageCbs *cbs = linphone_chat_message_get_current_callbacks(message);
	if (cbs) {
		// Make a copy of the list of listeners, so that it is possible to remove a listener from a listener without corrupting the list.
		std::list<std::shared_ptr<Listener> > listeners = *static_cast<std::list<std::shared_ptr<Listener> > *>(belle_sip_object_data_get((::belle_sip_object_t *)cbs, MultiListenableObject::sListenerListName));
		for(std::list<std::shared_ptr<Listener> >::iterator it=listeners.begin(); it!=listeners.end(); it++) {
			std::shared_ptr<ChatMessageListener> listener = std::static_pointer_cast<ChatMessageListener,Listener>(*it);
			listener->onFileTransferProgressIndication(Object::cPtrToSharedPtr<ChatMessage>(message), Object::cPtrToSharedPtr<Content>(content), offset, total);
		}
	}
}
static void linphone_chat_message_cbs_on_participant_imdn_state_changed_cb(LinphoneChatMessage * message, const LinphoneParticipantImdnState * state) {
	LinphoneChatMessageCbs *cbs = linphone_chat_message_get_current_callbacks(message);
	if (cbs) {
		// Make a copy of the list of listeners, so that it is possible to remove a listener from a listener without corrupting the list.
		std::list<std::shared_ptr<Listener> > listeners = *static_cast<std::list<std::shared_ptr<Listener> > *>(belle_sip_object_data_get((::belle_sip_object_t *)cbs, MultiListenableObject::sListenerListName));
		for(std::list<std::shared_ptr<Listener> >::iterator it=listeners.begin(); it!=listeners.end(); it++) {
			std::shared_ptr<ChatMessageListener> listener = std::static_pointer_cast<ChatMessageListener,Listener>(*it);
			listener->onParticipantImdnStateChanged(Object::cPtrToSharedPtr<ChatMessage>(message), Object::cPtrToSharedPtr<const ParticipantImdnState>(state));
		}
	}
}
static void linphone_chat_message_cbs_on_ephemeral_message_timer_started_cb(LinphoneChatMessage * message) {
	LinphoneChatMessageCbs *cbs = linphone_chat_message_get_current_callbacks(message);
	if (cbs) {
		// Make a copy of the list of listeners, so that it is possible to remove a listener from a listener without corrupting the list.
		std::list<std::shared_ptr<Listener> > listeners = *static_cast<std::list<std::shared_ptr<Listener> > *>(belle_sip_object_data_get((::belle_sip_object_t *)cbs, MultiListenableObject::sListenerListName));
		for(std::list<std::shared_ptr<Listener> >::iterator it=listeners.begin(); it!=listeners.end(); it++) {
			std::shared_ptr<ChatMessageListener> listener = std::static_pointer_cast<ChatMessageListener,Listener>(*it);
			listener->onEphemeralMessageTimerStarted(Object::cPtrToSharedPtr<ChatMessage>(message));
		}
	}
}
static void linphone_chat_message_cbs_on_ephemeral_message_deleted_cb(LinphoneChatMessage * message) {
	LinphoneChatMessageCbs *cbs = linphone_chat_message_get_current_callbacks(message);
	if (cbs) {
		// Make a copy of the list of listeners, so that it is possible to remove a listener from a listener without corrupting the list.
		std::list<std::shared_ptr<Listener> > listeners = *static_cast<std::list<std::shared_ptr<Listener> > *>(belle_sip_object_data_get((::belle_sip_object_t *)cbs, MultiListenableObject::sListenerListName));
		for(std::list<std::shared_ptr<Listener> >::iterator it=listeners.begin(); it!=listeners.end(); it++) {
			std::shared_ptr<ChatMessageListener> listener = std::static_pointer_cast<ChatMessageListener,Listener>(*it);
			listener->onEphemeralMessageDeleted(Object::cPtrToSharedPtr<ChatMessage>(message));
		}
	}
}

linphone::ChatMessage::ChatMessage(void *ptr, bool takeRef): MultiListenableObject(ptr, takeRef) {
}

void ChatMessage::addListener(const std::shared_ptr<ChatMessageListener> &listener) {
	MultiListenableObject::addListener(std::static_pointer_cast<Listener,ChatMessageListener>(listener));
}

void ChatMessage::removeListener(const std::shared_ptr<ChatMessageListener> &listener) {
	MultiListenableObject::removeListener(std::static_pointer_cast<Listener,ChatMessageListener>(listener));
}

void *ChatMessage::createCallbacks() {
	LinphoneChatMessageCbs *cbs = linphone_factory_create_chat_message_cbs(linphone_factory_get());
	linphone_chat_message_cbs_set_msg_state_changed(cbs, linphone_chat_message_cbs_on_msg_state_changed_cb);
	linphone_chat_message_cbs_set_new_message_reaction(cbs, linphone_chat_message_cbs_on_new_message_reaction_cb);
	linphone_chat_message_cbs_set_reaction_removed(cbs, linphone_chat_message_cbs_on_reaction_removed_cb);
	linphone_chat_message_cbs_set_file_transfer_recv(cbs, linphone_chat_message_cbs_on_file_transfer_recv_cb);
	linphone_chat_message_cbs_set_file_transfer_send_chunk(cbs, linphone_chat_message_cbs_on_file_transfer_send_chunk_cb);
	linphone_chat_message_cbs_set_file_transfer_progress_indication(cbs, linphone_chat_message_cbs_on_file_transfer_progress_indication_cb);
	linphone_chat_message_cbs_set_participant_imdn_state_changed(cbs, linphone_chat_message_cbs_on_participant_imdn_state_changed_cb);
	linphone_chat_message_cbs_set_ephemeral_message_timer_started(cbs, linphone_chat_message_cbs_on_ephemeral_message_timer_started_cb);
	linphone_chat_message_cbs_set_ephemeral_message_deleted(cbs, linphone_chat_message_cbs_on_ephemeral_message_deleted_cb);
	belle_sip_object_data_set((::belle_sip_object_t *)(cbs), MultiListenableObject::sListenerListName, new list<shared_ptr<Listener>>(), (::belle_sip_data_destroy)deleteListenerList);
	belle_sip_object_data_set((::belle_sip_object_t *)(mPrivPtr), MultiListenableObject::sCbsPtrName, cbs, nullptr);
	linphone_chat_message_add_callbacks(static_cast<::LinphoneChatMessage *>(mPrivPtr), cbs);
	belle_sip_object_unref((::belle_sip_object_t *)cbs);
	return cbs;
}


std::string linphone::ChatMessage::getAppdata() const {
	return StringUtilities::cStringToCpp(linphone_chat_message_get_appdata((::LinphoneChatMessage *)mPrivPtr));
}
void linphone::ChatMessage::setAppdata(const std::string & data) {
	linphone_chat_message_set_appdata((::LinphoneChatMessage *)mPrivPtr, StringUtilities::cppStringToC(data));
}
std::string linphone::ChatMessage::getCallId() const {
	return StringUtilities::cStringToCpp(linphone_chat_message_get_call_id((::LinphoneChatMessage *)mPrivPtr));
}
std::shared_ptr<linphone::ChatRoom> linphone::ChatMessage::getChatRoom() const {
	return Object::cPtrToSharedPtr<linphone::ChatRoom>(linphone_chat_message_get_chat_room((::LinphoneChatMessage *)mPrivPtr));
}
std::string linphone::ChatMessage::getContentType() const {
	return StringUtilities::cStringToCpp(linphone_chat_message_get_content_type((::LinphoneChatMessage *)mPrivPtr));
}
void linphone::ChatMessage::setContentType(const std::string & contentType) {
	linphone_chat_message_set_content_type((::LinphoneChatMessage *)mPrivPtr, StringUtilities::cppStringToC(contentType));
}
std::list<std::shared_ptr<linphone::Content>> linphone::ChatMessage::getContents() const {
	return ObjectBctbxListWrapper<linphone::Content>::bctbxListToCppList(linphone_chat_message_get_contents((::LinphoneChatMessage *)mPrivPtr), true);
}
std::shared_ptr<linphone::Core> linphone::ChatMessage::getCore() const {
	return Object::cPtrToSharedPtr<linphone::Core>(linphone_chat_message_get_core((::LinphoneChatMessage *)mPrivPtr));
}
time_t linphone::ChatMessage::getEphemeralExpireTime() const {
	return linphone_chat_message_get_ephemeral_expire_time((::LinphoneChatMessage *)mPrivPtr);
}
long linphone::ChatMessage::getEphemeralLifetime() const {
	return linphone_chat_message_get_ephemeral_lifetime((::LinphoneChatMessage *)mPrivPtr);
}
std::shared_ptr<const linphone::ErrorInfo> linphone::ChatMessage::getErrorInfo() const {
	return Object::cPtrToSharedPtr<const linphone::ErrorInfo>(linphone_chat_message_get_error_info((::LinphoneChatMessage *)mPrivPtr));
}
std::string linphone::ChatMessage::getExternalBodyUrl() const {
	return StringUtilities::cStringToCpp(linphone_chat_message_get_external_body_url((::LinphoneChatMessage *)mPrivPtr));
}
void linphone::ChatMessage::setExternalBodyUrl(const std::string & externalBodyUrl) {
	linphone_chat_message_set_external_body_url((::LinphoneChatMessage *)mPrivPtr, StringUtilities::cppStringToC(externalBodyUrl));
}
std::shared_ptr<linphone::Content> linphone::ChatMessage::getFileTransferInformation() const {
	return Object::cPtrToSharedPtr<linphone::Content>(linphone_chat_message_get_file_transfer_information((::LinphoneChatMessage *)mPrivPtr));
}
std::string linphone::ChatMessage::getForwardInfo() const {
	return StringUtilities::cStringToCpp(linphone_chat_message_get_forward_info((::LinphoneChatMessage *)mPrivPtr));
}
std::shared_ptr<const linphone::Address> linphone::ChatMessage::getFromAddress() const {
	return Object::cPtrToSharedPtr<const linphone::Address>(linphone_chat_message_get_from_address((::LinphoneChatMessage *)mPrivPtr));
}
bool linphone::ChatMessage::isEphemeral() const {
	return (linphone_chat_message_is_ephemeral((::LinphoneChatMessage *)mPrivPtr) != FALSE);
}
bool linphone::ChatMessage::isFileTransfer() const {
	return (linphone_chat_message_is_file_transfer((::LinphoneChatMessage *)mPrivPtr) != FALSE);
}
bool linphone::ChatMessage::isFileTransferInProgress() const {
	return (linphone_chat_message_is_file_transfer_in_progress((::LinphoneChatMessage *)mPrivPtr) != FALSE);
}
bool linphone::ChatMessage::isForward() {
	return (linphone_chat_message_is_forward((::LinphoneChatMessage *)mPrivPtr) != FALSE);
}
bool linphone::ChatMessage::isOutgoing() const {
	return (linphone_chat_message_is_outgoing((::LinphoneChatMessage *)mPrivPtr) != FALSE);
}
bool linphone::ChatMessage::isRead() const {
	return (linphone_chat_message_is_read((::LinphoneChatMessage *)mPrivPtr) != FALSE);
}
bool linphone::ChatMessage::isReply() {
	return (linphone_chat_message_is_reply((::LinphoneChatMessage *)mPrivPtr) != FALSE);
}
bool linphone::ChatMessage::isSecured() const {
	return (linphone_chat_message_is_secured((::LinphoneChatMessage *)mPrivPtr) != FALSE);
}
bool linphone::ChatMessage::isText() const {
	return (linphone_chat_message_is_text((::LinphoneChatMessage *)mPrivPtr) != FALSE);
}
std::shared_ptr<const linphone::Address> linphone::ChatMessage::getLocalAddress() const {
	return Object::cPtrToSharedPtr<const linphone::Address>(linphone_chat_message_get_local_address((::LinphoneChatMessage *)mPrivPtr));
}
std::string linphone::ChatMessage::getMessageId() const {
	return StringUtilities::cStringToCpp(linphone_chat_message_get_message_id((::LinphoneChatMessage *)mPrivPtr));
}
std::shared_ptr<const linphone::ChatMessageReaction> linphone::ChatMessage::getOwnReaction() const {
	return Object::cPtrToSharedPtr<const linphone::ChatMessageReaction>(linphone_chat_message_get_own_reaction((::LinphoneChatMessage *)mPrivPtr));
}
std::list<std::shared_ptr<linphone::ChatMessageReaction>> linphone::ChatMessage::getReactions() const {
	return ObjectBctbxListWrapper<linphone::ChatMessageReaction>::bctbxListToCppList(linphone_chat_message_get_reactions((::LinphoneChatMessage *)mPrivPtr), false);
}
std::shared_ptr<linphone::ChatMessage> linphone::ChatMessage::getReplyMessage() {
	return Object::cPtrToSharedPtr<linphone::ChatMessage>(linphone_chat_message_get_reply_message((::LinphoneChatMessage *)mPrivPtr));
}
std::string linphone::ChatMessage::getReplyMessageId() {
	return StringUtilities::cStringToCpp(linphone_chat_message_get_reply_message_id((::LinphoneChatMessage *)mPrivPtr));
}
std::shared_ptr<const linphone::Address> linphone::ChatMessage::getReplyMessageSenderAddress() {
	return Object::cPtrToSharedPtr<const linphone::Address>(linphone_chat_message_get_reply_message_sender_address((::LinphoneChatMessage *)mPrivPtr));
}
linphone::ChatMessage::State linphone::ChatMessage::getState() const {
	return (State)linphone_chat_message_get_state((::LinphoneChatMessage *)mPrivPtr);
}
std::string linphone::ChatMessage::getTextContent() const {
	return StringUtilities::cStringToCpp(linphone_chat_message_get_text_content((::LinphoneChatMessage *)mPrivPtr));
}
time_t linphone::ChatMessage::getTime() const {
	return linphone_chat_message_get_time((::LinphoneChatMessage *)mPrivPtr);
}
std::shared_ptr<const linphone::Address> linphone::ChatMessage::getToAddress() const {
	return Object::cPtrToSharedPtr<const linphone::Address>(linphone_chat_message_get_to_address((::LinphoneChatMessage *)mPrivPtr));
}
bool linphone::ChatMessage::getToBeStored() const {
	return (linphone_chat_message_get_to_be_stored((::LinphoneChatMessage *)mPrivPtr) != FALSE);
}
void linphone::ChatMessage::setToBeStored(bool toBeStored) {
	linphone_chat_message_set_to_be_stored((::LinphoneChatMessage *)mPrivPtr, toBeStored);
}
std::string linphone::ChatMessage::getUtf8Text() const {
	return StringUtilities::cStringToCpp(linphone_chat_message_get_utf8_text((::LinphoneChatMessage *)mPrivPtr));
}
int linphone::ChatMessage::setUtf8Text(const std::string & text) {
	return linphone_chat_message_set_utf8_text((::LinphoneChatMessage *)mPrivPtr, StringUtilities::cppStringToC(text));
}
void linphone::ChatMessage::addContent(const std::shared_ptr<linphone::Content> & content) {
	linphone_chat_message_add_content((::LinphoneChatMessage *)mPrivPtr, (::LinphoneContent *)Object::sharedPtrToCPtr(std::static_pointer_cast<Object,linphone::Content>(content)));
}
void linphone::ChatMessage::addCustomHeader(const std::string & headerName, const std::string & headerValue) {
	linphone_chat_message_add_custom_header((::LinphoneChatMessage *)mPrivPtr, StringUtilities::cppStringToC(headerName), StringUtilities::cppStringToC(headerValue));
}
void linphone::ChatMessage::addFileContent(const std::shared_ptr<linphone::Content> & content) {
	linphone_chat_message_add_file_content((::LinphoneChatMessage *)mPrivPtr, (::LinphoneContent *)Object::sharedPtrToCPtr(std::static_pointer_cast<Object,linphone::Content>(content)));
}
void linphone::ChatMessage::addTextContent(const std::string & text) {
	linphone_chat_message_add_text_content((::LinphoneChatMessage *)mPrivPtr, StringUtilities::cppStringToC(text));
}
void linphone::ChatMessage::addUtf8TextContent(const std::string & text) {
	linphone_chat_message_add_utf8_text_content((::LinphoneChatMessage *)mPrivPtr, StringUtilities::cppStringToC(text));
}
void linphone::ChatMessage::cancelFileTransfer() {
	linphone_chat_message_cancel_file_transfer((::LinphoneChatMessage *)mPrivPtr);
}
std::shared_ptr<linphone::ChatMessageReaction> linphone::ChatMessage::createReaction(const std::string & utf8Reaction) {
	return Object::cPtrToSharedPtr<linphone::ChatMessageReaction>(linphone_chat_message_create_reaction((::LinphoneChatMessage *)mPrivPtr, StringUtilities::cppStringToC(utf8Reaction)), false);
}
bool linphone::ChatMessage::downloadContent(const std::shared_ptr<linphone::Content> & content) {
	return (linphone_chat_message_download_content((::LinphoneChatMessage *)mPrivPtr, (::LinphoneContent *)Object::sharedPtrToCPtr(std::static_pointer_cast<Object,linphone::Content>(content))) != FALSE);
}
std::string linphone::ChatMessage::getCustomHeader(const std::string & headerName) const {
	return StringUtilities::cStringToCpp(linphone_chat_message_get_custom_header((::LinphoneChatMessage *)mPrivPtr, StringUtilities::cppStringToC(headerName)));
}
std::list<std::shared_ptr<linphone::ParticipantImdnState>> linphone::ChatMessage::getParticipantsByImdnState(linphone::ChatMessage::State state) const {
	return ObjectBctbxListWrapper<linphone::ParticipantImdnState>::bctbxListToCppList(linphone_chat_message_get_participants_by_imdn_state((::LinphoneChatMessage *)mPrivPtr, (::LinphoneChatMessageState)state), false);
}
bool linphone::ChatMessage::hasConferenceInvitationContent() const {
	return (linphone_chat_message_has_conference_invitation_content((::LinphoneChatMessage *)mPrivPtr) != FALSE);
}
bool linphone::ChatMessage::hasTextContent() const {
	return (linphone_chat_message_has_text_content((::LinphoneChatMessage *)mPrivPtr) != FALSE);
}
linphone::Status linphone::ChatMessage::putChar(uint32_t character) {
	return linphone_chat_message_put_char((::LinphoneChatMessage *)mPrivPtr, character);
}
void linphone::ChatMessage::removeContent(const std::shared_ptr<linphone::Content> & content) {
	linphone_chat_message_remove_content((::LinphoneChatMessage *)mPrivPtr, (::LinphoneContent *)Object::sharedPtrToCPtr(std::static_pointer_cast<Object,linphone::Content>(content)));
}
void linphone::ChatMessage::removeCustomHeader(const std::string & headerName) {
	linphone_chat_message_remove_custom_header((::LinphoneChatMessage *)mPrivPtr, StringUtilities::cppStringToC(headerName));
}
void linphone::ChatMessage::send() {
	linphone_chat_message_send((::LinphoneChatMessage *)mPrivPtr);
}




linphone::Participant::Participant(void *ptr, bool takeRef): Object(ptr, takeRef) {
}



std::shared_ptr<const linphone::Address> linphone::Participant::getAddress() const {
	return Object::cPtrToSharedPtr<const linphone::Address>(linphone_participant_get_address((::LinphoneParticipant *)mPrivPtr));
}
time_t linphone::Participant::getCreationTime() const {
	return linphone_participant_get_creation_time((::LinphoneParticipant *)mPrivPtr);
}
std::list<std::shared_ptr<linphone::ParticipantDevice>> linphone::Participant::getDevices() const {
	return ObjectBctbxListWrapper<linphone::ParticipantDevice>::bctbxListToCppList(linphone_participant_get_devices((::LinphoneParticipant *)mPrivPtr), false);
}
bool linphone::Participant::isAdmin() const {
	return (linphone_participant_is_admin((::LinphoneParticipant *)mPrivPtr) != FALSE);
}
bool linphone::Participant::isFocus() const {
	return (linphone_participant_is_focus((::LinphoneParticipant *)mPrivPtr) != FALSE);
}
linphone::Participant::Role linphone::Participant::getRole() const {
	return (Role)linphone_participant_get_role((::LinphoneParticipant *)mPrivPtr);
}
linphone::ChatRoom::SecurityLevel linphone::Participant::getSecurityLevel() const {
	return (linphone::ChatRoom::SecurityLevel)linphone_participant_get_security_level((::LinphoneParticipant *)mPrivPtr);
}
std::shared_ptr<linphone::ParticipantDevice> linphone::Participant::findDevice(const std::shared_ptr<const linphone::Call> & call) const {
	return Object::cPtrToSharedPtr<linphone::ParticipantDevice>(linphone_participant_find_device_2((::LinphoneParticipant *)mPrivPtr, (::LinphoneCall *)Object::sharedPtrToCPtr(std::static_pointer_cast<const Object,const linphone::Call>(call))));
}
std::shared_ptr<linphone::ParticipantDevice> linphone::Participant::findDevice(const std::shared_ptr<const linphone::Address> & address) const {
	return Object::cPtrToSharedPtr<linphone::ParticipantDevice>(linphone_participant_find_device((::LinphoneParticipant *)mPrivPtr, (::LinphoneAddress *)Object::sharedPtrToCPtr(std::static_pointer_cast<const Object,const linphone::Address>(address))));
}




linphone::PayloadType::PayloadType(void *ptr, bool takeRef): Object(ptr, takeRef) {
}



int linphone::PayloadType::getChannels() const {
	return linphone_payload_type_get_channels((::LinphonePayloadType *)mPrivPtr);
}
int linphone::PayloadType::getClockRate() const {
	return linphone_payload_type_get_clock_rate((::LinphonePayloadType *)mPrivPtr);
}
std::string linphone::PayloadType::getDescription() const {
	return StringUtilities::cStringToCpp(linphone_payload_type_get_description((::LinphonePayloadType *)mPrivPtr));
}
std::string linphone::PayloadType::getEncoderDescription() const {
	return StringUtilities::cStringToCpp(linphone_payload_type_get_encoder_description((::LinphonePayloadType *)mPrivPtr));
}
bool linphone::PayloadType::isUsable() const {
	return (linphone_payload_type_is_usable((::LinphonePayloadType *)mPrivPtr) != FALSE);
}
bool linphone::PayloadType::isVbr() const {
	return (linphone_payload_type_is_vbr((::LinphonePayloadType *)mPrivPtr) != FALSE);
}
std::string linphone::PayloadType::getMimeType() const {
	return StringUtilities::cStringToCpp(linphone_payload_type_get_mime_type((::LinphonePayloadType *)mPrivPtr));
}
int linphone::PayloadType::getNormalBitrate() const {
	return linphone_payload_type_get_normal_bitrate((::LinphonePayloadType *)mPrivPtr);
}
void linphone::PayloadType::setNormalBitrate(int bitrate) {
	linphone_payload_type_set_normal_bitrate((::LinphonePayloadType *)mPrivPtr, bitrate);
}
int linphone::PayloadType::getNumber() const {
	return linphone_payload_type_get_number((::LinphonePayloadType *)mPrivPtr);
}
void linphone::PayloadType::setNumber(int number) {
	linphone_payload_type_set_number((::LinphonePayloadType *)mPrivPtr, number);
}
std::string linphone::PayloadType::getRecvFmtp() const {
	return StringUtilities::cStringToCpp(linphone_payload_type_get_recv_fmtp((::LinphonePayloadType *)mPrivPtr));
}
void linphone::PayloadType::setRecvFmtp(const std::string & recvFmtp) {
	linphone_payload_type_set_recv_fmtp((::LinphonePayloadType *)mPrivPtr, StringUtilities::cppStringToC(recvFmtp));
}
std::string linphone::PayloadType::getSendFmtp() const {
	return StringUtilities::cStringToCpp(linphone_payload_type_get_send_fmtp((::LinphonePayloadType *)mPrivPtr));
}
void linphone::PayloadType::setSendFmtp(const std::string & sendFmtp) {
	linphone_payload_type_set_send_fmtp((::LinphonePayloadType *)mPrivPtr, StringUtilities::cppStringToC(sendFmtp));
}
int linphone::PayloadType::getType() const {
	return linphone_payload_type_get_type((::LinphonePayloadType *)mPrivPtr);
}
std::shared_ptr<linphone::PayloadType> linphone::PayloadType::clone() const {
	return Object::cPtrToSharedPtr<linphone::PayloadType>(linphone_payload_type_clone((::LinphonePayloadType *)mPrivPtr), false);
}
int linphone::PayloadType::enable(bool enabled) {
	return linphone_payload_type_enable((::LinphonePayloadType *)mPrivPtr, enabled);
}
bool linphone::PayloadType::enabled() const {
	return (linphone_payload_type_enabled((::LinphonePayloadType *)mPrivPtr) != FALSE);
}
bool linphone::PayloadType::weakEquals(const std::shared_ptr<const linphone::PayloadType> & otherPayloadType) const {
	return (linphone_payload_type_weak_equals((::LinphonePayloadType *)mPrivPtr, (::LinphonePayloadType *)Object::sharedPtrToCPtr(std::static_pointer_cast<const Object,const linphone::PayloadType>(otherPayloadType))) != FALSE);
}




linphone::InfoMessage::InfoMessage(void *ptr, bool takeRef): Object(ptr, takeRef) {
}



std::shared_ptr<const linphone::Content> linphone::InfoMessage::getContent() const {
	return Object::cPtrToSharedPtr<const linphone::Content>(linphone_info_message_get_content((::LinphoneInfoMessage *)mPrivPtr));
}
void linphone::InfoMessage::setContent(const std::shared_ptr<const linphone::Content> & content) {
	linphone_info_message_set_content((::LinphoneInfoMessage *)mPrivPtr, (::LinphoneContent *)Object::sharedPtrToCPtr(std::static_pointer_cast<const Object,const linphone::Content>(content)));
}
void linphone::InfoMessage::addHeader(const std::string & name, const std::string & value) {
	linphone_info_message_add_header((::LinphoneInfoMessage *)mPrivPtr, StringUtilities::cppStringToC(name), StringUtilities::cppStringToC(value));
}
std::string linphone::InfoMessage::getHeader(const std::string & name) const {
	return StringUtilities::cStringToCpp(linphone_info_message_get_header((::LinphoneInfoMessage *)mPrivPtr, StringUtilities::cppStringToC(name)));
}



static void linphone_magic_search_cbs_on_search_results_received_cb(LinphoneMagicSearch * magic_search) {
	LinphoneMagicSearchCbs *cbs = linphone_magic_search_get_current_callbacks(magic_search);
	if (cbs) {
		// Make a copy of the list of listeners, so that it is possible to remove a listener from a listener without corrupting the list.
		std::list<std::shared_ptr<Listener> > listeners = *static_cast<std::list<std::shared_ptr<Listener> > *>(belle_sip_object_data_get((::belle_sip_object_t *)cbs, MultiListenableObject::sListenerListName));
		for(std::list<std::shared_ptr<Listener> >::iterator it=listeners.begin(); it!=listeners.end(); it++) {
			std::shared_ptr<MagicSearchListener> listener = std::static_pointer_cast<MagicSearchListener,Listener>(*it);
			listener->onSearchResultsReceived(Object::cPtrToSharedPtr<MagicSearch>(magic_search));
		}
	}
}
static void linphone_magic_search_cbs_on_ldap_have_more_results_cb(LinphoneMagicSearch * magic_search, LinphoneLdap * ldap) {
	LinphoneMagicSearchCbs *cbs = linphone_magic_search_get_current_callbacks(magic_search);
	if (cbs) {
		// Make a copy of the list of listeners, so that it is possible to remove a listener from a listener without corrupting the list.
		std::list<std::shared_ptr<Listener> > listeners = *static_cast<std::list<std::shared_ptr<Listener> > *>(belle_sip_object_data_get((::belle_sip_object_t *)cbs, MultiListenableObject::sListenerListName));
		for(std::list<std::shared_ptr<Listener> >::iterator it=listeners.begin(); it!=listeners.end(); it++) {
			std::shared_ptr<MagicSearchListener> listener = std::static_pointer_cast<MagicSearchListener,Listener>(*it);
			listener->onLdapHaveMoreResults(Object::cPtrToSharedPtr<MagicSearch>(magic_search), Object::cPtrToSharedPtr<Ldap>(ldap));
		}
	}
}

linphone::MagicSearch::MagicSearch(void *ptr, bool takeRef): MultiListenableObject(ptr, takeRef) {
}

void MagicSearch::addListener(const std::shared_ptr<MagicSearchListener> &listener) {
	MultiListenableObject::addListener(std::static_pointer_cast<Listener,MagicSearchListener>(listener));
}

void MagicSearch::removeListener(const std::shared_ptr<MagicSearchListener> &listener) {
	MultiListenableObject::removeListener(std::static_pointer_cast<Listener,MagicSearchListener>(listener));
}

void *MagicSearch::createCallbacks() {
	LinphoneMagicSearchCbs *cbs = linphone_factory_create_magic_search_cbs(linphone_factory_get());
	linphone_magic_search_cbs_set_search_results_received(cbs, linphone_magic_search_cbs_on_search_results_received_cb);
	linphone_magic_search_cbs_set_ldap_have_more_results(cbs, linphone_magic_search_cbs_on_ldap_have_more_results_cb);
	belle_sip_object_data_set((::belle_sip_object_t *)(cbs), MultiListenableObject::sListenerListName, new list<shared_ptr<Listener>>(), (::belle_sip_data_destroy)deleteListenerList);
	belle_sip_object_data_set((::belle_sip_object_t *)(mPrivPtr), MultiListenableObject::sCbsPtrName, cbs, nullptr);
	linphone_magic_search_add_callbacks(static_cast<::LinphoneMagicSearch *>(mPrivPtr), cbs);
	belle_sip_object_unref((::belle_sip_object_t *)cbs);
	return cbs;
}


std::string linphone::MagicSearch::getDelimiter() const {
	return StringUtilities::cStringToCpp(linphone_magic_search_get_delimiter((::LinphoneMagicSearch *)mPrivPtr));
}
void linphone::MagicSearch::setDelimiter(const std::string & delimiter) {
	linphone_magic_search_set_delimiter((::LinphoneMagicSearch *)mPrivPtr, StringUtilities::cppStringToC(delimiter));
}
std::list<std::shared_ptr<linphone::SearchResult>> linphone::MagicSearch::getLastSearch() const {
	return ObjectBctbxListWrapper<linphone::SearchResult>::bctbxListToCppList(linphone_magic_search_get_last_search((::LinphoneMagicSearch *)mPrivPtr), false);
}
bool linphone::MagicSearch::getLimitedSearch() const {
	return (linphone_magic_search_get_limited_search((::LinphoneMagicSearch *)mPrivPtr) != FALSE);
}
void linphone::MagicSearch::setLimitedSearch(bool limited) {
	linphone_magic_search_set_limited_search((::LinphoneMagicSearch *)mPrivPtr, limited);
}
unsigned int linphone::MagicSearch::getMaxWeight() const {
	return linphone_magic_search_get_max_weight((::LinphoneMagicSearch *)mPrivPtr);
}
void linphone::MagicSearch::setMaxWeight(unsigned int weight) {
	linphone_magic_search_set_max_weight((::LinphoneMagicSearch *)mPrivPtr, weight);
}
unsigned int linphone::MagicSearch::getMinWeight() const {
	return linphone_magic_search_get_min_weight((::LinphoneMagicSearch *)mPrivPtr);
}
void linphone::MagicSearch::setMinWeight(unsigned int weight) {
	linphone_magic_search_set_min_weight((::LinphoneMagicSearch *)mPrivPtr, weight);
}
unsigned int linphone::MagicSearch::getSearchLimit() const {
	return linphone_magic_search_get_search_limit((::LinphoneMagicSearch *)mPrivPtr);
}
void linphone::MagicSearch::setSearchLimit(unsigned int limit) {
	linphone_magic_search_set_search_limit((::LinphoneMagicSearch *)mPrivPtr, limit);
}
bool linphone::MagicSearch::getUseDelimiter() {
	return (linphone_magic_search_get_use_delimiter((::LinphoneMagicSearch *)mPrivPtr) != FALSE);
}
void linphone::MagicSearch::setUseDelimiter(bool enable) {
	linphone_magic_search_set_use_delimiter((::LinphoneMagicSearch *)mPrivPtr, enable);
}
std::list<std::shared_ptr<linphone::SearchResult>> linphone::MagicSearch::getContactListFromFilter(const std::string & filter, const std::string & domain) {
	return ObjectBctbxListWrapper<linphone::SearchResult>::bctbxListToCppList(linphone_magic_search_get_contact_list_from_filter((::LinphoneMagicSearch *)mPrivPtr, StringUtilities::cppStringToC(filter), StringUtilities::cppStringToC(domain)), false);
}
void linphone::MagicSearch::getContactListFromFilterAsync(const std::string & filter, const std::string & domain) {
	linphone_magic_search_get_contact_list_from_filter_async((::LinphoneMagicSearch *)mPrivPtr, StringUtilities::cppStringToC(filter), StringUtilities::cppStringToC(domain));
}
std::list<std::shared_ptr<linphone::SearchResult>> linphone::MagicSearch::getContacts(const std::string & filter, const std::string & domain, int sourceFlags) {
	return ObjectBctbxListWrapper<linphone::SearchResult>::bctbxListToCppList(linphone_magic_search_get_contacts((::LinphoneMagicSearch *)mPrivPtr, StringUtilities::cppStringToC(filter), StringUtilities::cppStringToC(domain), sourceFlags), false);
}
void linphone::MagicSearch::getContactsAsync(const std::string & filter, const std::string & domain, int sourceFlags) {
	linphone_magic_search_get_contacts_async((::LinphoneMagicSearch *)mPrivPtr, StringUtilities::cppStringToC(filter), StringUtilities::cppStringToC(domain), sourceFlags);
}
std::list<std::shared_ptr<linphone::SearchResult>> linphone::MagicSearch::getContactsList(const std::string & filter, const std::string & domain, int sourceFlags, linphone::MagicSearch::Aggregation aggregation) {
	return ObjectBctbxListWrapper<linphone::SearchResult>::bctbxListToCppList(linphone_magic_search_get_contacts_list((::LinphoneMagicSearch *)mPrivPtr, StringUtilities::cppStringToC(filter), StringUtilities::cppStringToC(domain), sourceFlags, (::LinphoneMagicSearchAggregation)aggregation), false);
}
void linphone::MagicSearch::getContactsListAsync(const std::string & filter, const std::string & domain, int sourceFlags, linphone::MagicSearch::Aggregation aggregation) {
	linphone_magic_search_get_contacts_list_async((::LinphoneMagicSearch *)mPrivPtr, StringUtilities::cppStringToC(filter), StringUtilities::cppStringToC(domain), sourceFlags, (::LinphoneMagicSearchAggregation)aggregation);
}
void linphone::MagicSearch::resetSearchCache() {
	linphone_magic_search_reset_search_cache((::LinphoneMagicSearch *)mPrivPtr);
}




linphone::ProxyConfig::ProxyConfig(void *ptr, bool takeRef): Object(ptr, takeRef) {
}



bool linphone::ProxyConfig::avpfEnabled() {
	return (linphone_proxy_config_avpf_enabled((::LinphoneProxyConfig *)mPrivPtr) != FALSE);
}
linphone::AVPFMode linphone::ProxyConfig::getAvpfMode() const {
	return (linphone::AVPFMode)linphone_proxy_config_get_avpf_mode((::LinphoneProxyConfig *)mPrivPtr);
}
void linphone::ProxyConfig::setAvpfMode(linphone::AVPFMode mode) {
	linphone_proxy_config_set_avpf_mode((::LinphoneProxyConfig *)mPrivPtr, (::LinphoneAVPFMode)mode);
}
uint8_t linphone::ProxyConfig::getAvpfRrInterval() const {
	return linphone_proxy_config_get_avpf_rr_interval((::LinphoneProxyConfig *)mPrivPtr);
}
void linphone::ProxyConfig::setAvpfRrInterval(uint8_t interval) {
	linphone_proxy_config_set_avpf_rr_interval((::LinphoneProxyConfig *)mPrivPtr, interval);
}
std::string linphone::ProxyConfig::getConferenceFactoryUri() const {
	return StringUtilities::cStringToCpp(linphone_proxy_config_get_conference_factory_uri((::LinphoneProxyConfig *)mPrivPtr));
}
void linphone::ProxyConfig::setConferenceFactoryUri(const std::string & uri) {
	linphone_proxy_config_set_conference_factory_uri((::LinphoneProxyConfig *)mPrivPtr, StringUtilities::cppStringToC(uri));
}
std::shared_ptr<const linphone::Address> linphone::ProxyConfig::getContact() const {
	return Object::cPtrToSharedPtr<const linphone::Address>(linphone_proxy_config_get_contact((::LinphoneProxyConfig *)mPrivPtr));
}
std::string linphone::ProxyConfig::getContactParameters() const {
	return StringUtilities::cStringToCpp(linphone_proxy_config_get_contact_parameters((::LinphoneProxyConfig *)mPrivPtr));
}
void linphone::ProxyConfig::setContactParameters(const std::string & contactParams) {
	linphone_proxy_config_set_contact_parameters((::LinphoneProxyConfig *)mPrivPtr, StringUtilities::cppStringToC(contactParams));
}
std::string linphone::ProxyConfig::getContactUriParameters() const {
	return StringUtilities::cStringToCpp(linphone_proxy_config_get_contact_uri_parameters((::LinphoneProxyConfig *)mPrivPtr));
}
void linphone::ProxyConfig::setContactUriParameters(const std::string & contactUriParams) {
	linphone_proxy_config_set_contact_uri_parameters((::LinphoneProxyConfig *)mPrivPtr, StringUtilities::cppStringToC(contactUriParams));
}
std::shared_ptr<linphone::Core> linphone::ProxyConfig::getCore() const {
	return Object::cPtrToSharedPtr<linphone::Core>(linphone_proxy_config_get_core((::LinphoneProxyConfig *)mPrivPtr));
}
std::shared_ptr<linphone::ProxyConfig> linphone::ProxyConfig::getDependency() {
	return Object::cPtrToSharedPtr<linphone::ProxyConfig>(linphone_proxy_config_get_dependency((::LinphoneProxyConfig *)mPrivPtr));
}
void linphone::ProxyConfig::setDependency(const std::shared_ptr<linphone::ProxyConfig> & dependsOn) {
	linphone_proxy_config_set_dependency((::LinphoneProxyConfig *)mPrivPtr, (::LinphoneProxyConfig *)Object::sharedPtrToCPtr(std::static_pointer_cast<Object,linphone::ProxyConfig>(dependsOn)));
}
bool linphone::ProxyConfig::getDialEscapePlus() const {
	return (linphone_proxy_config_get_dial_escape_plus((::LinphoneProxyConfig *)mPrivPtr) != FALSE);
}
void linphone::ProxyConfig::setDialEscapePlus(bool enable) {
	linphone_proxy_config_set_dial_escape_plus((::LinphoneProxyConfig *)mPrivPtr, enable);
}
std::string linphone::ProxyConfig::getDialPrefix() const {
	return StringUtilities::cStringToCpp(linphone_proxy_config_get_dial_prefix((::LinphoneProxyConfig *)mPrivPtr));
}
void linphone::ProxyConfig::setDialPrefix(const std::string & prefix) {
	linphone_proxy_config_set_dial_prefix((::LinphoneProxyConfig *)mPrivPtr, StringUtilities::cppStringToC(prefix));
}
std::string linphone::ProxyConfig::getDomain() const {
	return StringUtilities::cStringToCpp(linphone_proxy_config_get_domain((::LinphoneProxyConfig *)mPrivPtr));
}
linphone::Reason linphone::ProxyConfig::getError() const {
	return (linphone::Reason)linphone_proxy_config_get_error((::LinphoneProxyConfig *)mPrivPtr);
}
std::shared_ptr<const linphone::ErrorInfo> linphone::ProxyConfig::getErrorInfo() const {
	return Object::cPtrToSharedPtr<const linphone::ErrorInfo>(linphone_proxy_config_get_error_info((::LinphoneProxyConfig *)mPrivPtr));
}
int linphone::ProxyConfig::getExpires() const {
	return linphone_proxy_config_get_expires((::LinphoneProxyConfig *)mPrivPtr);
}
void linphone::ProxyConfig::setExpires(int expires) {
	linphone_proxy_config_set_expires((::LinphoneProxyConfig *)mPrivPtr, expires);
}
std::shared_ptr<const linphone::Address> linphone::ProxyConfig::getIdentityAddress() const {
	return Object::cPtrToSharedPtr<const linphone::Address>(linphone_proxy_config_get_identity_address((::LinphoneProxyConfig *)mPrivPtr));
}
linphone::Status linphone::ProxyConfig::setIdentityAddress(const std::shared_ptr<linphone::Address> & identity) {
	return linphone_proxy_config_set_identity_address((::LinphoneProxyConfig *)mPrivPtr, (::LinphoneAddress *)Object::sharedPtrToCPtr(std::static_pointer_cast<Object,linphone::Address>(identity)));
}
std::string linphone::ProxyConfig::getIdkey() {
	return StringUtilities::cStringToCpp(linphone_proxy_config_get_idkey((::LinphoneProxyConfig *)mPrivPtr));
}
void linphone::ProxyConfig::setIdkey(const std::string & idkey) {
	linphone_proxy_config_set_idkey((::LinphoneProxyConfig *)mPrivPtr, StringUtilities::cppStringToC(idkey));
}
bool linphone::ProxyConfig::isPushNotificationAllowed() const {
	return (linphone_proxy_config_is_push_notification_allowed((::LinphoneProxyConfig *)mPrivPtr) != FALSE);
}
bool linphone::ProxyConfig::isPushNotificationAvailable() const {
	return (linphone_proxy_config_is_push_notification_available((::LinphoneProxyConfig *)mPrivPtr) != FALSE);
}
bool linphone::ProxyConfig::isRemotePushNotificationAllowed() const {
	return (linphone_proxy_config_is_remote_push_notification_allowed((::LinphoneProxyConfig *)mPrivPtr) != FALSE);
}
std::shared_ptr<linphone::NatPolicy> linphone::ProxyConfig::getNatPolicy() const {
	return Object::cPtrToSharedPtr<linphone::NatPolicy>(linphone_proxy_config_get_nat_policy((::LinphoneProxyConfig *)mPrivPtr));
}
void linphone::ProxyConfig::setNatPolicy(const std::shared_ptr<linphone::NatPolicy> & policy) {
	linphone_proxy_config_set_nat_policy((::LinphoneProxyConfig *)mPrivPtr, (::LinphoneNatPolicy *)Object::sharedPtrToCPtr(std::static_pointer_cast<Object,linphone::NatPolicy>(policy)));
}
unsigned int linphone::ProxyConfig::getPrivacy() const {
	return linphone_proxy_config_get_privacy((::LinphoneProxyConfig *)mPrivPtr);
}
void linphone::ProxyConfig::setPrivacy(unsigned int privacy) {
	linphone_proxy_config_set_privacy((::LinphoneProxyConfig *)mPrivPtr, privacy);
}
bool linphone::ProxyConfig::publishEnabled() const {
	return (linphone_proxy_config_publish_enabled((::LinphoneProxyConfig *)mPrivPtr) != FALSE);
}
void linphone::ProxyConfig::enablePublish(bool enable) {
	linphone_proxy_config_enable_publish((::LinphoneProxyConfig *)mPrivPtr, enable);
}
int linphone::ProxyConfig::getPublishExpires() const {
	return linphone_proxy_config_get_publish_expires((::LinphoneProxyConfig *)mPrivPtr);
}
void linphone::ProxyConfig::setPublishExpires(int expires) {
	linphone_proxy_config_set_publish_expires((::LinphoneProxyConfig *)mPrivPtr, expires);
}
void linphone::ProxyConfig::setPushNotificationAllowed(bool allow) {
	linphone_proxy_config_set_push_notification_allowed((::LinphoneProxyConfig *)mPrivPtr, allow);
}
std::shared_ptr<linphone::PushNotificationConfig> linphone::ProxyConfig::getPushNotificationConfig() const {
	return Object::cPtrToSharedPtr<linphone::PushNotificationConfig>(linphone_proxy_config_get_push_notification_config((::LinphoneProxyConfig *)mPrivPtr));
}
void linphone::ProxyConfig::setPushNotificationConfig(const std::shared_ptr<linphone::PushNotificationConfig> & pushCfg) {
	linphone_proxy_config_set_push_notification_config((::LinphoneProxyConfig *)mPrivPtr, (::LinphonePushNotificationConfig *)Object::sharedPtrToCPtr(std::static_pointer_cast<Object,linphone::PushNotificationConfig>(pushCfg)));
}
std::string linphone::ProxyConfig::getQualityReportingCollector() const {
	return StringUtilities::cStringToCpp(linphone_proxy_config_get_quality_reporting_collector((::LinphoneProxyConfig *)mPrivPtr));
}
void linphone::ProxyConfig::setQualityReportingCollector(const std::string & collector) {
	linphone_proxy_config_set_quality_reporting_collector((::LinphoneProxyConfig *)mPrivPtr, StringUtilities::cppStringToC(collector));
}
bool linphone::ProxyConfig::qualityReportingEnabled() {
	return (linphone_proxy_config_quality_reporting_enabled((::LinphoneProxyConfig *)mPrivPtr) != FALSE);
}
void linphone::ProxyConfig::enableQualityReporting(bool enable) {
	linphone_proxy_config_enable_quality_reporting((::LinphoneProxyConfig *)mPrivPtr, enable);
}
int linphone::ProxyConfig::getQualityReportingInterval() {
	return linphone_proxy_config_get_quality_reporting_interval((::LinphoneProxyConfig *)mPrivPtr);
}
void linphone::ProxyConfig::setQualityReportingInterval(int interval) {
	linphone_proxy_config_set_quality_reporting_interval((::LinphoneProxyConfig *)mPrivPtr, interval);
}
std::string linphone::ProxyConfig::getRealm() const {
	return StringUtilities::cStringToCpp(linphone_proxy_config_get_realm((::LinphoneProxyConfig *)mPrivPtr));
}
void linphone::ProxyConfig::setRealm(const std::string & realm) {
	linphone_proxy_config_set_realm((::LinphoneProxyConfig *)mPrivPtr, StringUtilities::cppStringToC(realm));
}
std::string linphone::ProxyConfig::getRefKey() const {
	return StringUtilities::cStringToCpp(linphone_proxy_config_get_ref_key((::LinphoneProxyConfig *)mPrivPtr));
}
void linphone::ProxyConfig::setRefKey(const std::string & refkey) {
	linphone_proxy_config_set_ref_key((::LinphoneProxyConfig *)mPrivPtr, StringUtilities::cppStringToC(refkey));
}
bool linphone::ProxyConfig::registerEnabled() const {
	return (linphone_proxy_config_register_enabled((::LinphoneProxyConfig *)mPrivPtr) != FALSE);
}
void linphone::ProxyConfig::enableRegister(bool enable) {
	linphone_proxy_config_enable_register((::LinphoneProxyConfig *)mPrivPtr, enable);
}
void linphone::ProxyConfig::setRemotePushNotificationAllowed(bool allow) {
	linphone_proxy_config_set_remote_push_notification_allowed((::LinphoneProxyConfig *)mPrivPtr, allow);
}
linphone::Status linphone::ProxyConfig::setRoute(const std::string & route) {
	return linphone_proxy_config_set_route((::LinphoneProxyConfig *)mPrivPtr, StringUtilities::cppStringToC(route));
}
std::list<std::string> linphone::ProxyConfig::getRoutes() const {
	return StringBctbxListWrapper::bctbxListToCppList(linphone_proxy_config_get_routes((::LinphoneProxyConfig *)mPrivPtr));
}
linphone::Status linphone::ProxyConfig::setRoutes(const std::list<std::string> & routes) {
	return linphone_proxy_config_set_routes((::LinphoneProxyConfig *)mPrivPtr, StringBctbxListWrapper(routes).c_list());
}
std::string linphone::ProxyConfig::getServerAddr() const {
	return StringUtilities::cStringToCpp(linphone_proxy_config_get_server_addr((::LinphoneProxyConfig *)mPrivPtr));
}
linphone::Status linphone::ProxyConfig::setServerAddr(const std::string & serverAddress) {
	return linphone_proxy_config_set_server_addr((::LinphoneProxyConfig *)mPrivPtr, StringUtilities::cppStringToC(serverAddress));
}
linphone::RegistrationState linphone::ProxyConfig::getState() const {
	return (linphone::RegistrationState)linphone_proxy_config_get_state((::LinphoneProxyConfig *)mPrivPtr);
}
std::string linphone::ProxyConfig::getTransport() const {
	return StringUtilities::cStringToCpp(linphone_proxy_config_get_transport((::LinphoneProxyConfig *)mPrivPtr));
}
int linphone::ProxyConfig::getUnreadChatMessageCount() const {
	return linphone_proxy_config_get_unread_chat_message_count((::LinphoneProxyConfig *)mPrivPtr);
}
linphone::Status linphone::ProxyConfig::done() {
	return linphone_proxy_config_done((::LinphoneProxyConfig *)mPrivPtr);
}
void linphone::ProxyConfig::edit() {
	linphone_proxy_config_edit((::LinphoneProxyConfig *)mPrivPtr);
}
std::shared_ptr<const linphone::AuthInfo> linphone::ProxyConfig::findAuthInfo() const {
	return Object::cPtrToSharedPtr<const linphone::AuthInfo>(linphone_proxy_config_find_auth_info((::LinphoneProxyConfig *)mPrivPtr));
}
std::string linphone::ProxyConfig::getCustomHeader(const std::string & headerName) {
	return StringUtilities::cStringToCpp(linphone_proxy_config_get_custom_header((::LinphoneProxyConfig *)mPrivPtr, StringUtilities::cppStringToC(headerName)));
}
std::string linphone::ProxyConfig::normalizePhoneNumber(const std::string & username) {
	return StringUtilities::cStringToCpp(linphone_proxy_config_normalize_phone_number((::LinphoneProxyConfig *)mPrivPtr, StringUtilities::cppStringToC(username)));
}
std::shared_ptr<linphone::Address> linphone::ProxyConfig::normalizeSipUri(const std::string & username) {
	return Object::cPtrToSharedPtr<linphone::Address>(linphone_proxy_config_normalize_sip_uri((::LinphoneProxyConfig *)mPrivPtr, StringUtilities::cppStringToC(username)), false);
}
void linphone::ProxyConfig::pauseRegister() {
	linphone_proxy_config_pause_register((::LinphoneProxyConfig *)mPrivPtr);
}
void linphone::ProxyConfig::refreshRegister() {
	linphone_proxy_config_refresh_register((::LinphoneProxyConfig *)mPrivPtr);
}
void linphone::ProxyConfig::setCustomHeader(const std::string & headerName, const std::string & headerValue) {
	linphone_proxy_config_set_custom_header((::LinphoneProxyConfig *)mPrivPtr, StringUtilities::cppStringToC(headerName), StringUtilities::cppStringToC(headerValue));
}



static void linphone_friend_list_cbs_on_contact_created_cb(LinphoneFriendList * friend_list, LinphoneFriend * linphone_friend) {
	LinphoneFriendListCbs *cbs = linphone_friend_list_get_current_callbacks(friend_list);
	if (cbs) {
		// Make a copy of the list of listeners, so that it is possible to remove a listener from a listener without corrupting the list.
		std::list<std::shared_ptr<Listener> > listeners = *static_cast<std::list<std::shared_ptr<Listener> > *>(belle_sip_object_data_get((::belle_sip_object_t *)cbs, MultiListenableObject::sListenerListName));
		for(std::list<std::shared_ptr<Listener> >::iterator it=listeners.begin(); it!=listeners.end(); it++) {
			std::shared_ptr<FriendListListener> listener = std::static_pointer_cast<FriendListListener,Listener>(*it);
			listener->onContactCreated(Object::cPtrToSharedPtr<FriendList>(friend_list), Object::cPtrToSharedPtr<Friend>(linphone_friend));
		}
	}
}
static void linphone_friend_list_cbs_on_contact_deleted_cb(LinphoneFriendList * friend_list, LinphoneFriend * linphone_friend) {
	LinphoneFriendListCbs *cbs = linphone_friend_list_get_current_callbacks(friend_list);
	if (cbs) {
		// Make a copy of the list of listeners, so that it is possible to remove a listener from a listener without corrupting the list.
		std::list<std::shared_ptr<Listener> > listeners = *static_cast<std::list<std::shared_ptr<Listener> > *>(belle_sip_object_data_get((::belle_sip_object_t *)cbs, MultiListenableObject::sListenerListName));
		for(std::list<std::shared_ptr<Listener> >::iterator it=listeners.begin(); it!=listeners.end(); it++) {
			std::shared_ptr<FriendListListener> listener = std::static_pointer_cast<FriendListListener,Listener>(*it);
			listener->onContactDeleted(Object::cPtrToSharedPtr<FriendList>(friend_list), Object::cPtrToSharedPtr<Friend>(linphone_friend));
		}
	}
}
static void linphone_friend_list_cbs_on_contact_updated_cb(LinphoneFriendList * friend_list, LinphoneFriend * new_friend, LinphoneFriend * old_friend) {
	LinphoneFriendListCbs *cbs = linphone_friend_list_get_current_callbacks(friend_list);
	if (cbs) {
		// Make a copy of the list of listeners, so that it is possible to remove a listener from a listener without corrupting the list.
		std::list<std::shared_ptr<Listener> > listeners = *static_cast<std::list<std::shared_ptr<Listener> > *>(belle_sip_object_data_get((::belle_sip_object_t *)cbs, MultiListenableObject::sListenerListName));
		for(std::list<std::shared_ptr<Listener> >::iterator it=listeners.begin(); it!=listeners.end(); it++) {
			std::shared_ptr<FriendListListener> listener = std::static_pointer_cast<FriendListListener,Listener>(*it);
			listener->onContactUpdated(Object::cPtrToSharedPtr<FriendList>(friend_list), Object::cPtrToSharedPtr<Friend>(new_friend), Object::cPtrToSharedPtr<Friend>(old_friend));
		}
	}
}
static void linphone_friend_list_cbs_on_sync_status_changed_cb(LinphoneFriendList * friend_list, LinphoneFriendListSyncStatus status, const char * message) {
	LinphoneFriendListCbs *cbs = linphone_friend_list_get_current_callbacks(friend_list);
	if (cbs) {
		// Make a copy of the list of listeners, so that it is possible to remove a listener from a listener without corrupting the list.
		std::list<std::shared_ptr<Listener> > listeners = *static_cast<std::list<std::shared_ptr<Listener> > *>(belle_sip_object_data_get((::belle_sip_object_t *)cbs, MultiListenableObject::sListenerListName));
		for(std::list<std::shared_ptr<Listener> >::iterator it=listeners.begin(); it!=listeners.end(); it++) {
			std::shared_ptr<FriendListListener> listener = std::static_pointer_cast<FriendListListener,Listener>(*it);
			listener->onSyncStatusChanged(Object::cPtrToSharedPtr<FriendList>(friend_list), (FriendList::SyncStatus)status, StringUtilities::cStringToCpp(message));
		}
	}
}
static void linphone_friend_list_cbs_on_presence_received_cb(LinphoneFriendList * friend_list, const bctbx_list_t * friends) {
	LinphoneFriendListCbs *cbs = linphone_friend_list_get_current_callbacks(friend_list);
	if (cbs) {
		// Make a copy of the list of listeners, so that it is possible to remove a listener from a listener without corrupting the list.
		std::list<std::shared_ptr<Listener> > listeners = *static_cast<std::list<std::shared_ptr<Listener> > *>(belle_sip_object_data_get((::belle_sip_object_t *)cbs, MultiListenableObject::sListenerListName));
		for(std::list<std::shared_ptr<Listener> >::iterator it=listeners.begin(); it!=listeners.end(); it++) {
			std::shared_ptr<FriendListListener> listener = std::static_pointer_cast<FriendListListener,Listener>(*it);
			listener->onPresenceReceived(Object::cPtrToSharedPtr<FriendList>(friend_list), ObjectBctbxListWrapper<Friend>::bctbxListToCppList(friends, true));
		}
	}
}

linphone::FriendList::FriendList(void *ptr, bool takeRef): MultiListenableObject(ptr, takeRef) {
}

void FriendList::addListener(const std::shared_ptr<FriendListListener> &listener) {
	MultiListenableObject::addListener(std::static_pointer_cast<Listener,FriendListListener>(listener));
}

void FriendList::removeListener(const std::shared_ptr<FriendListListener> &listener) {
	MultiListenableObject::removeListener(std::static_pointer_cast<Listener,FriendListListener>(listener));
}

void *FriendList::createCallbacks() {
	LinphoneFriendListCbs *cbs = linphone_factory_create_friend_list_cbs(linphone_factory_get());
	linphone_friend_list_cbs_set_contact_created(cbs, linphone_friend_list_cbs_on_contact_created_cb);
	linphone_friend_list_cbs_set_contact_deleted(cbs, linphone_friend_list_cbs_on_contact_deleted_cb);
	linphone_friend_list_cbs_set_contact_updated(cbs, linphone_friend_list_cbs_on_contact_updated_cb);
	linphone_friend_list_cbs_set_sync_status_changed(cbs, linphone_friend_list_cbs_on_sync_status_changed_cb);
	linphone_friend_list_cbs_set_presence_received(cbs, linphone_friend_list_cbs_on_presence_received_cb);
	belle_sip_object_data_set((::belle_sip_object_t *)(cbs), MultiListenableObject::sListenerListName, new list<shared_ptr<Listener>>(), (::belle_sip_data_destroy)deleteListenerList);
	belle_sip_object_data_set((::belle_sip_object_t *)(mPrivPtr), MultiListenableObject::sCbsPtrName, cbs, nullptr);
	linphone_friend_list_add_callbacks(static_cast<::LinphoneFriendList *>(mPrivPtr), cbs);
	belle_sip_object_unref((::belle_sip_object_t *)cbs);
	return cbs;
}


std::shared_ptr<linphone::Core> linphone::FriendList::getCore() const {
	return Object::cPtrToSharedPtr<linphone::Core>(linphone_friend_list_get_core((::LinphoneFriendList *)mPrivPtr));
}
bool linphone::FriendList::databaseStorageEnabled() const {
	return (linphone_friend_list_database_storage_enabled((::LinphoneFriendList *)mPrivPtr) != FALSE);
}
void linphone::FriendList::enableDatabaseStorage(bool enable) {
	linphone_friend_list_enable_database_storage((::LinphoneFriendList *)mPrivPtr, enable);
}
std::string linphone::FriendList::getDisplayName() const {
	return StringUtilities::cStringToCpp(linphone_friend_list_get_display_name((::LinphoneFriendList *)mPrivPtr));
}
void linphone::FriendList::setDisplayName(const std::string & displayName) {
	linphone_friend_list_set_display_name((::LinphoneFriendList *)mPrivPtr, StringUtilities::cppStringToC(displayName));
}
std::list<std::shared_ptr<linphone::Friend>> linphone::FriendList::getFriends() const {
	return ObjectBctbxListWrapper<linphone::Friend>::bctbxListToCppList(linphone_friend_list_get_friends((::LinphoneFriendList *)mPrivPtr), true);
}
bool linphone::FriendList::isSubscriptionBodyless() const {
	return (linphone_friend_list_is_subscription_bodyless((::LinphoneFriendList *)mPrivPtr) != FALSE);
}
std::shared_ptr<linphone::Address> linphone::FriendList::getRlsAddress() const {
	return Object::cPtrToSharedPtr<linphone::Address>(linphone_friend_list_get_rls_address((::LinphoneFriendList *)mPrivPtr));
}
void linphone::FriendList::setRlsAddress(const std::shared_ptr<const linphone::Address> & rlsAddr) {
	linphone_friend_list_set_rls_address((::LinphoneFriendList *)mPrivPtr, (::LinphoneAddress *)Object::sharedPtrToCPtr(std::static_pointer_cast<const Object,const linphone::Address>(rlsAddr)));
}
std::string linphone::FriendList::getRlsUri() const {
	return StringUtilities::cStringToCpp(linphone_friend_list_get_rls_uri((::LinphoneFriendList *)mPrivPtr));
}
void linphone::FriendList::setRlsUri(const std::string & rlsUri) {
	linphone_friend_list_set_rls_uri((::LinphoneFriendList *)mPrivPtr, StringUtilities::cppStringToC(rlsUri));
}
void linphone::FriendList::setSubscriptionBodyless(bool bodyless) {
	linphone_friend_list_set_subscription_bodyless((::LinphoneFriendList *)mPrivPtr, bodyless);
}
bool linphone::FriendList::subscriptionsEnabled() {
	return (linphone_friend_list_subscriptions_enabled((::LinphoneFriendList *)mPrivPtr) != FALSE);
}
void linphone::FriendList::enableSubscriptions(bool enabled) {
	linphone_friend_list_enable_subscriptions((::LinphoneFriendList *)mPrivPtr, enabled);
}
linphone::FriendList::Type linphone::FriendList::getType() {
	return (Type)linphone_friend_list_get_type((::LinphoneFriendList *)mPrivPtr);
}
void linphone::FriendList::setType(linphone::FriendList::Type type) {
	linphone_friend_list_set_type((::LinphoneFriendList *)mPrivPtr, (::LinphoneFriendListType)type);
}
std::string linphone::FriendList::getUri() const {
	return StringUtilities::cStringToCpp(linphone_friend_list_get_uri((::LinphoneFriendList *)mPrivPtr));
}
void linphone::FriendList::setUri(const std::string & uri) {
	linphone_friend_list_set_uri((::LinphoneFriendList *)mPrivPtr, StringUtilities::cppStringToC(uri));
}
linphone::FriendList::Status linphone::FriendList::addFriend(const std::shared_ptr<linphone::Friend> & linphoneFriend) {
	return (Status)linphone_friend_list_add_friend((::LinphoneFriendList *)mPrivPtr, (::LinphoneFriend *)Object::sharedPtrToCPtr(std::static_pointer_cast<Object,linphone::Friend>(linphoneFriend)));
}
linphone::FriendList::Status linphone::FriendList::addLocalFriend(const std::shared_ptr<linphone::Friend> & linphoneFriend) {
	return (Status)linphone_friend_list_add_local_friend((::LinphoneFriendList *)mPrivPtr, (::LinphoneFriend *)Object::sharedPtrToCPtr(std::static_pointer_cast<Object,linphone::Friend>(linphoneFriend)));
}
void linphone::FriendList::exportFriendsAsVcard4File(const std::string & vcardFile) {
	linphone_friend_list_export_friends_as_vcard4_file((::LinphoneFriendList *)mPrivPtr, StringUtilities::cppStringToC(vcardFile));
}
std::shared_ptr<linphone::Friend> linphone::FriendList::findFriendByAddress(const std::shared_ptr<const linphone::Address> & address) const {
	return Object::cPtrToSharedPtr<linphone::Friend>(linphone_friend_list_find_friend_by_address((::LinphoneFriendList *)mPrivPtr, (::LinphoneAddress *)Object::sharedPtrToCPtr(std::static_pointer_cast<const Object,const linphone::Address>(address))));
}
std::shared_ptr<linphone::Friend> linphone::FriendList::findFriendByPhoneNumber(const std::string & phoneNumber) const {
	return Object::cPtrToSharedPtr<linphone::Friend>(linphone_friend_list_find_friend_by_phone_number((::LinphoneFriendList *)mPrivPtr, StringUtilities::cppStringToC(phoneNumber)));
}
std::shared_ptr<linphone::Friend> linphone::FriendList::findFriendByRefKey(const std::string & refKey) const {
	return Object::cPtrToSharedPtr<linphone::Friend>(linphone_friend_list_find_friend_by_ref_key((::LinphoneFriendList *)mPrivPtr, StringUtilities::cppStringToC(refKey)));
}
std::shared_ptr<linphone::Friend> linphone::FriendList::findFriendByUri(const std::string & uri) const {
	return Object::cPtrToSharedPtr<linphone::Friend>(linphone_friend_list_find_friend_by_uri((::LinphoneFriendList *)mPrivPtr, StringUtilities::cppStringToC(uri)));
}
std::list<std::shared_ptr<linphone::Friend>> linphone::FriendList::findFriendsByAddress(const std::shared_ptr<const linphone::Address> & address) const {
	return ObjectBctbxListWrapper<linphone::Friend>::bctbxListToCppList(linphone_friend_list_find_friends_by_address((::LinphoneFriendList *)mPrivPtr, (::LinphoneAddress *)Object::sharedPtrToCPtr(std::static_pointer_cast<const Object,const linphone::Address>(address))), true);
}
std::list<std::shared_ptr<linphone::Friend>> linphone::FriendList::findFriendsByUri(const std::string & uri) const {
	return ObjectBctbxListWrapper<linphone::Friend>::bctbxListToCppList(linphone_friend_list_find_friends_by_uri((::LinphoneFriendList *)mPrivPtr, StringUtilities::cppStringToC(uri)), true);
}
int linphone::FriendList::importFriendsFromVcard4Buffer(const std::string & vcardBuffer) {
	return linphone_friend_list_import_friends_from_vcard4_buffer((::LinphoneFriendList *)mPrivPtr, StringUtilities::cppStringToC(vcardBuffer));
}
int linphone::FriendList::importFriendsFromVcard4File(const std::string & vcardFile) {
	return linphone_friend_list_import_friends_from_vcard4_file((::LinphoneFriendList *)mPrivPtr, StringUtilities::cppStringToC(vcardFile));
}
void linphone::FriendList::notifyPresence(const std::shared_ptr<linphone::PresenceModel> & presence) {
	linphone_friend_list_notify_presence((::LinphoneFriendList *)mPrivPtr, (::LinphonePresenceModel *)Object::sharedPtrToCPtr(std::static_pointer_cast<Object,linphone::PresenceModel>(presence)));
}
linphone::FriendList::Status linphone::FriendList::removeFriend(const std::shared_ptr<linphone::Friend> & linphoneFriend) {
	return (Status)linphone_friend_list_remove_friend((::LinphoneFriendList *)mPrivPtr, (::LinphoneFriend *)Object::sharedPtrToCPtr(std::static_pointer_cast<Object,linphone::Friend>(linphoneFriend)));
}
void linphone::FriendList::synchronizeFriendsFromServer() {
	linphone_friend_list_synchronize_friends_from_server((::LinphoneFriendList *)mPrivPtr);
}
void linphone::FriendList::updateDirtyFriends() {
	linphone_friend_list_update_dirty_friends((::LinphoneFriendList *)mPrivPtr);
}
void linphone::FriendList::updateRevision(int revision) {
	linphone_friend_list_update_revision((::LinphoneFriendList *)mPrivPtr, revision);
}
void linphone::FriendList::updateSubscriptions() {
	linphone_friend_list_update_subscriptions((::LinphoneFriendList *)mPrivPtr);
}




linphone::CallParams::CallParams(void *ptr, bool takeRef): Object(ptr, takeRef) {
}



std::shared_ptr<linphone::Account> linphone::CallParams::getAccount() const {
	return Object::cPtrToSharedPtr<linphone::Account>(linphone_call_params_get_account((::LinphoneCallParams *)mPrivPtr));
}
void linphone::CallParams::setAccount(const std::shared_ptr<linphone::Account> & account) {
	linphone_call_params_set_account((::LinphoneCallParams *)mPrivPtr, (::LinphoneAccount *)Object::sharedPtrToCPtr(std::static_pointer_cast<Object,linphone::Account>(account)));
}
void linphone::CallParams::setAudioBandwidthLimit(int bandwidth) {
	linphone_call_params_set_audio_bandwidth_limit((::LinphoneCallParams *)mPrivPtr, bandwidth);
}
linphone::MediaDirection linphone::CallParams::getAudioDirection() const {
	return (linphone::MediaDirection)linphone_call_params_get_audio_direction((::LinphoneCallParams *)mPrivPtr);
}
void linphone::CallParams::setAudioDirection(linphone::MediaDirection direction) {
	linphone_call_params_set_audio_direction((::LinphoneCallParams *)mPrivPtr, (::LinphoneMediaDirection)direction);
}
bool linphone::CallParams::audioEnabled() const {
	return (linphone_call_params_audio_enabled((::LinphoneCallParams *)mPrivPtr) != FALSE);
}
void linphone::CallParams::enableAudio(bool enabled) {
	linphone_call_params_enable_audio((::LinphoneCallParams *)mPrivPtr, enabled);
}
bool linphone::CallParams::audioMulticastEnabled() const {
	return (linphone_call_params_audio_multicast_enabled((::LinphoneCallParams *)mPrivPtr) != FALSE);
}
void linphone::CallParams::enableAudioMulticast(bool yesno) {
	linphone_call_params_enable_audio_multicast((::LinphoneCallParams *)mPrivPtr, yesno);
}
bool linphone::CallParams::avpfEnabled() const {
	return (linphone_call_params_avpf_enabled((::LinphoneCallParams *)mPrivPtr) != FALSE);
}
void linphone::CallParams::enableAvpf(bool enable) {
	linphone_call_params_enable_avpf((::LinphoneCallParams *)mPrivPtr, enable);
}
bool linphone::CallParams::capabilityNegotiationReinviteEnabled() const {
	return (linphone_call_params_capability_negotiation_reinvite_enabled((::LinphoneCallParams *)mPrivPtr) != FALSE);
}
void linphone::CallParams::enableCapabilityNegotiationReinvite(bool enable) {
	linphone_call_params_enable_capability_negotiation_reinvite((::LinphoneCallParams *)mPrivPtr, enable);
}
bool linphone::CallParams::capabilityNegotiationsEnabled() const {
	return (linphone_call_params_capability_negotiations_enabled((::LinphoneCallParams *)mPrivPtr) != FALSE);
}
void linphone::CallParams::enableCapabilityNegotiations(bool enabled) {
	linphone_call_params_enable_capability_negotiations((::LinphoneCallParams *)mPrivPtr, enabled);
}
void linphone::CallParams::enableCfgLinesMerging(bool enabled) {
	linphone_call_params_enable_cfg_lines_merging((::LinphoneCallParams *)mPrivPtr, enabled);
}
linphone::Conference::Layout linphone::CallParams::getConferenceVideoLayout() const {
	return (linphone::Conference::Layout)linphone_call_params_get_conference_video_layout((::LinphoneCallParams *)mPrivPtr);
}
void linphone::CallParams::setConferenceVideoLayout(linphone::Conference::Layout layout) {
	linphone_call_params_set_conference_video_layout((::LinphoneCallParams *)mPrivPtr, (::LinphoneConferenceLayout)layout);
}
std::list<std::shared_ptr<linphone::Content>> linphone::CallParams::getCustomContents() const {
	return ObjectBctbxListWrapper<linphone::Content>::bctbxListToCppList(linphone_call_params_get_custom_contents((::LinphoneCallParams *)mPrivPtr), false);
}
bool linphone::CallParams::earlyMediaSendingEnabled() const {
	return (linphone_call_params_early_media_sending_enabled((::LinphoneCallParams *)mPrivPtr) != FALSE);
}
void linphone::CallParams::enableEarlyMediaSending(bool enabled) {
	linphone_call_params_enable_early_media_sending((::LinphoneCallParams *)mPrivPtr, enabled);
}
std::string linphone::CallParams::getFromHeader() const {
	return StringUtilities::cStringToCpp(linphone_call_params_get_from_header((::LinphoneCallParams *)mPrivPtr));
}
void linphone::CallParams::setFromHeader(const std::string & fromValue) {
	linphone_call_params_set_from_header((::LinphoneCallParams *)mPrivPtr, StringUtilities::cppStringToC(fromValue));
}
std::shared_ptr<const linphone::AudioDevice> linphone::CallParams::getInputAudioDevice() const {
	return Object::cPtrToSharedPtr<const linphone::AudioDevice>(linphone_call_params_get_input_audio_device((::LinphoneCallParams *)mPrivPtr));
}
void linphone::CallParams::setInputAudioDevice(const std::shared_ptr<linphone::AudioDevice> & audioDevice) {
	linphone_call_params_set_input_audio_device((::LinphoneCallParams *)mPrivPtr, (::LinphoneAudioDevice *)Object::sharedPtrToCPtr(std::static_pointer_cast<Object,linphone::AudioDevice>(audioDevice)));
}
bool linphone::CallParams::isCapabilityNegotiationReinviteEnabled() const {
	return (linphone_call_params_is_capability_negotiation_reinvite_enabled((::LinphoneCallParams *)mPrivPtr) != FALSE);
}
bool linphone::CallParams::isRecording() const {
	return (linphone_call_params_is_recording((::LinphoneCallParams *)mPrivPtr) != FALSE);
}
bool linphone::CallParams::getLocalConferenceMode() const {
	return (linphone_call_params_get_local_conference_mode((::LinphoneCallParams *)mPrivPtr) != FALSE);
}
bool linphone::CallParams::lowBandwidthEnabled() const {
	return (linphone_call_params_low_bandwidth_enabled((::LinphoneCallParams *)mPrivPtr) != FALSE);
}
void linphone::CallParams::enableLowBandwidth(bool enabled) {
	linphone_call_params_enable_low_bandwidth((::LinphoneCallParams *)mPrivPtr, enabled);
}
linphone::MediaEncryption linphone::CallParams::getMediaEncryption() const {
	return (linphone::MediaEncryption)linphone_call_params_get_media_encryption((::LinphoneCallParams *)mPrivPtr);
}
void linphone::CallParams::setMediaEncryption(linphone::MediaEncryption encryption) {
	linphone_call_params_set_media_encryption((::LinphoneCallParams *)mPrivPtr, (::LinphoneMediaEncryption)encryption);
}
bool linphone::CallParams::micEnabled() const {
	return (linphone_call_params_mic_enabled((::LinphoneCallParams *)mPrivPtr) != FALSE);
}
void linphone::CallParams::enableMic(bool enable) {
	linphone_call_params_enable_mic((::LinphoneCallParams *)mPrivPtr, enable);
}
std::shared_ptr<const linphone::AudioDevice> linphone::CallParams::getOutputAudioDevice() const {
	return Object::cPtrToSharedPtr<const linphone::AudioDevice>(linphone_call_params_get_output_audio_device((::LinphoneCallParams *)mPrivPtr));
}
void linphone::CallParams::setOutputAudioDevice(const std::shared_ptr<linphone::AudioDevice> & audioDevice) {
	linphone_call_params_set_output_audio_device((::LinphoneCallParams *)mPrivPtr, (::LinphoneAudioDevice *)Object::sharedPtrToCPtr(std::static_pointer_cast<Object,linphone::AudioDevice>(audioDevice)));
}
unsigned int linphone::CallParams::getPrivacy() const {
	return linphone_call_params_get_privacy((::LinphoneCallParams *)mPrivPtr);
}
void linphone::CallParams::setPrivacy(unsigned int privacy) {
	linphone_call_params_set_privacy((::LinphoneCallParams *)mPrivPtr, privacy);
}
std::shared_ptr<linphone::ProxyConfig> linphone::CallParams::getProxyConfig() const {
	return Object::cPtrToSharedPtr<linphone::ProxyConfig>(linphone_call_params_get_proxy_config((::LinphoneCallParams *)mPrivPtr));
}
void linphone::CallParams::setProxyConfig(const std::shared_ptr<linphone::ProxyConfig> & proxyConfig) {
	linphone_call_params_set_proxy_config((::LinphoneCallParams *)mPrivPtr, (::LinphoneProxyConfig *)Object::sharedPtrToCPtr(std::static_pointer_cast<Object,linphone::ProxyConfig>(proxyConfig)));
}
bool linphone::CallParams::realtimeTextEnabled() const {
	return (linphone_call_params_realtime_text_enabled((::LinphoneCallParams *)mPrivPtr) != FALSE);
}
linphone::Status linphone::CallParams::enableRealtimeText(bool yesno) {
	return linphone_call_params_enable_realtime_text((::LinphoneCallParams *)mPrivPtr, yesno);
}
unsigned int linphone::CallParams::getRealtimeTextKeepaliveInterval() const {
	return linphone_call_params_get_realtime_text_keepalive_interval((::LinphoneCallParams *)mPrivPtr);
}
void linphone::CallParams::setRealtimeTextKeepaliveInterval(unsigned int interval) {
	linphone_call_params_set_realtime_text_keepalive_interval((::LinphoneCallParams *)mPrivPtr, interval);
}
float linphone::CallParams::getReceivedFramerate() const {
	return linphone_call_params_get_received_framerate((::LinphoneCallParams *)mPrivPtr);
}
std::shared_ptr<const linphone::VideoDefinition> linphone::CallParams::getReceivedVideoDefinition() const {
	return Object::cPtrToSharedPtr<const linphone::VideoDefinition>(linphone_call_params_get_received_video_definition((::LinphoneCallParams *)mPrivPtr));
}
std::string linphone::CallParams::getRecordFile() const {
	return StringUtilities::cStringToCpp(linphone_call_params_get_record_file((::LinphoneCallParams *)mPrivPtr));
}
void linphone::CallParams::setRecordFile(const std::string & path) {
	linphone_call_params_set_record_file((::LinphoneCallParams *)mPrivPtr, StringUtilities::cppStringToC(path));
}
bool linphone::CallParams::rtpBundleEnabled() const {
	return (linphone_call_params_rtp_bundle_enabled((::LinphoneCallParams *)mPrivPtr) != FALSE);
}
void linphone::CallParams::enableRtpBundle(bool value) {
	linphone_call_params_enable_rtp_bundle((::LinphoneCallParams *)mPrivPtr, value);
}
std::string linphone::CallParams::getRtpProfile() const {
	return StringUtilities::cStringToCpp(linphone_call_params_get_rtp_profile((::LinphoneCallParams *)mPrivPtr));
}
float linphone::CallParams::getSentFramerate() const {
	return linphone_call_params_get_sent_framerate((::LinphoneCallParams *)mPrivPtr);
}
std::shared_ptr<const linphone::VideoDefinition> linphone::CallParams::getSentVideoDefinition() const {
	return Object::cPtrToSharedPtr<const linphone::VideoDefinition>(linphone_call_params_get_sent_video_definition((::LinphoneCallParams *)mPrivPtr));
}
std::string linphone::CallParams::getSessionName() const {
	return StringUtilities::cStringToCpp(linphone_call_params_get_session_name((::LinphoneCallParams *)mPrivPtr));
}
void linphone::CallParams::setSessionName(const std::string & name) {
	linphone_call_params_set_session_name((::LinphoneCallParams *)mPrivPtr, StringUtilities::cppStringToC(name));
}
std::list<linphone::SrtpSuite> linphone::CallParams::getSrtpSuites() const {
	return EnumBctbxListWrapper<linphone::SrtpSuite>::bctbxListToCppList(linphone_call_params_get_srtp_suites((::LinphoneCallParams *)mPrivPtr));
}
void linphone::CallParams::setSrtpSuites(const std::list<linphone::SrtpSuite> & srtpSuites) {
	linphone_call_params_set_srtp_suites((::LinphoneCallParams *)mPrivPtr, EnumBctbxListWrapper<linphone::SrtpSuite>(srtpSuites).c_list());
}
void linphone::CallParams::enableTcapLineMerging(bool enabled) {
	linphone_call_params_enable_tcap_line_merging((::LinphoneCallParams *)mPrivPtr, enabled);
}
bool linphone::CallParams::toneIndicationsEnabled() const {
	return (linphone_call_params_tone_indications_enabled((::LinphoneCallParams *)mPrivPtr) != FALSE);
}
void linphone::CallParams::enableToneIndications(bool enable) {
	linphone_call_params_enable_tone_indications((::LinphoneCallParams *)mPrivPtr, enable);
}
std::shared_ptr<const linphone::PayloadType> linphone::CallParams::getUsedAudioPayloadType() const {
	return Object::cPtrToSharedPtr<const linphone::PayloadType>(linphone_call_params_get_used_audio_payload_type((::LinphoneCallParams *)mPrivPtr));
}
std::shared_ptr<const linphone::PayloadType> linphone::CallParams::getUsedTextPayloadType() const {
	return Object::cPtrToSharedPtr<const linphone::PayloadType>(linphone_call_params_get_used_text_payload_type((::LinphoneCallParams *)mPrivPtr));
}
std::shared_ptr<const linphone::PayloadType> linphone::CallParams::getUsedVideoPayloadType() const {
	return Object::cPtrToSharedPtr<const linphone::PayloadType>(linphone_call_params_get_used_video_payload_type((::LinphoneCallParams *)mPrivPtr));
}
linphone::MediaDirection linphone::CallParams::getVideoDirection() const {
	return (linphone::MediaDirection)linphone_call_params_get_video_direction((::LinphoneCallParams *)mPrivPtr);
}
void linphone::CallParams::setVideoDirection(linphone::MediaDirection direction) {
	linphone_call_params_set_video_direction((::LinphoneCallParams *)mPrivPtr, (::LinphoneMediaDirection)direction);
}
bool linphone::CallParams::videoEnabled() const {
	return (linphone_call_params_video_enabled((::LinphoneCallParams *)mPrivPtr) != FALSE);
}
void linphone::CallParams::enableVideo(bool enabled) {
	linphone_call_params_enable_video((::LinphoneCallParams *)mPrivPtr, enabled);
}
bool linphone::CallParams::videoMulticastEnabled() const {
	return (linphone_call_params_video_multicast_enabled((::LinphoneCallParams *)mPrivPtr) != FALSE);
}
void linphone::CallParams::enableVideoMulticast(bool yesno) {
	linphone_call_params_enable_video_multicast((::LinphoneCallParams *)mPrivPtr, yesno);
}
void linphone::CallParams::addCustomContent(const std::shared_ptr<linphone::Content> & content) {
	linphone_call_params_add_custom_content((::LinphoneCallParams *)mPrivPtr, (::LinphoneContent *)Object::sharedPtrToCPtr(std::static_pointer_cast<Object,linphone::Content>(content)));
}
void linphone::CallParams::addCustomHeader(const std::string & headerName, const std::string & headerValue) {
	linphone_call_params_add_custom_header((::LinphoneCallParams *)mPrivPtr, StringUtilities::cppStringToC(headerName), StringUtilities::cppStringToC(headerValue));
}
void linphone::CallParams::addCustomSdpAttribute(const std::string & attributeName, const std::string & attributeValue) {
	linphone_call_params_add_custom_sdp_attribute((::LinphoneCallParams *)mPrivPtr, StringUtilities::cppStringToC(attributeName), StringUtilities::cppStringToC(attributeValue));
}
void linphone::CallParams::addCustomSdpMediaAttribute(linphone::StreamType type, const std::string & attributeName, const std::string & attributeValue) {
	linphone_call_params_add_custom_sdp_media_attribute((::LinphoneCallParams *)mPrivPtr, (::LinphoneStreamType)type, StringUtilities::cppStringToC(attributeName), StringUtilities::cppStringToC(attributeValue));
}
bool linphone::CallParams::cfgLinesMerged() const {
	return (linphone_call_params_cfg_lines_merged((::LinphoneCallParams *)mPrivPtr) != FALSE);
}
void linphone::CallParams::clearCustomSdpAttributes() {
	linphone_call_params_clear_custom_sdp_attributes((::LinphoneCallParams *)mPrivPtr);
}
void linphone::CallParams::clearCustomSdpMediaAttributes(linphone::StreamType type) {
	linphone_call_params_clear_custom_sdp_media_attributes((::LinphoneCallParams *)mPrivPtr, (::LinphoneStreamType)type);
}
std::shared_ptr<linphone::CallParams> linphone::CallParams::copy() const {
	return Object::cPtrToSharedPtr<linphone::CallParams>(linphone_call_params_copy((::LinphoneCallParams *)mPrivPtr), false);
}
std::string linphone::CallParams::getCustomHeader(const std::string & headerName) const {
	return StringUtilities::cStringToCpp(linphone_call_params_get_custom_header((::LinphoneCallParams *)mPrivPtr, StringUtilities::cppStringToC(headerName)));
}
std::string linphone::CallParams::getCustomSdpAttribute(const std::string & attributeName) const {
	return StringUtilities::cStringToCpp(linphone_call_params_get_custom_sdp_attribute((::LinphoneCallParams *)mPrivPtr, StringUtilities::cppStringToC(attributeName)));
}
std::string linphone::CallParams::getCustomSdpMediaAttribute(linphone::StreamType type, const std::string & attributeName) const {
	return StringUtilities::cStringToCpp(linphone_call_params_get_custom_sdp_media_attribute((::LinphoneCallParams *)mPrivPtr, (::LinphoneStreamType)type, StringUtilities::cppStringToC(attributeName)));
}
bool linphone::CallParams::hasCustomSdpAttribute(const std::string & attributeName) const {
	return (linphone_call_params_has_custom_sdp_attribute((::LinphoneCallParams *)mPrivPtr, StringUtilities::cppStringToC(attributeName)) != FALSE);
}
bool linphone::CallParams::hasCustomSdpMediaAttribute(linphone::StreamType type, const std::string & attributeName) const {
	return (linphone_call_params_has_custom_sdp_media_attribute((::LinphoneCallParams *)mPrivPtr, (::LinphoneStreamType)type, StringUtilities::cppStringToC(attributeName)) != FALSE);
}
bool linphone::CallParams::isMediaEncryptionSupported(linphone::MediaEncryption encryption) const {
	return (linphone_call_params_is_media_encryption_supported((::LinphoneCallParams *)mPrivPtr, (::LinphoneMediaEncryption)encryption) != FALSE);
}
bool linphone::CallParams::tcapLinesMerged() const {
	return (linphone_call_params_tcap_lines_merged((::LinphoneCallParams *)mPrivPtr) != FALSE);
}



static void linphone_conference_cbs_on_participant_added_cb(LinphoneConference * conference, const LinphoneParticipant * participant) {
	LinphoneConferenceCbs *cbs = linphone_conference_get_current_callbacks(conference);
	if (cbs) {
		// Make a copy of the list of listeners, so that it is possible to remove a listener from a listener without corrupting the list.
		std::list<std::shared_ptr<Listener> > listeners = *static_cast<std::list<std::shared_ptr<Listener> > *>(belle_sip_object_data_get((::belle_sip_object_t *)cbs, MultiListenableObject::sListenerListName));
		for(std::list<std::shared_ptr<Listener> >::iterator it=listeners.begin(); it!=listeners.end(); it++) {
			std::shared_ptr<ConferenceListener> listener = std::static_pointer_cast<ConferenceListener,Listener>(*it);
			listener->onParticipantAdded(Object::cPtrToSharedPtr<Conference>(conference), Object::cPtrToSharedPtr<const Participant>(participant));
		}
	}
}
static void linphone_conference_cbs_on_participant_removed_cb(LinphoneConference * conference, const LinphoneParticipant * participant) {
	LinphoneConferenceCbs *cbs = linphone_conference_get_current_callbacks(conference);
	if (cbs) {
		// Make a copy of the list of listeners, so that it is possible to remove a listener from a listener without corrupting the list.
		std::list<std::shared_ptr<Listener> > listeners = *static_cast<std::list<std::shared_ptr<Listener> > *>(belle_sip_object_data_get((::belle_sip_object_t *)cbs, MultiListenableObject::sListenerListName));
		for(std::list<std::shared_ptr<Listener> >::iterator it=listeners.begin(); it!=listeners.end(); it++) {
			std::shared_ptr<ConferenceListener> listener = std::static_pointer_cast<ConferenceListener,Listener>(*it);
			listener->onParticipantRemoved(Object::cPtrToSharedPtr<Conference>(conference), Object::cPtrToSharedPtr<const Participant>(participant));
		}
	}
}
static void linphone_conference_cbs_on_participant_device_added_cb(LinphoneConference * conference, const LinphoneParticipantDevice * participant_device) {
	LinphoneConferenceCbs *cbs = linphone_conference_get_current_callbacks(conference);
	if (cbs) {
		// Make a copy of the list of listeners, so that it is possible to remove a listener from a listener without corrupting the list.
		std::list<std::shared_ptr<Listener> > listeners = *static_cast<std::list<std::shared_ptr<Listener> > *>(belle_sip_object_data_get((::belle_sip_object_t *)cbs, MultiListenableObject::sListenerListName));
		for(std::list<std::shared_ptr<Listener> >::iterator it=listeners.begin(); it!=listeners.end(); it++) {
			std::shared_ptr<ConferenceListener> listener = std::static_pointer_cast<ConferenceListener,Listener>(*it);
			listener->onParticipantDeviceAdded(Object::cPtrToSharedPtr<Conference>(conference), Object::cPtrToSharedPtr<const ParticipantDevice>(participant_device));
		}
	}
}
static void linphone_conference_cbs_on_participant_device_removed_cb(LinphoneConference * conference, const LinphoneParticipantDevice * participant_device) {
	LinphoneConferenceCbs *cbs = linphone_conference_get_current_callbacks(conference);
	if (cbs) {
		// Make a copy of the list of listeners, so that it is possible to remove a listener from a listener without corrupting the list.
		std::list<std::shared_ptr<Listener> > listeners = *static_cast<std::list<std::shared_ptr<Listener> > *>(belle_sip_object_data_get((::belle_sip_object_t *)cbs, MultiListenableObject::sListenerListName));
		for(std::list<std::shared_ptr<Listener> >::iterator it=listeners.begin(); it!=listeners.end(); it++) {
			std::shared_ptr<ConferenceListener> listener = std::static_pointer_cast<ConferenceListener,Listener>(*it);
			listener->onParticipantDeviceRemoved(Object::cPtrToSharedPtr<Conference>(conference), Object::cPtrToSharedPtr<const ParticipantDevice>(participant_device));
		}
	}
}
static void linphone_conference_cbs_on_participant_role_changed_cb(LinphoneConference * conference, const LinphoneParticipant * participant) {
	LinphoneConferenceCbs *cbs = linphone_conference_get_current_callbacks(conference);
	if (cbs) {
		// Make a copy of the list of listeners, so that it is possible to remove a listener from a listener without corrupting the list.
		std::list<std::shared_ptr<Listener> > listeners = *static_cast<std::list<std::shared_ptr<Listener> > *>(belle_sip_object_data_get((::belle_sip_object_t *)cbs, MultiListenableObject::sListenerListName));
		for(std::list<std::shared_ptr<Listener> >::iterator it=listeners.begin(); it!=listeners.end(); it++) {
			std::shared_ptr<ConferenceListener> listener = std::static_pointer_cast<ConferenceListener,Listener>(*it);
			listener->onParticipantRoleChanged(Object::cPtrToSharedPtr<Conference>(conference), Object::cPtrToSharedPtr<const Participant>(participant));
		}
	}
}
static void linphone_conference_cbs_on_participant_admin_status_changed_cb(LinphoneConference * conference, const LinphoneParticipant * participant) {
	LinphoneConferenceCbs *cbs = linphone_conference_get_current_callbacks(conference);
	if (cbs) {
		// Make a copy of the list of listeners, so that it is possible to remove a listener from a listener without corrupting the list.
		std::list<std::shared_ptr<Listener> > listeners = *static_cast<std::list<std::shared_ptr<Listener> > *>(belle_sip_object_data_get((::belle_sip_object_t *)cbs, MultiListenableObject::sListenerListName));
		for(std::list<std::shared_ptr<Listener> >::iterator it=listeners.begin(); it!=listeners.end(); it++) {
			std::shared_ptr<ConferenceListener> listener = std::static_pointer_cast<ConferenceListener,Listener>(*it);
			listener->onParticipantAdminStatusChanged(Object::cPtrToSharedPtr<Conference>(conference), Object::cPtrToSharedPtr<const Participant>(participant));
		}
	}
}
static void linphone_conference_cbs_on_participant_device_state_changed_cb(LinphoneConference * conference, const LinphoneParticipantDevice * device, const LinphoneParticipantDeviceState state) {
	LinphoneConferenceCbs *cbs = linphone_conference_get_current_callbacks(conference);
	if (cbs) {
		// Make a copy of the list of listeners, so that it is possible to remove a listener from a listener without corrupting the list.
		std::list<std::shared_ptr<Listener> > listeners = *static_cast<std::list<std::shared_ptr<Listener> > *>(belle_sip_object_data_get((::belle_sip_object_t *)cbs, MultiListenableObject::sListenerListName));
		for(std::list<std::shared_ptr<Listener> >::iterator it=listeners.begin(); it!=listeners.end(); it++) {
			std::shared_ptr<ConferenceListener> listener = std::static_pointer_cast<ConferenceListener,Listener>(*it);
			listener->onParticipantDeviceStateChanged(Object::cPtrToSharedPtr<Conference>(conference), Object::cPtrToSharedPtr<const ParticipantDevice>(device), (ParticipantDevice::State)state);
		}
	}
}
static void linphone_conference_cbs_on_participant_device_media_availability_changed_cb(LinphoneConference * conference, const LinphoneParticipantDevice * device) {
	LinphoneConferenceCbs *cbs = linphone_conference_get_current_callbacks(conference);
	if (cbs) {
		// Make a copy of the list of listeners, so that it is possible to remove a listener from a listener without corrupting the list.
		std::list<std::shared_ptr<Listener> > listeners = *static_cast<std::list<std::shared_ptr<Listener> > *>(belle_sip_object_data_get((::belle_sip_object_t *)cbs, MultiListenableObject::sListenerListName));
		for(std::list<std::shared_ptr<Listener> >::iterator it=listeners.begin(); it!=listeners.end(); it++) {
			std::shared_ptr<ConferenceListener> listener = std::static_pointer_cast<ConferenceListener,Listener>(*it);
			listener->onParticipantDeviceMediaAvailabilityChanged(Object::cPtrToSharedPtr<Conference>(conference), Object::cPtrToSharedPtr<const ParticipantDevice>(device));
		}
	}
}
static void linphone_conference_cbs_on_participant_device_media_capability_changed_cb(LinphoneConference * conference, const LinphoneParticipantDevice * device) {
	LinphoneConferenceCbs *cbs = linphone_conference_get_current_callbacks(conference);
	if (cbs) {
		// Make a copy of the list of listeners, so that it is possible to remove a listener from a listener without corrupting the list.
		std::list<std::shared_ptr<Listener> > listeners = *static_cast<std::list<std::shared_ptr<Listener> > *>(belle_sip_object_data_get((::belle_sip_object_t *)cbs, MultiListenableObject::sListenerListName));
		for(std::list<std::shared_ptr<Listener> >::iterator it=listeners.begin(); it!=listeners.end(); it++) {
			std::shared_ptr<ConferenceListener> listener = std::static_pointer_cast<ConferenceListener,Listener>(*it);
			listener->onParticipantDeviceMediaCapabilityChanged(Object::cPtrToSharedPtr<Conference>(conference), Object::cPtrToSharedPtr<const ParticipantDevice>(device));
		}
	}
}
static void linphone_conference_cbs_on_state_changed_cb(LinphoneConference * conference, LinphoneConferenceState newState) {
	LinphoneConferenceCbs *cbs = linphone_conference_get_current_callbacks(conference);
	if (cbs) {
		// Make a copy of the list of listeners, so that it is possible to remove a listener from a listener without corrupting the list.
		std::list<std::shared_ptr<Listener> > listeners = *static_cast<std::list<std::shared_ptr<Listener> > *>(belle_sip_object_data_get((::belle_sip_object_t *)cbs, MultiListenableObject::sListenerListName));
		for(std::list<std::shared_ptr<Listener> >::iterator it=listeners.begin(); it!=listeners.end(); it++) {
			std::shared_ptr<ConferenceListener> listener = std::static_pointer_cast<ConferenceListener,Listener>(*it);
			listener->onStateChanged(Object::cPtrToSharedPtr<Conference>(conference), (Conference::State)newState);
		}
	}
}
static void linphone_conference_cbs_on_available_media_changed_cb(LinphoneConference * conference) {
	LinphoneConferenceCbs *cbs = linphone_conference_get_current_callbacks(conference);
	if (cbs) {
		// Make a copy of the list of listeners, so that it is possible to remove a listener from a listener without corrupting the list.
		std::list<std::shared_ptr<Listener> > listeners = *static_cast<std::list<std::shared_ptr<Listener> > *>(belle_sip_object_data_get((::belle_sip_object_t *)cbs, MultiListenableObject::sListenerListName));
		for(std::list<std::shared_ptr<Listener> >::iterator it=listeners.begin(); it!=listeners.end(); it++) {
			std::shared_ptr<ConferenceListener> listener = std::static_pointer_cast<ConferenceListener,Listener>(*it);
			listener->onAvailableMediaChanged(Object::cPtrToSharedPtr<Conference>(conference));
		}
	}
}
static void linphone_conference_cbs_on_subject_changed_cb(LinphoneConference * conference, const char * subject) {
	LinphoneConferenceCbs *cbs = linphone_conference_get_current_callbacks(conference);
	if (cbs) {
		// Make a copy of the list of listeners, so that it is possible to remove a listener from a listener without corrupting the list.
		std::list<std::shared_ptr<Listener> > listeners = *static_cast<std::list<std::shared_ptr<Listener> > *>(belle_sip_object_data_get((::belle_sip_object_t *)cbs, MultiListenableObject::sListenerListName));
		for(std::list<std::shared_ptr<Listener> >::iterator it=listeners.begin(); it!=listeners.end(); it++) {
			std::shared_ptr<ConferenceListener> listener = std::static_pointer_cast<ConferenceListener,Listener>(*it);
			listener->onSubjectChanged(Object::cPtrToSharedPtr<Conference>(conference), StringUtilities::cStringToCpp(subject));
		}
	}
}
static void linphone_conference_cbs_on_participant_device_is_speaking_changed_cb(LinphoneConference * conference, const LinphoneParticipantDevice * participant_device, bool_t is_speaking) {
	LinphoneConferenceCbs *cbs = linphone_conference_get_current_callbacks(conference);
	if (cbs) {
		// Make a copy of the list of listeners, so that it is possible to remove a listener from a listener without corrupting the list.
		std::list<std::shared_ptr<Listener> > listeners = *static_cast<std::list<std::shared_ptr<Listener> > *>(belle_sip_object_data_get((::belle_sip_object_t *)cbs, MultiListenableObject::sListenerListName));
		for(std::list<std::shared_ptr<Listener> >::iterator it=listeners.begin(); it!=listeners.end(); it++) {
			std::shared_ptr<ConferenceListener> listener = std::static_pointer_cast<ConferenceListener,Listener>(*it);
			listener->onParticipantDeviceIsSpeakingChanged(Object::cPtrToSharedPtr<Conference>(conference), Object::cPtrToSharedPtr<const ParticipantDevice>(participant_device), (is_speaking != FALSE));
		}
	}
}
static void linphone_conference_cbs_on_participant_device_is_muted_cb(LinphoneConference * conference, const LinphoneParticipantDevice * participant_device, bool_t is_muted) {
	LinphoneConferenceCbs *cbs = linphone_conference_get_current_callbacks(conference);
	if (cbs) {
		// Make a copy of the list of listeners, so that it is possible to remove a listener from a listener without corrupting the list.
		std::list<std::shared_ptr<Listener> > listeners = *static_cast<std::list<std::shared_ptr<Listener> > *>(belle_sip_object_data_get((::belle_sip_object_t *)cbs, MultiListenableObject::sListenerListName));
		for(std::list<std::shared_ptr<Listener> >::iterator it=listeners.begin(); it!=listeners.end(); it++) {
			std::shared_ptr<ConferenceListener> listener = std::static_pointer_cast<ConferenceListener,Listener>(*it);
			listener->onParticipantDeviceIsMuted(Object::cPtrToSharedPtr<Conference>(conference), Object::cPtrToSharedPtr<const ParticipantDevice>(participant_device), (is_muted != FALSE));
		}
	}
}
static void linphone_conference_cbs_on_audio_device_changed_cb(LinphoneConference * conference, const LinphoneAudioDevice * audio_device) {
	LinphoneConferenceCbs *cbs = linphone_conference_get_current_callbacks(conference);
	if (cbs) {
		// Make a copy of the list of listeners, so that it is possible to remove a listener from a listener without corrupting the list.
		std::list<std::shared_ptr<Listener> > listeners = *static_cast<std::list<std::shared_ptr<Listener> > *>(belle_sip_object_data_get((::belle_sip_object_t *)cbs, MultiListenableObject::sListenerListName));
		for(std::list<std::shared_ptr<Listener> >::iterator it=listeners.begin(); it!=listeners.end(); it++) {
			std::shared_ptr<ConferenceListener> listener = std::static_pointer_cast<ConferenceListener,Listener>(*it);
			listener->onAudioDeviceChanged(Object::cPtrToSharedPtr<Conference>(conference), Object::cPtrToSharedPtr<const AudioDevice>(audio_device));
		}
	}
}
static void linphone_conference_cbs_on_active_speaker_participant_device_cb(LinphoneConference * conference, const LinphoneParticipantDevice * participant_device) {
	LinphoneConferenceCbs *cbs = linphone_conference_get_current_callbacks(conference);
	if (cbs) {
		// Make a copy of the list of listeners, so that it is possible to remove a listener from a listener without corrupting the list.
		std::list<std::shared_ptr<Listener> > listeners = *static_cast<std::list<std::shared_ptr<Listener> > *>(belle_sip_object_data_get((::belle_sip_object_t *)cbs, MultiListenableObject::sListenerListName));
		for(std::list<std::shared_ptr<Listener> >::iterator it=listeners.begin(); it!=listeners.end(); it++) {
			std::shared_ptr<ConferenceListener> listener = std::static_pointer_cast<ConferenceListener,Listener>(*it);
			listener->onActiveSpeakerParticipantDevice(Object::cPtrToSharedPtr<Conference>(conference), Object::cPtrToSharedPtr<const ParticipantDevice>(participant_device));
		}
	}
}

linphone::Conference::Conference(void *ptr, bool takeRef): MultiListenableObject(ptr, takeRef) {
}

void Conference::addListener(const std::shared_ptr<ConferenceListener> &listener) {
	MultiListenableObject::addListener(std::static_pointer_cast<Listener,ConferenceListener>(listener));
}

void Conference::removeListener(const std::shared_ptr<ConferenceListener> &listener) {
	MultiListenableObject::removeListener(std::static_pointer_cast<Listener,ConferenceListener>(listener));
}

void *Conference::createCallbacks() {
	LinphoneConferenceCbs *cbs = linphone_factory_create_conference_cbs(linphone_factory_get());
	linphone_conference_cbs_set_participant_added(cbs, linphone_conference_cbs_on_participant_added_cb);
	linphone_conference_cbs_set_participant_removed(cbs, linphone_conference_cbs_on_participant_removed_cb);
	linphone_conference_cbs_set_participant_device_added(cbs, linphone_conference_cbs_on_participant_device_added_cb);
	linphone_conference_cbs_set_participant_device_removed(cbs, linphone_conference_cbs_on_participant_device_removed_cb);
	linphone_conference_cbs_set_participant_role_changed(cbs, linphone_conference_cbs_on_participant_role_changed_cb);
	linphone_conference_cbs_set_participant_admin_status_changed(cbs, linphone_conference_cbs_on_participant_admin_status_changed_cb);
	linphone_conference_cbs_set_participant_device_state_changed(cbs, linphone_conference_cbs_on_participant_device_state_changed_cb);
	linphone_conference_cbs_set_participant_device_media_availability_changed(cbs, linphone_conference_cbs_on_participant_device_media_availability_changed_cb);
	linphone_conference_cbs_set_participant_device_media_capability_changed(cbs, linphone_conference_cbs_on_participant_device_media_capability_changed_cb);
	linphone_conference_cbs_set_state_changed(cbs, linphone_conference_cbs_on_state_changed_cb);
	linphone_conference_cbs_set_available_media_changed(cbs, linphone_conference_cbs_on_available_media_changed_cb);
	linphone_conference_cbs_set_subject_changed(cbs, linphone_conference_cbs_on_subject_changed_cb);
	linphone_conference_cbs_set_participant_device_is_speaking_changed(cbs, linphone_conference_cbs_on_participant_device_is_speaking_changed_cb);
	linphone_conference_cbs_set_participant_device_is_muted(cbs, linphone_conference_cbs_on_participant_device_is_muted_cb);
	linphone_conference_cbs_set_audio_device_changed(cbs, linphone_conference_cbs_on_audio_device_changed_cb);
	linphone_conference_cbs_set_active_speaker_participant_device(cbs, linphone_conference_cbs_on_active_speaker_participant_device_cb);
	belle_sip_object_data_set((::belle_sip_object_t *)(cbs), MultiListenableObject::sListenerListName, new list<shared_ptr<Listener>>(), (::belle_sip_data_destroy)deleteListenerList);
	belle_sip_object_data_set((::belle_sip_object_t *)(mPrivPtr), MultiListenableObject::sCbsPtrName, cbs, nullptr);
	linphone_conference_add_callbacks(static_cast<::LinphoneConference *>(mPrivPtr), cbs);
	belle_sip_object_unref((::belle_sip_object_t *)cbs);
	return cbs;
}


std::shared_ptr<linphone::ParticipantDevice> linphone::Conference::getActiveSpeakerParticipantDevice() const {
	return Object::cPtrToSharedPtr<linphone::ParticipantDevice>(linphone_conference_get_active_speaker_participant_device((::LinphoneConference *)mPrivPtr));
}
std::shared_ptr<linphone::Call> linphone::Conference::getCall() const {
	return Object::cPtrToSharedPtr<linphone::Call>(linphone_conference_get_call((::LinphoneConference *)mPrivPtr));
}
std::shared_ptr<const linphone::Address> linphone::Conference::getConferenceAddress() const {
	return Object::cPtrToSharedPtr<const linphone::Address>(linphone_conference_get_conference_address((::LinphoneConference *)mPrivPtr));
}
void linphone::Conference::setConferenceAddress(const std::shared_ptr<linphone::Address> & address) {
	linphone_conference_set_conference_address((::LinphoneConference *)mPrivPtr, (::LinphoneAddress *)Object::sharedPtrToCPtr(std::static_pointer_cast<Object,linphone::Address>(address)));
}
std::shared_ptr<linphone::Core> linphone::Conference::getCore() const {
	return Object::cPtrToSharedPtr<linphone::Core>(linphone_conference_get_core((::LinphoneConference *)mPrivPtr));
}
std::shared_ptr<const linphone::ConferenceParams> linphone::Conference::getCurrentParams() const {
	return Object::cPtrToSharedPtr<const linphone::ConferenceParams>(linphone_conference_get_current_params((::LinphoneConference *)mPrivPtr));
}
int linphone::Conference::getDuration() const {
	return linphone_conference_get_duration((::LinphoneConference *)mPrivPtr);
}
std::string linphone::Conference::getId() const {
	return StringUtilities::cStringToCpp(linphone_conference_get_ID((::LinphoneConference *)mPrivPtr));
}
void linphone::Conference::setId(const std::string & conferenceId) {
	linphone_conference_set_ID((::LinphoneConference *)mPrivPtr, StringUtilities::cppStringToC(conferenceId));
}
std::shared_ptr<const linphone::AudioDevice> linphone::Conference::getInputAudioDevice() const {
	return Object::cPtrToSharedPtr<const linphone::AudioDevice>(linphone_conference_get_input_audio_device((::LinphoneConference *)mPrivPtr));
}
void linphone::Conference::setInputAudioDevice(const std::shared_ptr<linphone::AudioDevice> & audioDevice) {
	linphone_conference_set_input_audio_device((::LinphoneConference *)mPrivPtr, (::LinphoneAudioDevice *)Object::sharedPtrToCPtr(std::static_pointer_cast<Object,linphone::AudioDevice>(audioDevice)));
}
float linphone::Conference::getInputVolume() const {
	return linphone_conference_get_input_volume((::LinphoneConference *)mPrivPtr);
}
bool linphone::Conference::isIn() const {
	return (linphone_conference_is_in((::LinphoneConference *)mPrivPtr) != FALSE);
}
bool linphone::Conference::isRecording() const {
	return (linphone_conference_is_recording((::LinphoneConference *)mPrivPtr) != FALSE);
}
std::shared_ptr<linphone::Participant> linphone::Conference::getMe() const {
	return Object::cPtrToSharedPtr<linphone::Participant>(linphone_conference_get_me((::LinphoneConference *)mPrivPtr));
}
bool linphone::Conference::getMicrophoneMuted() const {
	return (linphone_conference_get_microphone_muted((::LinphoneConference *)mPrivPtr) != FALSE);
}
void linphone::Conference::setMicrophoneMuted(bool muted) {
	linphone_conference_set_microphone_muted((::LinphoneConference *)mPrivPtr, muted);
}
std::shared_ptr<const linphone::AudioDevice> linphone::Conference::getOutputAudioDevice() const {
	return Object::cPtrToSharedPtr<const linphone::AudioDevice>(linphone_conference_get_output_audio_device((::LinphoneConference *)mPrivPtr));
}
void linphone::Conference::setOutputAudioDevice(const std::shared_ptr<linphone::AudioDevice> & audioDevice) {
	linphone_conference_set_output_audio_device((::LinphoneConference *)mPrivPtr, (::LinphoneAudioDevice *)Object::sharedPtrToCPtr(std::static_pointer_cast<Object,linphone::AudioDevice>(audioDevice)));
}
int linphone::Conference::getParticipantCount() const {
	return linphone_conference_get_participant_count((::LinphoneConference *)mPrivPtr);
}
std::list<std::shared_ptr<linphone::ParticipantDevice>> linphone::Conference::getParticipantDeviceList() const {
	return ObjectBctbxListWrapper<linphone::ParticipantDevice>::bctbxListToCppList(linphone_conference_get_participant_device_list((::LinphoneConference *)mPrivPtr), false);
}
std::list<std::shared_ptr<linphone::Participant>> linphone::Conference::getParticipantList() const {
	return ObjectBctbxListWrapper<linphone::Participant>::bctbxListToCppList(linphone_conference_get_participant_list((::LinphoneConference *)mPrivPtr), false);
}
std::list<std::shared_ptr<linphone::Address>> linphone::Conference::getParticipants() const {
	return ObjectBctbxListWrapper<linphone::Address>::bctbxListToCppList(linphone_conference_get_participants((::LinphoneConference *)mPrivPtr), false);
}
time_t linphone::Conference::getStartTime() const {
	return linphone_conference_get_start_time((::LinphoneConference *)mPrivPtr);
}
linphone::Conference::State linphone::Conference::getState() const {
	return (State)linphone_conference_get_state((::LinphoneConference *)mPrivPtr);
}
std::string linphone::Conference::getSubject() const {
	return StringUtilities::cStringToCpp(linphone_conference_get_subject((::LinphoneConference *)mPrivPtr));
}
void linphone::Conference::setSubject(const std::string & subject) {
	linphone_conference_set_subject((::LinphoneConference *)mPrivPtr, StringUtilities::cppStringToC(subject));
}
std::string linphone::Conference::getUsername() const {
	return StringUtilities::cStringToCpp(linphone_conference_get_username((::LinphoneConference *)mPrivPtr));
}
void linphone::Conference::setUsername(const std::string & username) {
	linphone_conference_set_username((::LinphoneConference *)mPrivPtr, StringUtilities::cppStringToC(username));
}
linphone::Status linphone::Conference::addParticipant(const std::shared_ptr<linphone::Call> & call) {
	return linphone_conference_add_participant((::LinphoneConference *)mPrivPtr, (::LinphoneCall *)Object::sharedPtrToCPtr(std::static_pointer_cast<Object,linphone::Call>(call)));
}
linphone::Status linphone::Conference::addParticipant(const std::shared_ptr<const linphone::Address> & uri) {
	return linphone_conference_add_participant_2((::LinphoneConference *)mPrivPtr, (::LinphoneAddress *)Object::sharedPtrToCPtr(std::static_pointer_cast<const Object,const linphone::Address>(uri)));
}
linphone::Status linphone::Conference::addParticipants(const std::list<std::shared_ptr<linphone::Call>> & calls) {
	return linphone_conference_add_participants((::LinphoneConference *)mPrivPtr, ObjectBctbxListWrapper<linphone::Call>(calls).c_list());
}
linphone::Status linphone::Conference::addParticipants(const std::list<std::shared_ptr<linphone::Address>> & addresses) {
	return linphone_conference_add_participants_2((::LinphoneConference *)mPrivPtr, ObjectBctbxListWrapper<linphone::Address>(addresses).c_list());
}
int linphone::Conference::enter() {
	return linphone_conference_enter((::LinphoneConference *)mPrivPtr);
}
std::shared_ptr<linphone::Participant> linphone::Conference::findParticipant(const std::shared_ptr<const linphone::Address> & uri) {
	return Object::cPtrToSharedPtr<linphone::Participant>(linphone_conference_find_participant((::LinphoneConference *)mPrivPtr, (::LinphoneAddress *)Object::sharedPtrToCPtr(std::static_pointer_cast<const Object,const linphone::Address>(uri))));
}
int linphone::Conference::getParticipantDeviceVolume(const std::shared_ptr<linphone::ParticipantDevice> & device) {
	return linphone_conference_get_participant_device_volume((::LinphoneConference *)mPrivPtr, (::LinphoneParticipantDevice *)Object::sharedPtrToCPtr(std::static_pointer_cast<Object,linphone::ParticipantDevice>(device)));
}
linphone::Status linphone::Conference::inviteParticipants(const std::list<std::shared_ptr<linphone::Address>> & addresses, const std::shared_ptr<const linphone::CallParams> & params) {
	return linphone_conference_invite_participants((::LinphoneConference *)mPrivPtr, ObjectBctbxListWrapper<linphone::Address>(addresses).c_list(), (::LinphoneCallParams *)Object::sharedPtrToCPtr(std::static_pointer_cast<const Object,const linphone::CallParams>(params)));
}
bool linphone::Conference::isMe(const std::shared_ptr<const linphone::Address> & uri) const {
	return (linphone_conference_is_me((::LinphoneConference *)mPrivPtr, (::LinphoneAddress *)Object::sharedPtrToCPtr(std::static_pointer_cast<const Object,const linphone::Address>(uri))) != FALSE);
}
int linphone::Conference::leave() {
	return linphone_conference_leave((::LinphoneConference *)mPrivPtr);
}
linphone::Status linphone::Conference::removeParticipant(const std::shared_ptr<const linphone::Address> & uri) {
	return linphone_conference_remove_participant((::LinphoneConference *)mPrivPtr, (::LinphoneAddress *)Object::sharedPtrToCPtr(std::static_pointer_cast<const Object,const linphone::Address>(uri)));
}
linphone::Status linphone::Conference::removeParticipant(const std::shared_ptr<linphone::Participant> & participant) {
	return linphone_conference_remove_participant_2((::LinphoneConference *)mPrivPtr, (::LinphoneParticipant *)Object::sharedPtrToCPtr(std::static_pointer_cast<Object,linphone::Participant>(participant)));
}
linphone::Status linphone::Conference::removeParticipant(const std::shared_ptr<linphone::Call> & call) {
	return linphone_conference_remove_participant_3((::LinphoneConference *)mPrivPtr, (::LinphoneCall *)Object::sharedPtrToCPtr(std::static_pointer_cast<Object,linphone::Call>(call)));
}
void linphone::Conference::setLocalParticipantStreamCapability(linphone::MediaDirection direction, linphone::StreamType type) {
	linphone_conference_set_local_participant_stream_capability((::LinphoneConference *)mPrivPtr, (::LinphoneMediaDirection)direction, (::LinphoneStreamType)type);
}
void linphone::Conference::setParticipantAdminStatus(const std::shared_ptr<linphone::Participant> & participant, bool isAdmin) {
	linphone_conference_set_participant_admin_status((::LinphoneConference *)mPrivPtr, (::LinphoneParticipant *)Object::sharedPtrToCPtr(std::static_pointer_cast<Object,linphone::Participant>(participant)), isAdmin);
}
int linphone::Conference::startRecording(const std::string & path) {
	return linphone_conference_start_recording((::LinphoneConference *)mPrivPtr, StringUtilities::cppStringToC(path));
}
int linphone::Conference::stopRecording() {
	return linphone_conference_stop_recording((::LinphoneConference *)mPrivPtr);
}
int linphone::Conference::terminate() {
	return linphone_conference_terminate((::LinphoneConference *)mPrivPtr);
}
int linphone::Conference::updateParams(const std::shared_ptr<const linphone::ConferenceParams> & params) {
	return linphone_conference_update_params((::LinphoneConference *)mPrivPtr, (::LinphoneConferenceParams *)Object::sharedPtrToCPtr(std::static_pointer_cast<const Object,const linphone::ConferenceParams>(params)));
}




linphone::Dictionary::Dictionary(void *ptr, bool takeRef): Object(ptr, takeRef) {
}



void linphone::Dictionary::clear() {
	linphone_dictionary_clear((::LinphoneDictionary *)mPrivPtr);
}
std::shared_ptr<linphone::Dictionary> linphone::Dictionary::clone() const {
	return Object::cPtrToSharedPtr<linphone::Dictionary>(linphone_dictionary_clone((::LinphoneDictionary *)mPrivPtr), false);
}
float linphone::Dictionary::getFloat(const std::string & key) const {
	return linphone_dictionary_get_float((::LinphoneDictionary *)mPrivPtr, StringUtilities::cppStringToC(key));
}
int linphone::Dictionary::getInt(const std::string & key) const {
	return linphone_dictionary_get_int((::LinphoneDictionary *)mPrivPtr, StringUtilities::cppStringToC(key));
}
int64_t linphone::Dictionary::getInt64(const std::string & key) const {
	return linphone_dictionary_get_int64((::LinphoneDictionary *)mPrivPtr, StringUtilities::cppStringToC(key));
}
std::string linphone::Dictionary::getString(const std::string & key) const {
	return StringUtilities::cStringToCpp(linphone_dictionary_get_string((::LinphoneDictionary *)mPrivPtr, StringUtilities::cppStringToC(key)));
}
linphone::Status linphone::Dictionary::hasKey(const std::string & key) const {
	return linphone_dictionary_has_key((::LinphoneDictionary *)mPrivPtr, StringUtilities::cppStringToC(key));
}
linphone::Status linphone::Dictionary::remove(const std::string & key) {
	return linphone_dictionary_remove((::LinphoneDictionary *)mPrivPtr, StringUtilities::cppStringToC(key));
}
void linphone::Dictionary::setFloat(const std::string & key, float value) {
	linphone_dictionary_set_float((::LinphoneDictionary *)mPrivPtr, StringUtilities::cppStringToC(key), value);
}
void linphone::Dictionary::setInt(const std::string & key, int value) {
	linphone_dictionary_set_int((::LinphoneDictionary *)mPrivPtr, StringUtilities::cppStringToC(key), value);
}
void linphone::Dictionary::setInt64(const std::string & key, int64_t value) {
	linphone_dictionary_set_int64((::LinphoneDictionary *)mPrivPtr, StringUtilities::cppStringToC(key), value);
}
void linphone::Dictionary::setString(const std::string & key, const std::string & value) {
	linphone_dictionary_set_string((::LinphoneDictionary *)mPrivPtr, StringUtilities::cppStringToC(key), StringUtilities::cppStringToC(value));
}




linphone::Transports::Transports(void *ptr, bool takeRef): Object(ptr, takeRef) {
}



int linphone::Transports::getDtlsPort() const {
	return linphone_transports_get_dtls_port((::LinphoneTransports *)mPrivPtr);
}
void linphone::Transports::setDtlsPort(int port) {
	linphone_transports_set_dtls_port((::LinphoneTransports *)mPrivPtr, port);
}
int linphone::Transports::getTcpPort() const {
	return linphone_transports_get_tcp_port((::LinphoneTransports *)mPrivPtr);
}
void linphone::Transports::setTcpPort(int port) {
	linphone_transports_set_tcp_port((::LinphoneTransports *)mPrivPtr, port);
}
int linphone::Transports::getTlsPort() const {
	return linphone_transports_get_tls_port((::LinphoneTransports *)mPrivPtr);
}
void linphone::Transports::setTlsPort(int port) {
	linphone_transports_set_tls_port((::LinphoneTransports *)mPrivPtr, port);
}
int linphone::Transports::getUdpPort() const {
	return linphone_transports_get_udp_port((::LinphoneTransports *)mPrivPtr);
}
void linphone::Transports::setUdpPort(int port) {
	linphone_transports_set_udp_port((::LinphoneTransports *)mPrivPtr, port);
}




linphone::LdapParams::LdapParams(void *ptr, bool takeRef): Object(ptr, takeRef) {
}



linphone::Ldap::AuthMethod linphone::LdapParams::getAuthMethod() const {
	return (linphone::Ldap::AuthMethod)linphone_ldap_params_get_auth_method((::LinphoneLdapParams *)mPrivPtr);
}
void linphone::LdapParams::setAuthMethod(linphone::Ldap::AuthMethod authMethod) {
	linphone_ldap_params_set_auth_method((::LinphoneLdapParams *)mPrivPtr, (::LinphoneLdapAuthMethod)authMethod);
}
std::string linphone::LdapParams::getBaseObject() const {
	return StringUtilities::cStringToCpp(linphone_ldap_params_get_base_object((::LinphoneLdapParams *)mPrivPtr));
}
void linphone::LdapParams::setBaseObject(const std::string & baseObject) {
	linphone_ldap_params_set_base_object((::LinphoneLdapParams *)mPrivPtr, StringUtilities::cppStringToC(baseObject));
}
std::string linphone::LdapParams::getBindDn() const {
	return StringUtilities::cStringToCpp(linphone_ldap_params_get_bind_dn((::LinphoneLdapParams *)mPrivPtr));
}
void linphone::LdapParams::setBindDn(const std::string & bindDn) {
	linphone_ldap_params_set_bind_dn((::LinphoneLdapParams *)mPrivPtr, StringUtilities::cppStringToC(bindDn));
}
linphone::Ldap::DebugLevel linphone::LdapParams::getDebugLevel() const {
	return (linphone::Ldap::DebugLevel)linphone_ldap_params_get_debug_level((::LinphoneLdapParams *)mPrivPtr);
}
void linphone::LdapParams::setDebugLevel(linphone::Ldap::DebugLevel level) {
	linphone_ldap_params_set_debug_level((::LinphoneLdapParams *)mPrivPtr, (::LinphoneLdapDebugLevel)level);
}
int linphone::LdapParams::getDelay() const {
	return linphone_ldap_params_get_delay((::LinphoneLdapParams *)mPrivPtr);
}
void linphone::LdapParams::setDelay(int delay) {
	linphone_ldap_params_set_delay((::LinphoneLdapParams *)mPrivPtr, delay);
}
bool linphone::LdapParams::getEnabled() const {
	return (linphone_ldap_params_get_enabled((::LinphoneLdapParams *)mPrivPtr) != FALSE);
}
void linphone::LdapParams::setEnabled(bool enable) {
	linphone_ldap_params_set_enabled((::LinphoneLdapParams *)mPrivPtr, enable);
}
std::string linphone::LdapParams::getFilter() const {
	return StringUtilities::cStringToCpp(linphone_ldap_params_get_filter((::LinphoneLdapParams *)mPrivPtr));
}
void linphone::LdapParams::setFilter(const std::string & filter) {
	linphone_ldap_params_set_filter((::LinphoneLdapParams *)mPrivPtr, StringUtilities::cppStringToC(filter));
}
int linphone::LdapParams::getMaxResults() const {
	return linphone_ldap_params_get_max_results((::LinphoneLdapParams *)mPrivPtr);
}
void linphone::LdapParams::setMaxResults(int maxResults) {
	linphone_ldap_params_set_max_results((::LinphoneLdapParams *)mPrivPtr, maxResults);
}
int linphone::LdapParams::getMinChars() const {
	return linphone_ldap_params_get_min_chars((::LinphoneLdapParams *)mPrivPtr);
}
void linphone::LdapParams::setMinChars(int minChars) {
	linphone_ldap_params_set_min_chars((::LinphoneLdapParams *)mPrivPtr, minChars);
}
std::string linphone::LdapParams::getNameAttribute() const {
	return StringUtilities::cStringToCpp(linphone_ldap_params_get_name_attribute((::LinphoneLdapParams *)mPrivPtr));
}
void linphone::LdapParams::setNameAttribute(const std::string & nameAttribute) {
	linphone_ldap_params_set_name_attribute((::LinphoneLdapParams *)mPrivPtr, StringUtilities::cppStringToC(nameAttribute));
}
std::string linphone::LdapParams::getPassword() const {
	return StringUtilities::cStringToCpp(linphone_ldap_params_get_password((::LinphoneLdapParams *)mPrivPtr));
}
void linphone::LdapParams::setPassword(const std::string & password) {
	linphone_ldap_params_set_password((::LinphoneLdapParams *)mPrivPtr, StringUtilities::cppStringToC(password));
}
bool linphone::LdapParams::salEnabled() const {
	return (linphone_ldap_params_sal_enabled((::LinphoneLdapParams *)mPrivPtr) != FALSE);
}
void linphone::LdapParams::enableSal(bool enable) {
	linphone_ldap_params_enable_sal((::LinphoneLdapParams *)mPrivPtr, enable);
}
std::string linphone::LdapParams::getServer() const {
	return StringUtilities::cStringToCpp(linphone_ldap_params_get_server((::LinphoneLdapParams *)mPrivPtr));
}
void linphone::LdapParams::setServer(const std::string & server) {
	linphone_ldap_params_set_server((::LinphoneLdapParams *)mPrivPtr, StringUtilities::cppStringToC(server));
}
linphone::Ldap::CertVerificationMode linphone::LdapParams::getServerCertificatesVerificationMode() const {
	return (linphone::Ldap::CertVerificationMode)linphone_ldap_params_get_server_certificates_verification_mode((::LinphoneLdapParams *)mPrivPtr);
}
void linphone::LdapParams::setServerCertificatesVerificationMode(linphone::Ldap::CertVerificationMode verifyServerCertificates) {
	linphone_ldap_params_set_server_certificates_verification_mode((::LinphoneLdapParams *)mPrivPtr, (::LinphoneLdapCertVerificationMode)verifyServerCertificates);
}
std::string linphone::LdapParams::getSipAttribute() const {
	return StringUtilities::cStringToCpp(linphone_ldap_params_get_sip_attribute((::LinphoneLdapParams *)mPrivPtr));
}
void linphone::LdapParams::setSipAttribute(const std::string & sipAttribute) {
	linphone_ldap_params_set_sip_attribute((::LinphoneLdapParams *)mPrivPtr, StringUtilities::cppStringToC(sipAttribute));
}
std::string linphone::LdapParams::getSipDomain() const {
	return StringUtilities::cStringToCpp(linphone_ldap_params_get_sip_domain((::LinphoneLdapParams *)mPrivPtr));
}
void linphone::LdapParams::setSipDomain(const std::string & sipDomain) {
	linphone_ldap_params_set_sip_domain((::LinphoneLdapParams *)mPrivPtr, StringUtilities::cppStringToC(sipDomain));
}
int linphone::LdapParams::getTimeout() const {
	return linphone_ldap_params_get_timeout((::LinphoneLdapParams *)mPrivPtr);
}
void linphone::LdapParams::setTimeout(int timeout) {
	linphone_ldap_params_set_timeout((::LinphoneLdapParams *)mPrivPtr, timeout);
}
int linphone::LdapParams::getTimeoutTlsMs() const {
	return linphone_ldap_params_get_timeout_tls_ms((::LinphoneLdapParams *)mPrivPtr);
}
void linphone::LdapParams::setTimeoutTlsMs(int timeout) {
	linphone_ldap_params_set_timeout_tls_ms((::LinphoneLdapParams *)mPrivPtr, timeout);
}
bool linphone::LdapParams::tlsEnabled() const {
	return (linphone_ldap_params_tls_enabled((::LinphoneLdapParams *)mPrivPtr) != FALSE);
}
void linphone::LdapParams::enableTls(bool enable) {
	linphone_ldap_params_enable_tls((::LinphoneLdapParams *)mPrivPtr, enable);
}
int linphone::LdapParams::check() const {
	return linphone_ldap_params_check((::LinphoneLdapParams *)mPrivPtr);
}
std::shared_ptr<linphone::LdapParams> linphone::LdapParams::clone() const {
	return Object::cPtrToSharedPtr<linphone::LdapParams>(linphone_ldap_params_clone((::LinphoneLdapParams *)mPrivPtr), false);
}
std::string linphone::LdapParams::getCustomValue(const std::string & key) const {
	return StringUtilities::cStringToCpp(linphone_ldap_params_get_custom_value((::LinphoneLdapParams *)mPrivPtr, StringUtilities::cppStringToC(key)));
}
void linphone::LdapParams::setCustomValue(const std::string & key, const std::string & value) {
	linphone_ldap_params_set_custom_value((::LinphoneLdapParams *)mPrivPtr, StringUtilities::cppStringToC(key), StringUtilities::cppStringToC(value));
}




linphone::CallStats::CallStats(void *ptr, bool takeRef): Object(ptr, takeRef) {
}



float linphone::CallStats::getDownloadBandwidth() const {
	return linphone_call_stats_get_download_bandwidth((::LinphoneCallStats *)mPrivPtr);
}
float linphone::CallStats::getEstimatedDownloadBandwidth() const {
	return linphone_call_stats_get_estimated_download_bandwidth((::LinphoneCallStats *)mPrivPtr);
}
linphone::IceState linphone::CallStats::getIceState() const {
	return (linphone::IceState)linphone_call_stats_get_ice_state((::LinphoneCallStats *)mPrivPtr);
}
linphone::Address::Family linphone::CallStats::getIpFamilyOfRemote() const {
	return (linphone::Address::Family)linphone_call_stats_get_ip_family_of_remote((::LinphoneCallStats *)mPrivPtr);
}
bool linphone::CallStats::isZrtpKeyAgreementAlgoPostQuantum() const {
	return (linphone_call_stats_is_zrtp_key_agreement_algo_post_quantum((::LinphoneCallStats *)mPrivPtr) != FALSE);
}
float linphone::CallStats::getJitterBufferSizeMs() const {
	return linphone_call_stats_get_jitter_buffer_size_ms((::LinphoneCallStats *)mPrivPtr);
}
uint64_t linphone::CallStats::getLatePacketsCumulativeNumber() const {
	return linphone_call_stats_get_late_packets_cumulative_number((::LinphoneCallStats *)mPrivPtr);
}
float linphone::CallStats::getLocalLateRate() const {
	return linphone_call_stats_get_local_late_rate((::LinphoneCallStats *)mPrivPtr);
}
float linphone::CallStats::getLocalLossRate() const {
	return linphone_call_stats_get_local_loss_rate((::LinphoneCallStats *)mPrivPtr);
}
float linphone::CallStats::getReceiverInterarrivalJitter() const {
	return linphone_call_stats_get_receiver_interarrival_jitter((::LinphoneCallStats *)mPrivPtr);
}
float linphone::CallStats::getReceiverLossRate() const {
	return linphone_call_stats_get_receiver_loss_rate((::LinphoneCallStats *)mPrivPtr);
}
float linphone::CallStats::getRoundTripDelay() const {
	return linphone_call_stats_get_round_trip_delay((::LinphoneCallStats *)mPrivPtr);
}
float linphone::CallStats::getRtcpDownloadBandwidth() const {
	return linphone_call_stats_get_rtcp_download_bandwidth((::LinphoneCallStats *)mPrivPtr);
}
float linphone::CallStats::getRtcpUploadBandwidth() const {
	return linphone_call_stats_get_rtcp_upload_bandwidth((::LinphoneCallStats *)mPrivPtr);
}
float linphone::CallStats::getSenderInterarrivalJitter() const {
	return linphone_call_stats_get_sender_interarrival_jitter((::LinphoneCallStats *)mPrivPtr);
}
float linphone::CallStats::getSenderLossRate() const {
	return linphone_call_stats_get_sender_loss_rate((::LinphoneCallStats *)mPrivPtr);
}
linphone::MediaEncryption linphone::CallStats::getSrtpSource() const {
	return (linphone::MediaEncryption)linphone_call_stats_get_srtp_source((::LinphoneCallStats *)mPrivPtr);
}
linphone::SrtpSuite linphone::CallStats::getSrtpSuite() const {
	return (linphone::SrtpSuite)linphone_call_stats_get_srtp_suite((::LinphoneCallStats *)mPrivPtr);
}
linphone::StreamType linphone::CallStats::getType() const {
	return (linphone::StreamType)linphone_call_stats_get_type((::LinphoneCallStats *)mPrivPtr);
}
float linphone::CallStats::getUploadBandwidth() const {
	return linphone_call_stats_get_upload_bandwidth((::LinphoneCallStats *)mPrivPtr);
}
linphone::UpnpState linphone::CallStats::getUpnpState() const {
	return (linphone::UpnpState)linphone_call_stats_get_upnp_state((::LinphoneCallStats *)mPrivPtr);
}
std::string linphone::CallStats::getZrtpAuthTagAlgo() const {
	return StringUtilities::cStringToCpp(linphone_call_stats_get_zrtp_auth_tag_algo((::LinphoneCallStats *)mPrivPtr));
}
std::string linphone::CallStats::getZrtpCipherAlgo() const {
	return StringUtilities::cStringToCpp(linphone_call_stats_get_zrtp_cipher_algo((::LinphoneCallStats *)mPrivPtr));
}
std::string linphone::CallStats::getZrtpHashAlgo() const {
	return StringUtilities::cStringToCpp(linphone_call_stats_get_zrtp_hash_algo((::LinphoneCallStats *)mPrivPtr));
}
std::string linphone::CallStats::getZrtpKeyAgreementAlgo() const {
	return StringUtilities::cStringToCpp(linphone_call_stats_get_zrtp_key_agreement_algo((::LinphoneCallStats *)mPrivPtr));
}
std::string linphone::CallStats::getZrtpSasAlgo() const {
	return StringUtilities::cStringToCpp(linphone_call_stats_get_zrtp_sas_algo((::LinphoneCallStats *)mPrivPtr));
}




linphone::ErrorInfo::ErrorInfo(void *ptr, bool takeRef): Object(ptr, takeRef) {
}



std::string linphone::ErrorInfo::getPhrase() const {
	return StringUtilities::cStringToCpp(linphone_error_info_get_phrase((::LinphoneErrorInfo *)mPrivPtr));
}
void linphone::ErrorInfo::setPhrase(const std::string & phrase) {
	linphone_error_info_set_phrase((::LinphoneErrorInfo *)mPrivPtr, StringUtilities::cppStringToC(phrase));
}
std::string linphone::ErrorInfo::getProtocol() const {
	return StringUtilities::cStringToCpp(linphone_error_info_get_protocol((::LinphoneErrorInfo *)mPrivPtr));
}
void linphone::ErrorInfo::setProtocol(const std::string & protocol) {
	linphone_error_info_set_protocol((::LinphoneErrorInfo *)mPrivPtr, StringUtilities::cppStringToC(protocol));
}
int linphone::ErrorInfo::getProtocolCode() const {
	return linphone_error_info_get_protocol_code((::LinphoneErrorInfo *)mPrivPtr);
}
void linphone::ErrorInfo::setProtocolCode(int code) {
	linphone_error_info_set_protocol_code((::LinphoneErrorInfo *)mPrivPtr, code);
}
linphone::Reason linphone::ErrorInfo::getReason() const {
	return (linphone::Reason)linphone_error_info_get_reason((::LinphoneErrorInfo *)mPrivPtr);
}
void linphone::ErrorInfo::setReason(linphone::Reason reason) {
	linphone_error_info_set_reason((::LinphoneErrorInfo *)mPrivPtr, (::LinphoneReason)reason);
}
int linphone::ErrorInfo::getRetryAfter() const {
	return linphone_error_info_get_retry_after((::LinphoneErrorInfo *)mPrivPtr);
}
void linphone::ErrorInfo::setRetryAfter(int retryAfter) {
	linphone_error_info_set_retry_after((::LinphoneErrorInfo *)mPrivPtr, retryAfter);
}
std::shared_ptr<linphone::ErrorInfo> linphone::ErrorInfo::getSubErrorInfo() const {
	return Object::cPtrToSharedPtr<linphone::ErrorInfo>(linphone_error_info_get_sub_error_info((::LinphoneErrorInfo *)mPrivPtr));
}
void linphone::ErrorInfo::setSubErrorInfo(const std::shared_ptr<linphone::ErrorInfo> & appendedErrorInfo) {
	linphone_error_info_set_sub_error_info((::LinphoneErrorInfo *)mPrivPtr, (::LinphoneErrorInfo *)Object::sharedPtrToCPtr(std::static_pointer_cast<Object,linphone::ErrorInfo>(appendedErrorInfo)));
}
std::string linphone::ErrorInfo::getWarnings() const {
	return StringUtilities::cStringToCpp(linphone_error_info_get_warnings((::LinphoneErrorInfo *)mPrivPtr));
}
void linphone::ErrorInfo::setWarnings(const std::string & warnings) {
	linphone_error_info_set_warnings((::LinphoneErrorInfo *)mPrivPtr, StringUtilities::cppStringToC(warnings));
}
void linphone::ErrorInfo::set(const std::string & protocol, linphone::Reason reason, int code, const std::string & status, const std::string & warning) {
	linphone_error_info_set((::LinphoneErrorInfo *)mPrivPtr, StringUtilities::cppStringToC(protocol), (::LinphoneReason)reason, code, StringUtilities::cppStringToC(status), StringUtilities::cppStringToC(warning));
}




linphone::NatPolicy::NatPolicy(void *ptr, bool takeRef): Object(ptr, takeRef) {
}



std::shared_ptr<linphone::Core> linphone::NatPolicy::getCore() const {
	return Object::cPtrToSharedPtr<linphone::Core>(linphone_nat_policy_get_core((::LinphoneNatPolicy *)mPrivPtr));
}
bool linphone::NatPolicy::iceEnabled() const {
	return (linphone_nat_policy_ice_enabled((::LinphoneNatPolicy *)mPrivPtr) != FALSE);
}
void linphone::NatPolicy::enableIce(bool enable) {
	linphone_nat_policy_enable_ice((::LinphoneNatPolicy *)mPrivPtr, enable);
}
std::string linphone::NatPolicy::getNatV4Address() const {
	return StringUtilities::cStringToCpp(linphone_nat_policy_get_nat_v4_address((::LinphoneNatPolicy *)mPrivPtr));
}
void linphone::NatPolicy::setNatV4Address(const std::string & v4Address) {
	linphone_nat_policy_set_nat_v4_address((::LinphoneNatPolicy *)mPrivPtr, StringUtilities::cppStringToC(v4Address));
}
std::string linphone::NatPolicy::getNatV6Address() const {
	return StringUtilities::cStringToCpp(linphone_nat_policy_get_nat_v6_address((::LinphoneNatPolicy *)mPrivPtr));
}
void linphone::NatPolicy::setNatV6Address(const std::string & v4Address) {
	linphone_nat_policy_set_nat_v6_address((::LinphoneNatPolicy *)mPrivPtr, StringUtilities::cppStringToC(v4Address));
}
bool linphone::NatPolicy::stunEnabled() const {
	return (linphone_nat_policy_stun_enabled((::LinphoneNatPolicy *)mPrivPtr) != FALSE);
}
void linphone::NatPolicy::enableStun(bool enable) {
	linphone_nat_policy_enable_stun((::LinphoneNatPolicy *)mPrivPtr, enable);
}
std::string linphone::NatPolicy::getStunServer() const {
	return StringUtilities::cStringToCpp(linphone_nat_policy_get_stun_server((::LinphoneNatPolicy *)mPrivPtr));
}
void linphone::NatPolicy::setStunServer(const std::string & stunServer) {
	linphone_nat_policy_set_stun_server((::LinphoneNatPolicy *)mPrivPtr, StringUtilities::cppStringToC(stunServer));
}
std::string linphone::NatPolicy::getStunServerUsername() const {
	return StringUtilities::cStringToCpp(linphone_nat_policy_get_stun_server_username((::LinphoneNatPolicy *)mPrivPtr));
}
void linphone::NatPolicy::setStunServerUsername(const std::string & username) {
	linphone_nat_policy_set_stun_server_username((::LinphoneNatPolicy *)mPrivPtr, StringUtilities::cppStringToC(username));
}
bool linphone::NatPolicy::tcpTurnTransportEnabled() const {
	return (linphone_nat_policy_tcp_turn_transport_enabled((::LinphoneNatPolicy *)mPrivPtr) != FALSE);
}
void linphone::NatPolicy::enableTcpTurnTransport(bool enable) {
	linphone_nat_policy_enable_tcp_turn_transport((::LinphoneNatPolicy *)mPrivPtr, enable);
}
bool linphone::NatPolicy::tlsTurnTransportEnabled() const {
	return (linphone_nat_policy_tls_turn_transport_enabled((::LinphoneNatPolicy *)mPrivPtr) != FALSE);
}
void linphone::NatPolicy::enableTlsTurnTransport(bool enable) {
	linphone_nat_policy_enable_tls_turn_transport((::LinphoneNatPolicy *)mPrivPtr, enable);
}
bool linphone::NatPolicy::turnEnabled() const {
	return (linphone_nat_policy_turn_enabled((::LinphoneNatPolicy *)mPrivPtr) != FALSE);
}
void linphone::NatPolicy::enableTurn(bool enable) {
	linphone_nat_policy_enable_turn((::LinphoneNatPolicy *)mPrivPtr, enable);
}
bool linphone::NatPolicy::udpTurnTransportEnabled() const {
	return (linphone_nat_policy_udp_turn_transport_enabled((::LinphoneNatPolicy *)mPrivPtr) != FALSE);
}
void linphone::NatPolicy::enableUdpTurnTransport(bool enable) {
	linphone_nat_policy_enable_udp_turn_transport((::LinphoneNatPolicy *)mPrivPtr, enable);
}
bool linphone::NatPolicy::upnpEnabled() const {
	return (linphone_nat_policy_upnp_enabled((::LinphoneNatPolicy *)mPrivPtr) != FALSE);
}
void linphone::NatPolicy::enableUpnp(bool enable) {
	linphone_nat_policy_enable_upnp((::LinphoneNatPolicy *)mPrivPtr, enable);
}
void linphone::NatPolicy::clear() {
	linphone_nat_policy_clear((::LinphoneNatPolicy *)mPrivPtr);
}
std::shared_ptr<linphone::NatPolicy> linphone::NatPolicy::clone() const {
	return Object::cPtrToSharedPtr<linphone::NatPolicy>(linphone_nat_policy_clone((::LinphoneNatPolicy *)mPrivPtr), false);
}
void linphone::NatPolicy::resolveStunServer() {
	linphone_nat_policy_resolve_stun_server((::LinphoneNatPolicy *)mPrivPtr);
}




linphone::AuthInfo::AuthInfo(void *ptr, bool takeRef): Object(ptr, takeRef) {
}



std::string linphone::AuthInfo::getAlgorithm() const {
	return StringUtilities::cStringToCpp(linphone_auth_info_get_algorithm((::LinphoneAuthInfo *)mPrivPtr));
}
void linphone::AuthInfo::setAlgorithm(const std::string & algorithm) {
	linphone_auth_info_set_algorithm((::LinphoneAuthInfo *)mPrivPtr, StringUtilities::cppStringToC(algorithm));
}
std::list<std::string> linphone::AuthInfo::getAvailableAlgorithms() const {
	return StringBctbxListWrapper::bctbxListToCppList(linphone_auth_info_get_available_algorithms((::LinphoneAuthInfo *)mPrivPtr));
}
void linphone::AuthInfo::setAvailableAlgorithms(const std::list<std::string> & algorithms) {
	linphone_auth_info_set_available_algorithms((::LinphoneAuthInfo *)mPrivPtr, StringBctbxListWrapper(algorithms).c_list());
}
std::string linphone::AuthInfo::getDomain() const {
	return StringUtilities::cStringToCpp(linphone_auth_info_get_domain((::LinphoneAuthInfo *)mPrivPtr));
}
void linphone::AuthInfo::setDomain(const std::string & domain) {
	linphone_auth_info_set_domain((::LinphoneAuthInfo *)mPrivPtr, StringUtilities::cppStringToC(domain));
}
std::string linphone::AuthInfo::getHa1() const {
	return StringUtilities::cStringToCpp(linphone_auth_info_get_ha1((::LinphoneAuthInfo *)mPrivPtr));
}
void linphone::AuthInfo::setHa1(const std::string & ha1) {
	linphone_auth_info_set_ha1((::LinphoneAuthInfo *)mPrivPtr, StringUtilities::cppStringToC(ha1));
}
std::string linphone::AuthInfo::getPassword() const {
	return StringUtilities::cStringToCpp(linphone_auth_info_get_password((::LinphoneAuthInfo *)mPrivPtr));
}
void linphone::AuthInfo::setPassword(const std::string & password) {
	linphone_auth_info_set_password((::LinphoneAuthInfo *)mPrivPtr, StringUtilities::cppStringToC(password));
}
std::string linphone::AuthInfo::getRealm() const {
	return StringUtilities::cStringToCpp(linphone_auth_info_get_realm((::LinphoneAuthInfo *)mPrivPtr));
}
void linphone::AuthInfo::setRealm(const std::string & realm) {
	linphone_auth_info_set_realm((::LinphoneAuthInfo *)mPrivPtr, StringUtilities::cppStringToC(realm));
}
std::string linphone::AuthInfo::getTlsCert() const {
	return StringUtilities::cStringToCpp(linphone_auth_info_get_tls_cert((::LinphoneAuthInfo *)mPrivPtr));
}
void linphone::AuthInfo::setTlsCert(const std::string & tlsCert) {
	linphone_auth_info_set_tls_cert((::LinphoneAuthInfo *)mPrivPtr, StringUtilities::cppStringToC(tlsCert));
}
std::string linphone::AuthInfo::getTlsCertPath() const {
	return StringUtilities::cStringToCpp(linphone_auth_info_get_tls_cert_path((::LinphoneAuthInfo *)mPrivPtr));
}
void linphone::AuthInfo::setTlsCertPath(const std::string & tlsCertPath) {
	linphone_auth_info_set_tls_cert_path((::LinphoneAuthInfo *)mPrivPtr, StringUtilities::cppStringToC(tlsCertPath));
}
std::string linphone::AuthInfo::getTlsKey() const {
	return StringUtilities::cStringToCpp(linphone_auth_info_get_tls_key((::LinphoneAuthInfo *)mPrivPtr));
}
void linphone::AuthInfo::setTlsKey(const std::string & tlsKey) {
	linphone_auth_info_set_tls_key((::LinphoneAuthInfo *)mPrivPtr, StringUtilities::cppStringToC(tlsKey));
}
std::string linphone::AuthInfo::getTlsKeyPath() const {
	return StringUtilities::cStringToCpp(linphone_auth_info_get_tls_key_path((::LinphoneAuthInfo *)mPrivPtr));
}
void linphone::AuthInfo::setTlsKeyPath(const std::string & tlsKeyPath) {
	linphone_auth_info_set_tls_key_path((::LinphoneAuthInfo *)mPrivPtr, StringUtilities::cppStringToC(tlsKeyPath));
}
std::string linphone::AuthInfo::getUserid() const {
	return StringUtilities::cStringToCpp(linphone_auth_info_get_userid((::LinphoneAuthInfo *)mPrivPtr));
}
void linphone::AuthInfo::setUserid(const std::string & userId) {
	linphone_auth_info_set_userid((::LinphoneAuthInfo *)mPrivPtr, StringUtilities::cppStringToC(userId));
}
std::string linphone::AuthInfo::getUsername() const {
	return StringUtilities::cStringToCpp(linphone_auth_info_get_username((::LinphoneAuthInfo *)mPrivPtr));
}
void linphone::AuthInfo::setUsername(const std::string & username) {
	linphone_auth_info_set_username((::LinphoneAuthInfo *)mPrivPtr, StringUtilities::cppStringToC(username));
}
void linphone::AuthInfo::addAvailableAlgorithm(const std::string & algorithm) {
	linphone_auth_info_add_available_algorithm((::LinphoneAuthInfo *)mPrivPtr, StringUtilities::cppStringToC(algorithm));
}
void linphone::AuthInfo::clearAvailableAlgorithms() {
	linphone_auth_info_clear_available_algorithms((::LinphoneAuthInfo *)mPrivPtr);
}
std::shared_ptr<linphone::AuthInfo> linphone::AuthInfo::clone() const {
	return Object::cPtrToSharedPtr<linphone::AuthInfo>(linphone_auth_info_clone((::LinphoneAuthInfo *)mPrivPtr), false);
}
bool linphone::AuthInfo::isEqualButAlgorithms(const std::shared_ptr<const linphone::AuthInfo> & authInfo2) const {
	return (linphone_auth_info_is_equal_but_algorithms((::LinphoneAuthInfo *)mPrivPtr, (::LinphoneAuthInfo *)Object::sharedPtrToCPtr(std::static_pointer_cast<const Object,const linphone::AuthInfo>(authInfo2))) != FALSE);
}




linphone::Recorder::Recorder(void *ptr, bool takeRef): Object(ptr, takeRef) {
}



float linphone::Recorder::getCaptureVolume() const {
	return linphone_recorder_get_capture_volume((::LinphoneRecorder *)mPrivPtr);
}
int linphone::Recorder::getDuration() const {
	return linphone_recorder_get_duration((::LinphoneRecorder *)mPrivPtr);
}
std::string linphone::Recorder::getFile() const {
	return StringUtilities::cStringToCpp(linphone_recorder_get_file((::LinphoneRecorder *)mPrivPtr));
}
std::shared_ptr<const linphone::RecorderParams> linphone::Recorder::getParams() const {
	return Object::cPtrToSharedPtr<const linphone::RecorderParams>(linphone_recorder_get_params((::LinphoneRecorder *)mPrivPtr));
}
void linphone::Recorder::setParams(const std::shared_ptr<linphone::RecorderParams> & params) {
	linphone_recorder_set_params((::LinphoneRecorder *)mPrivPtr, (::LinphoneRecorderParams *)Object::sharedPtrToCPtr(std::static_pointer_cast<Object,linphone::RecorderParams>(params)));
}
linphone::Recorder::State linphone::Recorder::getState() const {
	return (State)linphone_recorder_get_state((::LinphoneRecorder *)mPrivPtr);
}
void linphone::Recorder::close() {
	linphone_recorder_close((::LinphoneRecorder *)mPrivPtr);
}
std::shared_ptr<linphone::Content> linphone::Recorder::createContent() {
	return Object::cPtrToSharedPtr<linphone::Content>(linphone_recorder_create_content((::LinphoneRecorder *)mPrivPtr), false);
}
linphone::Status linphone::Recorder::open(const std::string & file) {
	return linphone_recorder_open((::LinphoneRecorder *)mPrivPtr, StringUtilities::cppStringToC(file));
}
linphone::Status linphone::Recorder::pause() {
	return linphone_recorder_pause((::LinphoneRecorder *)mPrivPtr);
}
linphone::Status linphone::Recorder::start() {
	return linphone_recorder_start((::LinphoneRecorder *)mPrivPtr);
}



static void linphone_chat_room_cbs_on_is_composing_received_cb(LinphoneChatRoom * chat_room, const LinphoneAddress * remote_address, bool_t is_composing) {
	LinphoneChatRoomCbs *cbs = linphone_chat_room_get_current_callbacks(chat_room);
	if (cbs) {
		// Make a copy of the list of listeners, so that it is possible to remove a listener from a listener without corrupting the list.
		std::list<std::shared_ptr<Listener> > listeners = *static_cast<std::list<std::shared_ptr<Listener> > *>(belle_sip_object_data_get((::belle_sip_object_t *)cbs, MultiListenableObject::sListenerListName));
		for(std::list<std::shared_ptr<Listener> >::iterator it=listeners.begin(); it!=listeners.end(); it++) {
			std::shared_ptr<ChatRoomListener> listener = std::static_pointer_cast<ChatRoomListener,Listener>(*it);
			listener->onIsComposingReceived(Object::cPtrToSharedPtr<ChatRoom>(chat_room), Object::cPtrToSharedPtr<const Address>(remote_address), (is_composing != FALSE));
		}
	}
}
static void linphone_chat_room_cbs_on_message_received_cb(LinphoneChatRoom * chat_room, LinphoneChatMessage * message) {
	LinphoneChatRoomCbs *cbs = linphone_chat_room_get_current_callbacks(chat_room);
	if (cbs) {
		// Make a copy of the list of listeners, so that it is possible to remove a listener from a listener without corrupting the list.
		std::list<std::shared_ptr<Listener> > listeners = *static_cast<std::list<std::shared_ptr<Listener> > *>(belle_sip_object_data_get((::belle_sip_object_t *)cbs, MultiListenableObject::sListenerListName));
		for(std::list<std::shared_ptr<Listener> >::iterator it=listeners.begin(); it!=listeners.end(); it++) {
			std::shared_ptr<ChatRoomListener> listener = std::static_pointer_cast<ChatRoomListener,Listener>(*it);
			listener->onMessageReceived(Object::cPtrToSharedPtr<ChatRoom>(chat_room), Object::cPtrToSharedPtr<ChatMessage>(message));
		}
	}
}
static void linphone_chat_room_cbs_on_messages_received_cb(LinphoneChatRoom * chat_room, const bctbx_list_t * chat_messages) {
	LinphoneChatRoomCbs *cbs = linphone_chat_room_get_current_callbacks(chat_room);
	if (cbs) {
		// Make a copy of the list of listeners, so that it is possible to remove a listener from a listener without corrupting the list.
		std::list<std::shared_ptr<Listener> > listeners = *static_cast<std::list<std::shared_ptr<Listener> > *>(belle_sip_object_data_get((::belle_sip_object_t *)cbs, MultiListenableObject::sListenerListName));
		for(std::list<std::shared_ptr<Listener> >::iterator it=listeners.begin(); it!=listeners.end(); it++) {
			std::shared_ptr<ChatRoomListener> listener = std::static_pointer_cast<ChatRoomListener,Listener>(*it);
			listener->onMessagesReceived(Object::cPtrToSharedPtr<ChatRoom>(chat_room), ObjectBctbxListWrapper<ChatMessage>::bctbxListToCppList(chat_messages, true));
		}
	}
}
static void linphone_chat_room_cbs_on_new_event_cb(LinphoneChatRoom * chat_room, const LinphoneEventLog * event_log) {
	LinphoneChatRoomCbs *cbs = linphone_chat_room_get_current_callbacks(chat_room);
	if (cbs) {
		// Make a copy of the list of listeners, so that it is possible to remove a listener from a listener without corrupting the list.
		std::list<std::shared_ptr<Listener> > listeners = *static_cast<std::list<std::shared_ptr<Listener> > *>(belle_sip_object_data_get((::belle_sip_object_t *)cbs, MultiListenableObject::sListenerListName));
		for(std::list<std::shared_ptr<Listener> >::iterator it=listeners.begin(); it!=listeners.end(); it++) {
			std::shared_ptr<ChatRoomListener> listener = std::static_pointer_cast<ChatRoomListener,Listener>(*it);
			listener->onNewEvent(Object::cPtrToSharedPtr<ChatRoom>(chat_room), Object::cPtrToSharedPtr<const EventLog>(event_log));
		}
	}
}
static void linphone_chat_room_cbs_on_new_events_cb(LinphoneChatRoom * chat_room, const bctbx_list_t * event_logs) {
	LinphoneChatRoomCbs *cbs = linphone_chat_room_get_current_callbacks(chat_room);
	if (cbs) {
		// Make a copy of the list of listeners, so that it is possible to remove a listener from a listener without corrupting the list.
		std::list<std::shared_ptr<Listener> > listeners = *static_cast<std::list<std::shared_ptr<Listener> > *>(belle_sip_object_data_get((::belle_sip_object_t *)cbs, MultiListenableObject::sListenerListName));
		for(std::list<std::shared_ptr<Listener> >::iterator it=listeners.begin(); it!=listeners.end(); it++) {
			std::shared_ptr<ChatRoomListener> listener = std::static_pointer_cast<ChatRoomListener,Listener>(*it);
			listener->onNewEvents(Object::cPtrToSharedPtr<ChatRoom>(chat_room), ObjectBctbxListWrapper<EventLog>::bctbxListToCppList(event_logs, true));
		}
	}
}
static void linphone_chat_room_cbs_on_chat_message_received_cb(LinphoneChatRoom * chat_room, const LinphoneEventLog * event_log) {
	LinphoneChatRoomCbs *cbs = linphone_chat_room_get_current_callbacks(chat_room);
	if (cbs) {
		// Make a copy of the list of listeners, so that it is possible to remove a listener from a listener without corrupting the list.
		std::list<std::shared_ptr<Listener> > listeners = *static_cast<std::list<std::shared_ptr<Listener> > *>(belle_sip_object_data_get((::belle_sip_object_t *)cbs, MultiListenableObject::sListenerListName));
		for(std::list<std::shared_ptr<Listener> >::iterator it=listeners.begin(); it!=listeners.end(); it++) {
			std::shared_ptr<ChatRoomListener> listener = std::static_pointer_cast<ChatRoomListener,Listener>(*it);
			listener->onChatMessageReceived(Object::cPtrToSharedPtr<ChatRoom>(chat_room), Object::cPtrToSharedPtr<const EventLog>(event_log));
		}
	}
}
static void linphone_chat_room_cbs_on_chat_messages_received_cb(LinphoneChatRoom * chat_room, const bctbx_list_t * event_logs) {
	LinphoneChatRoomCbs *cbs = linphone_chat_room_get_current_callbacks(chat_room);
	if (cbs) {
		// Make a copy of the list of listeners, so that it is possible to remove a listener from a listener without corrupting the list.
		std::list<std::shared_ptr<Listener> > listeners = *static_cast<std::list<std::shared_ptr<Listener> > *>(belle_sip_object_data_get((::belle_sip_object_t *)cbs, MultiListenableObject::sListenerListName));
		for(std::list<std::shared_ptr<Listener> >::iterator it=listeners.begin(); it!=listeners.end(); it++) {
			std::shared_ptr<ChatRoomListener> listener = std::static_pointer_cast<ChatRoomListener,Listener>(*it);
			listener->onChatMessagesReceived(Object::cPtrToSharedPtr<ChatRoom>(chat_room), ObjectBctbxListWrapper<EventLog>::bctbxListToCppList(event_logs, true));
		}
	}
}
static void linphone_chat_room_cbs_on_chat_message_sending_cb(LinphoneChatRoom * chat_room, const LinphoneEventLog * event_log) {
	LinphoneChatRoomCbs *cbs = linphone_chat_room_get_current_callbacks(chat_room);
	if (cbs) {
		// Make a copy of the list of listeners, so that it is possible to remove a listener from a listener without corrupting the list.
		std::list<std::shared_ptr<Listener> > listeners = *static_cast<std::list<std::shared_ptr<Listener> > *>(belle_sip_object_data_get((::belle_sip_object_t *)cbs, MultiListenableObject::sListenerListName));
		for(std::list<std::shared_ptr<Listener> >::iterator it=listeners.begin(); it!=listeners.end(); it++) {
			std::shared_ptr<ChatRoomListener> listener = std::static_pointer_cast<ChatRoomListener,Listener>(*it);
			listener->onChatMessageSending(Object::cPtrToSharedPtr<ChatRoom>(chat_room), Object::cPtrToSharedPtr<const EventLog>(event_log));
		}
	}
}
static void linphone_chat_room_cbs_on_chat_message_sent_cb(LinphoneChatRoom * chat_room, const LinphoneEventLog * event_log) {
	LinphoneChatRoomCbs *cbs = linphone_chat_room_get_current_callbacks(chat_room);
	if (cbs) {
		// Make a copy of the list of listeners, so that it is possible to remove a listener from a listener without corrupting the list.
		std::list<std::shared_ptr<Listener> > listeners = *static_cast<std::list<std::shared_ptr<Listener> > *>(belle_sip_object_data_get((::belle_sip_object_t *)cbs, MultiListenableObject::sListenerListName));
		for(std::list<std::shared_ptr<Listener> >::iterator it=listeners.begin(); it!=listeners.end(); it++) {
			std::shared_ptr<ChatRoomListener> listener = std::static_pointer_cast<ChatRoomListener,Listener>(*it);
			listener->onChatMessageSent(Object::cPtrToSharedPtr<ChatRoom>(chat_room), Object::cPtrToSharedPtr<const EventLog>(event_log));
		}
	}
}
static void linphone_chat_room_cbs_on_participant_added_cb(LinphoneChatRoom * chat_room, const LinphoneEventLog * event_log) {
	LinphoneChatRoomCbs *cbs = linphone_chat_room_get_current_callbacks(chat_room);
	if (cbs) {
		// Make a copy of the list of listeners, so that it is possible to remove a listener from a listener without corrupting the list.
		std::list<std::shared_ptr<Listener> > listeners = *static_cast<std::list<std::shared_ptr<Listener> > *>(belle_sip_object_data_get((::belle_sip_object_t *)cbs, MultiListenableObject::sListenerListName));
		for(std::list<std::shared_ptr<Listener> >::iterator it=listeners.begin(); it!=listeners.end(); it++) {
			std::shared_ptr<ChatRoomListener> listener = std::static_pointer_cast<ChatRoomListener,Listener>(*it);
			listener->onParticipantAdded(Object::cPtrToSharedPtr<ChatRoom>(chat_room), Object::cPtrToSharedPtr<const EventLog>(event_log));
		}
	}
}
static void linphone_chat_room_cbs_on_participant_removed_cb(LinphoneChatRoom * chat_room, const LinphoneEventLog * event_log) {
	LinphoneChatRoomCbs *cbs = linphone_chat_room_get_current_callbacks(chat_room);
	if (cbs) {
		// Make a copy of the list of listeners, so that it is possible to remove a listener from a listener without corrupting the list.
		std::list<std::shared_ptr<Listener> > listeners = *static_cast<std::list<std::shared_ptr<Listener> > *>(belle_sip_object_data_get((::belle_sip_object_t *)cbs, MultiListenableObject::sListenerListName));
		for(std::list<std::shared_ptr<Listener> >::iterator it=listeners.begin(); it!=listeners.end(); it++) {
			std::shared_ptr<ChatRoomListener> listener = std::static_pointer_cast<ChatRoomListener,Listener>(*it);
			listener->onParticipantRemoved(Object::cPtrToSharedPtr<ChatRoom>(chat_room), Object::cPtrToSharedPtr<const EventLog>(event_log));
		}
	}
}
static void linphone_chat_room_cbs_on_participant_admin_status_changed_cb(LinphoneChatRoom * chat_room, const LinphoneEventLog * event_log) {
	LinphoneChatRoomCbs *cbs = linphone_chat_room_get_current_callbacks(chat_room);
	if (cbs) {
		// Make a copy of the list of listeners, so that it is possible to remove a listener from a listener without corrupting the list.
		std::list<std::shared_ptr<Listener> > listeners = *static_cast<std::list<std::shared_ptr<Listener> > *>(belle_sip_object_data_get((::belle_sip_object_t *)cbs, MultiListenableObject::sListenerListName));
		for(std::list<std::shared_ptr<Listener> >::iterator it=listeners.begin(); it!=listeners.end(); it++) {
			std::shared_ptr<ChatRoomListener> listener = std::static_pointer_cast<ChatRoomListener,Listener>(*it);
			listener->onParticipantAdminStatusChanged(Object::cPtrToSharedPtr<ChatRoom>(chat_room), Object::cPtrToSharedPtr<const EventLog>(event_log));
		}
	}
}
static void linphone_chat_room_cbs_on_state_changed_cb(LinphoneChatRoom * chat_room, LinphoneChatRoomState newState) {
	LinphoneChatRoomCbs *cbs = linphone_chat_room_get_current_callbacks(chat_room);
	if (cbs) {
		// Make a copy of the list of listeners, so that it is possible to remove a listener from a listener without corrupting the list.
		std::list<std::shared_ptr<Listener> > listeners = *static_cast<std::list<std::shared_ptr<Listener> > *>(belle_sip_object_data_get((::belle_sip_object_t *)cbs, MultiListenableObject::sListenerListName));
		for(std::list<std::shared_ptr<Listener> >::iterator it=listeners.begin(); it!=listeners.end(); it++) {
			std::shared_ptr<ChatRoomListener> listener = std::static_pointer_cast<ChatRoomListener,Listener>(*it);
			listener->onStateChanged(Object::cPtrToSharedPtr<ChatRoom>(chat_room), (ChatRoom::State)newState);
		}
	}
}
static void linphone_chat_room_cbs_on_security_event_cb(LinphoneChatRoom * chat_room, const LinphoneEventLog * event_log) {
	LinphoneChatRoomCbs *cbs = linphone_chat_room_get_current_callbacks(chat_room);
	if (cbs) {
		// Make a copy of the list of listeners, so that it is possible to remove a listener from a listener without corrupting the list.
		std::list<std::shared_ptr<Listener> > listeners = *static_cast<std::list<std::shared_ptr<Listener> > *>(belle_sip_object_data_get((::belle_sip_object_t *)cbs, MultiListenableObject::sListenerListName));
		for(std::list<std::shared_ptr<Listener> >::iterator it=listeners.begin(); it!=listeners.end(); it++) {
			std::shared_ptr<ChatRoomListener> listener = std::static_pointer_cast<ChatRoomListener,Listener>(*it);
			listener->onSecurityEvent(Object::cPtrToSharedPtr<ChatRoom>(chat_room), Object::cPtrToSharedPtr<const EventLog>(event_log));
		}
	}
}
static void linphone_chat_room_cbs_on_subject_changed_cb(LinphoneChatRoom * chat_room, const LinphoneEventLog * event_log) {
	LinphoneChatRoomCbs *cbs = linphone_chat_room_get_current_callbacks(chat_room);
	if (cbs) {
		// Make a copy of the list of listeners, so that it is possible to remove a listener from a listener without corrupting the list.
		std::list<std::shared_ptr<Listener> > listeners = *static_cast<std::list<std::shared_ptr<Listener> > *>(belle_sip_object_data_get((::belle_sip_object_t *)cbs, MultiListenableObject::sListenerListName));
		for(std::list<std::shared_ptr<Listener> >::iterator it=listeners.begin(); it!=listeners.end(); it++) {
			std::shared_ptr<ChatRoomListener> listener = std::static_pointer_cast<ChatRoomListener,Listener>(*it);
			listener->onSubjectChanged(Object::cPtrToSharedPtr<ChatRoom>(chat_room), Object::cPtrToSharedPtr<const EventLog>(event_log));
		}
	}
}
static void linphone_chat_room_cbs_on_undecryptable_message_received_cb(LinphoneChatRoom * chat_room, LinphoneChatMessage * message) {
	LinphoneChatRoomCbs *cbs = linphone_chat_room_get_current_callbacks(chat_room);
	if (cbs) {
		// Make a copy of the list of listeners, so that it is possible to remove a listener from a listener without corrupting the list.
		std::list<std::shared_ptr<Listener> > listeners = *static_cast<std::list<std::shared_ptr<Listener> > *>(belle_sip_object_data_get((::belle_sip_object_t *)cbs, MultiListenableObject::sListenerListName));
		for(std::list<std::shared_ptr<Listener> >::iterator it=listeners.begin(); it!=listeners.end(); it++) {
			std::shared_ptr<ChatRoomListener> listener = std::static_pointer_cast<ChatRoomListener,Listener>(*it);
			listener->onUndecryptableMessageReceived(Object::cPtrToSharedPtr<ChatRoom>(chat_room), Object::cPtrToSharedPtr<ChatMessage>(message));
		}
	}
}
static void linphone_chat_room_cbs_on_participant_device_added_cb(LinphoneChatRoom * chat_room, const LinphoneEventLog * event_log) {
	LinphoneChatRoomCbs *cbs = linphone_chat_room_get_current_callbacks(chat_room);
	if (cbs) {
		// Make a copy of the list of listeners, so that it is possible to remove a listener from a listener without corrupting the list.
		std::list<std::shared_ptr<Listener> > listeners = *static_cast<std::list<std::shared_ptr<Listener> > *>(belle_sip_object_data_get((::belle_sip_object_t *)cbs, MultiListenableObject::sListenerListName));
		for(std::list<std::shared_ptr<Listener> >::iterator it=listeners.begin(); it!=listeners.end(); it++) {
			std::shared_ptr<ChatRoomListener> listener = std::static_pointer_cast<ChatRoomListener,Listener>(*it);
			listener->onParticipantDeviceAdded(Object::cPtrToSharedPtr<ChatRoom>(chat_room), Object::cPtrToSharedPtr<const EventLog>(event_log));
		}
	}
}
static void linphone_chat_room_cbs_on_participant_device_removed_cb(LinphoneChatRoom * chat_room, const LinphoneEventLog * event_log) {
	LinphoneChatRoomCbs *cbs = linphone_chat_room_get_current_callbacks(chat_room);
	if (cbs) {
		// Make a copy of the list of listeners, so that it is possible to remove a listener from a listener without corrupting the list.
		std::list<std::shared_ptr<Listener> > listeners = *static_cast<std::list<std::shared_ptr<Listener> > *>(belle_sip_object_data_get((::belle_sip_object_t *)cbs, MultiListenableObject::sListenerListName));
		for(std::list<std::shared_ptr<Listener> >::iterator it=listeners.begin(); it!=listeners.end(); it++) {
			std::shared_ptr<ChatRoomListener> listener = std::static_pointer_cast<ChatRoomListener,Listener>(*it);
			listener->onParticipantDeviceRemoved(Object::cPtrToSharedPtr<ChatRoom>(chat_room), Object::cPtrToSharedPtr<const EventLog>(event_log));
		}
	}
}
static void linphone_chat_room_cbs_on_participant_device_state_changed_cb(LinphoneChatRoom * chat_room, const LinphoneEventLog * event_log, const LinphoneParticipantDeviceState state) {
	LinphoneChatRoomCbs *cbs = linphone_chat_room_get_current_callbacks(chat_room);
	if (cbs) {
		// Make a copy of the list of listeners, so that it is possible to remove a listener from a listener without corrupting the list.
		std::list<std::shared_ptr<Listener> > listeners = *static_cast<std::list<std::shared_ptr<Listener> > *>(belle_sip_object_data_get((::belle_sip_object_t *)cbs, MultiListenableObject::sListenerListName));
		for(std::list<std::shared_ptr<Listener> >::iterator it=listeners.begin(); it!=listeners.end(); it++) {
			std::shared_ptr<ChatRoomListener> listener = std::static_pointer_cast<ChatRoomListener,Listener>(*it);
			listener->onParticipantDeviceStateChanged(Object::cPtrToSharedPtr<ChatRoom>(chat_room), Object::cPtrToSharedPtr<const EventLog>(event_log), (ParticipantDevice::State)state);
		}
	}
}
static void linphone_chat_room_cbs_on_participant_device_media_availability_changed_cb(LinphoneChatRoom * chat_room, const LinphoneEventLog * event_log) {
	LinphoneChatRoomCbs *cbs = linphone_chat_room_get_current_callbacks(chat_room);
	if (cbs) {
		// Make a copy of the list of listeners, so that it is possible to remove a listener from a listener without corrupting the list.
		std::list<std::shared_ptr<Listener> > listeners = *static_cast<std::list<std::shared_ptr<Listener> > *>(belle_sip_object_data_get((::belle_sip_object_t *)cbs, MultiListenableObject::sListenerListName));
		for(std::list<std::shared_ptr<Listener> >::iterator it=listeners.begin(); it!=listeners.end(); it++) {
			std::shared_ptr<ChatRoomListener> listener = std::static_pointer_cast<ChatRoomListener,Listener>(*it);
			listener->onParticipantDeviceMediaAvailabilityChanged(Object::cPtrToSharedPtr<ChatRoom>(chat_room), Object::cPtrToSharedPtr<const EventLog>(event_log));
		}
	}
}
static void linphone_chat_room_cbs_on_conference_joined_cb(LinphoneChatRoom * chat_room, const LinphoneEventLog * event_log) {
	LinphoneChatRoomCbs *cbs = linphone_chat_room_get_current_callbacks(chat_room);
	if (cbs) {
		// Make a copy of the list of listeners, so that it is possible to remove a listener from a listener without corrupting the list.
		std::list<std::shared_ptr<Listener> > listeners = *static_cast<std::list<std::shared_ptr<Listener> > *>(belle_sip_object_data_get((::belle_sip_object_t *)cbs, MultiListenableObject::sListenerListName));
		for(std::list<std::shared_ptr<Listener> >::iterator it=listeners.begin(); it!=listeners.end(); it++) {
			std::shared_ptr<ChatRoomListener> listener = std::static_pointer_cast<ChatRoomListener,Listener>(*it);
			listener->onConferenceJoined(Object::cPtrToSharedPtr<ChatRoom>(chat_room), Object::cPtrToSharedPtr<const EventLog>(event_log));
		}
	}
}
static void linphone_chat_room_cbs_on_conference_left_cb(LinphoneChatRoom * chat_room, const LinphoneEventLog * event_log) {
	LinphoneChatRoomCbs *cbs = linphone_chat_room_get_current_callbacks(chat_room);
	if (cbs) {
		// Make a copy of the list of listeners, so that it is possible to remove a listener from a listener without corrupting the list.
		std::list<std::shared_ptr<Listener> > listeners = *static_cast<std::list<std::shared_ptr<Listener> > *>(belle_sip_object_data_get((::belle_sip_object_t *)cbs, MultiListenableObject::sListenerListName));
		for(std::list<std::shared_ptr<Listener> >::iterator it=listeners.begin(); it!=listeners.end(); it++) {
			std::shared_ptr<ChatRoomListener> listener = std::static_pointer_cast<ChatRoomListener,Listener>(*it);
			listener->onConferenceLeft(Object::cPtrToSharedPtr<ChatRoom>(chat_room), Object::cPtrToSharedPtr<const EventLog>(event_log));
		}
	}
}
static void linphone_chat_room_cbs_on_ephemeral_event_cb(LinphoneChatRoom * chat_room, const LinphoneEventLog * event_log) {
	LinphoneChatRoomCbs *cbs = linphone_chat_room_get_current_callbacks(chat_room);
	if (cbs) {
		// Make a copy of the list of listeners, so that it is possible to remove a listener from a listener without corrupting the list.
		std::list<std::shared_ptr<Listener> > listeners = *static_cast<std::list<std::shared_ptr<Listener> > *>(belle_sip_object_data_get((::belle_sip_object_t *)cbs, MultiListenableObject::sListenerListName));
		for(std::list<std::shared_ptr<Listener> >::iterator it=listeners.begin(); it!=listeners.end(); it++) {
			std::shared_ptr<ChatRoomListener> listener = std::static_pointer_cast<ChatRoomListener,Listener>(*it);
			listener->onEphemeralEvent(Object::cPtrToSharedPtr<ChatRoom>(chat_room), Object::cPtrToSharedPtr<const EventLog>(event_log));
		}
	}
}
static void linphone_chat_room_cbs_on_ephemeral_message_timer_started_cb(LinphoneChatRoom * chat_room, const LinphoneEventLog * event_log) {
	LinphoneChatRoomCbs *cbs = linphone_chat_room_get_current_callbacks(chat_room);
	if (cbs) {
		// Make a copy of the list of listeners, so that it is possible to remove a listener from a listener without corrupting the list.
		std::list<std::shared_ptr<Listener> > listeners = *static_cast<std::list<std::shared_ptr<Listener> > *>(belle_sip_object_data_get((::belle_sip_object_t *)cbs, MultiListenableObject::sListenerListName));
		for(std::list<std::shared_ptr<Listener> >::iterator it=listeners.begin(); it!=listeners.end(); it++) {
			std::shared_ptr<ChatRoomListener> listener = std::static_pointer_cast<ChatRoomListener,Listener>(*it);
			listener->onEphemeralMessageTimerStarted(Object::cPtrToSharedPtr<ChatRoom>(chat_room), Object::cPtrToSharedPtr<const EventLog>(event_log));
		}
	}
}
static void linphone_chat_room_cbs_on_ephemeral_message_deleted_cb(LinphoneChatRoom * chat_room, const LinphoneEventLog * event_log) {
	LinphoneChatRoomCbs *cbs = linphone_chat_room_get_current_callbacks(chat_room);
	if (cbs) {
		// Make a copy of the list of listeners, so that it is possible to remove a listener from a listener without corrupting the list.
		std::list<std::shared_ptr<Listener> > listeners = *static_cast<std::list<std::shared_ptr<Listener> > *>(belle_sip_object_data_get((::belle_sip_object_t *)cbs, MultiListenableObject::sListenerListName));
		for(std::list<std::shared_ptr<Listener> >::iterator it=listeners.begin(); it!=listeners.end(); it++) {
			std::shared_ptr<ChatRoomListener> listener = std::static_pointer_cast<ChatRoomListener,Listener>(*it);
			listener->onEphemeralMessageDeleted(Object::cPtrToSharedPtr<ChatRoom>(chat_room), Object::cPtrToSharedPtr<const EventLog>(event_log));
		}
	}
}
static void linphone_chat_room_cbs_on_conference_address_generation_cb(LinphoneChatRoom * chat_room) {
	LinphoneChatRoomCbs *cbs = linphone_chat_room_get_current_callbacks(chat_room);
	if (cbs) {
		// Make a copy of the list of listeners, so that it is possible to remove a listener from a listener without corrupting the list.
		std::list<std::shared_ptr<Listener> > listeners = *static_cast<std::list<std::shared_ptr<Listener> > *>(belle_sip_object_data_get((::belle_sip_object_t *)cbs, MultiListenableObject::sListenerListName));
		for(std::list<std::shared_ptr<Listener> >::iterator it=listeners.begin(); it!=listeners.end(); it++) {
			std::shared_ptr<ChatRoomListener> listener = std::static_pointer_cast<ChatRoomListener,Listener>(*it);
			listener->onConferenceAddressGeneration(Object::cPtrToSharedPtr<ChatRoom>(chat_room));
		}
	}
}
static void linphone_chat_room_cbs_on_participant_registration_subscription_requested_cb(LinphoneChatRoom * chat_room, const LinphoneAddress * participant_address) {
	LinphoneChatRoomCbs *cbs = linphone_chat_room_get_current_callbacks(chat_room);
	if (cbs) {
		// Make a copy of the list of listeners, so that it is possible to remove a listener from a listener without corrupting the list.
		std::list<std::shared_ptr<Listener> > listeners = *static_cast<std::list<std::shared_ptr<Listener> > *>(belle_sip_object_data_get((::belle_sip_object_t *)cbs, MultiListenableObject::sListenerListName));
		for(std::list<std::shared_ptr<Listener> >::iterator it=listeners.begin(); it!=listeners.end(); it++) {
			std::shared_ptr<ChatRoomListener> listener = std::static_pointer_cast<ChatRoomListener,Listener>(*it);
			listener->onParticipantRegistrationSubscriptionRequested(Object::cPtrToSharedPtr<ChatRoom>(chat_room), Object::cPtrToSharedPtr<const Address>(participant_address));
		}
	}
}
static void linphone_chat_room_cbs_on_participant_registration_unsubscription_requested_cb(LinphoneChatRoom * chat_room, const LinphoneAddress * participant_address) {
	LinphoneChatRoomCbs *cbs = linphone_chat_room_get_current_callbacks(chat_room);
	if (cbs) {
		// Make a copy of the list of listeners, so that it is possible to remove a listener from a listener without corrupting the list.
		std::list<std::shared_ptr<Listener> > listeners = *static_cast<std::list<std::shared_ptr<Listener> > *>(belle_sip_object_data_get((::belle_sip_object_t *)cbs, MultiListenableObject::sListenerListName));
		for(std::list<std::shared_ptr<Listener> >::iterator it=listeners.begin(); it!=listeners.end(); it++) {
			std::shared_ptr<ChatRoomListener> listener = std::static_pointer_cast<ChatRoomListener,Listener>(*it);
			listener->onParticipantRegistrationUnsubscriptionRequested(Object::cPtrToSharedPtr<ChatRoom>(chat_room), Object::cPtrToSharedPtr<const Address>(participant_address));
		}
	}
}
static void linphone_chat_room_cbs_on_chat_message_should_be_stored_cb(LinphoneChatRoom * chat_room, LinphoneChatMessage * message) {
	LinphoneChatRoomCbs *cbs = linphone_chat_room_get_current_callbacks(chat_room);
	if (cbs) {
		// Make a copy of the list of listeners, so that it is possible to remove a listener from a listener without corrupting the list.
		std::list<std::shared_ptr<Listener> > listeners = *static_cast<std::list<std::shared_ptr<Listener> > *>(belle_sip_object_data_get((::belle_sip_object_t *)cbs, MultiListenableObject::sListenerListName));
		for(std::list<std::shared_ptr<Listener> >::iterator it=listeners.begin(); it!=listeners.end(); it++) {
			std::shared_ptr<ChatRoomListener> listener = std::static_pointer_cast<ChatRoomListener,Listener>(*it);
			listener->onChatMessageShouldBeStored(Object::cPtrToSharedPtr<ChatRoom>(chat_room), Object::cPtrToSharedPtr<ChatMessage>(message));
		}
	}
}
static void linphone_chat_room_cbs_on_chat_message_participant_imdn_state_changed_cb(LinphoneChatRoom * chat_room, LinphoneChatMessage * message, const LinphoneParticipantImdnState * state) {
	LinphoneChatRoomCbs *cbs = linphone_chat_room_get_current_callbacks(chat_room);
	if (cbs) {
		// Make a copy of the list of listeners, so that it is possible to remove a listener from a listener without corrupting the list.
		std::list<std::shared_ptr<Listener> > listeners = *static_cast<std::list<std::shared_ptr<Listener> > *>(belle_sip_object_data_get((::belle_sip_object_t *)cbs, MultiListenableObject::sListenerListName));
		for(std::list<std::shared_ptr<Listener> >::iterator it=listeners.begin(); it!=listeners.end(); it++) {
			std::shared_ptr<ChatRoomListener> listener = std::static_pointer_cast<ChatRoomListener,Listener>(*it);
			listener->onChatMessageParticipantImdnStateChanged(Object::cPtrToSharedPtr<ChatRoom>(chat_room), Object::cPtrToSharedPtr<ChatMessage>(message), Object::cPtrToSharedPtr<const ParticipantImdnState>(state));
		}
	}
}
static void linphone_chat_room_cbs_on_chat_room_read_cb(LinphoneChatRoom * chat_room) {
	LinphoneChatRoomCbs *cbs = linphone_chat_room_get_current_callbacks(chat_room);
	if (cbs) {
		// Make a copy of the list of listeners, so that it is possible to remove a listener from a listener without corrupting the list.
		std::list<std::shared_ptr<Listener> > listeners = *static_cast<std::list<std::shared_ptr<Listener> > *>(belle_sip_object_data_get((::belle_sip_object_t *)cbs, MultiListenableObject::sListenerListName));
		for(std::list<std::shared_ptr<Listener> >::iterator it=listeners.begin(); it!=listeners.end(); it++) {
			std::shared_ptr<ChatRoomListener> listener = std::static_pointer_cast<ChatRoomListener,Listener>(*it);
			listener->onChatRoomRead(Object::cPtrToSharedPtr<ChatRoom>(chat_room));
		}
	}
}

linphone::ChatRoom::ChatRoom(void *ptr, bool takeRef): MultiListenableObject(ptr, takeRef) {
}

void ChatRoom::addListener(const std::shared_ptr<ChatRoomListener> &listener) {
	MultiListenableObject::addListener(std::static_pointer_cast<Listener,ChatRoomListener>(listener));
}

void ChatRoom::removeListener(const std::shared_ptr<ChatRoomListener> &listener) {
	MultiListenableObject::removeListener(std::static_pointer_cast<Listener,ChatRoomListener>(listener));
}

void *ChatRoom::createCallbacks() {
	LinphoneChatRoomCbs *cbs = linphone_factory_create_chat_room_cbs(linphone_factory_get());
	linphone_chat_room_cbs_set_is_composing_received(cbs, linphone_chat_room_cbs_on_is_composing_received_cb);
	linphone_chat_room_cbs_set_message_received(cbs, linphone_chat_room_cbs_on_message_received_cb);
	linphone_chat_room_cbs_set_messages_received(cbs, linphone_chat_room_cbs_on_messages_received_cb);
	linphone_chat_room_cbs_set_new_event(cbs, linphone_chat_room_cbs_on_new_event_cb);
	linphone_chat_room_cbs_set_new_events(cbs, linphone_chat_room_cbs_on_new_events_cb);
	linphone_chat_room_cbs_set_chat_message_received(cbs, linphone_chat_room_cbs_on_chat_message_received_cb);
	linphone_chat_room_cbs_set_chat_messages_received(cbs, linphone_chat_room_cbs_on_chat_messages_received_cb);
	linphone_chat_room_cbs_set_chat_message_sending(cbs, linphone_chat_room_cbs_on_chat_message_sending_cb);
	linphone_chat_room_cbs_set_chat_message_sent(cbs, linphone_chat_room_cbs_on_chat_message_sent_cb);
	linphone_chat_room_cbs_set_participant_added(cbs, linphone_chat_room_cbs_on_participant_added_cb);
	linphone_chat_room_cbs_set_participant_removed(cbs, linphone_chat_room_cbs_on_participant_removed_cb);
	linphone_chat_room_cbs_set_participant_admin_status_changed(cbs, linphone_chat_room_cbs_on_participant_admin_status_changed_cb);
	linphone_chat_room_cbs_set_state_changed(cbs, linphone_chat_room_cbs_on_state_changed_cb);
	linphone_chat_room_cbs_set_security_event(cbs, linphone_chat_room_cbs_on_security_event_cb);
	linphone_chat_room_cbs_set_subject_changed(cbs, linphone_chat_room_cbs_on_subject_changed_cb);
	linphone_chat_room_cbs_set_undecryptable_message_received(cbs, linphone_chat_room_cbs_on_undecryptable_message_received_cb);
	linphone_chat_room_cbs_set_participant_device_added(cbs, linphone_chat_room_cbs_on_participant_device_added_cb);
	linphone_chat_room_cbs_set_participant_device_removed(cbs, linphone_chat_room_cbs_on_participant_device_removed_cb);
	linphone_chat_room_cbs_set_participant_device_state_changed(cbs, linphone_chat_room_cbs_on_participant_device_state_changed_cb);
	linphone_chat_room_cbs_set_participant_device_media_availability_changed(cbs, linphone_chat_room_cbs_on_participant_device_media_availability_changed_cb);
	linphone_chat_room_cbs_set_conference_joined(cbs, linphone_chat_room_cbs_on_conference_joined_cb);
	linphone_chat_room_cbs_set_conference_left(cbs, linphone_chat_room_cbs_on_conference_left_cb);
	linphone_chat_room_cbs_set_ephemeral_event(cbs, linphone_chat_room_cbs_on_ephemeral_event_cb);
	linphone_chat_room_cbs_set_ephemeral_message_timer_started(cbs, linphone_chat_room_cbs_on_ephemeral_message_timer_started_cb);
	linphone_chat_room_cbs_set_ephemeral_message_deleted(cbs, linphone_chat_room_cbs_on_ephemeral_message_deleted_cb);
	linphone_chat_room_cbs_set_conference_address_generation(cbs, linphone_chat_room_cbs_on_conference_address_generation_cb);
	linphone_chat_room_cbs_set_participant_registration_subscription_requested(cbs, linphone_chat_room_cbs_on_participant_registration_subscription_requested_cb);
	linphone_chat_room_cbs_set_participant_registration_unsubscription_requested(cbs, linphone_chat_room_cbs_on_participant_registration_unsubscription_requested_cb);
	linphone_chat_room_cbs_set_chat_message_should_be_stored(cbs, linphone_chat_room_cbs_on_chat_message_should_be_stored_cb);
	linphone_chat_room_cbs_set_chat_message_participant_imdn_state_changed(cbs, linphone_chat_room_cbs_on_chat_message_participant_imdn_state_changed_cb);
	linphone_chat_room_cbs_set_chat_room_read(cbs, linphone_chat_room_cbs_on_chat_room_read_cb);
	belle_sip_object_data_set((::belle_sip_object_t *)(cbs), MultiListenableObject::sListenerListName, new list<shared_ptr<Listener>>(), (::belle_sip_data_destroy)deleteListenerList);
	belle_sip_object_data_set((::belle_sip_object_t *)(mPrivPtr), MultiListenableObject::sCbsPtrName, cbs, nullptr);
	linphone_chat_room_add_callbacks(static_cast<::LinphoneChatRoom *>(mPrivPtr), cbs);
	belle_sip_object_unref((::belle_sip_object_t *)cbs);
	return cbs;
}


std::shared_ptr<linphone::Call> linphone::ChatRoom::getCall() const {
	return Object::cPtrToSharedPtr<linphone::Call>(linphone_chat_room_get_call((::LinphoneChatRoom *)mPrivPtr));
}
unsigned int linphone::ChatRoom::getCapabilities() const {
	return linphone_chat_room_get_capabilities((::LinphoneChatRoom *)mPrivPtr);
}
uint32_t linphone::ChatRoom::getChar() {
	return linphone_chat_room_get_char((::LinphoneChatRoom *)mPrivPtr);
}
std::list<std::shared_ptr<linphone::Address>> linphone::ChatRoom::getComposingAddresses() {
	return ObjectBctbxListWrapper<linphone::Address>::bctbxListToCppList(linphone_chat_room_get_composing_addresses((::LinphoneChatRoom *)mPrivPtr), true);
}
std::shared_ptr<const linphone::Address> linphone::ChatRoom::getConferenceAddress() const {
	return Object::cPtrToSharedPtr<const linphone::Address>(linphone_chat_room_get_conference_address((::LinphoneChatRoom *)mPrivPtr));
}
void linphone::ChatRoom::setConferenceAddress(const std::shared_ptr<linphone::Address> & conferenceAddress) {
	linphone_chat_room_set_conference_address((::LinphoneChatRoom *)mPrivPtr, (::LinphoneAddress *)Object::sharedPtrToCPtr(std::static_pointer_cast<Object,linphone::Address>(conferenceAddress)));
}
std::shared_ptr<linphone::Core> linphone::ChatRoom::getCore() const {
	return Object::cPtrToSharedPtr<linphone::Core>(linphone_chat_room_get_core((::LinphoneChatRoom *)mPrivPtr));
}
time_t linphone::ChatRoom::getCreationTime() const {
	return linphone_chat_room_get_creation_time((::LinphoneChatRoom *)mPrivPtr);
}
std::shared_ptr<const linphone::ChatRoomParams> linphone::ChatRoom::getCurrentParams() const {
	return Object::cPtrToSharedPtr<const linphone::ChatRoomParams>(linphone_chat_room_get_current_params((::LinphoneChatRoom *)mPrivPtr));
}
bool linphone::ChatRoom::ephemeralEnabled() const {
	return (linphone_chat_room_ephemeral_enabled((::LinphoneChatRoom *)mPrivPtr) != FALSE);
}
void linphone::ChatRoom::enableEphemeral(bool enable) {
	linphone_chat_room_enable_ephemeral((::LinphoneChatRoom *)mPrivPtr, enable);
}
long linphone::ChatRoom::getEphemeralLifetime() const {
	return linphone_chat_room_get_ephemeral_lifetime((::LinphoneChatRoom *)mPrivPtr);
}
void linphone::ChatRoom::setEphemeralLifetime(long time) {
	linphone_chat_room_set_ephemeral_lifetime((::LinphoneChatRoom *)mPrivPtr, time);
}
linphone::ChatRoom::EphemeralMode linphone::ChatRoom::getEphemeralMode() const {
	return (EphemeralMode)linphone_chat_room_get_ephemeral_mode((::LinphoneChatRoom *)mPrivPtr);
}
void linphone::ChatRoom::setEphemeralMode(linphone::ChatRoom::EphemeralMode mode) {
	linphone_chat_room_set_ephemeral_mode((::LinphoneChatRoom *)mPrivPtr, (::LinphoneChatRoomEphemeralMode)mode);
}
int linphone::ChatRoom::getHistoryEventsSize() {
	return linphone_chat_room_get_history_events_size((::LinphoneChatRoom *)mPrivPtr);
}
int linphone::ChatRoom::getHistorySize() {
	return linphone_chat_room_get_history_size((::LinphoneChatRoom *)mPrivPtr);
}
bool linphone::ChatRoom::isEmpty() {
	return (linphone_chat_room_is_empty((::LinphoneChatRoom *)mPrivPtr) != FALSE);
}
bool linphone::ChatRoom::isReadOnly() const {
	return (linphone_chat_room_is_read_only((::LinphoneChatRoom *)mPrivPtr) != FALSE);
}
bool linphone::ChatRoom::isRemoteComposing() const {
	return (linphone_chat_room_is_remote_composing((::LinphoneChatRoom *)mPrivPtr) != FALSE);
}
std::shared_ptr<linphone::ChatMessage> linphone::ChatRoom::getLastMessageInHistory() {
	return Object::cPtrToSharedPtr<linphone::ChatMessage>(linphone_chat_room_get_last_message_in_history((::LinphoneChatRoom *)mPrivPtr));
}
time_t linphone::ChatRoom::getLastUpdateTime() const {
	return linphone_chat_room_get_last_update_time((::LinphoneChatRoom *)mPrivPtr);
}
std::shared_ptr<const linphone::Address> linphone::ChatRoom::getLocalAddress() {
	return Object::cPtrToSharedPtr<const linphone::Address>(linphone_chat_room_get_local_address((::LinphoneChatRoom *)mPrivPtr));
}
std::shared_ptr<linphone::Participant> linphone::ChatRoom::getMe() const {
	return Object::cPtrToSharedPtr<linphone::Participant>(linphone_chat_room_get_me((::LinphoneChatRoom *)mPrivPtr));
}
bool linphone::ChatRoom::getMuted() const {
	return (linphone_chat_room_get_muted((::LinphoneChatRoom *)mPrivPtr) != FALSE);
}
void linphone::ChatRoom::setMuted(bool muted) {
	linphone_chat_room_set_muted((::LinphoneChatRoom *)mPrivPtr, muted);
}
int linphone::ChatRoom::getNbParticipants() const {
	return linphone_chat_room_get_nb_participants((::LinphoneChatRoom *)mPrivPtr);
}
std::list<std::shared_ptr<linphone::Participant>> linphone::ChatRoom::getParticipants() const {
	return ObjectBctbxListWrapper<linphone::Participant>::bctbxListToCppList(linphone_chat_room_get_participants((::LinphoneChatRoom *)mPrivPtr), false);
}
std::shared_ptr<const linphone::Address> linphone::ChatRoom::getPeerAddress() {
	return Object::cPtrToSharedPtr<const linphone::Address>(linphone_chat_room_get_peer_address((::LinphoneChatRoom *)mPrivPtr));
}
linphone::ChatRoom::SecurityLevel linphone::ChatRoom::getSecurityLevel() {
	return (SecurityLevel)linphone_chat_room_get_security_level((::LinphoneChatRoom *)mPrivPtr);
}
linphone::ChatRoom::State linphone::ChatRoom::getState() const {
	return (State)linphone_chat_room_get_state((::LinphoneChatRoom *)mPrivPtr);
}
std::string linphone::ChatRoom::getSubject() const {
	return StringUtilities::cStringToCpp(linphone_chat_room_get_subject((::LinphoneChatRoom *)mPrivPtr));
}
void linphone::ChatRoom::setSubject(const std::string & subject) {
	linphone_chat_room_set_subject((::LinphoneChatRoom *)mPrivPtr, StringUtilities::cppStringToC(subject));
}
std::list<std::shared_ptr<linphone::ChatMessage>> linphone::ChatRoom::getUnreadHistory() {
	return ObjectBctbxListWrapper<linphone::ChatMessage>::bctbxListToCppList(linphone_chat_room_get_unread_history((::LinphoneChatRoom *)mPrivPtr), false);
}
int linphone::ChatRoom::getUnreadMessagesCount() {
	return linphone_chat_room_get_unread_messages_count((::LinphoneChatRoom *)mPrivPtr);
}
void linphone::ChatRoom::addParticipant(const std::shared_ptr<linphone::Address> & addr) {
	linphone_chat_room_add_participant((::LinphoneChatRoom *)mPrivPtr, (::LinphoneAddress *)Object::sharedPtrToCPtr(std::static_pointer_cast<Object,linphone::Address>(addr)));
}
bool linphone::ChatRoom::addParticipants(const std::list<std::shared_ptr<linphone::Address>> & addresses) {
	return (linphone_chat_room_add_participants((::LinphoneChatRoom *)mPrivPtr, ObjectBctbxListWrapper<linphone::Address>(addresses).c_list()) != FALSE);
}
void linphone::ChatRoom::allowCpim() {
	linphone_chat_room_allow_cpim((::LinphoneChatRoom *)mPrivPtr);
}
void linphone::ChatRoom::allowMultipart() {
	linphone_chat_room_allow_multipart((::LinphoneChatRoom *)mPrivPtr);
}
bool linphone::ChatRoom::canHandleParticipants() const {
	return (linphone_chat_room_can_handle_participants((::LinphoneChatRoom *)mPrivPtr) != FALSE);
}
void linphone::ChatRoom::compose() {
	linphone_chat_room_compose((::LinphoneChatRoom *)mPrivPtr);
}
std::shared_ptr<linphone::ChatMessage> linphone::ChatRoom::createEmptyMessage() {
	return Object::cPtrToSharedPtr<linphone::ChatMessage>(linphone_chat_room_create_empty_message((::LinphoneChatRoom *)mPrivPtr), false);
}
std::shared_ptr<linphone::ChatMessage> linphone::ChatRoom::createFileTransferMessage(const std::shared_ptr<linphone::Content> & initialContent) {
	return Object::cPtrToSharedPtr<linphone::ChatMessage>(linphone_chat_room_create_file_transfer_message((::LinphoneChatRoom *)mPrivPtr, (::LinphoneContent *)Object::sharedPtrToCPtr(std::static_pointer_cast<Object,linphone::Content>(initialContent))), false);
}
std::shared_ptr<linphone::ChatMessage> linphone::ChatRoom::createForwardMessage(const std::shared_ptr<linphone::ChatMessage> & message) {
	return Object::cPtrToSharedPtr<linphone::ChatMessage>(linphone_chat_room_create_forward_message((::LinphoneChatRoom *)mPrivPtr, (::LinphoneChatMessage *)Object::sharedPtrToCPtr(std::static_pointer_cast<Object,linphone::ChatMessage>(message))), false);
}
std::shared_ptr<linphone::ChatMessage> linphone::ChatRoom::createMessage(const std::string & message) {
	return Object::cPtrToSharedPtr<linphone::ChatMessage>(linphone_chat_room_create_message((::LinphoneChatRoom *)mPrivPtr, StringUtilities::cppStringToC(message)), false);
}
std::shared_ptr<linphone::ChatMessage> linphone::ChatRoom::createMessageFromUtf8(const std::string & message) {
	return Object::cPtrToSharedPtr<linphone::ChatMessage>(linphone_chat_room_create_message_from_utf8((::LinphoneChatRoom *)mPrivPtr, StringUtilities::cppStringToC(message)), false);
}
std::shared_ptr<linphone::ChatMessage> linphone::ChatRoom::createReplyMessage(const std::shared_ptr<linphone::ChatMessage> & message) {
	return Object::cPtrToSharedPtr<linphone::ChatMessage>(linphone_chat_room_create_reply_message((::LinphoneChatRoom *)mPrivPtr, (::LinphoneChatMessage *)Object::sharedPtrToCPtr(std::static_pointer_cast<Object,linphone::ChatMessage>(message))), false);
}
std::shared_ptr<linphone::ChatMessage> linphone::ChatRoom::createVoiceRecordingMessage(const std::shared_ptr<linphone::Recorder> & recorder) {
	return Object::cPtrToSharedPtr<linphone::ChatMessage>(linphone_chat_room_create_voice_recording_message((::LinphoneChatRoom *)mPrivPtr, (::LinphoneRecorder *)Object::sharedPtrToCPtr(std::static_pointer_cast<Object,linphone::Recorder>(recorder))), false);
}
void linphone::ChatRoom::deleteHistory() {
	linphone_chat_room_delete_history((::LinphoneChatRoom *)mPrivPtr);
}
void linphone::ChatRoom::deleteMessage(const std::shared_ptr<linphone::ChatMessage> & message) {
	linphone_chat_room_delete_message((::LinphoneChatRoom *)mPrivPtr, (::LinphoneChatMessage *)Object::sharedPtrToCPtr(std::static_pointer_cast<Object,linphone::ChatMessage>(message)));
}
bool linphone::ChatRoom::ephemeralSupportedByAllParticipants() const {
	return (linphone_chat_room_ephemeral_supported_by_all_participants((::LinphoneChatRoom *)mPrivPtr) != FALSE);
}
std::shared_ptr<linphone::ChatMessage> linphone::ChatRoom::findMessage(const std::string & messageId) {
	return Object::cPtrToSharedPtr<linphone::ChatMessage>(linphone_chat_room_find_message((::LinphoneChatRoom *)mPrivPtr, StringUtilities::cppStringToC(messageId)));
}
std::shared_ptr<linphone::Participant> linphone::ChatRoom::findParticipant(const std::shared_ptr<linphone::Address> & address) const {
	return Object::cPtrToSharedPtr<linphone::Participant>(linphone_chat_room_find_participant((::LinphoneChatRoom *)mPrivPtr, (::LinphoneAddress *)Object::sharedPtrToCPtr(std::static_pointer_cast<Object,linphone::Address>(address))));
}
std::list<std::shared_ptr<linphone::ChatMessage>> linphone::ChatRoom::getHistory(int nbMessage) {
	return ObjectBctbxListWrapper<linphone::ChatMessage>::bctbxListToCppList(linphone_chat_room_get_history((::LinphoneChatRoom *)mPrivPtr, nbMessage), false);
}
std::list<std::shared_ptr<linphone::EventLog>> linphone::ChatRoom::getHistoryEvents(int nbEvents) {
	return ObjectBctbxListWrapper<linphone::EventLog>::bctbxListToCppList(linphone_chat_room_get_history_events((::LinphoneChatRoom *)mPrivPtr, nbEvents), false);
}
std::list<std::shared_ptr<linphone::EventLog>> linphone::ChatRoom::getHistoryMessageEvents(int nbEvents) {
	return ObjectBctbxListWrapper<linphone::EventLog>::bctbxListToCppList(linphone_chat_room_get_history_message_events((::LinphoneChatRoom *)mPrivPtr, nbEvents), false);
}
std::list<std::shared_ptr<linphone::ChatMessage>> linphone::ChatRoom::getHistoryRange(int begin, int end) {
	return ObjectBctbxListWrapper<linphone::ChatMessage>::bctbxListToCppList(linphone_chat_room_get_history_range((::LinphoneChatRoom *)mPrivPtr, begin, end), false);
}
std::list<std::shared_ptr<linphone::EventLog>> linphone::ChatRoom::getHistoryRangeEvents(int begin, int end) {
	return ObjectBctbxListWrapper<linphone::EventLog>::bctbxListToCppList(linphone_chat_room_get_history_range_events((::LinphoneChatRoom *)mPrivPtr, begin, end), false);
}
std::list<std::shared_ptr<linphone::EventLog>> linphone::ChatRoom::getHistoryRangeMessageEvents(int begin, int end) {
	return ObjectBctbxListWrapper<linphone::EventLog>::bctbxListToCppList(linphone_chat_room_get_history_range_message_events((::LinphoneChatRoom *)mPrivPtr, begin, end), false);
}
bool linphone::ChatRoom::hasBeenLeft() const {
	return (linphone_chat_room_has_been_left((::LinphoneChatRoom *)mPrivPtr) != FALSE);
}
bool linphone::ChatRoom::hasCapability(int mask) const {
	return (linphone_chat_room_has_capability((::LinphoneChatRoom *)mPrivPtr, mask) != FALSE);
}
void linphone::ChatRoom::leave() {
	linphone_chat_room_leave((::LinphoneChatRoom *)mPrivPtr);
}
void linphone::ChatRoom::markAsRead() {
	linphone_chat_room_mark_as_read((::LinphoneChatRoom *)mPrivPtr);
}
void linphone::ChatRoom::notifyParticipantDeviceRegistration(const std::shared_ptr<const linphone::Address> & participantDevice) {
	linphone_chat_room_notify_participant_device_registration((::LinphoneChatRoom *)mPrivPtr, (::LinphoneAddress *)Object::sharedPtrToCPtr(std::static_pointer_cast<const Object,const linphone::Address>(participantDevice)));
}
void linphone::ChatRoom::receiveChatMessage(const std::shared_ptr<linphone::ChatMessage> & message) {
	linphone_chat_room_receive_chat_message((::LinphoneChatRoom *)mPrivPtr, (::LinphoneChatMessage *)Object::sharedPtrToCPtr(std::static_pointer_cast<Object,linphone::ChatMessage>(message)));
}
void linphone::ChatRoom::removeParticipant(const std::shared_ptr<linphone::Participant> & participant) {
	linphone_chat_room_remove_participant((::LinphoneChatRoom *)mPrivPtr, (::LinphoneParticipant *)Object::sharedPtrToCPtr(std::static_pointer_cast<Object,linphone::Participant>(participant)));
}
void linphone::ChatRoom::removeParticipants(const std::list<std::shared_ptr<linphone::Participant>> & participants) {
	linphone_chat_room_remove_participants((::LinphoneChatRoom *)mPrivPtr, ObjectBctbxListWrapper<linphone::Participant>(participants).c_list());
}
void linphone::ChatRoom::setParticipantAdminStatus(const std::shared_ptr<linphone::Participant> & participant, bool isAdmin) {
	linphone_chat_room_set_participant_admin_status((::LinphoneChatRoom *)mPrivPtr, (::LinphoneParticipant *)Object::sharedPtrToCPtr(std::static_pointer_cast<Object,linphone::Participant>(participant)), isAdmin);
}
void linphone::ChatRoom::setParticipantDevices(const std::shared_ptr<linphone::Address> & participantAddress, const std::list<std::shared_ptr<linphone::ParticipantDeviceIdentity>> & deviceIdentities) {
	linphone_chat_room_set_participant_devices((::LinphoneChatRoom *)mPrivPtr, (::LinphoneAddress *)Object::sharedPtrToCPtr(std::static_pointer_cast<Object,linphone::Address>(participantAddress)), ObjectBctbxListWrapper<linphone::ParticipantDeviceIdentity>(deviceIdentities).c_list());
}

std::string linphone::ChatRoom::stateToString(linphone::ChatRoom::State state) {
	return StringUtilities::cStringToCpp(linphone_chat_room_state_to_string((::LinphoneChatRoomState)state));
}



linphone::EventLog::EventLog(void *ptr, bool takeRef): Object(ptr, takeRef) {
}



std::shared_ptr<linphone::CallLog> linphone::EventLog::getCallLog() const {
	return Object::cPtrToSharedPtr<linphone::CallLog>(linphone_event_log_get_call_log((::LinphoneEventLog *)mPrivPtr));
}
std::shared_ptr<linphone::ChatMessage> linphone::EventLog::getChatMessage() const {
	return Object::cPtrToSharedPtr<linphone::ChatMessage>(linphone_event_log_get_chat_message((::LinphoneEventLog *)mPrivPtr));
}
std::shared_ptr<linphone::ConferenceInfo> linphone::EventLog::getConferenceInfo() const {
	return Object::cPtrToSharedPtr<linphone::ConferenceInfo>(linphone_event_log_get_conference_info((::LinphoneEventLog *)mPrivPtr));
}
time_t linphone::EventLog::getCreationTime() const {
	return linphone_event_log_get_creation_time((::LinphoneEventLog *)mPrivPtr);
}
std::shared_ptr<const linphone::Address> linphone::EventLog::getDeviceAddress() const {
	return Object::cPtrToSharedPtr<const linphone::Address>(linphone_event_log_get_device_address((::LinphoneEventLog *)mPrivPtr));
}
long linphone::EventLog::getEphemeralMessageLifetime() const {
	return linphone_event_log_get_ephemeral_message_lifetime((::LinphoneEventLog *)mPrivPtr);
}
std::shared_ptr<const linphone::Address> linphone::EventLog::getLocalAddress() const {
	return Object::cPtrToSharedPtr<const linphone::Address>(linphone_event_log_get_local_address((::LinphoneEventLog *)mPrivPtr));
}
unsigned int linphone::EventLog::getNotifyId() const {
	return linphone_event_log_get_notify_id((::LinphoneEventLog *)mPrivPtr);
}
std::shared_ptr<const linphone::Address> linphone::EventLog::getParticipantAddress() const {
	return Object::cPtrToSharedPtr<const linphone::Address>(linphone_event_log_get_participant_address((::LinphoneEventLog *)mPrivPtr));
}
std::shared_ptr<const linphone::Address> linphone::EventLog::getPeerAddress() const {
	return Object::cPtrToSharedPtr<const linphone::Address>(linphone_event_log_get_peer_address((::LinphoneEventLog *)mPrivPtr));
}
std::shared_ptr<const linphone::Address> linphone::EventLog::getSecurityEventFaultyDeviceAddress() const {
	return Object::cPtrToSharedPtr<const linphone::Address>(linphone_event_log_get_security_event_faulty_device_address((::LinphoneEventLog *)mPrivPtr));
}
linphone::EventLog::SecurityEventType linphone::EventLog::getSecurityEventType() const {
	return (SecurityEventType)linphone_event_log_get_security_event_type((::LinphoneEventLog *)mPrivPtr);
}
std::string linphone::EventLog::getSubject() const {
	return StringUtilities::cStringToCpp(linphone_event_log_get_subject((::LinphoneEventLog *)mPrivPtr));
}
linphone::EventLog::Type linphone::EventLog::getType() const {
	return (Type)linphone_event_log_get_type((::LinphoneEventLog *)mPrivPtr);
}
void linphone::EventLog::deleteFromDatabase() {
	linphone_event_log_delete_from_database((::LinphoneEventLog *)mPrivPtr);
}




linphone::DialPlan::DialPlan(void *ptr, bool takeRef): Object(ptr, takeRef) {
}



std::string linphone::DialPlan::getCountry() const {
	return StringUtilities::cStringToCpp(linphone_dial_plan_get_country((::LinphoneDialPlan *)mPrivPtr));
}
std::string linphone::DialPlan::getCountryCallingCode() const {
	return StringUtilities::cStringToCpp(linphone_dial_plan_get_country_calling_code((::LinphoneDialPlan *)mPrivPtr));
}
std::string linphone::DialPlan::getFlag() const {
	return StringUtilities::cStringToCpp(linphone_dial_plan_get_flag((::LinphoneDialPlan *)mPrivPtr));
}
std::string linphone::DialPlan::getInternationalCallPrefix() const {
	return StringUtilities::cStringToCpp(linphone_dial_plan_get_international_call_prefix((::LinphoneDialPlan *)mPrivPtr));
}
bool linphone::DialPlan::isGeneric() const {
	return (linphone_dial_plan_is_generic((::LinphoneDialPlan *)mPrivPtr) != FALSE);
}
std::string linphone::DialPlan::getIsoCountryCode() const {
	return StringUtilities::cStringToCpp(linphone_dial_plan_get_iso_country_code((::LinphoneDialPlan *)mPrivPtr));
}
int linphone::DialPlan::getNationalNumberLength() const {
	return linphone_dial_plan_get_national_number_length((::LinphoneDialPlan *)mPrivPtr);
}

std::shared_ptr<const linphone::DialPlan> linphone::DialPlan::byCcc(const std::string & ccc) {
	return Object::cPtrToSharedPtr<const linphone::DialPlan>(linphone_dial_plan_by_ccc(StringUtilities::cppStringToC(ccc)));
}
std::shared_ptr<const linphone::DialPlan> linphone::DialPlan::byCccAsInt(int ccc) {
	return Object::cPtrToSharedPtr<const linphone::DialPlan>(linphone_dial_plan_by_ccc_as_int(ccc));
}
std::list<std::shared_ptr<linphone::DialPlan>> linphone::DialPlan::getAllList() {
	return ObjectBctbxListWrapper<linphone::DialPlan>::bctbxListToCppList(linphone_dial_plan_get_all_list(), false);
}
int linphone::DialPlan::lookupCccFromE164(const std::string & e164) {
	return linphone_dial_plan_lookup_ccc_from_e164(StringUtilities::cppStringToC(e164));
}
int linphone::DialPlan::lookupCccFromIso(const std::string & iso) {
	return linphone_dial_plan_lookup_ccc_from_iso(StringUtilities::cppStringToC(iso));
}


static void linphone_account_cbs_on_registration_state_changed_cb(LinphoneAccount * account, LinphoneRegistrationState state, const char * message) {
	LinphoneAccountCbs *cbs = linphone_account_get_current_callbacks(account);
	if (cbs) {
		// Make a copy of the list of listeners, so that it is possible to remove a listener from a listener without corrupting the list.
		std::list<std::shared_ptr<Listener> > listeners = *static_cast<std::list<std::shared_ptr<Listener> > *>(belle_sip_object_data_get((::belle_sip_object_t *)cbs, MultiListenableObject::sListenerListName));
		for(std::list<std::shared_ptr<Listener> >::iterator it=listeners.begin(); it!=listeners.end(); it++) {
			std::shared_ptr<AccountListener> listener = std::static_pointer_cast<AccountListener,Listener>(*it);
			listener->onRegistrationStateChanged(Object::cPtrToSharedPtr<Account>(account), (RegistrationState)state, StringUtilities::cStringToCpp(message));
		}
	}
}

linphone::Account::Account(void *ptr, bool takeRef): MultiListenableObject(ptr, takeRef) {
}

void Account::addListener(const std::shared_ptr<AccountListener> &listener) {
	MultiListenableObject::addListener(std::static_pointer_cast<Listener,AccountListener>(listener));
}

void Account::removeListener(const std::shared_ptr<AccountListener> &listener) {
	MultiListenableObject::removeListener(std::static_pointer_cast<Listener,AccountListener>(listener));
}

void *Account::createCallbacks() {
	LinphoneAccountCbs *cbs = linphone_factory_create_account_cbs(linphone_factory_get());
	linphone_account_cbs_set_registration_state_changed(cbs, linphone_account_cbs_on_registration_state_changed_cb);
	belle_sip_object_data_set((::belle_sip_object_t *)(cbs), MultiListenableObject::sListenerListName, new list<shared_ptr<Listener>>(), (::belle_sip_data_destroy)deleteListenerList);
	belle_sip_object_data_set((::belle_sip_object_t *)(mPrivPtr), MultiListenableObject::sCbsPtrName, cbs, nullptr);
	linphone_account_add_callbacks(static_cast<::LinphoneAccount *>(mPrivPtr), cbs);
	belle_sip_object_unref((::belle_sip_object_t *)cbs);
	return cbs;
}


bool linphone::Account::avpfEnabled() {
	return (linphone_account_avpf_enabled((::LinphoneAccount *)mPrivPtr) != FALSE);
}
std::list<std::shared_ptr<linphone::CallLog>> linphone::Account::getCallLogs() const {
	return ObjectBctbxListWrapper<linphone::CallLog>::bctbxListToCppList(linphone_account_get_call_logs((::LinphoneAccount *)mPrivPtr), false);
}
std::list<std::shared_ptr<linphone::ChatRoom>> linphone::Account::getChatRooms() const {
	return ObjectBctbxListWrapper<linphone::ChatRoom>::bctbxListToCppList(linphone_account_get_chat_rooms((::LinphoneAccount *)mPrivPtr), false);
}
std::list<std::shared_ptr<linphone::ConferenceInfo>> linphone::Account::getConferenceInformationList() const {
	return ObjectBctbxListWrapper<linphone::ConferenceInfo>::bctbxListToCppList(linphone_account_get_conference_information_list((::LinphoneAccount *)mPrivPtr), false);
}
std::shared_ptr<linphone::Address> linphone::Account::getContactAddress() {
	return Object::cPtrToSharedPtr<linphone::Address>(linphone_account_get_contact_address((::LinphoneAccount *)mPrivPtr));
}
void linphone::Account::setContactAddress(const std::shared_ptr<const linphone::Address> & addr) {
	linphone_account_set_contact_address((::LinphoneAccount *)mPrivPtr, (::LinphoneAddress *)Object::sharedPtrToCPtr(std::static_pointer_cast<const Object,const linphone::Address>(addr)));
}
std::shared_ptr<linphone::Core> linphone::Account::getCore() {
	return Object::cPtrToSharedPtr<linphone::Core>(linphone_account_get_core((::LinphoneAccount *)mPrivPtr));
}
std::shared_ptr<linphone::Account> linphone::Account::getDependency() {
	return Object::cPtrToSharedPtr<linphone::Account>(linphone_account_get_dependency((::LinphoneAccount *)mPrivPtr));
}
void linphone::Account::setDependency(const std::shared_ptr<linphone::Account> & dependsOn) {
	linphone_account_set_dependency((::LinphoneAccount *)mPrivPtr, (::LinphoneAccount *)Object::sharedPtrToCPtr(std::static_pointer_cast<Object,linphone::Account>(dependsOn)));
}
linphone::Reason linphone::Account::getError() {
	return (linphone::Reason)linphone_account_get_error((::LinphoneAccount *)mPrivPtr);
}
std::shared_ptr<const linphone::ErrorInfo> linphone::Account::getErrorInfo() {
	return Object::cPtrToSharedPtr<const linphone::ErrorInfo>(linphone_account_get_error_info((::LinphoneAccount *)mPrivPtr));
}
bool linphone::Account::isAvpfEnabled() {
	return (linphone_account_is_avpf_enabled((::LinphoneAccount *)mPrivPtr) != FALSE);
}
int linphone::Account::getMissedCallsCount() const {
	return linphone_account_get_missed_calls_count((::LinphoneAccount *)mPrivPtr);
}
std::shared_ptr<const linphone::AccountParams> linphone::Account::getParams() const {
	return Object::cPtrToSharedPtr<const linphone::AccountParams>(linphone_account_get_params((::LinphoneAccount *)mPrivPtr));
}
int linphone::Account::setParams(const std::shared_ptr<linphone::AccountParams> & params) {
	return linphone_account_set_params((::LinphoneAccount *)mPrivPtr, (::LinphoneAccountParams *)Object::sharedPtrToCPtr(std::static_pointer_cast<Object,linphone::AccountParams>(params)));
}
linphone::RegistrationState linphone::Account::getState() {
	return (linphone::RegistrationState)linphone_account_get_state((::LinphoneAccount *)mPrivPtr);
}
linphone::TransportType linphone::Account::getTransport() {
	return (linphone::TransportType)linphone_account_get_transport((::LinphoneAccount *)mPrivPtr);
}
int linphone::Account::getUnreadChatMessageCount() const {
	return linphone_account_get_unread_chat_message_count((::LinphoneAccount *)mPrivPtr);
}
void linphone::Account::addCustomParam(const std::string & key, const std::string & value) {
	linphone_account_add_custom_param((::LinphoneAccount *)mPrivPtr, StringUtilities::cppStringToC(key), StringUtilities::cppStringToC(value));
}
void linphone::Account::clearCallLogs() const {
	linphone_account_clear_call_logs((::LinphoneAccount *)mPrivPtr);
}
std::shared_ptr<linphone::Account> linphone::Account::clone() const {
	return Object::cPtrToSharedPtr<linphone::Account>(linphone_account_clone((::LinphoneAccount *)mPrivPtr), false);
}
std::shared_ptr<const linphone::AuthInfo> linphone::Account::findAuthInfo() {
	return Object::cPtrToSharedPtr<const linphone::AuthInfo>(linphone_account_find_auth_info((::LinphoneAccount *)mPrivPtr));
}
std::list<std::shared_ptr<linphone::CallLog>> linphone::Account::getCallLogsForAddress(const std::shared_ptr<const linphone::Address> & remoteAddress) const {
	return ObjectBctbxListWrapper<linphone::CallLog>::bctbxListToCppList(linphone_account_get_call_logs_for_address((::LinphoneAccount *)mPrivPtr, (::LinphoneAddress *)Object::sharedPtrToCPtr(std::static_pointer_cast<const Object,const linphone::Address>(remoteAddress))), false);
}
std::string linphone::Account::getCustomHeader(const std::string & headerName) {
	return StringUtilities::cStringToCpp(linphone_account_get_custom_header((::LinphoneAccount *)mPrivPtr, StringUtilities::cppStringToC(headerName)));
}
std::string linphone::Account::getCustomParam(const std::string & key) const {
	return StringUtilities::cStringToCpp(linphone_account_get_custom_param((::LinphoneAccount *)mPrivPtr, StringUtilities::cppStringToC(key)));
}
bool linphone::Account::isPhoneNumber(const std::string & username) const {
	return (linphone_account_is_phone_number((::LinphoneAccount *)mPrivPtr, StringUtilities::cppStringToC(username)) != FALSE);
}
std::string linphone::Account::normalizePhoneNumber(const std::string & username) const {
	return StringUtilities::cStringToCpp(linphone_account_normalize_phone_number((::LinphoneAccount *)mPrivPtr, StringUtilities::cppStringToC(username)));
}
std::shared_ptr<linphone::Address> linphone::Account::normalizeSipUri(const std::string & username) {
	return Object::cPtrToSharedPtr<linphone::Address>(linphone_account_normalize_sip_uri((::LinphoneAccount *)mPrivPtr, StringUtilities::cppStringToC(username)), false);
}
void linphone::Account::pauseRegister() {
	linphone_account_pause_register((::LinphoneAccount *)mPrivPtr);
}
void linphone::Account::refreshRegister() {
	linphone_account_refresh_register((::LinphoneAccount *)mPrivPtr);
}
void linphone::Account::resetMissedCallsCount() {
	linphone_account_reset_missed_calls_count((::LinphoneAccount *)mPrivPtr);
}
void linphone::Account::setCustomHeader(const std::string & headerName, const std::string & headerValue) {
	linphone_account_set_custom_header((::LinphoneAccount *)mPrivPtr, StringUtilities::cppStringToC(headerName), StringUtilities::cppStringToC(headerValue));
}

std::shared_ptr<linphone::Account> linphone::Account::newWithConfig(const std::shared_ptr<linphone::Core> & lc, const std::shared_ptr<linphone::AccountParams> & params, const std::shared_ptr<linphone::ProxyConfig> & config) {
	return Object::cPtrToSharedPtr<linphone::Account>(linphone_account_new_with_config((::LinphoneCore *)Object::sharedPtrToCPtr(std::static_pointer_cast<Object,linphone::Core>(lc)), (::LinphoneAccountParams *)Object::sharedPtrToCPtr(std::static_pointer_cast<Object,linphone::AccountParams>(params)), (::LinphoneProxyConfig *)Object::sharedPtrToCPtr(std::static_pointer_cast<Object,linphone::ProxyConfig>(config))), false);
}



linphone::CallLog::CallLog(void *ptr, bool takeRef): Object(ptr, takeRef) {
}



std::string linphone::CallLog::getCallId() const {
	return StringUtilities::cStringToCpp(linphone_call_log_get_call_id((::LinphoneCallLog *)mPrivPtr));
}
std::shared_ptr<linphone::ConferenceInfo> linphone::CallLog::getConferenceInfo() {
	return Object::cPtrToSharedPtr<linphone::ConferenceInfo>(linphone_call_log_get_conference_info((::LinphoneCallLog *)mPrivPtr));
}
linphone::Call::Dir linphone::CallLog::getDir() const {
	return (linphone::Call::Dir)linphone_call_log_get_dir((::LinphoneCallLog *)mPrivPtr);
}
int linphone::CallLog::getDuration() const {
	return linphone_call_log_get_duration((::LinphoneCallLog *)mPrivPtr);
}
std::shared_ptr<const linphone::ErrorInfo> linphone::CallLog::getErrorInfo() const {
	return Object::cPtrToSharedPtr<const linphone::ErrorInfo>(linphone_call_log_get_error_info((::LinphoneCallLog *)mPrivPtr));
}
std::shared_ptr<const linphone::Address> linphone::CallLog::getFromAddress() const {
	return Object::cPtrToSharedPtr<const linphone::Address>(linphone_call_log_get_from_address((::LinphoneCallLog *)mPrivPtr));
}
std::shared_ptr<const linphone::Address> linphone::CallLog::getLocalAddress() const {
	return Object::cPtrToSharedPtr<const linphone::Address>(linphone_call_log_get_local_address((::LinphoneCallLog *)mPrivPtr));
}
float linphone::CallLog::getQuality() const {
	return linphone_call_log_get_quality((::LinphoneCallLog *)mPrivPtr);
}
std::string linphone::CallLog::getRefKey() const {
	return StringUtilities::cStringToCpp(linphone_call_log_get_ref_key((::LinphoneCallLog *)mPrivPtr));
}
void linphone::CallLog::setRefKey(const std::string & refkey) {
	linphone_call_log_set_ref_key((::LinphoneCallLog *)mPrivPtr, StringUtilities::cppStringToC(refkey));
}
std::shared_ptr<const linphone::Address> linphone::CallLog::getRemoteAddress() const {
	return Object::cPtrToSharedPtr<const linphone::Address>(linphone_call_log_get_remote_address((::LinphoneCallLog *)mPrivPtr));
}
void linphone::CallLog::setRemoteAddress(const std::shared_ptr<linphone::Address> & address) {
	linphone_call_log_set_remote_address((::LinphoneCallLog *)mPrivPtr, (::LinphoneAddress *)Object::sharedPtrToCPtr(std::static_pointer_cast<Object,linphone::Address>(address)));
}
time_t linphone::CallLog::getStartDate() const {
	return linphone_call_log_get_start_date((::LinphoneCallLog *)mPrivPtr);
}
linphone::Call::Status linphone::CallLog::getStatus() const {
	return (linphone::Call::Status)linphone_call_log_get_status((::LinphoneCallLog *)mPrivPtr);
}
std::shared_ptr<const linphone::Address> linphone::CallLog::getToAddress() const {
	return Object::cPtrToSharedPtr<const linphone::Address>(linphone_call_log_get_to_address((::LinphoneCallLog *)mPrivPtr));
}
bool linphone::CallLog::videoEnabled() const {
	return (linphone_call_log_video_enabled((::LinphoneCallLog *)mPrivPtr) != FALSE);
}
std::string linphone::CallLog::toStr() const {
	return StringUtilities::cStringToCpp(linphone_call_log_to_str((::LinphoneCallLog *)mPrivPtr));
}
bool linphone::CallLog::wasConference() {
	return (linphone_call_log_was_conference((::LinphoneCallLog *)mPrivPtr) != FALSE);
}




linphone::Factory::Factory(void *ptr, bool takeRef): Object(ptr, takeRef) {
}



void linphone::Factory::setCacheDir(const std::string & path) {
	linphone_factory_set_cache_dir((::LinphoneFactory *)mPrivPtr, StringUtilities::cppStringToC(path));
}
void linphone::Factory::setConfigDir(const std::string & path) {
	linphone_factory_set_config_dir((::LinphoneFactory *)mPrivPtr, StringUtilities::cppStringToC(path));
}
void linphone::Factory::setDataDir(const std::string & path) {
	linphone_factory_set_data_dir((::LinphoneFactory *)mPrivPtr, StringUtilities::cppStringToC(path));
}
std::string linphone::Factory::getDataResourcesDir() {
	return StringUtilities::cStringToCpp(linphone_factory_get_data_resources_dir((::LinphoneFactory *)mPrivPtr));
}
void linphone::Factory::setDataResourcesDir(const std::string & path) {
	linphone_factory_set_data_resources_dir((::LinphoneFactory *)mPrivPtr, StringUtilities::cppStringToC(path));
}
std::list<std::shared_ptr<linphone::DialPlan>> linphone::Factory::getDialPlans() const {
	return ObjectBctbxListWrapper<linphone::DialPlan>::bctbxListToCppList(linphone_factory_get_dial_plans((::LinphoneFactory *)mPrivPtr), true);
}
void linphone::Factory::setDownloadDir(const std::string & path) {
	linphone_factory_set_download_dir((::LinphoneFactory *)mPrivPtr, StringUtilities::cppStringToC(path));
}
std::string linphone::Factory::getImageResourcesDir() {
	return StringUtilities::cStringToCpp(linphone_factory_get_image_resources_dir((::LinphoneFactory *)mPrivPtr));
}
void linphone::Factory::setImageResourcesDir(const std::string & path) {
	linphone_factory_set_image_resources_dir((::LinphoneFactory *)mPrivPtr, StringUtilities::cppStringToC(path));
}
bool linphone::Factory::isCacheDirSet() const {
	return (linphone_factory_is_cache_dir_set((::LinphoneFactory *)mPrivPtr) != FALSE);
}
bool linphone::Factory::isConfigDirSet() const {
	return (linphone_factory_is_config_dir_set((::LinphoneFactory *)mPrivPtr) != FALSE);
}
bool linphone::Factory::isDataDirSet() const {
	return (linphone_factory_is_data_dir_set((::LinphoneFactory *)mPrivPtr) != FALSE);
}
bool linphone::Factory::isDatabaseStorageAvailable() {
	return (linphone_factory_is_database_storage_available((::LinphoneFactory *)mPrivPtr) != FALSE);
}
bool linphone::Factory::isDownloadDirSet() const {
	return (linphone_factory_is_download_dir_set((::LinphoneFactory *)mPrivPtr) != FALSE);
}
bool linphone::Factory::isImdnAvailable() {
	return (linphone_factory_is_imdn_available((::LinphoneFactory *)mPrivPtr) != FALSE);
}
bool linphone::Factory::isQrcodeAvailable() {
	return (linphone_factory_is_qrcode_available((::LinphoneFactory *)mPrivPtr) != FALSE);
}
std::string linphone::Factory::getLiblinphonePluginsDir() {
	return StringUtilities::cStringToCpp(linphone_factory_get_liblinphone_plugins_dir((::LinphoneFactory *)mPrivPtr));
}
void linphone::Factory::setLiblinphonePluginsDir(const std::string & path) {
	linphone_factory_set_liblinphone_plugins_dir((::LinphoneFactory *)mPrivPtr, StringUtilities::cppStringToC(path));
}
void linphone::Factory::setLogCollectionPath(const std::string & path) {
	linphone_factory_set_log_collection_path((::LinphoneFactory *)mPrivPtr, StringUtilities::cppStringToC(path));
}
std::string linphone::Factory::getMspluginsDir() {
	return StringUtilities::cStringToCpp(linphone_factory_get_msplugins_dir((::LinphoneFactory *)mPrivPtr));
}
void linphone::Factory::setMspluginsDir(const std::string & path) {
	linphone_factory_set_msplugins_dir((::LinphoneFactory *)mPrivPtr, StringUtilities::cppStringToC(path));
}
std::list<std::shared_ptr<linphone::VideoDefinition>> linphone::Factory::getRecommendedVideoDefinitions() const {
	return ObjectBctbxListWrapper<linphone::VideoDefinition>::bctbxListToCppList(linphone_factory_get_recommended_video_definitions((::LinphoneFactory *)mPrivPtr), true);
}
std::string linphone::Factory::getRingResourcesDir() {
	return StringUtilities::cStringToCpp(linphone_factory_get_ring_resources_dir((::LinphoneFactory *)mPrivPtr));
}
void linphone::Factory::setRingResourcesDir(const std::string & path) {
	linphone_factory_set_ring_resources_dir((::LinphoneFactory *)mPrivPtr, StringUtilities::cppStringToC(path));
}
std::string linphone::Factory::getSoundResourcesDir() {
	return StringUtilities::cStringToCpp(linphone_factory_get_sound_resources_dir((::LinphoneFactory *)mPrivPtr));
}
void linphone::Factory::setSoundResourcesDir(const std::string & path) {
	linphone_factory_set_sound_resources_dir((::LinphoneFactory *)mPrivPtr, StringUtilities::cppStringToC(path));
}
std::list<std::shared_ptr<linphone::VideoDefinition>> linphone::Factory::getSupportedVideoDefinitions() const {
	return ObjectBctbxListWrapper<linphone::VideoDefinition>::bctbxListToCppList(linphone_factory_get_supported_video_definitions((::LinphoneFactory *)mPrivPtr), true);
}
std::string linphone::Factory::getTopResourcesDir() const {
	return StringUtilities::cStringToCpp(linphone_factory_get_top_resources_dir((::LinphoneFactory *)mPrivPtr));
}
void linphone::Factory::setTopResourcesDir(const std::string & path) {
	linphone_factory_set_top_resources_dir((::LinphoneFactory *)mPrivPtr, StringUtilities::cppStringToC(path));
}
std::string linphone::Factory::computeHa1ForAlgorithm(const std::string & userid, const std::string & password, const std::string & realm, const std::string & algorithm) const {
	return StringUtilities::cStringToCpp(linphone_factory_compute_ha1_for_algorithm((::LinphoneFactory *)mPrivPtr, StringUtilities::cppStringToC(userid), StringUtilities::cppStringToC(password), StringUtilities::cppStringToC(realm), StringUtilities::cppStringToC(algorithm)));
}
std::shared_ptr<linphone::Address> linphone::Factory::createAddress(const std::string & addr) const {
	return Object::cPtrToSharedPtr<linphone::Address>(linphone_factory_create_address((::LinphoneFactory *)mPrivPtr, StringUtilities::cppStringToC(addr)), false);
}
std::shared_ptr<linphone::AuthInfo> linphone::Factory::createAuthInfo(const std::string & username, const std::string & userid, const std::string & passwd, const std::string & ha1, const std::string & realm, const std::string & domain) const {
	return Object::cPtrToSharedPtr<linphone::AuthInfo>(linphone_factory_create_auth_info((::LinphoneFactory *)mPrivPtr, StringUtilities::cppStringToC(username), StringUtilities::cppStringToC(userid), StringUtilities::cppStringToC(passwd), StringUtilities::cppStringToC(ha1), StringUtilities::cppStringToC(realm), StringUtilities::cppStringToC(domain)), false);
}
std::shared_ptr<linphone::AuthInfo> linphone::Factory::createAuthInfo(const std::string & username, const std::string & userid, const std::string & passwd, const std::string & ha1, const std::string & realm, const std::string & domain, const std::string & algorithm) const {
	return Object::cPtrToSharedPtr<linphone::AuthInfo>(linphone_factory_create_auth_info_2((::LinphoneFactory *)mPrivPtr, StringUtilities::cppStringToC(username), StringUtilities::cppStringToC(userid), StringUtilities::cppStringToC(passwd), StringUtilities::cppStringToC(ha1), StringUtilities::cppStringToC(realm), StringUtilities::cppStringToC(domain), StringUtilities::cppStringToC(algorithm)), false);
}
std::shared_ptr<linphone::Buffer> linphone::Factory::createBuffer() {
	return Object::cPtrToSharedPtr<linphone::Buffer>(linphone_factory_create_buffer((::LinphoneFactory *)mPrivPtr), false);
}
std::shared_ptr<linphone::Buffer> linphone::Factory::createBufferFromData(const uint8_t * data, size_t size) {
	return Object::cPtrToSharedPtr<linphone::Buffer>(linphone_factory_create_buffer_from_data((::LinphoneFactory *)mPrivPtr, data, size), false);
}
std::shared_ptr<linphone::Buffer> linphone::Factory::createBufferFromString(const std::string & data) {
	return Object::cPtrToSharedPtr<linphone::Buffer>(linphone_factory_create_buffer_from_string((::LinphoneFactory *)mPrivPtr, StringUtilities::cppStringToC(data)), false);
}
std::shared_ptr<linphone::ConferenceInfo> linphone::Factory::createConferenceInfo() {
	return Object::cPtrToSharedPtr<linphone::ConferenceInfo>(linphone_factory_create_conference_info((::LinphoneFactory *)mPrivPtr), false);
}
std::shared_ptr<linphone::ConferenceInfo> linphone::Factory::createConferenceInfoFromIcalendarContent(const std::shared_ptr<linphone::Content> & content) {
	return Object::cPtrToSharedPtr<linphone::ConferenceInfo>(linphone_factory_create_conference_info_from_icalendar_content((::LinphoneFactory *)mPrivPtr, (::LinphoneContent *)Object::sharedPtrToCPtr(std::static_pointer_cast<Object,linphone::Content>(content))), false);
}
std::shared_ptr<linphone::Config> linphone::Factory::createConfig(const std::string & path) {
	return Object::cPtrToSharedPtr<linphone::Config>(linphone_factory_create_config((::LinphoneFactory *)mPrivPtr, StringUtilities::cppStringToC(path)), false);
}
std::shared_ptr<linphone::Config> linphone::Factory::createConfigFromString(const std::string & data) {
	return Object::cPtrToSharedPtr<linphone::Config>(linphone_factory_create_config_from_string((::LinphoneFactory *)mPrivPtr, StringUtilities::cppStringToC(data)), false);
}
std::shared_ptr<linphone::Config> linphone::Factory::createConfigWithFactory(const std::string & path, const std::string & factoryPath) {
	return Object::cPtrToSharedPtr<linphone::Config>(linphone_factory_create_config_with_factory((::LinphoneFactory *)mPrivPtr, StringUtilities::cppStringToC(path), StringUtilities::cppStringToC(factoryPath)), false);
}
std::shared_ptr<linphone::Content> linphone::Factory::createContent() {
	return Object::cPtrToSharedPtr<linphone::Content>(linphone_factory_create_content((::LinphoneFactory *)mPrivPtr), false);
}
std::shared_ptr<linphone::Content> linphone::Factory::createContentFromFile(const std::string & filePath) {
	return Object::cPtrToSharedPtr<linphone::Content>(linphone_factory_create_content_from_file((::LinphoneFactory *)mPrivPtr, StringUtilities::cppStringToC(filePath)), false);
}
std::shared_ptr<linphone::Core> linphone::Factory::createCore(const std::string & configPath, const std::string & factoryConfigPath, void * systemContext) const {
	return Object::cPtrToSharedPtr<linphone::Core>(linphone_factory_create_core_3((::LinphoneFactory *)mPrivPtr, StringUtilities::cppStringToC(configPath), StringUtilities::cppStringToC(factoryConfigPath), systemContext), false);
}
std::shared_ptr<linphone::Core> linphone::Factory::createCoreWithConfig(const std::shared_ptr<linphone::Config> & config, void * systemContext) const {
	return Object::cPtrToSharedPtr<linphone::Core>(linphone_factory_create_core_with_config_3((::LinphoneFactory *)mPrivPtr, (::LinphoneConfig *)Object::sharedPtrToCPtr(std::static_pointer_cast<Object,linphone::Config>(config)), systemContext), false);
}
std::shared_ptr<linphone::DigestAuthenticationPolicy> linphone::Factory::createDigestAuthenticationPolicy() const {
	return Object::cPtrToSharedPtr<linphone::DigestAuthenticationPolicy>(linphone_factory_create_digest_authentication_policy((::LinphoneFactory *)mPrivPtr), false);
}
std::shared_ptr<linphone::ErrorInfo> linphone::Factory::createErrorInfo() {
	return Object::cPtrToSharedPtr<linphone::ErrorInfo>(linphone_factory_create_error_info((::LinphoneFactory *)mPrivPtr), false);
}
std::shared_ptr<linphone::FriendPhoneNumber> linphone::Factory::createFriendPhoneNumber(const std::string & phoneNumber, const std::string & label) const {
	return Object::cPtrToSharedPtr<linphone::FriendPhoneNumber>(linphone_factory_create_friend_phone_number((::LinphoneFactory *)mPrivPtr, StringUtilities::cppStringToC(phoneNumber), StringUtilities::cppStringToC(label)), false);
}
std::shared_ptr<linphone::ParticipantDeviceIdentity> linphone::Factory::createParticipantDeviceIdentity(const std::shared_ptr<const linphone::Address> & address, const std::string & name) const {
	return Object::cPtrToSharedPtr<linphone::ParticipantDeviceIdentity>(linphone_factory_create_participant_device_identity((::LinphoneFactory *)mPrivPtr, (::LinphoneAddress *)Object::sharedPtrToCPtr(std::static_pointer_cast<const Object,const linphone::Address>(address)), StringUtilities::cppStringToC(name)), false);
}
std::shared_ptr<linphone::ParticipantInfo> linphone::Factory::createParticipantInfo(const std::shared_ptr<linphone::Address> & address) {
	return Object::cPtrToSharedPtr<linphone::ParticipantInfo>(linphone_factory_create_participant_info((::LinphoneFactory *)mPrivPtr, (::LinphoneAddress *)Object::sharedPtrToCPtr(std::static_pointer_cast<Object,linphone::Address>(address))), false);
}
std::shared_ptr<linphone::Content> linphone::Factory::createQrcode(const std::string & code, unsigned int width, unsigned int height, unsigned int margin) {
	return Object::cPtrToSharedPtr<linphone::Content>(linphone_factory_create_qrcode((::LinphoneFactory *)mPrivPtr, StringUtilities::cppStringToC(code), width, height, margin), false);
}
std::shared_ptr<linphone::Range> linphone::Factory::createRange() {
	return Object::cPtrToSharedPtr<linphone::Range>(linphone_factory_create_range((::LinphoneFactory *)mPrivPtr), false);
}
std::shared_ptr<linphone::SignalInformation> linphone::Factory::createSignalInformation() {
	return Object::cPtrToSharedPtr<linphone::SignalInformation>(linphone_factory_create_signal_information((::LinphoneFactory *)mPrivPtr), false);
}
std::shared_ptr<linphone::Transports> linphone::Factory::createTransports() {
	return Object::cPtrToSharedPtr<linphone::Transports>(linphone_factory_create_transports((::LinphoneFactory *)mPrivPtr), false);
}
std::shared_ptr<linphone::TunnelConfig> linphone::Factory::createTunnelConfig() {
	return Object::cPtrToSharedPtr<linphone::TunnelConfig>(linphone_factory_create_tunnel_config((::LinphoneFactory *)mPrivPtr), false);
}
std::shared_ptr<linphone::Vcard> linphone::Factory::createVcard() {
	return Object::cPtrToSharedPtr<linphone::Vcard>(linphone_factory_create_vcard((::LinphoneFactory *)mPrivPtr), false);
}
std::shared_ptr<linphone::VideoActivationPolicy> linphone::Factory::createVideoActivationPolicy() {
	return Object::cPtrToSharedPtr<linphone::VideoActivationPolicy>(linphone_factory_create_video_activation_policy((::LinphoneFactory *)mPrivPtr), false);
}
std::shared_ptr<linphone::VideoDefinition> linphone::Factory::createVideoDefinition(unsigned int width, unsigned int height) const {
	return Object::cPtrToSharedPtr<linphone::VideoDefinition>(linphone_factory_create_video_definition((::LinphoneFactory *)mPrivPtr, width, height), false);
}
std::shared_ptr<linphone::VideoDefinition> linphone::Factory::createVideoDefinitionFromName(const std::string & name) const {
	return Object::cPtrToSharedPtr<linphone::VideoDefinition>(linphone_factory_create_video_definition_from_name((::LinphoneFactory *)mPrivPtr, StringUtilities::cppStringToC(name)), false);
}
std::shared_ptr<linphone::VideoSourceDescriptor> linphone::Factory::createVideoSourceDescriptor() {
	return Object::cPtrToSharedPtr<linphone::VideoSourceDescriptor>(linphone_factory_create_video_source_descriptor((::LinphoneFactory *)mPrivPtr), false);
}
void linphone::Factory::enableLogCollection(linphone::LogCollectionState state) {
	linphone_factory_enable_log_collection((::LinphoneFactory *)mPrivPtr, (::LinphoneLogCollectionState)state);
}
std::string linphone::Factory::getCacheDir(void * context) {
	return StringUtilities::cStringToCpp(linphone_factory_get_cache_dir((::LinphoneFactory *)mPrivPtr, context));
}
std::string linphone::Factory::getConfigDir(void * context) {
	return StringUtilities::cStringToCpp(linphone_factory_get_config_dir((::LinphoneFactory *)mPrivPtr, context));
}
std::string linphone::Factory::getDataDir(void * context) {
	return StringUtilities::cStringToCpp(linphone_factory_get_data_dir((::LinphoneFactory *)mPrivPtr, context));
}
std::string linphone::Factory::getDownloadDir(void * context) {
	return StringUtilities::cStringToCpp(linphone_factory_get_download_dir((::LinphoneFactory *)mPrivPtr, context));
}
bool linphone::Factory::isChatroomBackendAvailable(linphone::ChatRoom::Backend chatroomBackend) {
	return (linphone_factory_is_chatroom_backend_available((::LinphoneFactory *)mPrivPtr, (::LinphoneChatRoomBackend)chatroomBackend) != FALSE);
}
bool linphone::Factory::setVfsEncryption(const uint16_t encryptionModule, const uint8_t * secret, const size_t secretSize) {
	return (linphone_factory_set_vfs_encryption((::LinphoneFactory *)mPrivPtr, encryptionModule, secret, secretSize) != FALSE);
}
int linphone::Factory::writeQrcodeFile(const std::string & filePath, const std::string & code, unsigned int width, unsigned int height, unsigned int margin) {
	return linphone_factory_write_qrcode_file((::LinphoneFactory *)mPrivPtr, StringUtilities::cppStringToC(filePath), StringUtilities::cppStringToC(code), width, height, margin);
}

void linphone::Factory::clean() {
	linphone_factory_clean();
}
std::shared_ptr<linphone::Factory> linphone::Factory::get() {
	return Object::cPtrToSharedPtr<linphone::Factory>(linphone_factory_get());
}



linphone::Address::Address(void *ptr, bool takeRef): Object(ptr, takeRef) {
}



std::string linphone::Address::getDisplayName() const {
	return StringUtilities::cStringToCpp(linphone_address_get_display_name((::LinphoneAddress *)mPrivPtr));
}
linphone::Status linphone::Address::setDisplayName(const std::string & displayName) {
	return linphone_address_set_display_name((::LinphoneAddress *)mPrivPtr, StringUtilities::cppStringToC(displayName));
}
std::string linphone::Address::getDomain() const {
	return StringUtilities::cStringToCpp(linphone_address_get_domain((::LinphoneAddress *)mPrivPtr));
}
linphone::Status linphone::Address::setDomain(const std::string & domain) {
	return linphone_address_set_domain((::LinphoneAddress *)mPrivPtr, StringUtilities::cppStringToC(domain));
}
bool linphone::Address::isSip() const {
	return (linphone_address_is_sip((::LinphoneAddress *)mPrivPtr) != FALSE);
}
bool linphone::Address::isValid() const {
	return (linphone_address_is_valid((::LinphoneAddress *)mPrivPtr) != FALSE);
}
std::string linphone::Address::getMethodParam() const {
	return StringUtilities::cStringToCpp(linphone_address_get_method_param((::LinphoneAddress *)mPrivPtr));
}
void linphone::Address::setMethodParam(const std::string & methodParam) {
	linphone_address_set_method_param((::LinphoneAddress *)mPrivPtr, StringUtilities::cppStringToC(methodParam));
}
std::string linphone::Address::getPassword() const {
	return StringUtilities::cStringToCpp(linphone_address_get_password((::LinphoneAddress *)mPrivPtr));
}
void linphone::Address::setPassword(const std::string & password) {
	linphone_address_set_password((::LinphoneAddress *)mPrivPtr, StringUtilities::cppStringToC(password));
}
int linphone::Address::getPort() const {
	return linphone_address_get_port((::LinphoneAddress *)mPrivPtr);
}
linphone::Status linphone::Address::setPort(int port) {
	return linphone_address_set_port((::LinphoneAddress *)mPrivPtr, port);
}
std::string linphone::Address::getScheme() const {
	return StringUtilities::cStringToCpp(linphone_address_get_scheme((::LinphoneAddress *)mPrivPtr));
}
bool linphone::Address::getSecure() const {
	return (linphone_address_get_secure((::LinphoneAddress *)mPrivPtr) != FALSE);
}
void linphone::Address::setSecure(bool enabled) {
	linphone_address_set_secure((::LinphoneAddress *)mPrivPtr, enabled);
}
linphone::TransportType linphone::Address::getTransport() const {
	return (linphone::TransportType)linphone_address_get_transport((::LinphoneAddress *)mPrivPtr);
}
linphone::Status linphone::Address::setTransport(linphone::TransportType transport) {
	return linphone_address_set_transport((::LinphoneAddress *)mPrivPtr, (::LinphoneTransportType)transport);
}
void linphone::Address::setUriParams(const std::string & params) {
	linphone_address_set_uri_params((::LinphoneAddress *)mPrivPtr, StringUtilities::cppStringToC(params));
}
std::string linphone::Address::getUsername() const {
	return StringUtilities::cStringToCpp(linphone_address_get_username((::LinphoneAddress *)mPrivPtr));
}
linphone::Status linphone::Address::setUsername(const std::string & username) {
	return linphone_address_set_username((::LinphoneAddress *)mPrivPtr, StringUtilities::cppStringToC(username));
}
std::string linphone::Address::asString() const {
	return StringUtilities::cStringToCpp(linphone_address_as_string((::LinphoneAddress *)mPrivPtr));
}
std::string linphone::Address::asStringUriOnly() const {
	return StringUtilities::cStringToCpp(linphone_address_as_string_uri_only((::LinphoneAddress *)mPrivPtr));
}
void linphone::Address::clean() {
	linphone_address_clean((::LinphoneAddress *)mPrivPtr);
}
std::shared_ptr<linphone::Address> linphone::Address::clone() const {
	return Object::cPtrToSharedPtr<linphone::Address>(linphone_address_clone((::LinphoneAddress *)mPrivPtr), false);
}
bool linphone::Address::equal(const std::shared_ptr<const linphone::Address> & address2) const {
	return (linphone_address_equal((::LinphoneAddress *)mPrivPtr, (::LinphoneAddress *)Object::sharedPtrToCPtr(std::static_pointer_cast<const Object,const linphone::Address>(address2))) != FALSE);
}
std::string linphone::Address::getHeader(const std::string & headerName) const {
	return StringUtilities::cStringToCpp(linphone_address_get_header((::LinphoneAddress *)mPrivPtr, StringUtilities::cppStringToC(headerName)));
}
std::string linphone::Address::getParam(const std::string & paramName) const {
	return StringUtilities::cStringToCpp(linphone_address_get_param((::LinphoneAddress *)mPrivPtr, StringUtilities::cppStringToC(paramName)));
}
std::string linphone::Address::getUriParam(const std::string & uriParamName) const {
	return StringUtilities::cStringToCpp(linphone_address_get_uri_param((::LinphoneAddress *)mPrivPtr, StringUtilities::cppStringToC(uriParamName)));
}
bool linphone::Address::hasParam(const std::string & paramName) const {
	return (linphone_address_has_param((::LinphoneAddress *)mPrivPtr, StringUtilities::cppStringToC(paramName)) != FALSE);
}
bool linphone::Address::hasUriParam(const std::string & uriParamName) const {
	return (linphone_address_has_uri_param((::LinphoneAddress *)mPrivPtr, StringUtilities::cppStringToC(uriParamName)) != FALSE);
}
void linphone::Address::removeUriParam(const std::string & uriParamName) {
	linphone_address_remove_uri_param((::LinphoneAddress *)mPrivPtr, StringUtilities::cppStringToC(uriParamName));
}
void linphone::Address::setHeader(const std::string & headerName, const std::string & headerValue) {
	linphone_address_set_header((::LinphoneAddress *)mPrivPtr, StringUtilities::cppStringToC(headerName), StringUtilities::cppStringToC(headerValue));
}
void linphone::Address::setParam(const std::string & paramName, const std::string & paramValue) {
	linphone_address_set_param((::LinphoneAddress *)mPrivPtr, StringUtilities::cppStringToC(paramName), StringUtilities::cppStringToC(paramValue));
}
void linphone::Address::setUriParam(const std::string & uriParamName, const std::string & uriParamValue) {
	linphone_address_set_uri_param((::LinphoneAddress *)mPrivPtr, StringUtilities::cppStringToC(uriParamName), StringUtilities::cppStringToC(uriParamValue));
}
bool linphone::Address::weakEqual(const std::shared_ptr<const linphone::Address> & address2) const {
	return (linphone_address_weak_equal((::LinphoneAddress *)mPrivPtr, (::LinphoneAddress *)Object::sharedPtrToCPtr(std::static_pointer_cast<const Object,const linphone::Address>(address2))) != FALSE);
}




linphone::Headers::Headers(void *ptr, bool takeRef): Object(ptr, takeRef) {
}



void linphone::Headers::add(const std::string & name, const std::string & value) {
	linphone_headers_add((::LinphoneHeaders *)mPrivPtr, StringUtilities::cppStringToC(name), StringUtilities::cppStringToC(value));
}
std::string linphone::Headers::getValue(const std::string & headerName) {
	return StringUtilities::cStringToCpp(linphone_headers_get_value((::LinphoneHeaders *)mPrivPtr, StringUtilities::cppStringToC(headerName)));
}
void linphone::Headers::remove(const std::string & name) {
	linphone_headers_remove((::LinphoneHeaders *)mPrivPtr, StringUtilities::cppStringToC(name));
}




linphone::Content::Content(void *ptr, bool takeRef): Object(ptr, takeRef) {
}



const uint8_t * linphone::Content::getBuffer() const {
	return linphone_content_get_buffer((::LinphoneContent *)mPrivPtr);
}
std::string linphone::Content::getDisposition() const {
	return StringUtilities::cStringToCpp(linphone_content_get_disposition((::LinphoneContent *)mPrivPtr));
}
void linphone::Content::setDisposition(const std::string & disposition) {
	linphone_content_set_disposition((::LinphoneContent *)mPrivPtr, StringUtilities::cppStringToC(disposition));
}
std::string linphone::Content::getEncoding() const {
	return StringUtilities::cStringToCpp(linphone_content_get_encoding((::LinphoneContent *)mPrivPtr));
}
void linphone::Content::setEncoding(const std::string & encoding) {
	linphone_content_set_encoding((::LinphoneContent *)mPrivPtr, StringUtilities::cppStringToC(encoding));
}
int linphone::Content::getFileDuration() {
	return linphone_content_get_file_duration((::LinphoneContent *)mPrivPtr);
}
std::string linphone::Content::getFilePath() const {
	return StringUtilities::cStringToCpp(linphone_content_get_file_path((::LinphoneContent *)mPrivPtr));
}
void linphone::Content::setFilePath(const std::string & filePath) {
	linphone_content_set_file_path((::LinphoneContent *)mPrivPtr, StringUtilities::cppStringToC(filePath));
}
size_t linphone::Content::getFileSize() const {
	return linphone_content_get_file_size((::LinphoneContent *)mPrivPtr);
}
bool linphone::Content::isFile() const {
	return (linphone_content_is_file((::LinphoneContent *)mPrivPtr) != FALSE);
}
bool linphone::Content::isFileEncrypted() const {
	return (linphone_content_is_file_encrypted((::LinphoneContent *)mPrivPtr) != FALSE);
}
bool linphone::Content::isFileTransfer() const {
	return (linphone_content_is_file_transfer((::LinphoneContent *)mPrivPtr) != FALSE);
}
bool linphone::Content::isIcalendar() const {
	return (linphone_content_is_icalendar((::LinphoneContent *)mPrivPtr) != FALSE);
}
bool linphone::Content::isMultipart() const {
	return (linphone_content_is_multipart((::LinphoneContent *)mPrivPtr) != FALSE);
}
bool linphone::Content::isText() const {
	return (linphone_content_is_text((::LinphoneContent *)mPrivPtr) != FALSE);
}
bool linphone::Content::isVoiceRecording() const {
	return (linphone_content_is_voice_recording((::LinphoneContent *)mPrivPtr) != FALSE);
}
std::string linphone::Content::getKey() const {
	return StringUtilities::cStringToCpp(linphone_content_get_key((::LinphoneContent *)mPrivPtr));
}
size_t linphone::Content::getKeySize() const {
	return linphone_content_get_key_size((::LinphoneContent *)mPrivPtr);
}
std::string linphone::Content::getName() const {
	return StringUtilities::cStringToCpp(linphone_content_get_name((::LinphoneContent *)mPrivPtr));
}
void linphone::Content::setName(const std::string & name) {
	linphone_content_set_name((::LinphoneContent *)mPrivPtr, StringUtilities::cppStringToC(name));
}
std::list<std::shared_ptr<linphone::Content>> linphone::Content::getParts() const {
	return ObjectBctbxListWrapper<linphone::Content>::bctbxListToCppList(linphone_content_get_parts((::LinphoneContent *)mPrivPtr), false);
}
std::string linphone::Content::getPlainFilePath() const {
	return StringUtilities::cStringToCpp(linphone_content_get_plain_file_path((::LinphoneContent *)mPrivPtr));
}
size_t linphone::Content::getSize() const {
	return linphone_content_get_size((::LinphoneContent *)mPrivPtr);
}
void linphone::Content::setSize(size_t size) {
	linphone_content_set_size((::LinphoneContent *)mPrivPtr, size);
}
std::string linphone::Content::getStringBuffer() const {
	return StringUtilities::cStringToCpp(linphone_content_get_string_buffer((::LinphoneContent *)mPrivPtr));
}
void linphone::Content::setStringBuffer(const std::string & buffer) {
	linphone_content_set_string_buffer((::LinphoneContent *)mPrivPtr, StringUtilities::cppStringToC(buffer));
}
std::string linphone::Content::getSubtype() const {
	return StringUtilities::cStringToCpp(linphone_content_get_subtype((::LinphoneContent *)mPrivPtr));
}
void linphone::Content::setSubtype(const std::string & subtype) {
	linphone_content_set_subtype((::LinphoneContent *)mPrivPtr, StringUtilities::cppStringToC(subtype));
}
std::string linphone::Content::getType() const {
	return StringUtilities::cStringToCpp(linphone_content_get_type((::LinphoneContent *)mPrivPtr));
}
void linphone::Content::setType(const std::string & type) {
	linphone_content_set_type((::LinphoneContent *)mPrivPtr, StringUtilities::cppStringToC(type));
}
std::string linphone::Content::getUtf8Text() const {
	return StringUtilities::cStringToCpp(linphone_content_get_utf8_text((::LinphoneContent *)mPrivPtr));
}
void linphone::Content::setUtf8Text(const std::string & buffer) {
	linphone_content_set_utf8_text((::LinphoneContent *)mPrivPtr, StringUtilities::cppStringToC(buffer));
}
void linphone::Content::addContentTypeParameter(const std::string & name, const std::string & value) {
	linphone_content_add_content_type_parameter((::LinphoneContent *)mPrivPtr, StringUtilities::cppStringToC(name), StringUtilities::cppStringToC(value));
}
void linphone::Content::addCustomHeader(const std::string & headerName, const std::string & headerValue) {
	linphone_content_add_custom_header((::LinphoneContent *)mPrivPtr, StringUtilities::cppStringToC(headerName), StringUtilities::cppStringToC(headerValue));
}
std::string linphone::Content::exportPlainFile() const {
	return StringUtilities::cStringToCpp(linphone_content_export_plain_file((::LinphoneContent *)mPrivPtr));
}
std::shared_ptr<linphone::Content> linphone::Content::findPartByHeader(const std::string & headerName, const std::string & headerValue) const {
	return Object::cPtrToSharedPtr<linphone::Content>(linphone_content_find_part_by_header((::LinphoneContent *)mPrivPtr, StringUtilities::cppStringToC(headerName), StringUtilities::cppStringToC(headerValue)));
}
std::string linphone::Content::getCustomHeader(const std::string & headerName) const {
	return StringUtilities::cStringToCpp(linphone_content_get_custom_header((::LinphoneContent *)mPrivPtr, StringUtilities::cppStringToC(headerName)));
}
std::shared_ptr<linphone::Content> linphone::Content::getPart(int index) const {
	return Object::cPtrToSharedPtr<linphone::Content>(linphone_content_get_part((::LinphoneContent *)mPrivPtr, index));
}
void linphone::Content::setBuffer(const uint8_t * buffer, size_t size) {
	linphone_content_set_buffer((::LinphoneContent *)mPrivPtr, buffer, size);
}
void linphone::Content::setKey(const std::string & key, const size_t keyLength) {
	linphone_content_set_key((::LinphoneContent *)mPrivPtr, StringUtilities::cppStringToC(key), keyLength);
}



static void linphone_friend_cbs_on_presence_received_cb(LinphoneFriend * linphone_friend) {
	LinphoneFriendCbs *cbs = linphone_friend_get_current_callbacks(linphone_friend);
	if (cbs) {
		// Make a copy of the list of listeners, so that it is possible to remove a listener from a listener without corrupting the list.
		std::list<std::shared_ptr<Listener> > listeners = *static_cast<std::list<std::shared_ptr<Listener> > *>(belle_sip_object_data_get((::belle_sip_object_t *)cbs, MultiListenableObject::sListenerListName));
		for(std::list<std::shared_ptr<Listener> >::iterator it=listeners.begin(); it!=listeners.end(); it++) {
			std::shared_ptr<FriendListener> listener = std::static_pointer_cast<FriendListener,Listener>(*it);
			listener->onPresenceReceived(Object::cPtrToSharedPtr<Friend>(linphone_friend));
		}
	}
}

linphone::Friend::Friend(void *ptr, bool takeRef): MultiListenableObject(ptr, takeRef) {
}

void Friend::addListener(const std::shared_ptr<FriendListener> &listener) {
	MultiListenableObject::addListener(std::static_pointer_cast<Listener,FriendListener>(listener));
}

void Friend::removeListener(const std::shared_ptr<FriendListener> &listener) {
	MultiListenableObject::removeListener(std::static_pointer_cast<Listener,FriendListener>(listener));
}

void *Friend::createCallbacks() {
	LinphoneFriendCbs *cbs = linphone_factory_create_friend_cbs(linphone_factory_get());
	linphone_friend_cbs_set_presence_received(cbs, linphone_friend_cbs_on_presence_received_cb);
	belle_sip_object_data_set((::belle_sip_object_t *)(cbs), MultiListenableObject::sListenerListName, new list<shared_ptr<Listener>>(), (::belle_sip_data_destroy)deleteListenerList);
	belle_sip_object_data_set((::belle_sip_object_t *)(mPrivPtr), MultiListenableObject::sCbsPtrName, cbs, nullptr);
	linphone_friend_add_callbacks(static_cast<::LinphoneFriend *>(mPrivPtr), cbs);
	belle_sip_object_unref((::belle_sip_object_t *)cbs);
	return cbs;
}


std::shared_ptr<const linphone::Address> linphone::Friend::getAddress() const {
	return Object::cPtrToSharedPtr<const linphone::Address>(linphone_friend_get_address((::LinphoneFriend *)mPrivPtr));
}
linphone::Status linphone::Friend::setAddress(const std::shared_ptr<const linphone::Address> & address) {
	return linphone_friend_set_address((::LinphoneFriend *)mPrivPtr, (::LinphoneAddress *)Object::sharedPtrToCPtr(std::static_pointer_cast<const Object,const linphone::Address>(address)));
}
std::list<std::shared_ptr<linphone::Address>> linphone::Friend::getAddresses() const {
	return ObjectBctbxListWrapper<linphone::Address>::bctbxListToCppList(linphone_friend_get_addresses((::LinphoneFriend *)mPrivPtr), true);
}
int linphone::Friend::getCapabilities() const {
	return linphone_friend_get_capabilities((::LinphoneFriend *)mPrivPtr);
}
linphone::ConsolidatedPresence linphone::Friend::getConsolidatedPresence() const {
	return (linphone::ConsolidatedPresence)linphone_friend_get_consolidated_presence((::LinphoneFriend *)mPrivPtr);
}
std::shared_ptr<linphone::Core> linphone::Friend::getCore() const {
	return Object::cPtrToSharedPtr<linphone::Core>(linphone_friend_get_core((::LinphoneFriend *)mPrivPtr));
}
linphone::SubscribePolicy linphone::Friend::getIncSubscribePolicy() const {
	return (linphone::SubscribePolicy)linphone_friend_get_inc_subscribe_policy((::LinphoneFriend *)mPrivPtr);
}
linphone::Status linphone::Friend::setIncSubscribePolicy(linphone::SubscribePolicy policy) {
	return linphone_friend_set_inc_subscribe_policy((::LinphoneFriend *)mPrivPtr, (::LinphoneSubscribePolicy)policy);
}
bool linphone::Friend::isPresenceReceived() const {
	return (linphone_friend_is_presence_received((::LinphoneFriend *)mPrivPtr) != FALSE);
}
std::string linphone::Friend::getJobTitle() const {
	return StringUtilities::cStringToCpp(linphone_friend_get_job_title((::LinphoneFriend *)mPrivPtr));
}
void linphone::Friend::setJobTitle(const std::string & jobTitle) {
	linphone_friend_set_job_title((::LinphoneFriend *)mPrivPtr, StringUtilities::cppStringToC(jobTitle));
}
std::string linphone::Friend::getName() const {
	return StringUtilities::cStringToCpp(linphone_friend_get_name((::LinphoneFriend *)mPrivPtr));
}
linphone::Status linphone::Friend::setName(const std::string & name) {
	return linphone_friend_set_name((::LinphoneFriend *)mPrivPtr, StringUtilities::cppStringToC(name));
}
std::string linphone::Friend::getNativeUri() const {
	return StringUtilities::cStringToCpp(linphone_friend_get_native_uri((::LinphoneFriend *)mPrivPtr));
}
void linphone::Friend::setNativeUri(const std::string & nativeUri) {
	linphone_friend_set_native_uri((::LinphoneFriend *)mPrivPtr, StringUtilities::cppStringToC(nativeUri));
}
std::string linphone::Friend::getOrganization() const {
	return StringUtilities::cStringToCpp(linphone_friend_get_organization((::LinphoneFriend *)mPrivPtr));
}
void linphone::Friend::setOrganization(const std::string & organization) {
	linphone_friend_set_organization((::LinphoneFriend *)mPrivPtr, StringUtilities::cppStringToC(organization));
}
std::list<std::string> linphone::Friend::getPhoneNumbers() const {
	return StringBctbxListWrapper::bctbxListToCppList(linphone_friend_get_phone_numbers((::LinphoneFriend *)mPrivPtr));
}
std::list<std::shared_ptr<linphone::FriendPhoneNumber>> linphone::Friend::getPhoneNumbersWithLabel() const {
	return ObjectBctbxListWrapper<linphone::FriendPhoneNumber>::bctbxListToCppList(linphone_friend_get_phone_numbers_with_label((::LinphoneFriend *)mPrivPtr), false);
}
std::string linphone::Friend::getPhoto() const {
	return StringUtilities::cStringToCpp(linphone_friend_get_photo((::LinphoneFriend *)mPrivPtr));
}
void linphone::Friend::setPhoto(const std::string & pictureUri) {
	linphone_friend_set_photo((::LinphoneFriend *)mPrivPtr, StringUtilities::cppStringToC(pictureUri));
}
std::shared_ptr<const linphone::PresenceModel> linphone::Friend::getPresenceModel() const {
	return Object::cPtrToSharedPtr<const linphone::PresenceModel>(linphone_friend_get_presence_model((::LinphoneFriend *)mPrivPtr));
}
void linphone::Friend::setPresenceModel(const std::shared_ptr<linphone::PresenceModel> & presence) {
	linphone_friend_set_presence_model((::LinphoneFriend *)mPrivPtr, (::LinphonePresenceModel *)Object::sharedPtrToCPtr(std::static_pointer_cast<Object,linphone::PresenceModel>(presence)));
}
std::string linphone::Friend::getRefKey() const {
	return StringUtilities::cStringToCpp(linphone_friend_get_ref_key((::LinphoneFriend *)mPrivPtr));
}
void linphone::Friend::setRefKey(const std::string & key) {
	linphone_friend_set_ref_key((::LinphoneFriend *)mPrivPtr, StringUtilities::cppStringToC(key));
}
bool linphone::Friend::getStarred() const {
	return (linphone_friend_get_starred((::LinphoneFriend *)mPrivPtr) != FALSE);
}
void linphone::Friend::setStarred(bool isStarred) {
	linphone_friend_set_starred((::LinphoneFriend *)mPrivPtr, isStarred);
}
bool linphone::Friend::subscribesEnabled() const {
	return (linphone_friend_subscribes_enabled((::LinphoneFriend *)mPrivPtr) != FALSE);
}
linphone::Status linphone::Friend::enableSubscribes(bool enable) {
	return linphone_friend_enable_subscribes((::LinphoneFriend *)mPrivPtr, enable);
}
linphone::SubscriptionState linphone::Friend::getSubscriptionState() const {
	return (linphone::SubscriptionState)linphone_friend_get_subscription_state((::LinphoneFriend *)mPrivPtr);
}
std::shared_ptr<linphone::Vcard> linphone::Friend::getVcard() const {
	return Object::cPtrToSharedPtr<linphone::Vcard>(linphone_friend_get_vcard((::LinphoneFriend *)mPrivPtr));
}
void linphone::Friend::setVcard(const std::shared_ptr<linphone::Vcard> & vcard) {
	linphone_friend_set_vcard((::LinphoneFriend *)mPrivPtr, (::LinphoneVcard *)Object::sharedPtrToCPtr(std::static_pointer_cast<Object,linphone::Vcard>(vcard)));
}
void linphone::Friend::addAddress(const std::shared_ptr<const linphone::Address> & address) {
	linphone_friend_add_address((::LinphoneFriend *)mPrivPtr, (::LinphoneAddress *)Object::sharedPtrToCPtr(std::static_pointer_cast<const Object,const linphone::Address>(address)));
}
void linphone::Friend::addPhoneNumber(const std::string & phoneNumber) {
	linphone_friend_add_phone_number((::LinphoneFriend *)mPrivPtr, StringUtilities::cppStringToC(phoneNumber));
}
void linphone::Friend::addPhoneNumberWithLabel(const std::shared_ptr<linphone::FriendPhoneNumber> & phoneNumber) {
	linphone_friend_add_phone_number_with_label((::LinphoneFriend *)mPrivPtr, (::LinphoneFriendPhoneNumber *)Object::sharedPtrToCPtr(std::static_pointer_cast<Object,linphone::FriendPhoneNumber>(phoneNumber)));
}
bool linphone::Friend::createVcard(const std::string & name) {
	return (linphone_friend_create_vcard((::LinphoneFriend *)mPrivPtr, StringUtilities::cppStringToC(name)) != FALSE);
}
void linphone::Friend::done() {
	linphone_friend_done((::LinphoneFriend *)mPrivPtr);
}
void linphone::Friend::edit() {
	linphone_friend_edit((::LinphoneFriend *)mPrivPtr);
}
float linphone::Friend::getCapabilityVersion(linphone::Friend::Capability capability) const {
	return linphone_friend_get_capability_version((::LinphoneFriend *)mPrivPtr, (::LinphoneFriendCapability)capability);
}
std::shared_ptr<const linphone::PresenceModel> linphone::Friend::getPresenceModelForUriOrTel(const std::string & uriOrTel) const {
	return Object::cPtrToSharedPtr<const linphone::PresenceModel>(linphone_friend_get_presence_model_for_uri_or_tel((::LinphoneFriend *)mPrivPtr, StringUtilities::cppStringToC(uriOrTel)));
}
bool linphone::Friend::hasCapability(linphone::Friend::Capability capability) const {
	return (linphone_friend_has_capability((::LinphoneFriend *)mPrivPtr, (::LinphoneFriendCapability)capability) != FALSE);
}
bool linphone::Friend::hasCapabilityWithVersion(linphone::Friend::Capability capability, float version) const {
	return (linphone_friend_has_capability_with_version((::LinphoneFriend *)mPrivPtr, (::LinphoneFriendCapability)capability, version) != FALSE);
}
bool linphone::Friend::hasCapabilityWithVersionOrMore(linphone::Friend::Capability capability, float version) const {
	return (linphone_friend_has_capability_with_version_or_more((::LinphoneFriend *)mPrivPtr, (::LinphoneFriendCapability)capability, version) != FALSE);
}
bool linphone::Friend::hasPhoneNumber(const std::string & phoneNumber) const {
	return (linphone_friend_has_phone_number((::LinphoneFriend *)mPrivPtr, StringUtilities::cppStringToC(phoneNumber)) != FALSE);
}
bool linphone::Friend::inList() const {
	return (linphone_friend_in_list((::LinphoneFriend *)mPrivPtr) != FALSE);
}
void linphone::Friend::remove() {
	linphone_friend_remove((::LinphoneFriend *)mPrivPtr);
}
void linphone::Friend::removeAddress(const std::shared_ptr<const linphone::Address> & address) {
	linphone_friend_remove_address((::LinphoneFriend *)mPrivPtr, (::LinphoneAddress *)Object::sharedPtrToCPtr(std::static_pointer_cast<const Object,const linphone::Address>(address)));
}
void linphone::Friend::removePhoneNumber(const std::string & phoneNumber) {
	linphone_friend_remove_phone_number((::LinphoneFriend *)mPrivPtr, StringUtilities::cppStringToC(phoneNumber));
}
void linphone::Friend::removePhoneNumberWithLabel(const std::shared_ptr<const linphone::FriendPhoneNumber> & phoneNumber) {
	linphone_friend_remove_phone_number_with_label((::LinphoneFriend *)mPrivPtr, (::LinphoneFriendPhoneNumber *)Object::sharedPtrToCPtr(std::static_pointer_cast<const Object,const linphone::FriendPhoneNumber>(phoneNumber)));
}
void linphone::Friend::save(const std::shared_ptr<linphone::Core> & core) {
	linphone_friend_save((::LinphoneFriend *)mPrivPtr, (::LinphoneCore *)Object::sharedPtrToCPtr(std::static_pointer_cast<Object,linphone::Core>(core)));
}
void linphone::Friend::setPresenceModelForUriOrTel(const std::string & uriOrTel, const std::shared_ptr<linphone::PresenceModel> & presence) {
	linphone_friend_set_presence_model_for_uri_or_tel((::LinphoneFriend *)mPrivPtr, StringUtilities::cppStringToC(uriOrTel), (::LinphonePresenceModel *)Object::sharedPtrToCPtr(std::static_pointer_cast<Object,linphone::PresenceModel>(presence)));
}

std::shared_ptr<linphone::Friend> linphone::Friend::newFromVcard(const std::shared_ptr<linphone::Vcard> & vcard) {
	return Object::cPtrToSharedPtr<linphone::Friend>(linphone_friend_new_from_vcard((::LinphoneVcard *)Object::sharedPtrToCPtr(std::static_pointer_cast<Object,linphone::Vcard>(vcard))), false);
}


static void linphone_player_cbs_on_eof_reached_cb(LinphonePlayer * player) {
	LinphonePlayerCbs *cbs = linphone_player_get_current_callbacks(player);
	if (cbs) {
		// Make a copy of the list of listeners, so that it is possible to remove a listener from a listener without corrupting the list.
		std::list<std::shared_ptr<Listener> > listeners = *static_cast<std::list<std::shared_ptr<Listener> > *>(belle_sip_object_data_get((::belle_sip_object_t *)cbs, MultiListenableObject::sListenerListName));
		for(std::list<std::shared_ptr<Listener> >::iterator it=listeners.begin(); it!=listeners.end(); it++) {
			std::shared_ptr<PlayerListener> listener = std::static_pointer_cast<PlayerListener,Listener>(*it);
			listener->onEofReached(Object::cPtrToSharedPtr<Player>(player));
		}
	}
}

linphone::Player::Player(void *ptr, bool takeRef): MultiListenableObject(ptr, takeRef) {
}

void Player::addListener(const std::shared_ptr<PlayerListener> &listener) {
	MultiListenableObject::addListener(std::static_pointer_cast<Listener,PlayerListener>(listener));
}

void Player::removeListener(const std::shared_ptr<PlayerListener> &listener) {
	MultiListenableObject::removeListener(std::static_pointer_cast<Listener,PlayerListener>(listener));
}

void *Player::createCallbacks() {
	LinphonePlayerCbs *cbs = linphone_factory_create_player_cbs(linphone_factory_get());
	linphone_player_cbs_set_eof_reached(cbs, linphone_player_cbs_on_eof_reached_cb);
	belle_sip_object_data_set((::belle_sip_object_t *)(cbs), MultiListenableObject::sListenerListName, new list<shared_ptr<Listener>>(), (::belle_sip_data_destroy)deleteListenerList);
	belle_sip_object_data_set((::belle_sip_object_t *)(mPrivPtr), MultiListenableObject::sCbsPtrName, cbs, nullptr);
	linphone_player_add_callbacks(static_cast<::LinphonePlayer *>(mPrivPtr), cbs);
	belle_sip_object_unref((::belle_sip_object_t *)cbs);
	return cbs;
}


std::shared_ptr<linphone::Core> linphone::Player::getCore() const {
	return Object::cPtrToSharedPtr<linphone::Core>(linphone_player_get_core((::LinphonePlayer *)mPrivPtr));
}
int linphone::Player::getCurrentPosition() {
	return linphone_player_get_current_position((::LinphonePlayer *)mPrivPtr);
}
int linphone::Player::getDuration() {
	return linphone_player_get_duration((::LinphonePlayer *)mPrivPtr);
}
bool linphone::Player::getIsVideoAvailable() {
	return (linphone_player_get_is_video_available((::LinphonePlayer *)mPrivPtr) != FALSE);
}
linphone::Player::State linphone::Player::getState() {
	return (State)linphone_player_get_state((::LinphonePlayer *)mPrivPtr);
}
float linphone::Player::getVolumeGain() {
	return linphone_player_get_volume_gain((::LinphonePlayer *)mPrivPtr);
}
void linphone::Player::setVolumeGain(float gain) {
	linphone_player_set_volume_gain((::LinphonePlayer *)mPrivPtr, gain);
}
void linphone::Player::setWindowId(void * windowId) {
	linphone_player_set_window_id((::LinphonePlayer *)mPrivPtr, windowId);
}
void linphone::Player::close() {
	linphone_player_close((::LinphonePlayer *)mPrivPtr);
}
void * linphone::Player::createWindowId() {
	return linphone_player_create_window_id((::LinphonePlayer *)mPrivPtr);
}
linphone::Status linphone::Player::open(const std::string & filename) {
	return linphone_player_open((::LinphonePlayer *)mPrivPtr, StringUtilities::cppStringToC(filename));
}
linphone::Status linphone::Player::pause() {
	return linphone_player_pause((::LinphonePlayer *)mPrivPtr);
}
linphone::Status linphone::Player::seek(int timeMs) {
	return linphone_player_seek((::LinphonePlayer *)mPrivPtr, timeMs);
}
linphone::Status linphone::Player::start() {
	return linphone_player_start((::LinphonePlayer *)mPrivPtr);
}




linphone::Config::Config(void *ptr, bool takeRef): Object(ptr, takeRef) {
}



bool linphone::Config::isReadonly() const {
	return (linphone_config_is_readonly((::LinphoneConfig *)mPrivPtr) != FALSE);
}
std::list<std::string> linphone::Config::getSectionsNamesList() {
	return StringBctbxListWrapper::bctbxListToCppList(linphone_config_get_sections_names_list((::LinphoneConfig *)mPrivPtr));
}
void linphone::Config::cleanEntry(const std::string & section, const std::string & key) {
	linphone_config_clean_entry((::LinphoneConfig *)mPrivPtr, StringUtilities::cppStringToC(section), StringUtilities::cppStringToC(key));
}
void linphone::Config::cleanSection(const std::string & section) {
	linphone_config_clean_section((::LinphoneConfig *)mPrivPtr, StringUtilities::cppStringToC(section));
}
std::string linphone::Config::dump() const {
	return StringUtilities::cStringToCpp(linphone_config_dump((::LinphoneConfig *)mPrivPtr));
}
std::string linphone::Config::dumpAsXml() const {
	return StringUtilities::cStringToCpp(linphone_config_dump_as_xml((::LinphoneConfig *)mPrivPtr));
}
bool linphone::Config::getBool(const std::string & section, const std::string & key, bool defaultValue) const {
	return (linphone_config_get_bool((::LinphoneConfig *)mPrivPtr, StringUtilities::cppStringToC(section), StringUtilities::cppStringToC(key), defaultValue) != FALSE);
}
float linphone::Config::getDefaultFloat(const std::string & section, const std::string & key, float defaultValue) const {
	return linphone_config_get_default_float((::LinphoneConfig *)mPrivPtr, StringUtilities::cppStringToC(section), StringUtilities::cppStringToC(key), defaultValue);
}
int linphone::Config::getDefaultInt(const std::string & section, const std::string & key, int defaultValue) const {
	return linphone_config_get_default_int((::LinphoneConfig *)mPrivPtr, StringUtilities::cppStringToC(section), StringUtilities::cppStringToC(key), defaultValue);
}
int64_t linphone::Config::getDefaultInt64(const std::string & section, const std::string & key, int64_t defaultValue) const {
	return linphone_config_get_default_int64((::LinphoneConfig *)mPrivPtr, StringUtilities::cppStringToC(section), StringUtilities::cppStringToC(key), defaultValue);
}
std::string linphone::Config::getDefaultString(const std::string & section, const std::string & key, const std::string & defaultValue) const {
	return StringUtilities::cStringToCpp(linphone_config_get_default_string((::LinphoneConfig *)mPrivPtr, StringUtilities::cppStringToC(section), StringUtilities::cppStringToC(key), StringUtilities::cppStringToC(defaultValue)));
}
float linphone::Config::getFloat(const std::string & section, const std::string & key, float defaultValue) const {
	return linphone_config_get_float((::LinphoneConfig *)mPrivPtr, StringUtilities::cppStringToC(section), StringUtilities::cppStringToC(key), defaultValue);
}
int linphone::Config::getInt(const std::string & section, const std::string & key, int defaultValue) const {
	return linphone_config_get_int((::LinphoneConfig *)mPrivPtr, StringUtilities::cppStringToC(section), StringUtilities::cppStringToC(key), defaultValue);
}
int64_t linphone::Config::getInt64(const std::string & section, const std::string & key, int64_t defaultValue) const {
	return linphone_config_get_int64((::LinphoneConfig *)mPrivPtr, StringUtilities::cppStringToC(section), StringUtilities::cppStringToC(key), defaultValue);
}
std::list<std::string> linphone::Config::getKeysNamesList(const std::string & section) {
	return StringBctbxListWrapper::bctbxListToCppList(linphone_config_get_keys_names_list((::LinphoneConfig *)mPrivPtr, StringUtilities::cppStringToC(section)));
}
bool linphone::Config::getOverwriteFlagForEntry(const std::string & section, const std::string & key) const {
	return (linphone_config_get_overwrite_flag_for_entry((::LinphoneConfig *)mPrivPtr, StringUtilities::cppStringToC(section), StringUtilities::cppStringToC(key)) != FALSE);
}
bool linphone::Config::getOverwriteFlagForSection(const std::string & section) const {
	return (linphone_config_get_overwrite_flag_for_section((::LinphoneConfig *)mPrivPtr, StringUtilities::cppStringToC(section)) != FALSE);
}
bool linphone::Config::getRange(const std::string & section, const std::string & key, int * min, int * max, int defaultMin, int defaultMax) const {
	return (linphone_config_get_range((::LinphoneConfig *)mPrivPtr, StringUtilities::cppStringToC(section), StringUtilities::cppStringToC(key), min, max, defaultMin, defaultMax) != FALSE);
}
std::string linphone::Config::getSectionParamString(const std::string & section, const std::string & key, const std::string & defaultValue) const {
	return StringUtilities::cStringToCpp(linphone_config_get_section_param_string((::LinphoneConfig *)mPrivPtr, StringUtilities::cppStringToC(section), StringUtilities::cppStringToC(key), StringUtilities::cppStringToC(defaultValue)));
}
bool linphone::Config::getSkipFlagForEntry(const std::string & section, const std::string & key) const {
	return (linphone_config_get_skip_flag_for_entry((::LinphoneConfig *)mPrivPtr, StringUtilities::cppStringToC(section), StringUtilities::cppStringToC(key)) != FALSE);
}
bool linphone::Config::getSkipFlagForSection(const std::string & section) const {
	return (linphone_config_get_skip_flag_for_section((::LinphoneConfig *)mPrivPtr, StringUtilities::cppStringToC(section)) != FALSE);
}
std::string linphone::Config::getString(const std::string & section, const std::string & key, const std::string & defaultString) const {
	return StringUtilities::cStringToCpp(linphone_config_get_string((::LinphoneConfig *)mPrivPtr, StringUtilities::cppStringToC(section), StringUtilities::cppStringToC(key), StringUtilities::cppStringToC(defaultString)));
}
std::list<std::string> linphone::Config::getStringList(const std::string & section, const std::string & key, const std::list<std::string> & defaultList) const {
	return StringBctbxListWrapper::bctbxListToCppList(linphone_config_get_string_list((::LinphoneConfig *)mPrivPtr, StringUtilities::cppStringToC(section), StringUtilities::cppStringToC(key), StringBctbxListWrapper(defaultList).c_list()));
}
int linphone::Config::hasEntry(const std::string & section, const std::string & key) const {
	return linphone_config_has_entry((::LinphoneConfig *)mPrivPtr, StringUtilities::cppStringToC(section), StringUtilities::cppStringToC(key));
}
int linphone::Config::hasSection(const std::string & section) const {
	return linphone_config_has_section((::LinphoneConfig *)mPrivPtr, StringUtilities::cppStringToC(section));
}
std::string linphone::Config::loadFromXmlFile(const std::string & filename) {
	return StringUtilities::cStringToCpp(linphone_config_load_from_xml_file((::LinphoneConfig *)mPrivPtr, StringUtilities::cppStringToC(filename)));
}
linphone::Status linphone::Config::loadFromXmlString(const std::string & buffer) {
	return linphone_config_load_from_xml_string((::LinphoneConfig *)mPrivPtr, StringUtilities::cppStringToC(buffer));
}
linphone::Status linphone::Config::readFile(const std::string & filename) {
	return linphone_config_read_file((::LinphoneConfig *)mPrivPtr, StringUtilities::cppStringToC(filename));
}
bool linphone::Config::relativeFileExists(const std::string & filename) const {
	return (linphone_config_relative_file_exists((::LinphoneConfig *)mPrivPtr, StringUtilities::cppStringToC(filename)) != FALSE);
}
void linphone::Config::reload() {
	linphone_config_reload((::LinphoneConfig *)mPrivPtr);
}
void linphone::Config::setBool(const std::string & section, const std::string & key, bool value) {
	linphone_config_set_bool((::LinphoneConfig *)mPrivPtr, StringUtilities::cppStringToC(section), StringUtilities::cppStringToC(key), value);
}
void linphone::Config::setFloat(const std::string & section, const std::string & key, float value) {
	linphone_config_set_float((::LinphoneConfig *)mPrivPtr, StringUtilities::cppStringToC(section), StringUtilities::cppStringToC(key), value);
}
void linphone::Config::setInt(const std::string & section, const std::string & key, int value) {
	linphone_config_set_int((::LinphoneConfig *)mPrivPtr, StringUtilities::cppStringToC(section), StringUtilities::cppStringToC(key), value);
}
void linphone::Config::setInt64(const std::string & section, const std::string & key, int64_t value) {
	linphone_config_set_int64((::LinphoneConfig *)mPrivPtr, StringUtilities::cppStringToC(section), StringUtilities::cppStringToC(key), value);
}
void linphone::Config::setIntHex(const std::string & section, const std::string & key, int value) {
	linphone_config_set_int_hex((::LinphoneConfig *)mPrivPtr, StringUtilities::cppStringToC(section), StringUtilities::cppStringToC(key), value);
}
void linphone::Config::setOverwriteFlagForEntry(const std::string & section, const std::string & key, bool value) {
	linphone_config_set_overwrite_flag_for_entry((::LinphoneConfig *)mPrivPtr, StringUtilities::cppStringToC(section), StringUtilities::cppStringToC(key), value);
}
void linphone::Config::setOverwriteFlagForSection(const std::string & section, bool value) {
	linphone_config_set_overwrite_flag_for_section((::LinphoneConfig *)mPrivPtr, StringUtilities::cppStringToC(section), value);
}
void linphone::Config::setRange(const std::string & section, const std::string & key, int minValue, int maxValue) {
	linphone_config_set_range((::LinphoneConfig *)mPrivPtr, StringUtilities::cppStringToC(section), StringUtilities::cppStringToC(key), minValue, maxValue);
}
void linphone::Config::setSkipFlagForEntry(const std::string & section, const std::string & key, bool value) {
	linphone_config_set_skip_flag_for_entry((::LinphoneConfig *)mPrivPtr, StringUtilities::cppStringToC(section), StringUtilities::cppStringToC(key), value);
}
void linphone::Config::setSkipFlagForSection(const std::string & section, bool value) {
	linphone_config_set_skip_flag_for_section((::LinphoneConfig *)mPrivPtr, StringUtilities::cppStringToC(section), value);
}
void linphone::Config::setString(const std::string & section, const std::string & key, const std::string & value) {
	linphone_config_set_string((::LinphoneConfig *)mPrivPtr, StringUtilities::cppStringToC(section), StringUtilities::cppStringToC(key), StringUtilities::cppStringToC(value));
}
void linphone::Config::setStringList(const std::string & section, const std::string & key, const std::list<std::string> & value) {
	linphone_config_set_string_list((::LinphoneConfig *)mPrivPtr, StringUtilities::cppStringToC(section), StringUtilities::cppStringToC(key), StringBctbxListWrapper(value).c_list());
}
linphone::Status linphone::Config::sync() {
	return linphone_config_sync((::LinphoneConfig *)mPrivPtr);
}
void linphone::Config::writeRelativeFile(const std::string & filename, const std::string & data) const {
	linphone_config_write_relative_file((::LinphoneConfig *)mPrivPtr, StringUtilities::cppStringToC(filename), StringUtilities::cppStringToC(data));
}

std::shared_ptr<linphone::Config> linphone::Config::newFromBuffer(const std::string & buffer) {
	return Object::cPtrToSharedPtr<linphone::Config>(linphone_config_new_from_buffer(StringUtilities::cppStringToC(buffer)), false);
}
std::shared_ptr<linphone::Config> linphone::Config::newWithFactory(const std::string & configFilename, const std::string & factoryConfigFilename) {
	return Object::cPtrToSharedPtr<linphone::Config>(linphone_config_new_with_factory(StringUtilities::cppStringToC(configFilename), StringUtilities::cppStringToC(factoryConfigFilename)), false);
}



linphone::Buffer::Buffer(void *ptr, bool takeRef): Object(ptr, takeRef) {
}



const uint8_t * linphone::Buffer::getContent() const {
	return linphone_buffer_get_content((::LinphoneBuffer *)mPrivPtr);
}
bool linphone::Buffer::isEmpty() const {
	return (linphone_buffer_is_empty((::LinphoneBuffer *)mPrivPtr) != FALSE);
}
size_t linphone::Buffer::getSize() const {
	return linphone_buffer_get_size((::LinphoneBuffer *)mPrivPtr);
}
void linphone::Buffer::setSize(size_t size) {
	linphone_buffer_set_size((::LinphoneBuffer *)mPrivPtr, size);
}
std::string linphone::Buffer::getStringContent() const {
	return StringUtilities::cStringToCpp(linphone_buffer_get_string_content((::LinphoneBuffer *)mPrivPtr));
}
void linphone::Buffer::setStringContent(const std::string & content) {
	linphone_buffer_set_string_content((::LinphoneBuffer *)mPrivPtr, StringUtilities::cppStringToC(content));
}
void linphone::Buffer::setContent(const uint8_t * content, size_t size) {
	linphone_buffer_set_content((::LinphoneBuffer *)mPrivPtr, content, size);
}

std::shared_ptr<linphone::Buffer> linphone::Buffer::newFromData(const uint8_t * data, size_t size) {
	return Object::cPtrToSharedPtr<linphone::Buffer>(linphone_buffer_new_from_data(data, size), false);
}
std::shared_ptr<linphone::Buffer> linphone::Buffer::newFromString(const std::string & data) {
	return Object::cPtrToSharedPtr<linphone::Buffer>(linphone_buffer_new_from_string(StringUtilities::cppStringToC(data)), false);
}



linphone::Tunnel::Tunnel(void *ptr, bool takeRef): Object(ptr, takeRef) {
}



bool linphone::Tunnel::getActivated() const {
	return (linphone_tunnel_get_activated((::LinphoneTunnel *)mPrivPtr) != FALSE);
}
std::string linphone::Tunnel::getDomain() {
	return StringUtilities::cStringToCpp(linphone_tunnel_get_domain((::LinphoneTunnel *)mPrivPtr));
}
void linphone::Tunnel::setDomain(const std::string & domain) {
	linphone_tunnel_set_domain((::LinphoneTunnel *)mPrivPtr, StringUtilities::cppStringToC(domain));
}
bool linphone::Tunnel::dualModeEnabled() const {
	return (linphone_tunnel_dual_mode_enabled((::LinphoneTunnel *)mPrivPtr) != FALSE);
}
void linphone::Tunnel::enableDualMode(bool dualModeEnabled) {
	linphone_tunnel_enable_dual_mode((::LinphoneTunnel *)mPrivPtr, dualModeEnabled);
}
linphone::Tunnel::Mode linphone::Tunnel::getMode() const {
	return (Mode)linphone_tunnel_get_mode((::LinphoneTunnel *)mPrivPtr);
}
void linphone::Tunnel::setMode(linphone::Tunnel::Mode mode) {
	linphone_tunnel_set_mode((::LinphoneTunnel *)mPrivPtr, (::LinphoneTunnelMode)mode);
}
std::list<std::shared_ptr<linphone::TunnelConfig>> linphone::Tunnel::getServers() const {
	return ObjectBctbxListWrapper<linphone::TunnelConfig>::bctbxListToCppList(linphone_tunnel_get_servers((::LinphoneTunnel *)mPrivPtr), true);
}
bool linphone::Tunnel::sipEnabled() const {
	return (linphone_tunnel_sip_enabled((::LinphoneTunnel *)mPrivPtr) != FALSE);
}
void linphone::Tunnel::enableSip(bool enable) {
	linphone_tunnel_enable_sip((::LinphoneTunnel *)mPrivPtr, enable);
}
std::string linphone::Tunnel::getUsername() {
	return StringUtilities::cStringToCpp(linphone_tunnel_get_username((::LinphoneTunnel *)mPrivPtr));
}
void linphone::Tunnel::setUsername(const std::string & username) {
	linphone_tunnel_set_username((::LinphoneTunnel *)mPrivPtr, StringUtilities::cppStringToC(username));
}
void linphone::Tunnel::addServer(const std::shared_ptr<linphone::TunnelConfig> & tunnelConfig) {
	linphone_tunnel_add_server((::LinphoneTunnel *)mPrivPtr, (::LinphoneTunnelConfig *)Object::sharedPtrToCPtr(std::static_pointer_cast<Object,linphone::TunnelConfig>(tunnelConfig)));
}
void linphone::Tunnel::cleanServers() {
	linphone_tunnel_clean_servers((::LinphoneTunnel *)mPrivPtr);
}
bool linphone::Tunnel::connected() const {
	return (linphone_tunnel_connected((::LinphoneTunnel *)mPrivPtr) != FALSE);
}
void linphone::Tunnel::reconnect() {
	linphone_tunnel_reconnect((::LinphoneTunnel *)mPrivPtr);
}
void linphone::Tunnel::removeServer(const std::shared_ptr<linphone::TunnelConfig> & tunnelConfig) {
	linphone_tunnel_remove_server((::LinphoneTunnel *)mPrivPtr, (::LinphoneTunnelConfig *)Object::sharedPtrToCPtr(std::static_pointer_cast<Object,linphone::TunnelConfig>(tunnelConfig)));
}
void linphone::Tunnel::setHttpProxy(const std::string & host, int port, const std::string & username, const std::string & passwd) {
	linphone_tunnel_set_http_proxy((::LinphoneTunnel *)mPrivPtr, StringUtilities::cppStringToC(host), port, StringUtilities::cppStringToC(username), StringUtilities::cppStringToC(passwd));
}
void linphone::Tunnel::setHttpProxyAuthInfo(const std::string & username, const std::string & passwd) {
	linphone_tunnel_set_http_proxy_auth_info((::LinphoneTunnel *)mPrivPtr, StringUtilities::cppStringToC(username), StringUtilities::cppStringToC(passwd));
}



static void linphone_alert_cbs_on_terminated_cb(LinphoneAlert * alert) {
	LinphoneAlertCbs *cbs = linphone_alert_get_current_callbacks(alert);
	if (cbs) {
		// Make a copy of the list of listeners, so that it is possible to remove a listener from a listener without corrupting the list.
		std::list<std::shared_ptr<Listener> > listeners = *static_cast<std::list<std::shared_ptr<Listener> > *>(belle_sip_object_data_get((::belle_sip_object_t *)cbs, MultiListenableObject::sListenerListName));
		for(std::list<std::shared_ptr<Listener> >::iterator it=listeners.begin(); it!=listeners.end(); it++) {
			std::shared_ptr<AlertListener> listener = std::static_pointer_cast<AlertListener,Listener>(*it);
			listener->onTerminated(Object::cPtrToSharedPtr<Alert>(alert));
		}
	}
}

linphone::Alert::Alert(void *ptr, bool takeRef): MultiListenableObject(ptr, takeRef) {
}

void Alert::addListener(const std::shared_ptr<AlertListener> &listener) {
	MultiListenableObject::addListener(std::static_pointer_cast<Listener,AlertListener>(listener));
}

void Alert::removeListener(const std::shared_ptr<AlertListener> &listener) {
	MultiListenableObject::removeListener(std::static_pointer_cast<Listener,AlertListener>(listener));
}

void *Alert::createCallbacks() {
	LinphoneAlertCbs *cbs = linphone_factory_create_alert_cbs(linphone_factory_get());
	linphone_alert_cbs_set_terminated(cbs, linphone_alert_cbs_on_terminated_cb);
	belle_sip_object_data_set((::belle_sip_object_t *)(cbs), MultiListenableObject::sListenerListName, new list<shared_ptr<Listener>>(), (::belle_sip_data_destroy)deleteListenerList);
	belle_sip_object_data_set((::belle_sip_object_t *)(mPrivPtr), MultiListenableObject::sCbsPtrName, cbs, nullptr);
	linphone_alert_add_callbacks(static_cast<::LinphoneAlert *>(mPrivPtr), cbs);
	belle_sip_object_unref((::belle_sip_object_t *)cbs);
	return cbs;
}


std::shared_ptr<linphone::Call> linphone::Alert::getCall() const {
	return Object::cPtrToSharedPtr<linphone::Call>(linphone_alert_get_call((::LinphoneAlert *)mPrivPtr));
}
time_t linphone::Alert::getEndTime() const {
	return linphone_alert_get_end_time((::LinphoneAlert *)mPrivPtr);
}
std::shared_ptr<const linphone::Dictionary> linphone::Alert::getInformations() const {
	return Object::cPtrToSharedPtr<const linphone::Dictionary>(linphone_alert_get_informations((::LinphoneAlert *)mPrivPtr));
}
time_t linphone::Alert::getStartTime() const {
	return linphone_alert_get_start_time((::LinphoneAlert *)mPrivPtr);
}
bool linphone::Alert::getState() const {
	return (linphone_alert_get_state((::LinphoneAlert *)mPrivPtr) != FALSE);
}
linphone::Alert::Type linphone::Alert::getType() const {
	return (Type)linphone_alert_get_type((::LinphoneAlert *)mPrivPtr);
}
std::shared_ptr<linphone::Alert> linphone::Alert::clone() const {
	return Object::cPtrToSharedPtr<linphone::Alert>(linphone_alert_clone((::LinphoneAlert *)mPrivPtr), false);
}
void linphone::Alert::notifyOnTerminated() {
	linphone_alert_notify_on_terminated((::LinphoneAlert *)mPrivPtr);
}

std::string linphone::Alert::typeToString(linphone::Alert::Type type) {
	return StringUtilities::cStringToCpp(linphone_alert_type_to_string((::LinphoneAlertType)type));
}



linphone::Vcard::Vcard(void *ptr, bool takeRef): Object(ptr, takeRef) {
}


std::shared_ptr<belcard::BelCard> &Vcard::getVcard() {
	return *(shared_ptr<belcard::BelCard> *)linphone_vcard_get_belcard((LinphoneVcard *)mPrivPtr);
}

std::string linphone::Vcard::getEtag() const {
	return StringUtilities::cStringToCpp(linphone_vcard_get_etag((::LinphoneVcard *)mPrivPtr));
}
void linphone::Vcard::setEtag(const std::string & etag) {
	linphone_vcard_set_etag((::LinphoneVcard *)mPrivPtr, StringUtilities::cppStringToC(etag));
}
std::string linphone::Vcard::getFamilyName() const {
	return StringUtilities::cStringToCpp(linphone_vcard_get_family_name((::LinphoneVcard *)mPrivPtr));
}
void linphone::Vcard::setFamilyName(const std::string & name) {
	linphone_vcard_set_family_name((::LinphoneVcard *)mPrivPtr, StringUtilities::cppStringToC(name));
}
std::string linphone::Vcard::getFullName() const {
	return StringUtilities::cStringToCpp(linphone_vcard_get_full_name((::LinphoneVcard *)mPrivPtr));
}
void linphone::Vcard::setFullName(const std::string & name) {
	linphone_vcard_set_full_name((::LinphoneVcard *)mPrivPtr, StringUtilities::cppStringToC(name));
}
std::string linphone::Vcard::getGivenName() const {
	return StringUtilities::cStringToCpp(linphone_vcard_get_given_name((::LinphoneVcard *)mPrivPtr));
}
void linphone::Vcard::setGivenName(const std::string & name) {
	linphone_vcard_set_given_name((::LinphoneVcard *)mPrivPtr, StringUtilities::cppStringToC(name));
}
std::string linphone::Vcard::getJobTitle() const {
	return StringUtilities::cStringToCpp(linphone_vcard_get_job_title((::LinphoneVcard *)mPrivPtr));
}
void linphone::Vcard::setJobTitle(const std::string & jobTitle) {
	linphone_vcard_set_job_title((::LinphoneVcard *)mPrivPtr, StringUtilities::cppStringToC(jobTitle));
}
std::string linphone::Vcard::getOrganization() const {
	return StringUtilities::cStringToCpp(linphone_vcard_get_organization((::LinphoneVcard *)mPrivPtr));
}
void linphone::Vcard::setOrganization(const std::string & organization) {
	linphone_vcard_set_organization((::LinphoneVcard *)mPrivPtr, StringUtilities::cppStringToC(organization));
}
std::list<std::string> linphone::Vcard::getPhoneNumbers() const {
	return StringBctbxListWrapper::bctbxListToCppList(linphone_vcard_get_phone_numbers((::LinphoneVcard *)mPrivPtr));
}
std::list<std::shared_ptr<linphone::FriendPhoneNumber>> linphone::Vcard::getPhoneNumbersWithLabel() const {
	return ObjectBctbxListWrapper<linphone::FriendPhoneNumber>::bctbxListToCppList(linphone_vcard_get_phone_numbers_with_label((::LinphoneVcard *)mPrivPtr), false);
}
std::string linphone::Vcard::getPhoto() const {
	return StringUtilities::cStringToCpp(linphone_vcard_get_photo((::LinphoneVcard *)mPrivPtr));
}
void linphone::Vcard::setPhoto(const std::string & picture) {
	linphone_vcard_set_photo((::LinphoneVcard *)mPrivPtr, StringUtilities::cppStringToC(picture));
}
std::list<std::shared_ptr<linphone::Address>> linphone::Vcard::getSipAddresses() {
	return ObjectBctbxListWrapper<linphone::Address>::bctbxListToCppList(linphone_vcard_get_sip_addresses((::LinphoneVcard *)mPrivPtr), true);
}
bool linphone::Vcard::getSkipValidation() const {
	return (linphone_vcard_get_skip_validation((::LinphoneVcard *)mPrivPtr) != FALSE);
}
void linphone::Vcard::setSkipValidation(bool skip) {
	linphone_vcard_set_skip_validation((::LinphoneVcard *)mPrivPtr, skip);
}
std::string linphone::Vcard::getUid() const {
	return StringUtilities::cStringToCpp(linphone_vcard_get_uid((::LinphoneVcard *)mPrivPtr));
}
void linphone::Vcard::setUid(const std::string & uid) {
	linphone_vcard_set_uid((::LinphoneVcard *)mPrivPtr, StringUtilities::cppStringToC(uid));
}
std::string linphone::Vcard::getUrl() const {
	return StringUtilities::cStringToCpp(linphone_vcard_get_url((::LinphoneVcard *)mPrivPtr));
}
void linphone::Vcard::setUrl(const std::string & url) {
	linphone_vcard_set_url((::LinphoneVcard *)mPrivPtr, StringUtilities::cppStringToC(url));
}
void linphone::Vcard::addExtendedProperty(const std::string & name, const std::string & value) {
	linphone_vcard_add_extended_property((::LinphoneVcard *)mPrivPtr, StringUtilities::cppStringToC(name), StringUtilities::cppStringToC(value));
}
void linphone::Vcard::addPhoneNumber(const std::string & phone) {
	linphone_vcard_add_phone_number((::LinphoneVcard *)mPrivPtr, StringUtilities::cppStringToC(phone));
}
void linphone::Vcard::addPhoneNumberWithLabel(const std::shared_ptr<linphone::FriendPhoneNumber> & phoneNumber) {
	linphone_vcard_add_phone_number_with_label((::LinphoneVcard *)mPrivPtr, (::LinphoneFriendPhoneNumber *)Object::sharedPtrToCPtr(std::static_pointer_cast<Object,linphone::FriendPhoneNumber>(phoneNumber)));
}
void linphone::Vcard::addSipAddress(const std::string & sipAddress) {
	linphone_vcard_add_sip_address((::LinphoneVcard *)mPrivPtr, StringUtilities::cppStringToC(sipAddress));
}
std::string linphone::Vcard::asVcard4String() {
	return StringUtilities::cStringToCpp(linphone_vcard_as_vcard4_string((::LinphoneVcard *)mPrivPtr));
}
std::shared_ptr<linphone::Vcard> linphone::Vcard::clone() const {
	return Object::cPtrToSharedPtr<linphone::Vcard>(linphone_vcard_clone((::LinphoneVcard *)mPrivPtr), false);
}
void linphone::Vcard::editMainSipAddress(const std::string & sipAddress) {
	linphone_vcard_edit_main_sip_address((::LinphoneVcard *)mPrivPtr, StringUtilities::cppStringToC(sipAddress));
}
bool linphone::Vcard::generateUniqueId() {
	return (linphone_vcard_generate_unique_id((::LinphoneVcard *)mPrivPtr) != FALSE);
}
std::list<std::string> linphone::Vcard::getExtendedPropertiesValuesByName(const std::string & name) const {
	return StringBctbxListWrapper::bctbxListToCppList(linphone_vcard_get_extended_properties_values_by_name((::LinphoneVcard *)mPrivPtr, StringUtilities::cppStringToC(name)));
}
void linphone::Vcard::removeExtentedPropertiesByName(const std::string & name) {
	linphone_vcard_remove_extented_properties_by_name((::LinphoneVcard *)mPrivPtr, StringUtilities::cppStringToC(name));
}
void linphone::Vcard::removeJobTitle() {
	linphone_vcard_remove_job_title((::LinphoneVcard *)mPrivPtr);
}
void linphone::Vcard::removeOrganization() {
	linphone_vcard_remove_organization((::LinphoneVcard *)mPrivPtr);
}
void linphone::Vcard::removePhoneNumber(const std::string & phone) {
	linphone_vcard_remove_phone_number((::LinphoneVcard *)mPrivPtr, StringUtilities::cppStringToC(phone));
}
void linphone::Vcard::removePhoneNumberWithLabel(const std::shared_ptr<const linphone::FriendPhoneNumber> & phoneNumber) {
	linphone_vcard_remove_phone_number_with_label((::LinphoneVcard *)mPrivPtr, (::LinphoneFriendPhoneNumber *)Object::sharedPtrToCPtr(std::static_pointer_cast<const Object,const linphone::FriendPhoneNumber>(phoneNumber)));
}
void linphone::Vcard::removePhoto() {
	linphone_vcard_remove_photo((::LinphoneVcard *)mPrivPtr);
}
void linphone::Vcard::removeSipAddress(const std::string & sipAddress) {
	linphone_vcard_remove_sip_address((::LinphoneVcard *)mPrivPtr, StringUtilities::cppStringToC(sipAddress));
}



static void linphone_event_cbs_on_notify_response_cb(LinphoneEvent * linphone_event) {
	LinphoneEventCbs *cbs = linphone_event_get_current_callbacks(linphone_event);
	if (cbs) {
		// Make a copy of the list of listeners, so that it is possible to remove a listener from a listener without corrupting the list.
		std::list<std::shared_ptr<Listener> > listeners = *static_cast<std::list<std::shared_ptr<Listener> > *>(belle_sip_object_data_get((::belle_sip_object_t *)cbs, MultiListenableObject::sListenerListName));
		for(std::list<std::shared_ptr<Listener> >::iterator it=listeners.begin(); it!=listeners.end(); it++) {
			std::shared_ptr<EventListener> listener = std::static_pointer_cast<EventListener,Listener>(*it);
			listener->onNotifyResponse(Object::cPtrToSharedPtr<Event>(linphone_event));
		}
	}
}

linphone::Event::Event(void *ptr, bool takeRef): MultiListenableObject(ptr, takeRef) {
}

void Event::addListener(const std::shared_ptr<EventListener> &listener) {
	MultiListenableObject::addListener(std::static_pointer_cast<Listener,EventListener>(listener));
}

void Event::removeListener(const std::shared_ptr<EventListener> &listener) {
	MultiListenableObject::removeListener(std::static_pointer_cast<Listener,EventListener>(listener));
}

void *Event::createCallbacks() {
	LinphoneEventCbs *cbs = linphone_factory_create_event_cbs(linphone_factory_get());
	linphone_event_cbs_set_notify_response(cbs, linphone_event_cbs_on_notify_response_cb);
	belle_sip_object_data_set((::belle_sip_object_t *)(cbs), MultiListenableObject::sListenerListName, new list<shared_ptr<Listener>>(), (::belle_sip_data_destroy)deleteListenerList);
	belle_sip_object_data_set((::belle_sip_object_t *)(mPrivPtr), MultiListenableObject::sCbsPtrName, cbs, nullptr);
	linphone_event_add_callbacks(static_cast<::LinphoneEvent *>(mPrivPtr), cbs);
	belle_sip_object_unref((::belle_sip_object_t *)cbs);
	return cbs;
}


std::shared_ptr<linphone::Core> linphone::Event::getCore() const {
	return Object::cPtrToSharedPtr<linphone::Core>(linphone_event_get_core((::LinphoneEvent *)mPrivPtr));
}
std::shared_ptr<const linphone::ErrorInfo> linphone::Event::getErrorInfo() const {
	return Object::cPtrToSharedPtr<const linphone::ErrorInfo>(linphone_event_get_error_info((::LinphoneEvent *)mPrivPtr));
}
std::shared_ptr<const linphone::Address> linphone::Event::getFrom() const {
	return Object::cPtrToSharedPtr<const linphone::Address>(linphone_event_get_from((::LinphoneEvent *)mPrivPtr));
}
std::string linphone::Event::getName() const {
	return StringUtilities::cStringToCpp(linphone_event_get_name((::LinphoneEvent *)mPrivPtr));
}
linphone::PublishState linphone::Event::getPublishState() const {
	return (linphone::PublishState)linphone_event_get_publish_state((::LinphoneEvent *)mPrivPtr);
}
linphone::Reason linphone::Event::getReason() const {
	return (linphone::Reason)linphone_event_get_reason((::LinphoneEvent *)mPrivPtr);
}
std::shared_ptr<const linphone::Address> linphone::Event::getRemoteContact() const {
	return Object::cPtrToSharedPtr<const linphone::Address>(linphone_event_get_remote_contact((::LinphoneEvent *)mPrivPtr));
}
std::shared_ptr<const linphone::Address> linphone::Event::getResource() const {
	return Object::cPtrToSharedPtr<const linphone::Address>(linphone_event_get_resource((::LinphoneEvent *)mPrivPtr));
}
linphone::SubscriptionDir linphone::Event::getSubscriptionDir() {
	return (linphone::SubscriptionDir)linphone_event_get_subscription_dir((::LinphoneEvent *)mPrivPtr);
}
linphone::SubscriptionState linphone::Event::getSubscriptionState() const {
	return (linphone::SubscriptionState)linphone_event_get_subscription_state((::LinphoneEvent *)mPrivPtr);
}
std::shared_ptr<const linphone::Address> linphone::Event::getTo() const {
	return Object::cPtrToSharedPtr<const linphone::Address>(linphone_event_get_to((::LinphoneEvent *)mPrivPtr));
}
linphone::Status linphone::Event::acceptPublish() {
	return linphone_event_accept_publish((::LinphoneEvent *)mPrivPtr);
}
linphone::Status linphone::Event::acceptSubscription() {
	return linphone_event_accept_subscription((::LinphoneEvent *)mPrivPtr);
}
void linphone::Event::addCustomHeader(const std::string & name, const std::string & value) {
	linphone_event_add_custom_header((::LinphoneEvent *)mPrivPtr, StringUtilities::cppStringToC(name), StringUtilities::cppStringToC(value));
}
linphone::Status linphone::Event::denyPublish(linphone::Reason reason) {
	return linphone_event_deny_publish((::LinphoneEvent *)mPrivPtr, (::LinphoneReason)reason);
}
linphone::Status linphone::Event::denySubscription(linphone::Reason reason) {
	return linphone_event_deny_subscription((::LinphoneEvent *)mPrivPtr, (::LinphoneReason)reason);
}
std::string linphone::Event::getCustomHeader(const std::string & name) {
	return StringUtilities::cStringToCpp(linphone_event_get_custom_header((::LinphoneEvent *)mPrivPtr, StringUtilities::cppStringToC(name)));
}
linphone::Status linphone::Event::notify(const std::shared_ptr<const linphone::Content> & body) {
	return linphone_event_notify((::LinphoneEvent *)mPrivPtr, (::LinphoneContent *)Object::sharedPtrToCPtr(std::static_pointer_cast<const Object,const linphone::Content>(body)));
}
void linphone::Event::pausePublish() {
	linphone_event_pause_publish((::LinphoneEvent *)mPrivPtr);
}
linphone::Status linphone::Event::refreshPublish() {
	return linphone_event_refresh_publish((::LinphoneEvent *)mPrivPtr);
}
linphone::Status linphone::Event::refreshSubscribe() {
	return linphone_event_refresh_subscribe((::LinphoneEvent *)mPrivPtr);
}
void linphone::Event::removeCustomHeader(const std::string & name) {
	linphone_event_remove_custom_header((::LinphoneEvent *)mPrivPtr, StringUtilities::cppStringToC(name));
}
linphone::Status linphone::Event::sendPublish(const std::shared_ptr<const linphone::Content> & body) {
	return linphone_event_send_publish((::LinphoneEvent *)mPrivPtr, (::LinphoneContent *)Object::sharedPtrToCPtr(std::static_pointer_cast<const Object,const linphone::Content>(body)));
}
linphone::Status linphone::Event::sendSubscribe(const std::shared_ptr<const linphone::Content> & body) {
	return linphone_event_send_subscribe((::LinphoneEvent *)mPrivPtr, (::LinphoneContent *)Object::sharedPtrToCPtr(std::static_pointer_cast<const Object,const linphone::Content>(body)));
}
void linphone::Event::terminate() {
	linphone_event_terminate((::LinphoneEvent *)mPrivPtr);
}
linphone::Status linphone::Event::updatePublish(const std::shared_ptr<const linphone::Content> & body) {
	return linphone_event_update_publish((::LinphoneEvent *)mPrivPtr, (::LinphoneContent *)Object::sharedPtrToCPtr(std::static_pointer_cast<const Object,const linphone::Content>(body)));
}
linphone::Status linphone::Event::updateSubscribe(const std::shared_ptr<const linphone::Content> & body) {
	return linphone_event_update_subscribe((::LinphoneEvent *)mPrivPtr, (::LinphoneContent *)Object::sharedPtrToCPtr(std::static_pointer_cast<const Object,const linphone::Content>(body)));
}




linphone::Range::Range(void *ptr, bool takeRef): Object(ptr, takeRef) {
}



int linphone::Range::getMax() const {
	return linphone_range_get_max((::LinphoneRange *)mPrivPtr);
}
void linphone::Range::setMax(int max) {
	linphone_range_set_max((::LinphoneRange *)mPrivPtr, max);
}
int linphone::Range::getMin() const {
	return linphone_range_get_min((::LinphoneRange *)mPrivPtr);
}
void linphone::Range::setMin(int min) {
	linphone_range_set_min((::LinphoneRange *)mPrivPtr, min);
}



static void linphone_call_cbs_on_dtmf_received_cb(LinphoneCall * call, int dtmf) {
	LinphoneCallCbs *cbs = linphone_call_get_current_callbacks(call);
	if (cbs) {
		// Make a copy of the list of listeners, so that it is possible to remove a listener from a listener without corrupting the list.
		std::list<std::shared_ptr<Listener> > listeners = *static_cast<std::list<std::shared_ptr<Listener> > *>(belle_sip_object_data_get((::belle_sip_object_t *)cbs, MultiListenableObject::sListenerListName));
		for(std::list<std::shared_ptr<Listener> >::iterator it=listeners.begin(); it!=listeners.end(); it++) {
			std::shared_ptr<CallListener> listener = std::static_pointer_cast<CallListener,Listener>(*it);
			listener->onDtmfReceived(Object::cPtrToSharedPtr<Call>(call), dtmf);
		}
	}
}
static void linphone_call_cbs_on_goclear_ack_sent_cb(LinphoneCall * call) {
	LinphoneCallCbs *cbs = linphone_call_get_current_callbacks(call);
	if (cbs) {
		// Make a copy of the list of listeners, so that it is possible to remove a listener from a listener without corrupting the list.
		std::list<std::shared_ptr<Listener> > listeners = *static_cast<std::list<std::shared_ptr<Listener> > *>(belle_sip_object_data_get((::belle_sip_object_t *)cbs, MultiListenableObject::sListenerListName));
		for(std::list<std::shared_ptr<Listener> >::iterator it=listeners.begin(); it!=listeners.end(); it++) {
			std::shared_ptr<CallListener> listener = std::static_pointer_cast<CallListener,Listener>(*it);
			listener->onGoclearAckSent(Object::cPtrToSharedPtr<Call>(call));
		}
	}
}
static void linphone_call_cbs_on_encryption_changed_cb(LinphoneCall * call, bool_t on, const char * authentication_token) {
	LinphoneCallCbs *cbs = linphone_call_get_current_callbacks(call);
	if (cbs) {
		// Make a copy of the list of listeners, so that it is possible to remove a listener from a listener without corrupting the list.
		std::list<std::shared_ptr<Listener> > listeners = *static_cast<std::list<std::shared_ptr<Listener> > *>(belle_sip_object_data_get((::belle_sip_object_t *)cbs, MultiListenableObject::sListenerListName));
		for(std::list<std::shared_ptr<Listener> >::iterator it=listeners.begin(); it!=listeners.end(); it++) {
			std::shared_ptr<CallListener> listener = std::static_pointer_cast<CallListener,Listener>(*it);
			listener->onEncryptionChanged(Object::cPtrToSharedPtr<Call>(call), (on != FALSE), StringUtilities::cStringToCpp(authentication_token));
		}
	}
}
static void linphone_call_cbs_on_send_master_key_changed_cb(LinphoneCall * call, const char * send_master_key) {
	LinphoneCallCbs *cbs = linphone_call_get_current_callbacks(call);
	if (cbs) {
		// Make a copy of the list of listeners, so that it is possible to remove a listener from a listener without corrupting the list.
		std::list<std::shared_ptr<Listener> > listeners = *static_cast<std::list<std::shared_ptr<Listener> > *>(belle_sip_object_data_get((::belle_sip_object_t *)cbs, MultiListenableObject::sListenerListName));
		for(std::list<std::shared_ptr<Listener> >::iterator it=listeners.begin(); it!=listeners.end(); it++) {
			std::shared_ptr<CallListener> listener = std::static_pointer_cast<CallListener,Listener>(*it);
			listener->onSendMasterKeyChanged(Object::cPtrToSharedPtr<Call>(call), StringUtilities::cStringToCpp(send_master_key));
		}
	}
}
static void linphone_call_cbs_on_receive_master_key_changed_cb(LinphoneCall * call, const char * receive_master_key) {
	LinphoneCallCbs *cbs = linphone_call_get_current_callbacks(call);
	if (cbs) {
		// Make a copy of the list of listeners, so that it is possible to remove a listener from a listener without corrupting the list.
		std::list<std::shared_ptr<Listener> > listeners = *static_cast<std::list<std::shared_ptr<Listener> > *>(belle_sip_object_data_get((::belle_sip_object_t *)cbs, MultiListenableObject::sListenerListName));
		for(std::list<std::shared_ptr<Listener> >::iterator it=listeners.begin(); it!=listeners.end(); it++) {
			std::shared_ptr<CallListener> listener = std::static_pointer_cast<CallListener,Listener>(*it);
			listener->onReceiveMasterKeyChanged(Object::cPtrToSharedPtr<Call>(call), StringUtilities::cStringToCpp(receive_master_key));
		}
	}
}
static void linphone_call_cbs_on_info_message_received_cb(LinphoneCall * call, const LinphoneInfoMessage * message) {
	LinphoneCallCbs *cbs = linphone_call_get_current_callbacks(call);
	if (cbs) {
		// Make a copy of the list of listeners, so that it is possible to remove a listener from a listener without corrupting the list.
		std::list<std::shared_ptr<Listener> > listeners = *static_cast<std::list<std::shared_ptr<Listener> > *>(belle_sip_object_data_get((::belle_sip_object_t *)cbs, MultiListenableObject::sListenerListName));
		for(std::list<std::shared_ptr<Listener> >::iterator it=listeners.begin(); it!=listeners.end(); it++) {
			std::shared_ptr<CallListener> listener = std::static_pointer_cast<CallListener,Listener>(*it);
			listener->onInfoMessageReceived(Object::cPtrToSharedPtr<Call>(call), Object::cPtrToSharedPtr<const InfoMessage>(message));
		}
	}
}
static void linphone_call_cbs_on_state_changed_cb(LinphoneCall * call, LinphoneCallState state, const char * message) {
	LinphoneCallCbs *cbs = linphone_call_get_current_callbacks(call);
	if (cbs) {
		// Make a copy of the list of listeners, so that it is possible to remove a listener from a listener without corrupting the list.
		std::list<std::shared_ptr<Listener> > listeners = *static_cast<std::list<std::shared_ptr<Listener> > *>(belle_sip_object_data_get((::belle_sip_object_t *)cbs, MultiListenableObject::sListenerListName));
		for(std::list<std::shared_ptr<Listener> >::iterator it=listeners.begin(); it!=listeners.end(); it++) {
			std::shared_ptr<CallListener> listener = std::static_pointer_cast<CallListener,Listener>(*it);
			listener->onStateChanged(Object::cPtrToSharedPtr<Call>(call), (Call::State)state, StringUtilities::cStringToCpp(message));
		}
	}
}
static void linphone_call_cbs_on_stats_updated_cb(LinphoneCall * call, const LinphoneCallStats * stats) {
	LinphoneCallCbs *cbs = linphone_call_get_current_callbacks(call);
	if (cbs) {
		// Make a copy of the list of listeners, so that it is possible to remove a listener from a listener without corrupting the list.
		std::list<std::shared_ptr<Listener> > listeners = *static_cast<std::list<std::shared_ptr<Listener> > *>(belle_sip_object_data_get((::belle_sip_object_t *)cbs, MultiListenableObject::sListenerListName));
		for(std::list<std::shared_ptr<Listener> >::iterator it=listeners.begin(); it!=listeners.end(); it++) {
			std::shared_ptr<CallListener> listener = std::static_pointer_cast<CallListener,Listener>(*it);
			listener->onStatsUpdated(Object::cPtrToSharedPtr<Call>(call), Object::cPtrToSharedPtr<const CallStats>(stats));
		}
	}
}
static void linphone_call_cbs_on_transfer_state_changed_cb(LinphoneCall * call, LinphoneCallState state) {
	LinphoneCallCbs *cbs = linphone_call_get_current_callbacks(call);
	if (cbs) {
		// Make a copy of the list of listeners, so that it is possible to remove a listener from a listener without corrupting the list.
		std::list<std::shared_ptr<Listener> > listeners = *static_cast<std::list<std::shared_ptr<Listener> > *>(belle_sip_object_data_get((::belle_sip_object_t *)cbs, MultiListenableObject::sListenerListName));
		for(std::list<std::shared_ptr<Listener> >::iterator it=listeners.begin(); it!=listeners.end(); it++) {
			std::shared_ptr<CallListener> listener = std::static_pointer_cast<CallListener,Listener>(*it);
			listener->onTransferStateChanged(Object::cPtrToSharedPtr<Call>(call), (Call::State)state);
		}
	}
}
static void linphone_call_cbs_on_ack_processing_cb(LinphoneCall * call, LinphoneHeaders * ack, bool_t is_received) {
	LinphoneCallCbs *cbs = linphone_call_get_current_callbacks(call);
	if (cbs) {
		// Make a copy of the list of listeners, so that it is possible to remove a listener from a listener without corrupting the list.
		std::list<std::shared_ptr<Listener> > listeners = *static_cast<std::list<std::shared_ptr<Listener> > *>(belle_sip_object_data_get((::belle_sip_object_t *)cbs, MultiListenableObject::sListenerListName));
		for(std::list<std::shared_ptr<Listener> >::iterator it=listeners.begin(); it!=listeners.end(); it++) {
			std::shared_ptr<CallListener> listener = std::static_pointer_cast<CallListener,Listener>(*it);
			listener->onAckProcessing(Object::cPtrToSharedPtr<Call>(call), Object::cPtrToSharedPtr<Headers>(ack), (is_received != FALSE));
		}
	}
}
static void linphone_call_cbs_on_tmmbr_received_cb(LinphoneCall * call, int stream_index, int tmmbr) {
	LinphoneCallCbs *cbs = linphone_call_get_current_callbacks(call);
	if (cbs) {
		// Make a copy of the list of listeners, so that it is possible to remove a listener from a listener without corrupting the list.
		std::list<std::shared_ptr<Listener> > listeners = *static_cast<std::list<std::shared_ptr<Listener> > *>(belle_sip_object_data_get((::belle_sip_object_t *)cbs, MultiListenableObject::sListenerListName));
		for(std::list<std::shared_ptr<Listener> >::iterator it=listeners.begin(); it!=listeners.end(); it++) {
			std::shared_ptr<CallListener> listener = std::static_pointer_cast<CallListener,Listener>(*it);
			listener->onTmmbrReceived(Object::cPtrToSharedPtr<Call>(call), stream_index, tmmbr);
		}
	}
}
static void linphone_call_cbs_on_snapshot_taken_cb(LinphoneCall * call, const char * file_path) {
	LinphoneCallCbs *cbs = linphone_call_get_current_callbacks(call);
	if (cbs) {
		// Make a copy of the list of listeners, so that it is possible to remove a listener from a listener without corrupting the list.
		std::list<std::shared_ptr<Listener> > listeners = *static_cast<std::list<std::shared_ptr<Listener> > *>(belle_sip_object_data_get((::belle_sip_object_t *)cbs, MultiListenableObject::sListenerListName));
		for(std::list<std::shared_ptr<Listener> >::iterator it=listeners.begin(); it!=listeners.end(); it++) {
			std::shared_ptr<CallListener> listener = std::static_pointer_cast<CallListener,Listener>(*it);
			listener->onSnapshotTaken(Object::cPtrToSharedPtr<Call>(call), StringUtilities::cStringToCpp(file_path));
		}
	}
}
static void linphone_call_cbs_on_next_video_frame_decoded_cb(LinphoneCall * call) {
	LinphoneCallCbs *cbs = linphone_call_get_current_callbacks(call);
	if (cbs) {
		// Make a copy of the list of listeners, so that it is possible to remove a listener from a listener without corrupting the list.
		std::list<std::shared_ptr<Listener> > listeners = *static_cast<std::list<std::shared_ptr<Listener> > *>(belle_sip_object_data_get((::belle_sip_object_t *)cbs, MultiListenableObject::sListenerListName));
		for(std::list<std::shared_ptr<Listener> >::iterator it=listeners.begin(); it!=listeners.end(); it++) {
			std::shared_ptr<CallListener> listener = std::static_pointer_cast<CallListener,Listener>(*it);
			listener->onNextVideoFrameDecoded(Object::cPtrToSharedPtr<Call>(call));
		}
	}
}
static void linphone_call_cbs_on_camera_not_working_cb(LinphoneCall * call, const char * camera_name) {
	LinphoneCallCbs *cbs = linphone_call_get_current_callbacks(call);
	if (cbs) {
		// Make a copy of the list of listeners, so that it is possible to remove a listener from a listener without corrupting the list.
		std::list<std::shared_ptr<Listener> > listeners = *static_cast<std::list<std::shared_ptr<Listener> > *>(belle_sip_object_data_get((::belle_sip_object_t *)cbs, MultiListenableObject::sListenerListName));
		for(std::list<std::shared_ptr<Listener> >::iterator it=listeners.begin(); it!=listeners.end(); it++) {
			std::shared_ptr<CallListener> listener = std::static_pointer_cast<CallListener,Listener>(*it);
			listener->onCameraNotWorking(Object::cPtrToSharedPtr<Call>(call), StringUtilities::cStringToCpp(camera_name));
		}
	}
}
static void linphone_call_cbs_on_video_display_error_occurred_cb(LinphoneCall * call, int error_code) {
	LinphoneCallCbs *cbs = linphone_call_get_current_callbacks(call);
	if (cbs) {
		// Make a copy of the list of listeners, so that it is possible to remove a listener from a listener without corrupting the list.
		std::list<std::shared_ptr<Listener> > listeners = *static_cast<std::list<std::shared_ptr<Listener> > *>(belle_sip_object_data_get((::belle_sip_object_t *)cbs, MultiListenableObject::sListenerListName));
		for(std::list<std::shared_ptr<Listener> >::iterator it=listeners.begin(); it!=listeners.end(); it++) {
			std::shared_ptr<CallListener> listener = std::static_pointer_cast<CallListener,Listener>(*it);
			listener->onVideoDisplayErrorOccurred(Object::cPtrToSharedPtr<Call>(call), error_code);
		}
	}
}
static void linphone_call_cbs_on_audio_device_changed_cb(LinphoneCall * call, LinphoneAudioDevice * audio_device) {
	LinphoneCallCbs *cbs = linphone_call_get_current_callbacks(call);
	if (cbs) {
		// Make a copy of the list of listeners, so that it is possible to remove a listener from a listener without corrupting the list.
		std::list<std::shared_ptr<Listener> > listeners = *static_cast<std::list<std::shared_ptr<Listener> > *>(belle_sip_object_data_get((::belle_sip_object_t *)cbs, MultiListenableObject::sListenerListName));
		for(std::list<std::shared_ptr<Listener> >::iterator it=listeners.begin(); it!=listeners.end(); it++) {
			std::shared_ptr<CallListener> listener = std::static_pointer_cast<CallListener,Listener>(*it);
			listener->onAudioDeviceChanged(Object::cPtrToSharedPtr<Call>(call), Object::cPtrToSharedPtr<AudioDevice>(audio_device));
		}
	}
}
static void linphone_call_cbs_on_remote_recording_cb(LinphoneCall * call, bool_t recording) {
	LinphoneCallCbs *cbs = linphone_call_get_current_callbacks(call);
	if (cbs) {
		// Make a copy of the list of listeners, so that it is possible to remove a listener from a listener without corrupting the list.
		std::list<std::shared_ptr<Listener> > listeners = *static_cast<std::list<std::shared_ptr<Listener> > *>(belle_sip_object_data_get((::belle_sip_object_t *)cbs, MultiListenableObject::sListenerListName));
		for(std::list<std::shared_ptr<Listener> >::iterator it=listeners.begin(); it!=listeners.end(); it++) {
			std::shared_ptr<CallListener> listener = std::static_pointer_cast<CallListener,Listener>(*it);
			listener->onRemoteRecording(Object::cPtrToSharedPtr<Call>(call), (recording != FALSE));
		}
	}
}

linphone::Call::Call(void *ptr, bool takeRef): MultiListenableObject(ptr, takeRef) {
}

void Call::addListener(const std::shared_ptr<CallListener> &listener) {
	MultiListenableObject::addListener(std::static_pointer_cast<Listener,CallListener>(listener));
}

void Call::removeListener(const std::shared_ptr<CallListener> &listener) {
	MultiListenableObject::removeListener(std::static_pointer_cast<Listener,CallListener>(listener));
}

void *Call::createCallbacks() {
	LinphoneCallCbs *cbs = linphone_factory_create_call_cbs(linphone_factory_get());
	linphone_call_cbs_set_dtmf_received(cbs, linphone_call_cbs_on_dtmf_received_cb);
	linphone_call_cbs_set_goclear_ack_sent(cbs, linphone_call_cbs_on_goclear_ack_sent_cb);
	linphone_call_cbs_set_encryption_changed(cbs, linphone_call_cbs_on_encryption_changed_cb);
	linphone_call_cbs_set_send_master_key_changed(cbs, linphone_call_cbs_on_send_master_key_changed_cb);
	linphone_call_cbs_set_receive_master_key_changed(cbs, linphone_call_cbs_on_receive_master_key_changed_cb);
	linphone_call_cbs_set_info_message_received(cbs, linphone_call_cbs_on_info_message_received_cb);
	linphone_call_cbs_set_state_changed(cbs, linphone_call_cbs_on_state_changed_cb);
	linphone_call_cbs_set_stats_updated(cbs, linphone_call_cbs_on_stats_updated_cb);
	linphone_call_cbs_set_transfer_state_changed(cbs, linphone_call_cbs_on_transfer_state_changed_cb);
	linphone_call_cbs_set_ack_processing(cbs, linphone_call_cbs_on_ack_processing_cb);
	linphone_call_cbs_set_tmmbr_received(cbs, linphone_call_cbs_on_tmmbr_received_cb);
	linphone_call_cbs_set_snapshot_taken(cbs, linphone_call_cbs_on_snapshot_taken_cb);
	linphone_call_cbs_set_next_video_frame_decoded(cbs, linphone_call_cbs_on_next_video_frame_decoded_cb);
	linphone_call_cbs_set_camera_not_working(cbs, linphone_call_cbs_on_camera_not_working_cb);
	linphone_call_cbs_set_video_display_error_occurred(cbs, linphone_call_cbs_on_video_display_error_occurred_cb);
	linphone_call_cbs_set_audio_device_changed(cbs, linphone_call_cbs_on_audio_device_changed_cb);
	linphone_call_cbs_set_remote_recording(cbs, linphone_call_cbs_on_remote_recording_cb);
	belle_sip_object_data_set((::belle_sip_object_t *)(cbs), MultiListenableObject::sListenerListName, new list<shared_ptr<Listener>>(), (::belle_sip_data_destroy)deleteListenerList);
	belle_sip_object_data_set((::belle_sip_object_t *)(mPrivPtr), MultiListenableObject::sCbsPtrName, cbs, nullptr);
	linphone_call_add_callbacks(static_cast<::LinphoneCall *>(mPrivPtr), cbs);
	belle_sip_object_unref((::belle_sip_object_t *)cbs);
	return cbs;
}


std::shared_ptr<linphone::CallStats> linphone::Call::getAudioStats() {
	return Object::cPtrToSharedPtr<linphone::CallStats>(linphone_call_get_audio_stats((::LinphoneCall *)mPrivPtr), false);
}
std::string linphone::Call::getAuthenticationToken() {
	return StringUtilities::cStringToCpp(linphone_call_get_authentication_token((::LinphoneCall *)mPrivPtr));
}
bool linphone::Call::getAuthenticationTokenVerified() const {
	return (linphone_call_get_authentication_token_verified((::LinphoneCall *)mPrivPtr) != FALSE);
}
void linphone::Call::setAuthenticationTokenVerified(bool verified) {
	linphone_call_set_authentication_token_verified((::LinphoneCall *)mPrivPtr, verified);
}
float linphone::Call::getAverageQuality() const {
	return linphone_call_get_average_quality((::LinphoneCall *)mPrivPtr);
}
std::shared_ptr<linphone::CallLog> linphone::Call::getCallLog() const {
	return Object::cPtrToSharedPtr<linphone::CallLog>(linphone_call_get_call_log((::LinphoneCall *)mPrivPtr));
}
bool linphone::Call::cameraEnabled() const {
	return (linphone_call_camera_enabled((::LinphoneCall *)mPrivPtr) != FALSE);
}
void linphone::Call::enableCamera(bool enabled) {
	linphone_call_enable_camera((::LinphoneCall *)mPrivPtr, enabled);
}
std::shared_ptr<linphone::ChatRoom> linphone::Call::getChatRoom() {
	return Object::cPtrToSharedPtr<linphone::ChatRoom>(linphone_call_get_chat_room((::LinphoneCall *)mPrivPtr));
}
std::shared_ptr<linphone::Conference> linphone::Call::getConference() const {
	return Object::cPtrToSharedPtr<linphone::Conference>(linphone_call_get_conference((::LinphoneCall *)mPrivPtr));
}
std::shared_ptr<linphone::Core> linphone::Call::getCore() const {
	return Object::cPtrToSharedPtr<linphone::Core>(linphone_call_get_core((::LinphoneCall *)mPrivPtr));
}
std::shared_ptr<const linphone::CallParams> linphone::Call::getCurrentParams() const {
	return Object::cPtrToSharedPtr<const linphone::CallParams>(linphone_call_get_current_params((::LinphoneCall *)mPrivPtr));
}
float linphone::Call::getCurrentQuality() const {
	return linphone_call_get_current_quality((::LinphoneCall *)mPrivPtr);
}
linphone::Call::Dir linphone::Call::getDir() const {
	return (Dir)linphone_call_get_dir((::LinphoneCall *)mPrivPtr);
}
std::shared_ptr<const linphone::Address> linphone::Call::getDiversionAddress() const {
	return Object::cPtrToSharedPtr<const linphone::Address>(linphone_call_get_diversion_address((::LinphoneCall *)mPrivPtr));
}
int linphone::Call::getDuration() const {
	return linphone_call_get_duration((::LinphoneCall *)mPrivPtr);
}
bool linphone::Call::echoCancellationEnabled() const {
	return (linphone_call_echo_cancellation_enabled((::LinphoneCall *)mPrivPtr) != FALSE);
}
void linphone::Call::enableEchoCancellation(bool enable) {
	linphone_call_enable_echo_cancellation((::LinphoneCall *)mPrivPtr, enable);
}
bool linphone::Call::echoLimiterEnabled() const {
	return (linphone_call_echo_limiter_enabled((::LinphoneCall *)mPrivPtr) != FALSE);
}
void linphone::Call::enableEchoLimiter(bool enable) {
	linphone_call_enable_echo_limiter((::LinphoneCall *)mPrivPtr, enable);
}
std::shared_ptr<const linphone::ErrorInfo> linphone::Call::getErrorInfo() const {
	return Object::cPtrToSharedPtr<const linphone::ErrorInfo>(linphone_call_get_error_info((::LinphoneCall *)mPrivPtr));
}
std::shared_ptr<const linphone::AudioDevice> linphone::Call::getInputAudioDevice() const {
	return Object::cPtrToSharedPtr<const linphone::AudioDevice>(linphone_call_get_input_audio_device((::LinphoneCall *)mPrivPtr));
}
void linphone::Call::setInputAudioDevice(const std::shared_ptr<linphone::AudioDevice> & audioDevice) {
	linphone_call_set_input_audio_device((::LinphoneCall *)mPrivPtr, (::LinphoneAudioDevice *)Object::sharedPtrToCPtr(std::static_pointer_cast<Object,linphone::AudioDevice>(audioDevice)));
}
bool linphone::Call::isRecording() {
	return (linphone_call_is_recording((::LinphoneCall *)mPrivPtr) != FALSE);
}
bool linphone::Call::getMicrophoneMuted() const {
	return (linphone_call_get_microphone_muted((::LinphoneCall *)mPrivPtr) != FALSE);
}
void linphone::Call::setMicrophoneMuted(bool muted) {
	linphone_call_set_microphone_muted((::LinphoneCall *)mPrivPtr, muted);
}
float linphone::Call::getMicrophoneVolumeGain() const {
	return linphone_call_get_microphone_volume_gain((::LinphoneCall *)mPrivPtr);
}
void linphone::Call::setMicrophoneVolumeGain(float volume) {
	linphone_call_set_microphone_volume_gain((::LinphoneCall *)mPrivPtr, volume);
}
void * linphone::Call::getNativeVideoWindowId() const {
	return linphone_call_get_native_video_window_id((::LinphoneCall *)mPrivPtr);
}
void linphone::Call::setNativeVideoWindowId(void * windowId) {
	linphone_call_set_native_video_window_id((::LinphoneCall *)mPrivPtr, windowId);
}
std::shared_ptr<const linphone::AudioDevice> linphone::Call::getOutputAudioDevice() const {
	return Object::cPtrToSharedPtr<const linphone::AudioDevice>(linphone_call_get_output_audio_device((::LinphoneCall *)mPrivPtr));
}
void linphone::Call::setOutputAudioDevice(const std::shared_ptr<linphone::AudioDevice> & audioDevice) {
	linphone_call_set_output_audio_device((::LinphoneCall *)mPrivPtr, (::LinphoneAudioDevice *)Object::sharedPtrToCPtr(std::static_pointer_cast<Object,linphone::AudioDevice>(audioDevice)));
}
std::shared_ptr<const linphone::CallParams> linphone::Call::getParams() const {
	return Object::cPtrToSharedPtr<const linphone::CallParams>(linphone_call_get_params((::LinphoneCall *)mPrivPtr));
}
void linphone::Call::setParams(const std::shared_ptr<const linphone::CallParams> & params) {
	linphone_call_set_params((::LinphoneCall *)mPrivPtr, (::LinphoneCallParams *)Object::sharedPtrToCPtr(std::static_pointer_cast<const Object,const linphone::CallParams>(params)));
}
float linphone::Call::getPlayVolume() const {
	return linphone_call_get_play_volume((::LinphoneCall *)mPrivPtr);
}
std::shared_ptr<linphone::Player> linphone::Call::getPlayer() {
	return Object::cPtrToSharedPtr<linphone::Player>(linphone_call_get_player((::LinphoneCall *)mPrivPtr));
}
linphone::Reason linphone::Call::getReason() const {
	return (linphone::Reason)linphone_call_get_reason((::LinphoneCall *)mPrivPtr);
}
float linphone::Call::getRecordVolume() const {
	return linphone_call_get_record_volume((::LinphoneCall *)mPrivPtr);
}
std::string linphone::Call::getReferTo() const {
	return StringUtilities::cStringToCpp(linphone_call_get_refer_to((::LinphoneCall *)mPrivPtr));
}
std::shared_ptr<const linphone::Address> linphone::Call::getRemoteAddress() const {
	return Object::cPtrToSharedPtr<const linphone::Address>(linphone_call_get_remote_address((::LinphoneCall *)mPrivPtr));
}
std::string linphone::Call::getRemoteAddressAsString() const {
	return StringUtilities::cStringToCpp(linphone_call_get_remote_address_as_string((::LinphoneCall *)mPrivPtr));
}
std::string linphone::Call::getRemoteContact() {
	return StringUtilities::cStringToCpp(linphone_call_get_remote_contact((::LinphoneCall *)mPrivPtr));
}
std::shared_ptr<const linphone::Address> linphone::Call::getRemoteContactAddress() {
	return Object::cPtrToSharedPtr<const linphone::Address>(linphone_call_get_remote_contact_address((::LinphoneCall *)mPrivPtr));
}
std::shared_ptr<const linphone::CallParams> linphone::Call::getRemoteParams() const {
	return Object::cPtrToSharedPtr<const linphone::CallParams>(linphone_call_get_remote_params((::LinphoneCall *)mPrivPtr));
}
std::string linphone::Call::getRemoteUserAgent() {
	return StringUtilities::cStringToCpp(linphone_call_get_remote_user_agent((::LinphoneCall *)mPrivPtr));
}
std::shared_ptr<linphone::Call> linphone::Call::getReplacedCall() {
	return Object::cPtrToSharedPtr<linphone::Call>(linphone_call_get_replaced_call((::LinphoneCall *)mPrivPtr));
}
std::shared_ptr<const linphone::Address> linphone::Call::getRequestAddress() const {
	return Object::cPtrToSharedPtr<const linphone::Address>(linphone_call_get_request_address((::LinphoneCall *)mPrivPtr));
}
bool linphone::Call::getSpeakerMuted() const {
	return (linphone_call_get_speaker_muted((::LinphoneCall *)mPrivPtr) != FALSE);
}
void linphone::Call::setSpeakerMuted(bool muted) {
	linphone_call_set_speaker_muted((::LinphoneCall *)mPrivPtr, muted);
}
float linphone::Call::getSpeakerVolumeGain() const {
	return linphone_call_get_speaker_volume_gain((::LinphoneCall *)mPrivPtr);
}
void linphone::Call::setSpeakerVolumeGain(float volume) {
	linphone_call_set_speaker_volume_gain((::LinphoneCall *)mPrivPtr, volume);
}
linphone::Call::State linphone::Call::getState() const {
	return (State)linphone_call_get_state((::LinphoneCall *)mPrivPtr);
}
int linphone::Call::getStreamCount() const {
	return linphone_call_get_stream_count((::LinphoneCall *)mPrivPtr);
}
std::shared_ptr<linphone::CallStats> linphone::Call::getTextStats() {
	return Object::cPtrToSharedPtr<linphone::CallStats>(linphone_call_get_text_stats((::LinphoneCall *)mPrivPtr), false);
}
std::shared_ptr<const linphone::Address> linphone::Call::getToAddress() const {
	return Object::cPtrToSharedPtr<const linphone::Address>(linphone_call_get_to_address((::LinphoneCall *)mPrivPtr));
}
linphone::Call::State linphone::Call::getTransferState() {
	return (State)linphone_call_get_transfer_state((::LinphoneCall *)mPrivPtr);
}
std::shared_ptr<linphone::Call> linphone::Call::getTransferTargetCall() const {
	return Object::cPtrToSharedPtr<linphone::Call>(linphone_call_get_transfer_target_call((::LinphoneCall *)mPrivPtr));
}
std::shared_ptr<linphone::Call> linphone::Call::getTransfererCall() const {
	return Object::cPtrToSharedPtr<linphone::Call>(linphone_call_get_transferer_call((::LinphoneCall *)mPrivPtr));
}
std::shared_ptr<const linphone::VideoSourceDescriptor> linphone::Call::getVideoSource() const {
	return Object::cPtrToSharedPtr<const linphone::VideoSourceDescriptor>(linphone_call_get_video_source((::LinphoneCall *)mPrivPtr));
}
void linphone::Call::setVideoSource(const std::shared_ptr<const linphone::VideoSourceDescriptor> & descriptor) {
	linphone_call_set_video_source((::LinphoneCall *)mPrivPtr, (::LinphoneVideoSourceDescriptor *)Object::sharedPtrToCPtr(std::static_pointer_cast<const Object,const linphone::VideoSourceDescriptor>(descriptor)));
}
std::shared_ptr<linphone::CallStats> linphone::Call::getVideoStats() {
	return Object::cPtrToSharedPtr<linphone::CallStats>(linphone_call_get_video_stats((::LinphoneCall *)mPrivPtr), false);
}
linphone::Status linphone::Call::accept() {
	return linphone_call_accept((::LinphoneCall *)mPrivPtr);
}
linphone::Status linphone::Call::acceptEarlyMedia() {
	return linphone_call_accept_early_media((::LinphoneCall *)mPrivPtr);
}
linphone::Status linphone::Call::acceptEarlyMediaWithParams(const std::shared_ptr<const linphone::CallParams> & params) {
	return linphone_call_accept_early_media_with_params((::LinphoneCall *)mPrivPtr, (::LinphoneCallParams *)Object::sharedPtrToCPtr(std::static_pointer_cast<const Object,const linphone::CallParams>(params)));
}
linphone::Status linphone::Call::acceptUpdate(const std::shared_ptr<const linphone::CallParams> & params) {
	return linphone_call_accept_update((::LinphoneCall *)mPrivPtr, (::LinphoneCallParams *)Object::sharedPtrToCPtr(std::static_pointer_cast<const Object,const linphone::CallParams>(params)));
}
linphone::Status linphone::Call::acceptWithParams(const std::shared_ptr<const linphone::CallParams> & params) {
	return linphone_call_accept_with_params((::LinphoneCall *)mPrivPtr, (::LinphoneCallParams *)Object::sharedPtrToCPtr(std::static_pointer_cast<const Object,const linphone::CallParams>(params)));
}
bool linphone::Call::askedToAutoanswer() {
	return (linphone_call_asked_to_autoanswer((::LinphoneCall *)mPrivPtr) != FALSE);
}
void linphone::Call::cancelDtmfs() {
	linphone_call_cancel_dtmfs((::LinphoneCall *)mPrivPtr);
}
void linphone::Call::confirmGoClear() const {
	linphone_call_confirm_go_clear((::LinphoneCall *)mPrivPtr);
}
void * linphone::Call::createNativeVideoWindowId() const {
	return linphone_call_create_native_video_window_id((::LinphoneCall *)mPrivPtr);
}
linphone::Status linphone::Call::decline(linphone::Reason reason) {
	return linphone_call_decline((::LinphoneCall *)mPrivPtr, (::LinphoneReason)reason);
}
int linphone::Call::declineWithErrorInfo(const std::shared_ptr<const linphone::ErrorInfo> & ei) {
	return linphone_call_decline_with_error_info((::LinphoneCall *)mPrivPtr, (::LinphoneErrorInfo *)Object::sharedPtrToCPtr(std::static_pointer_cast<const Object,const linphone::ErrorInfo>(ei)));
}
linphone::Status linphone::Call::deferUpdate() {
	return linphone_call_defer_update((::LinphoneCall *)mPrivPtr);
}
std::shared_ptr<linphone::CallStats> linphone::Call::getStats(linphone::StreamType type) {
	return Object::cPtrToSharedPtr<linphone::CallStats>(linphone_call_get_stats((::LinphoneCall *)mPrivPtr, (::LinphoneStreamType)type), false);
}
std::string linphone::Call::getToHeader(const std::string & headerName) const {
	return StringUtilities::cStringToCpp(linphone_call_get_to_header((::LinphoneCall *)mPrivPtr, StringUtilities::cppStringToC(headerName)));
}
bool linphone::Call::hasTransferPending() const {
	return (linphone_call_has_transfer_pending((::LinphoneCall *)mPrivPtr) != FALSE);
}
bool linphone::Call::mediaInProgress() const {
	return (linphone_call_media_in_progress((::LinphoneCall *)mPrivPtr) != FALSE);
}
void linphone::Call::notifyRinging() {
	linphone_call_notify_ringing((::LinphoneCall *)mPrivPtr);
}
void linphone::Call::oglRender() const {
	linphone_call_ogl_render((::LinphoneCall *)mPrivPtr);
}
linphone::Status linphone::Call::pause() {
	return linphone_call_pause((::LinphoneCall *)mPrivPtr);
}
linphone::Status linphone::Call::redirect(const std::string & redirectUri) {
	return linphone_call_redirect((::LinphoneCall *)mPrivPtr, StringUtilities::cppStringToC(redirectUri));
}
linphone::Status linphone::Call::redirectTo(const std::shared_ptr<linphone::Address> & redirectAddress) {
	return linphone_call_redirect_to((::LinphoneCall *)mPrivPtr, (::LinphoneAddress *)Object::sharedPtrToCPtr(std::static_pointer_cast<Object,linphone::Address>(redirectAddress)));
}
void linphone::Call::requestNotifyNextVideoFrameDecoded() {
	linphone_call_request_notify_next_video_frame_decoded((::LinphoneCall *)mPrivPtr);
}
linphone::Status linphone::Call::resume() {
	return linphone_call_resume((::LinphoneCall *)mPrivPtr);
}
linphone::Status linphone::Call::sendDtmf(char dtmf) {
	return linphone_call_send_dtmf((::LinphoneCall *)mPrivPtr, dtmf);
}
linphone::Status linphone::Call::sendDtmfs(const std::string & dtmfs) {
	return linphone_call_send_dtmfs((::LinphoneCall *)mPrivPtr, StringUtilities::cppStringToC(dtmfs));
}
linphone::Status linphone::Call::sendInfoMessage(const std::shared_ptr<const linphone::InfoMessage> & info) {
	return linphone_call_send_info_message((::LinphoneCall *)mPrivPtr, (::LinphoneInfoMessage *)Object::sharedPtrToCPtr(std::static_pointer_cast<const Object,const linphone::InfoMessage>(info)));
}
void linphone::Call::sendVfuRequest() {
	linphone_call_send_vfu_request((::LinphoneCall *)mPrivPtr);
}
void linphone::Call::startRecording() {
	linphone_call_start_recording((::LinphoneCall *)mPrivPtr);
}
void linphone::Call::stopRecording() {
	linphone_call_stop_recording((::LinphoneCall *)mPrivPtr);
}
linphone::Status linphone::Call::takePreviewSnapshot(const std::string & filePath) {
	return linphone_call_take_preview_snapshot((::LinphoneCall *)mPrivPtr, StringUtilities::cppStringToC(filePath));
}
linphone::Status linphone::Call::takeVideoSnapshot(const std::string & filePath) {
	return linphone_call_take_video_snapshot((::LinphoneCall *)mPrivPtr, StringUtilities::cppStringToC(filePath));
}
linphone::Status linphone::Call::terminate() {
	return linphone_call_terminate((::LinphoneCall *)mPrivPtr);
}
linphone::Status linphone::Call::terminateWithErrorInfo(const std::shared_ptr<const linphone::ErrorInfo> & ei) {
	return linphone_call_terminate_with_error_info((::LinphoneCall *)mPrivPtr, (::LinphoneErrorInfo *)Object::sharedPtrToCPtr(std::static_pointer_cast<const Object,const linphone::ErrorInfo>(ei)));
}
linphone::Status linphone::Call::transfer(const std::string & referTo) {
	return linphone_call_transfer((::LinphoneCall *)mPrivPtr, StringUtilities::cppStringToC(referTo));
}
linphone::Status linphone::Call::transferTo(const std::shared_ptr<linphone::Address> & referTo) {
	return linphone_call_transfer_to((::LinphoneCall *)mPrivPtr, (::LinphoneAddress *)Object::sharedPtrToCPtr(std::static_pointer_cast<Object,linphone::Address>(referTo)));
}
linphone::Status linphone::Call::transferToAnother(const std::shared_ptr<linphone::Call> & dest) {
	return linphone_call_transfer_to_another((::LinphoneCall *)mPrivPtr, (::LinphoneCall *)Object::sharedPtrToCPtr(std::static_pointer_cast<Object,linphone::Call>(dest)));
}
linphone::Status linphone::Call::update(const std::shared_ptr<const linphone::CallParams> & params) {
	return linphone_call_update((::LinphoneCall *)mPrivPtr, (::LinphoneCallParams *)Object::sharedPtrToCPtr(std::static_pointer_cast<const Object,const linphone::CallParams>(params)));
}
void linphone::Call::zoom(float zoomFactor, float cx, float cy) {
	linphone_call_zoom((::LinphoneCall *)mPrivPtr, zoomFactor, cx, cy);
}



static void linphone_core_cbs_on_new_alert_triggered_cb(LinphoneCore * core, LinphoneAlert * alert) {
	LinphoneCoreCbs *cbs = linphone_core_get_current_callbacks(core);
	if (cbs) {
		// Make a copy of the list of listeners, so that it is possible to remove a listener from a listener without corrupting the list.
		std::list<std::shared_ptr<Listener> > listeners = *static_cast<std::list<std::shared_ptr<Listener> > *>(belle_sip_object_data_get((::belle_sip_object_t *)cbs, MultiListenableObject::sListenerListName));
		for(std::list<std::shared_ptr<Listener> >::iterator it=listeners.begin(); it!=listeners.end(); it++) {
			std::shared_ptr<CoreListener> listener = std::static_pointer_cast<CoreListener,Listener>(*it);
			listener->onNewAlertTriggered(Object::cPtrToSharedPtr<Core>(core), Object::cPtrToSharedPtr<Alert>(alert));
		}
	}
}
static void linphone_core_cbs_on_global_state_changed_cb(LinphoneCore * core, LinphoneGlobalState state, const char * message) {
	LinphoneCoreCbs *cbs = linphone_core_get_current_callbacks(core);
	if (cbs) {
		// Make a copy of the list of listeners, so that it is possible to remove a listener from a listener without corrupting the list.
		std::list<std::shared_ptr<Listener> > listeners = *static_cast<std::list<std::shared_ptr<Listener> > *>(belle_sip_object_data_get((::belle_sip_object_t *)cbs, MultiListenableObject::sListenerListName));
		for(std::list<std::shared_ptr<Listener> >::iterator it=listeners.begin(); it!=listeners.end(); it++) {
			std::shared_ptr<CoreListener> listener = std::static_pointer_cast<CoreListener,Listener>(*it);
			listener->onGlobalStateChanged(Object::cPtrToSharedPtr<Core>(core), (GlobalState)state, StringUtilities::cStringToCpp(message));
		}
	}
}
static void linphone_core_cbs_on_registration_state_changed_cb(LinphoneCore * core, LinphoneProxyConfig * proxy_config, LinphoneRegistrationState state, const char * message) {
	LinphoneCoreCbs *cbs = linphone_core_get_current_callbacks(core);
	if (cbs) {
		// Make a copy of the list of listeners, so that it is possible to remove a listener from a listener without corrupting the list.
		std::list<std::shared_ptr<Listener> > listeners = *static_cast<std::list<std::shared_ptr<Listener> > *>(belle_sip_object_data_get((::belle_sip_object_t *)cbs, MultiListenableObject::sListenerListName));
		for(std::list<std::shared_ptr<Listener> >::iterator it=listeners.begin(); it!=listeners.end(); it++) {
			std::shared_ptr<CoreListener> listener = std::static_pointer_cast<CoreListener,Listener>(*it);
			listener->onRegistrationStateChanged(Object::cPtrToSharedPtr<Core>(core), Object::cPtrToSharedPtr<ProxyConfig>(proxy_config), (RegistrationState)state, StringUtilities::cStringToCpp(message));
		}
	}
}
static void linphone_core_cbs_on_conference_info_received_cb(LinphoneCore * core, const LinphoneConferenceInfo * conference_info) {
	LinphoneCoreCbs *cbs = linphone_core_get_current_callbacks(core);
	if (cbs) {
		// Make a copy of the list of listeners, so that it is possible to remove a listener from a listener without corrupting the list.
		std::list<std::shared_ptr<Listener> > listeners = *static_cast<std::list<std::shared_ptr<Listener> > *>(belle_sip_object_data_get((::belle_sip_object_t *)cbs, MultiListenableObject::sListenerListName));
		for(std::list<std::shared_ptr<Listener> >::iterator it=listeners.begin(); it!=listeners.end(); it++) {
			std::shared_ptr<CoreListener> listener = std::static_pointer_cast<CoreListener,Listener>(*it);
			listener->onConferenceInfoReceived(Object::cPtrToSharedPtr<Core>(core), Object::cPtrToSharedPtr<const ConferenceInfo>(conference_info));
		}
	}
}
static void linphone_core_cbs_on_push_notification_received_cb(LinphoneCore * core, const char * payload) {
	LinphoneCoreCbs *cbs = linphone_core_get_current_callbacks(core);
	if (cbs) {
		// Make a copy of the list of listeners, so that it is possible to remove a listener from a listener without corrupting the list.
		std::list<std::shared_ptr<Listener> > listeners = *static_cast<std::list<std::shared_ptr<Listener> > *>(belle_sip_object_data_get((::belle_sip_object_t *)cbs, MultiListenableObject::sListenerListName));
		for(std::list<std::shared_ptr<Listener> >::iterator it=listeners.begin(); it!=listeners.end(); it++) {
			std::shared_ptr<CoreListener> listener = std::static_pointer_cast<CoreListener,Listener>(*it);
			listener->onPushNotificationReceived(Object::cPtrToSharedPtr<Core>(core), StringUtilities::cStringToCpp(payload));
		}
	}
}
static void linphone_core_cbs_on_preview_display_error_occurred_cb(LinphoneCore * core, int error_code) {
	LinphoneCoreCbs *cbs = linphone_core_get_current_callbacks(core);
	if (cbs) {
		// Make a copy of the list of listeners, so that it is possible to remove a listener from a listener without corrupting the list.
		std::list<std::shared_ptr<Listener> > listeners = *static_cast<std::list<std::shared_ptr<Listener> > *>(belle_sip_object_data_get((::belle_sip_object_t *)cbs, MultiListenableObject::sListenerListName));
		for(std::list<std::shared_ptr<Listener> >::iterator it=listeners.begin(); it!=listeners.end(); it++) {
			std::shared_ptr<CoreListener> listener = std::static_pointer_cast<CoreListener,Listener>(*it);
			listener->onPreviewDisplayErrorOccurred(Object::cPtrToSharedPtr<Core>(core), error_code);
		}
	}
}
static void linphone_core_cbs_on_call_state_changed_cb(LinphoneCore * core, LinphoneCall * call, LinphoneCallState state, const char * message) {
	LinphoneCoreCbs *cbs = linphone_core_get_current_callbacks(core);
	if (cbs) {
		// Make a copy of the list of listeners, so that it is possible to remove a listener from a listener without corrupting the list.
		std::list<std::shared_ptr<Listener> > listeners = *static_cast<std::list<std::shared_ptr<Listener> > *>(belle_sip_object_data_get((::belle_sip_object_t *)cbs, MultiListenableObject::sListenerListName));
		for(std::list<std::shared_ptr<Listener> >::iterator it=listeners.begin(); it!=listeners.end(); it++) {
			std::shared_ptr<CoreListener> listener = std::static_pointer_cast<CoreListener,Listener>(*it);
			listener->onCallStateChanged(Object::cPtrToSharedPtr<Core>(core), Object::cPtrToSharedPtr<Call>(call), (Call::State)state, StringUtilities::cStringToCpp(message));
		}
	}
}
static void linphone_core_cbs_on_notify_presence_received_cb(LinphoneCore * core, LinphoneFriend * linphone_friend) {
	LinphoneCoreCbs *cbs = linphone_core_get_current_callbacks(core);
	if (cbs) {
		// Make a copy of the list of listeners, so that it is possible to remove a listener from a listener without corrupting the list.
		std::list<std::shared_ptr<Listener> > listeners = *static_cast<std::list<std::shared_ptr<Listener> > *>(belle_sip_object_data_get((::belle_sip_object_t *)cbs, MultiListenableObject::sListenerListName));
		for(std::list<std::shared_ptr<Listener> >::iterator it=listeners.begin(); it!=listeners.end(); it++) {
			std::shared_ptr<CoreListener> listener = std::static_pointer_cast<CoreListener,Listener>(*it);
			listener->onNotifyPresenceReceived(Object::cPtrToSharedPtr<Core>(core), Object::cPtrToSharedPtr<Friend>(linphone_friend));
		}
	}
}
static void linphone_core_cbs_on_notify_presence_received_for_uri_or_tel_cb(LinphoneCore * core, LinphoneFriend * linphone_friend, const char * uri_or_tel, const LinphonePresenceModel * presence_model) {
	LinphoneCoreCbs *cbs = linphone_core_get_current_callbacks(core);
	if (cbs) {
		// Make a copy of the list of listeners, so that it is possible to remove a listener from a listener without corrupting the list.
		std::list<std::shared_ptr<Listener> > listeners = *static_cast<std::list<std::shared_ptr<Listener> > *>(belle_sip_object_data_get((::belle_sip_object_t *)cbs, MultiListenableObject::sListenerListName));
		for(std::list<std::shared_ptr<Listener> >::iterator it=listeners.begin(); it!=listeners.end(); it++) {
			std::shared_ptr<CoreListener> listener = std::static_pointer_cast<CoreListener,Listener>(*it);
			listener->onNotifyPresenceReceivedForUriOrTel(Object::cPtrToSharedPtr<Core>(core), Object::cPtrToSharedPtr<Friend>(linphone_friend), StringUtilities::cStringToCpp(uri_or_tel), Object::cPtrToSharedPtr<const PresenceModel>(presence_model));
		}
	}
}
static void linphone_core_cbs_on_new_subscription_requested_cb(LinphoneCore * core, LinphoneFriend * linphone_friend, const char * url) {
	LinphoneCoreCbs *cbs = linphone_core_get_current_callbacks(core);
	if (cbs) {
		// Make a copy of the list of listeners, so that it is possible to remove a listener from a listener without corrupting the list.
		std::list<std::shared_ptr<Listener> > listeners = *static_cast<std::list<std::shared_ptr<Listener> > *>(belle_sip_object_data_get((::belle_sip_object_t *)cbs, MultiListenableObject::sListenerListName));
		for(std::list<std::shared_ptr<Listener> >::iterator it=listeners.begin(); it!=listeners.end(); it++) {
			std::shared_ptr<CoreListener> listener = std::static_pointer_cast<CoreListener,Listener>(*it);
			listener->onNewSubscriptionRequested(Object::cPtrToSharedPtr<Core>(core), Object::cPtrToSharedPtr<Friend>(linphone_friend), StringUtilities::cStringToCpp(url));
		}
	}
}
static void linphone_core_cbs_on_authentication_requested_cb(LinphoneCore * core, LinphoneAuthInfo * auth_info, LinphoneAuthMethod method) {
	LinphoneCoreCbs *cbs = linphone_core_get_current_callbacks(core);
	if (cbs) {
		// Make a copy of the list of listeners, so that it is possible to remove a listener from a listener without corrupting the list.
		std::list<std::shared_ptr<Listener> > listeners = *static_cast<std::list<std::shared_ptr<Listener> > *>(belle_sip_object_data_get((::belle_sip_object_t *)cbs, MultiListenableObject::sListenerListName));
		for(std::list<std::shared_ptr<Listener> >::iterator it=listeners.begin(); it!=listeners.end(); it++) {
			std::shared_ptr<CoreListener> listener = std::static_pointer_cast<CoreListener,Listener>(*it);
			listener->onAuthenticationRequested(Object::cPtrToSharedPtr<Core>(core), Object::cPtrToSharedPtr<AuthInfo>(auth_info), (AuthMethod)method);
		}
	}
}
static void linphone_core_cbs_on_call_log_updated_cb(LinphoneCore * core, LinphoneCallLog * call_log) {
	LinphoneCoreCbs *cbs = linphone_core_get_current_callbacks(core);
	if (cbs) {
		// Make a copy of the list of listeners, so that it is possible to remove a listener from a listener without corrupting the list.
		std::list<std::shared_ptr<Listener> > listeners = *static_cast<std::list<std::shared_ptr<Listener> > *>(belle_sip_object_data_get((::belle_sip_object_t *)cbs, MultiListenableObject::sListenerListName));
		for(std::list<std::shared_ptr<Listener> >::iterator it=listeners.begin(); it!=listeners.end(); it++) {
			std::shared_ptr<CoreListener> listener = std::static_pointer_cast<CoreListener,Listener>(*it);
			listener->onCallLogUpdated(Object::cPtrToSharedPtr<Core>(core), Object::cPtrToSharedPtr<CallLog>(call_log));
		}
	}
}
static void linphone_core_cbs_on_call_id_updated_cb(LinphoneCore * core, const char * previous_call_id, const char * current_call_id) {
	LinphoneCoreCbs *cbs = linphone_core_get_current_callbacks(core);
	if (cbs) {
		// Make a copy of the list of listeners, so that it is possible to remove a listener from a listener without corrupting the list.
		std::list<std::shared_ptr<Listener> > listeners = *static_cast<std::list<std::shared_ptr<Listener> > *>(belle_sip_object_data_get((::belle_sip_object_t *)cbs, MultiListenableObject::sListenerListName));
		for(std::list<std::shared_ptr<Listener> >::iterator it=listeners.begin(); it!=listeners.end(); it++) {
			std::shared_ptr<CoreListener> listener = std::static_pointer_cast<CoreListener,Listener>(*it);
			listener->onCallIdUpdated(Object::cPtrToSharedPtr<Core>(core), StringUtilities::cStringToCpp(previous_call_id), StringUtilities::cStringToCpp(current_call_id));
		}
	}
}
static void linphone_core_cbs_on_message_received_cb(LinphoneCore * core, LinphoneChatRoom * chat_room, LinphoneChatMessage * message) {
	LinphoneCoreCbs *cbs = linphone_core_get_current_callbacks(core);
	if (cbs) {
		// Make a copy of the list of listeners, so that it is possible to remove a listener from a listener without corrupting the list.
		std::list<std::shared_ptr<Listener> > listeners = *static_cast<std::list<std::shared_ptr<Listener> > *>(belle_sip_object_data_get((::belle_sip_object_t *)cbs, MultiListenableObject::sListenerListName));
		for(std::list<std::shared_ptr<Listener> >::iterator it=listeners.begin(); it!=listeners.end(); it++) {
			std::shared_ptr<CoreListener> listener = std::static_pointer_cast<CoreListener,Listener>(*it);
			listener->onMessageReceived(Object::cPtrToSharedPtr<Core>(core), Object::cPtrToSharedPtr<ChatRoom>(chat_room), Object::cPtrToSharedPtr<ChatMessage>(message));
		}
	}
}
static void linphone_core_cbs_on_new_message_reaction_cb(LinphoneCore * core, LinphoneChatRoom * chat_room, LinphoneChatMessage * message, const LinphoneChatMessageReaction * reaction) {
	LinphoneCoreCbs *cbs = linphone_core_get_current_callbacks(core);
	if (cbs) {
		// Make a copy of the list of listeners, so that it is possible to remove a listener from a listener without corrupting the list.
		std::list<std::shared_ptr<Listener> > listeners = *static_cast<std::list<std::shared_ptr<Listener> > *>(belle_sip_object_data_get((::belle_sip_object_t *)cbs, MultiListenableObject::sListenerListName));
		for(std::list<std::shared_ptr<Listener> >::iterator it=listeners.begin(); it!=listeners.end(); it++) {
			std::shared_ptr<CoreListener> listener = std::static_pointer_cast<CoreListener,Listener>(*it);
			listener->onNewMessageReaction(Object::cPtrToSharedPtr<Core>(core), Object::cPtrToSharedPtr<ChatRoom>(chat_room), Object::cPtrToSharedPtr<ChatMessage>(message), Object::cPtrToSharedPtr<const ChatMessageReaction>(reaction));
		}
	}
}
static void linphone_core_cbs_on_reaction_removed_cb(LinphoneCore * core, LinphoneChatRoom * chat_room, LinphoneChatMessage * message, const LinphoneAddress * address) {
	LinphoneCoreCbs *cbs = linphone_core_get_current_callbacks(core);
	if (cbs) {
		// Make a copy of the list of listeners, so that it is possible to remove a listener from a listener without corrupting the list.
		std::list<std::shared_ptr<Listener> > listeners = *static_cast<std::list<std::shared_ptr<Listener> > *>(belle_sip_object_data_get((::belle_sip_object_t *)cbs, MultiListenableObject::sListenerListName));
		for(std::list<std::shared_ptr<Listener> >::iterator it=listeners.begin(); it!=listeners.end(); it++) {
			std::shared_ptr<CoreListener> listener = std::static_pointer_cast<CoreListener,Listener>(*it);
			listener->onReactionRemoved(Object::cPtrToSharedPtr<Core>(core), Object::cPtrToSharedPtr<ChatRoom>(chat_room), Object::cPtrToSharedPtr<ChatMessage>(message), Object::cPtrToSharedPtr<const Address>(address));
		}
	}
}
static void linphone_core_cbs_on_messages_received_cb(LinphoneCore * core, LinphoneChatRoom * chat_room, const bctbx_list_t * messages) {
	LinphoneCoreCbs *cbs = linphone_core_get_current_callbacks(core);
	if (cbs) {
		// Make a copy of the list of listeners, so that it is possible to remove a listener from a listener without corrupting the list.
		std::list<std::shared_ptr<Listener> > listeners = *static_cast<std::list<std::shared_ptr<Listener> > *>(belle_sip_object_data_get((::belle_sip_object_t *)cbs, MultiListenableObject::sListenerListName));
		for(std::list<std::shared_ptr<Listener> >::iterator it=listeners.begin(); it!=listeners.end(); it++) {
			std::shared_ptr<CoreListener> listener = std::static_pointer_cast<CoreListener,Listener>(*it);
			listener->onMessagesReceived(Object::cPtrToSharedPtr<Core>(core), Object::cPtrToSharedPtr<ChatRoom>(chat_room), ObjectBctbxListWrapper<ChatMessage>::bctbxListToCppList(messages, true));
		}
	}
}
static void linphone_core_cbs_on_message_sent_cb(LinphoneCore * core, LinphoneChatRoom * chat_room, LinphoneChatMessage * message) {
	LinphoneCoreCbs *cbs = linphone_core_get_current_callbacks(core);
	if (cbs) {
		// Make a copy of the list of listeners, so that it is possible to remove a listener from a listener without corrupting the list.
		std::list<std::shared_ptr<Listener> > listeners = *static_cast<std::list<std::shared_ptr<Listener> > *>(belle_sip_object_data_get((::belle_sip_object_t *)cbs, MultiListenableObject::sListenerListName));
		for(std::list<std::shared_ptr<Listener> >::iterator it=listeners.begin(); it!=listeners.end(); it++) {
			std::shared_ptr<CoreListener> listener = std::static_pointer_cast<CoreListener,Listener>(*it);
			listener->onMessageSent(Object::cPtrToSharedPtr<Core>(core), Object::cPtrToSharedPtr<ChatRoom>(chat_room), Object::cPtrToSharedPtr<ChatMessage>(message));
		}
	}
}
static void linphone_core_cbs_on_chat_room_session_state_changed_cb(LinphoneCore * core, LinphoneChatRoom * chat_room, LinphoneCallState state, const char * message) {
	LinphoneCoreCbs *cbs = linphone_core_get_current_callbacks(core);
	if (cbs) {
		// Make a copy of the list of listeners, so that it is possible to remove a listener from a listener without corrupting the list.
		std::list<std::shared_ptr<Listener> > listeners = *static_cast<std::list<std::shared_ptr<Listener> > *>(belle_sip_object_data_get((::belle_sip_object_t *)cbs, MultiListenableObject::sListenerListName));
		for(std::list<std::shared_ptr<Listener> >::iterator it=listeners.begin(); it!=listeners.end(); it++) {
			std::shared_ptr<CoreListener> listener = std::static_pointer_cast<CoreListener,Listener>(*it);
			listener->onChatRoomSessionStateChanged(Object::cPtrToSharedPtr<Core>(core), Object::cPtrToSharedPtr<ChatRoom>(chat_room), (Call::State)state, StringUtilities::cStringToCpp(message));
		}
	}
}
static void linphone_core_cbs_on_chat_room_read_cb(LinphoneCore * core, LinphoneChatRoom * chat_room) {
	LinphoneCoreCbs *cbs = linphone_core_get_current_callbacks(core);
	if (cbs) {
		// Make a copy of the list of listeners, so that it is possible to remove a listener from a listener without corrupting the list.
		std::list<std::shared_ptr<Listener> > listeners = *static_cast<std::list<std::shared_ptr<Listener> > *>(belle_sip_object_data_get((::belle_sip_object_t *)cbs, MultiListenableObject::sListenerListName));
		for(std::list<std::shared_ptr<Listener> >::iterator it=listeners.begin(); it!=listeners.end(); it++) {
			std::shared_ptr<CoreListener> listener = std::static_pointer_cast<CoreListener,Listener>(*it);
			listener->onChatRoomRead(Object::cPtrToSharedPtr<Core>(core), Object::cPtrToSharedPtr<ChatRoom>(chat_room));
		}
	}
}
static void linphone_core_cbs_on_message_received_unable_decrypt_cb(LinphoneCore * core, LinphoneChatRoom * chat_room, LinphoneChatMessage * message) {
	LinphoneCoreCbs *cbs = linphone_core_get_current_callbacks(core);
	if (cbs) {
		// Make a copy of the list of listeners, so that it is possible to remove a listener from a listener without corrupting the list.
		std::list<std::shared_ptr<Listener> > listeners = *static_cast<std::list<std::shared_ptr<Listener> > *>(belle_sip_object_data_get((::belle_sip_object_t *)cbs, MultiListenableObject::sListenerListName));
		for(std::list<std::shared_ptr<Listener> >::iterator it=listeners.begin(); it!=listeners.end(); it++) {
			std::shared_ptr<CoreListener> listener = std::static_pointer_cast<CoreListener,Listener>(*it);
			listener->onMessageReceivedUnableDecrypt(Object::cPtrToSharedPtr<Core>(core), Object::cPtrToSharedPtr<ChatRoom>(chat_room), Object::cPtrToSharedPtr<ChatMessage>(message));
		}
	}
}
static void linphone_core_cbs_on_is_composing_received_cb(LinphoneCore * core, LinphoneChatRoom * chat_room) {
	LinphoneCoreCbs *cbs = linphone_core_get_current_callbacks(core);
	if (cbs) {
		// Make a copy of the list of listeners, so that it is possible to remove a listener from a listener without corrupting the list.
		std::list<std::shared_ptr<Listener> > listeners = *static_cast<std::list<std::shared_ptr<Listener> > *>(belle_sip_object_data_get((::belle_sip_object_t *)cbs, MultiListenableObject::sListenerListName));
		for(std::list<std::shared_ptr<Listener> >::iterator it=listeners.begin(); it!=listeners.end(); it++) {
			std::shared_ptr<CoreListener> listener = std::static_pointer_cast<CoreListener,Listener>(*it);
			listener->onIsComposingReceived(Object::cPtrToSharedPtr<Core>(core), Object::cPtrToSharedPtr<ChatRoom>(chat_room));
		}
	}
}
static void linphone_core_cbs_on_dtmf_received_cb(LinphoneCore * core, LinphoneCall * call, int dtmf) {
	LinphoneCoreCbs *cbs = linphone_core_get_current_callbacks(core);
	if (cbs) {
		// Make a copy of the list of listeners, so that it is possible to remove a listener from a listener without corrupting the list.
		std::list<std::shared_ptr<Listener> > listeners = *static_cast<std::list<std::shared_ptr<Listener> > *>(belle_sip_object_data_get((::belle_sip_object_t *)cbs, MultiListenableObject::sListenerListName));
		for(std::list<std::shared_ptr<Listener> >::iterator it=listeners.begin(); it!=listeners.end(); it++) {
			std::shared_ptr<CoreListener> listener = std::static_pointer_cast<CoreListener,Listener>(*it);
			listener->onDtmfReceived(Object::cPtrToSharedPtr<Core>(core), Object::cPtrToSharedPtr<Call>(call), dtmf);
		}
	}
}
static void linphone_core_cbs_on_refer_received_cb(LinphoneCore * core, const char * refer_to) {
	LinphoneCoreCbs *cbs = linphone_core_get_current_callbacks(core);
	if (cbs) {
		// Make a copy of the list of listeners, so that it is possible to remove a listener from a listener without corrupting the list.
		std::list<std::shared_ptr<Listener> > listeners = *static_cast<std::list<std::shared_ptr<Listener> > *>(belle_sip_object_data_get((::belle_sip_object_t *)cbs, MultiListenableObject::sListenerListName));
		for(std::list<std::shared_ptr<Listener> >::iterator it=listeners.begin(); it!=listeners.end(); it++) {
			std::shared_ptr<CoreListener> listener = std::static_pointer_cast<CoreListener,Listener>(*it);
			listener->onReferReceived(Object::cPtrToSharedPtr<Core>(core), StringUtilities::cStringToCpp(refer_to));
		}
	}
}
static void linphone_core_cbs_on_call_goclear_ack_sent_cb(LinphoneCore * core, LinphoneCall * call) {
	LinphoneCoreCbs *cbs = linphone_core_get_current_callbacks(core);
	if (cbs) {
		// Make a copy of the list of listeners, so that it is possible to remove a listener from a listener without corrupting the list.
		std::list<std::shared_ptr<Listener> > listeners = *static_cast<std::list<std::shared_ptr<Listener> > *>(belle_sip_object_data_get((::belle_sip_object_t *)cbs, MultiListenableObject::sListenerListName));
		for(std::list<std::shared_ptr<Listener> >::iterator it=listeners.begin(); it!=listeners.end(); it++) {
			std::shared_ptr<CoreListener> listener = std::static_pointer_cast<CoreListener,Listener>(*it);
			listener->onCallGoclearAckSent(Object::cPtrToSharedPtr<Core>(core), Object::cPtrToSharedPtr<Call>(call));
		}
	}
}
static void linphone_core_cbs_on_call_encryption_changed_cb(LinphoneCore * core, LinphoneCall * call, bool_t media_encryption_enabled, const char * authentication_token) {
	LinphoneCoreCbs *cbs = linphone_core_get_current_callbacks(core);
	if (cbs) {
		// Make a copy of the list of listeners, so that it is possible to remove a listener from a listener without corrupting the list.
		std::list<std::shared_ptr<Listener> > listeners = *static_cast<std::list<std::shared_ptr<Listener> > *>(belle_sip_object_data_get((::belle_sip_object_t *)cbs, MultiListenableObject::sListenerListName));
		for(std::list<std::shared_ptr<Listener> >::iterator it=listeners.begin(); it!=listeners.end(); it++) {
			std::shared_ptr<CoreListener> listener = std::static_pointer_cast<CoreListener,Listener>(*it);
			listener->onCallEncryptionChanged(Object::cPtrToSharedPtr<Core>(core), Object::cPtrToSharedPtr<Call>(call), (media_encryption_enabled != FALSE), StringUtilities::cStringToCpp(authentication_token));
		}
	}
}
static void linphone_core_cbs_on_call_send_master_key_changed_cb(LinphoneCore * core, LinphoneCall * call, const char * master_key) {
	LinphoneCoreCbs *cbs = linphone_core_get_current_callbacks(core);
	if (cbs) {
		// Make a copy of the list of listeners, so that it is possible to remove a listener from a listener without corrupting the list.
		std::list<std::shared_ptr<Listener> > listeners = *static_cast<std::list<std::shared_ptr<Listener> > *>(belle_sip_object_data_get((::belle_sip_object_t *)cbs, MultiListenableObject::sListenerListName));
		for(std::list<std::shared_ptr<Listener> >::iterator it=listeners.begin(); it!=listeners.end(); it++) {
			std::shared_ptr<CoreListener> listener = std::static_pointer_cast<CoreListener,Listener>(*it);
			listener->onCallSendMasterKeyChanged(Object::cPtrToSharedPtr<Core>(core), Object::cPtrToSharedPtr<Call>(call), StringUtilities::cStringToCpp(master_key));
		}
	}
}
static void linphone_core_cbs_on_call_receive_master_key_changed_cb(LinphoneCore * core, LinphoneCall * call, const char * master_key) {
	LinphoneCoreCbs *cbs = linphone_core_get_current_callbacks(core);
	if (cbs) {
		// Make a copy of the list of listeners, so that it is possible to remove a listener from a listener without corrupting the list.
		std::list<std::shared_ptr<Listener> > listeners = *static_cast<std::list<std::shared_ptr<Listener> > *>(belle_sip_object_data_get((::belle_sip_object_t *)cbs, MultiListenableObject::sListenerListName));
		for(std::list<std::shared_ptr<Listener> >::iterator it=listeners.begin(); it!=listeners.end(); it++) {
			std::shared_ptr<CoreListener> listener = std::static_pointer_cast<CoreListener,Listener>(*it);
			listener->onCallReceiveMasterKeyChanged(Object::cPtrToSharedPtr<Core>(core), Object::cPtrToSharedPtr<Call>(call), StringUtilities::cStringToCpp(master_key));
		}
	}
}
static void linphone_core_cbs_on_transfer_state_changed_cb(LinphoneCore * core, LinphoneCall * transfered, LinphoneCallState call_state) {
	LinphoneCoreCbs *cbs = linphone_core_get_current_callbacks(core);
	if (cbs) {
		// Make a copy of the list of listeners, so that it is possible to remove a listener from a listener without corrupting the list.
		std::list<std::shared_ptr<Listener> > listeners = *static_cast<std::list<std::shared_ptr<Listener> > *>(belle_sip_object_data_get((::belle_sip_object_t *)cbs, MultiListenableObject::sListenerListName));
		for(std::list<std::shared_ptr<Listener> >::iterator it=listeners.begin(); it!=listeners.end(); it++) {
			std::shared_ptr<CoreListener> listener = std::static_pointer_cast<CoreListener,Listener>(*it);
			listener->onTransferStateChanged(Object::cPtrToSharedPtr<Core>(core), Object::cPtrToSharedPtr<Call>(transfered), (Call::State)call_state);
		}
	}
}
static void linphone_core_cbs_on_buddy_info_updated_cb(LinphoneCore * core, LinphoneFriend * linphone_friend) {
	LinphoneCoreCbs *cbs = linphone_core_get_current_callbacks(core);
	if (cbs) {
		// Make a copy of the list of listeners, so that it is possible to remove a listener from a listener without corrupting the list.
		std::list<std::shared_ptr<Listener> > listeners = *static_cast<std::list<std::shared_ptr<Listener> > *>(belle_sip_object_data_get((::belle_sip_object_t *)cbs, MultiListenableObject::sListenerListName));
		for(std::list<std::shared_ptr<Listener> >::iterator it=listeners.begin(); it!=listeners.end(); it++) {
			std::shared_ptr<CoreListener> listener = std::static_pointer_cast<CoreListener,Listener>(*it);
			listener->onBuddyInfoUpdated(Object::cPtrToSharedPtr<Core>(core), Object::cPtrToSharedPtr<Friend>(linphone_friend));
		}
	}
}
static void linphone_core_cbs_on_call_stats_updated_cb(LinphoneCore * core, LinphoneCall * call, const LinphoneCallStats * call_stats) {
	LinphoneCoreCbs *cbs = linphone_core_get_current_callbacks(core);
	if (cbs) {
		// Make a copy of the list of listeners, so that it is possible to remove a listener from a listener without corrupting the list.
		std::list<std::shared_ptr<Listener> > listeners = *static_cast<std::list<std::shared_ptr<Listener> > *>(belle_sip_object_data_get((::belle_sip_object_t *)cbs, MultiListenableObject::sListenerListName));
		for(std::list<std::shared_ptr<Listener> >::iterator it=listeners.begin(); it!=listeners.end(); it++) {
			std::shared_ptr<CoreListener> listener = std::static_pointer_cast<CoreListener,Listener>(*it);
			listener->onCallStatsUpdated(Object::cPtrToSharedPtr<Core>(core), Object::cPtrToSharedPtr<Call>(call), Object::cPtrToSharedPtr<const CallStats>(call_stats));
		}
	}
}
static void linphone_core_cbs_on_info_received_cb(LinphoneCore * core, LinphoneCall * call, const LinphoneInfoMessage * message) {
	LinphoneCoreCbs *cbs = linphone_core_get_current_callbacks(core);
	if (cbs) {
		// Make a copy of the list of listeners, so that it is possible to remove a listener from a listener without corrupting the list.
		std::list<std::shared_ptr<Listener> > listeners = *static_cast<std::list<std::shared_ptr<Listener> > *>(belle_sip_object_data_get((::belle_sip_object_t *)cbs, MultiListenableObject::sListenerListName));
		for(std::list<std::shared_ptr<Listener> >::iterator it=listeners.begin(); it!=listeners.end(); it++) {
			std::shared_ptr<CoreListener> listener = std::static_pointer_cast<CoreListener,Listener>(*it);
			listener->onInfoReceived(Object::cPtrToSharedPtr<Core>(core), Object::cPtrToSharedPtr<Call>(call), Object::cPtrToSharedPtr<const InfoMessage>(message));
		}
	}
}
static void linphone_core_cbs_on_subscription_state_changed_cb(LinphoneCore * core, LinphoneEvent * linphone_event, LinphoneSubscriptionState state) {
	LinphoneCoreCbs *cbs = linphone_core_get_current_callbacks(core);
	if (cbs) {
		// Make a copy of the list of listeners, so that it is possible to remove a listener from a listener without corrupting the list.
		std::list<std::shared_ptr<Listener> > listeners = *static_cast<std::list<std::shared_ptr<Listener> > *>(belle_sip_object_data_get((::belle_sip_object_t *)cbs, MultiListenableObject::sListenerListName));
		for(std::list<std::shared_ptr<Listener> >::iterator it=listeners.begin(); it!=listeners.end(); it++) {
			std::shared_ptr<CoreListener> listener = std::static_pointer_cast<CoreListener,Listener>(*it);
			listener->onSubscriptionStateChanged(Object::cPtrToSharedPtr<Core>(core), Object::cPtrToSharedPtr<Event>(linphone_event), (SubscriptionState)state);
		}
	}
}
static void linphone_core_cbs_on_notify_sent_cb(LinphoneCore * core, LinphoneEvent * linphone_event, const LinphoneContent * body) {
	LinphoneCoreCbs *cbs = linphone_core_get_current_callbacks(core);
	if (cbs) {
		// Make a copy of the list of listeners, so that it is possible to remove a listener from a listener without corrupting the list.
		std::list<std::shared_ptr<Listener> > listeners = *static_cast<std::list<std::shared_ptr<Listener> > *>(belle_sip_object_data_get((::belle_sip_object_t *)cbs, MultiListenableObject::sListenerListName));
		for(std::list<std::shared_ptr<Listener> >::iterator it=listeners.begin(); it!=listeners.end(); it++) {
			std::shared_ptr<CoreListener> listener = std::static_pointer_cast<CoreListener,Listener>(*it);
			listener->onNotifySent(Object::cPtrToSharedPtr<Core>(core), Object::cPtrToSharedPtr<Event>(linphone_event), Object::cPtrToSharedPtr<const Content>(body));
		}
	}
}
static void linphone_core_cbs_on_notify_received_cb(LinphoneCore * core, LinphoneEvent * linphone_event, const char * notified_event, const LinphoneContent * body) {
	LinphoneCoreCbs *cbs = linphone_core_get_current_callbacks(core);
	if (cbs) {
		// Make a copy of the list of listeners, so that it is possible to remove a listener from a listener without corrupting the list.
		std::list<std::shared_ptr<Listener> > listeners = *static_cast<std::list<std::shared_ptr<Listener> > *>(belle_sip_object_data_get((::belle_sip_object_t *)cbs, MultiListenableObject::sListenerListName));
		for(std::list<std::shared_ptr<Listener> >::iterator it=listeners.begin(); it!=listeners.end(); it++) {
			std::shared_ptr<CoreListener> listener = std::static_pointer_cast<CoreListener,Listener>(*it);
			listener->onNotifyReceived(Object::cPtrToSharedPtr<Core>(core), Object::cPtrToSharedPtr<Event>(linphone_event), StringUtilities::cStringToCpp(notified_event), Object::cPtrToSharedPtr<const Content>(body));
		}
	}
}
static void linphone_core_cbs_on_subscribe_received_cb(LinphoneCore * core, LinphoneEvent * linphone_event, const char * subscribe_event, const LinphoneContent * body) {
	LinphoneCoreCbs *cbs = linphone_core_get_current_callbacks(core);
	if (cbs) {
		// Make a copy of the list of listeners, so that it is possible to remove a listener from a listener without corrupting the list.
		std::list<std::shared_ptr<Listener> > listeners = *static_cast<std::list<std::shared_ptr<Listener> > *>(belle_sip_object_data_get((::belle_sip_object_t *)cbs, MultiListenableObject::sListenerListName));
		for(std::list<std::shared_ptr<Listener> >::iterator it=listeners.begin(); it!=listeners.end(); it++) {
			std::shared_ptr<CoreListener> listener = std::static_pointer_cast<CoreListener,Listener>(*it);
			listener->onSubscribeReceived(Object::cPtrToSharedPtr<Core>(core), Object::cPtrToSharedPtr<Event>(linphone_event), StringUtilities::cStringToCpp(subscribe_event), Object::cPtrToSharedPtr<const Content>(body));
		}
	}
}
static void linphone_core_cbs_on_publish_state_changed_cb(LinphoneCore * core, LinphoneEvent * linphone_event, LinphonePublishState state) {
	LinphoneCoreCbs *cbs = linphone_core_get_current_callbacks(core);
	if (cbs) {
		// Make a copy of the list of listeners, so that it is possible to remove a listener from a listener without corrupting the list.
		std::list<std::shared_ptr<Listener> > listeners = *static_cast<std::list<std::shared_ptr<Listener> > *>(belle_sip_object_data_get((::belle_sip_object_t *)cbs, MultiListenableObject::sListenerListName));
		for(std::list<std::shared_ptr<Listener> >::iterator it=listeners.begin(); it!=listeners.end(); it++) {
			std::shared_ptr<CoreListener> listener = std::static_pointer_cast<CoreListener,Listener>(*it);
			listener->onPublishStateChanged(Object::cPtrToSharedPtr<Core>(core), Object::cPtrToSharedPtr<Event>(linphone_event), (PublishState)state);
		}
	}
}
static void linphone_core_cbs_on_publish_received_cb(LinphoneCore * core, LinphoneEvent * linphone_event, const char * publish_event, const LinphoneContent * body) {
	LinphoneCoreCbs *cbs = linphone_core_get_current_callbacks(core);
	if (cbs) {
		// Make a copy of the list of listeners, so that it is possible to remove a listener from a listener without corrupting the list.
		std::list<std::shared_ptr<Listener> > listeners = *static_cast<std::list<std::shared_ptr<Listener> > *>(belle_sip_object_data_get((::belle_sip_object_t *)cbs, MultiListenableObject::sListenerListName));
		for(std::list<std::shared_ptr<Listener> >::iterator it=listeners.begin(); it!=listeners.end(); it++) {
			std::shared_ptr<CoreListener> listener = std::static_pointer_cast<CoreListener,Listener>(*it);
			listener->onPublishReceived(Object::cPtrToSharedPtr<Core>(core), Object::cPtrToSharedPtr<Event>(linphone_event), StringUtilities::cStringToCpp(publish_event), Object::cPtrToSharedPtr<const Content>(body));
		}
	}
}
static void linphone_core_cbs_on_configuring_status_cb(LinphoneCore * core, LinphoneConfiguringState status, const char * message) {
	LinphoneCoreCbs *cbs = linphone_core_get_current_callbacks(core);
	if (cbs) {
		// Make a copy of the list of listeners, so that it is possible to remove a listener from a listener without corrupting the list.
		std::list<std::shared_ptr<Listener> > listeners = *static_cast<std::list<std::shared_ptr<Listener> > *>(belle_sip_object_data_get((::belle_sip_object_t *)cbs, MultiListenableObject::sListenerListName));
		for(std::list<std::shared_ptr<Listener> >::iterator it=listeners.begin(); it!=listeners.end(); it++) {
			std::shared_ptr<CoreListener> listener = std::static_pointer_cast<CoreListener,Listener>(*it);
			listener->onConfiguringStatus(Object::cPtrToSharedPtr<Core>(core), (ConfiguringState)status, StringUtilities::cStringToCpp(message));
		}
	}
}
static void linphone_core_cbs_on_network_reachable_cb(LinphoneCore * core, bool_t reachable) {
	LinphoneCoreCbs *cbs = linphone_core_get_current_callbacks(core);
	if (cbs) {
		// Make a copy of the list of listeners, so that it is possible to remove a listener from a listener without corrupting the list.
		std::list<std::shared_ptr<Listener> > listeners = *static_cast<std::list<std::shared_ptr<Listener> > *>(belle_sip_object_data_get((::belle_sip_object_t *)cbs, MultiListenableObject::sListenerListName));
		for(std::list<std::shared_ptr<Listener> >::iterator it=listeners.begin(); it!=listeners.end(); it++) {
			std::shared_ptr<CoreListener> listener = std::static_pointer_cast<CoreListener,Listener>(*it);
			listener->onNetworkReachable(Object::cPtrToSharedPtr<Core>(core), (reachable != FALSE));
		}
	}
}
static void linphone_core_cbs_on_log_collection_upload_state_changed_cb(LinphoneCore * core, LinphoneCoreLogCollectionUploadState state, const char * info) {
	LinphoneCoreCbs *cbs = linphone_core_get_current_callbacks(core);
	if (cbs) {
		// Make a copy of the list of listeners, so that it is possible to remove a listener from a listener without corrupting the list.
		std::list<std::shared_ptr<Listener> > listeners = *static_cast<std::list<std::shared_ptr<Listener> > *>(belle_sip_object_data_get((::belle_sip_object_t *)cbs, MultiListenableObject::sListenerListName));
		for(std::list<std::shared_ptr<Listener> >::iterator it=listeners.begin(); it!=listeners.end(); it++) {
			std::shared_ptr<CoreListener> listener = std::static_pointer_cast<CoreListener,Listener>(*it);
			listener->onLogCollectionUploadStateChanged(Object::cPtrToSharedPtr<Core>(core), (Core::LogCollectionUploadState)state, StringUtilities::cStringToCpp(info));
		}
	}
}
static void linphone_core_cbs_on_log_collection_upload_progress_indication_cb(LinphoneCore * core, size_t offset, size_t total) {
	LinphoneCoreCbs *cbs = linphone_core_get_current_callbacks(core);
	if (cbs) {
		// Make a copy of the list of listeners, so that it is possible to remove a listener from a listener without corrupting the list.
		std::list<std::shared_ptr<Listener> > listeners = *static_cast<std::list<std::shared_ptr<Listener> > *>(belle_sip_object_data_get((::belle_sip_object_t *)cbs, MultiListenableObject::sListenerListName));
		for(std::list<std::shared_ptr<Listener> >::iterator it=listeners.begin(); it!=listeners.end(); it++) {
			std::shared_ptr<CoreListener> listener = std::static_pointer_cast<CoreListener,Listener>(*it);
			listener->onLogCollectionUploadProgressIndication(Object::cPtrToSharedPtr<Core>(core), offset, total);
		}
	}
}
static void linphone_core_cbs_on_friend_list_created_cb(LinphoneCore * core, LinphoneFriendList * friend_list) {
	LinphoneCoreCbs *cbs = linphone_core_get_current_callbacks(core);
	if (cbs) {
		// Make a copy of the list of listeners, so that it is possible to remove a listener from a listener without corrupting the list.
		std::list<std::shared_ptr<Listener> > listeners = *static_cast<std::list<std::shared_ptr<Listener> > *>(belle_sip_object_data_get((::belle_sip_object_t *)cbs, MultiListenableObject::sListenerListName));
		for(std::list<std::shared_ptr<Listener> >::iterator it=listeners.begin(); it!=listeners.end(); it++) {
			std::shared_ptr<CoreListener> listener = std::static_pointer_cast<CoreListener,Listener>(*it);
			listener->onFriendListCreated(Object::cPtrToSharedPtr<Core>(core), Object::cPtrToSharedPtr<FriendList>(friend_list));
		}
	}
}
static void linphone_core_cbs_on_friend_list_removed_cb(LinphoneCore * core, LinphoneFriendList * friend_list) {
	LinphoneCoreCbs *cbs = linphone_core_get_current_callbacks(core);
	if (cbs) {
		// Make a copy of the list of listeners, so that it is possible to remove a listener from a listener without corrupting the list.
		std::list<std::shared_ptr<Listener> > listeners = *static_cast<std::list<std::shared_ptr<Listener> > *>(belle_sip_object_data_get((::belle_sip_object_t *)cbs, MultiListenableObject::sListenerListName));
		for(std::list<std::shared_ptr<Listener> >::iterator it=listeners.begin(); it!=listeners.end(); it++) {
			std::shared_ptr<CoreListener> listener = std::static_pointer_cast<CoreListener,Listener>(*it);
			listener->onFriendListRemoved(Object::cPtrToSharedPtr<Core>(core), Object::cPtrToSharedPtr<FriendList>(friend_list));
		}
	}
}
static void linphone_core_cbs_on_call_created_cb(LinphoneCore * core, LinphoneCall * call) {
	LinphoneCoreCbs *cbs = linphone_core_get_current_callbacks(core);
	if (cbs) {
		// Make a copy of the list of listeners, so that it is possible to remove a listener from a listener without corrupting the list.
		std::list<std::shared_ptr<Listener> > listeners = *static_cast<std::list<std::shared_ptr<Listener> > *>(belle_sip_object_data_get((::belle_sip_object_t *)cbs, MultiListenableObject::sListenerListName));
		for(std::list<std::shared_ptr<Listener> >::iterator it=listeners.begin(); it!=listeners.end(); it++) {
			std::shared_ptr<CoreListener> listener = std::static_pointer_cast<CoreListener,Listener>(*it);
			listener->onCallCreated(Object::cPtrToSharedPtr<Core>(core), Object::cPtrToSharedPtr<Call>(call));
		}
	}
}
static void linphone_core_cbs_on_version_update_check_result_received_cb(LinphoneCore * core, LinphoneVersionUpdateCheckResult result, const char * version, const char * url) {
	LinphoneCoreCbs *cbs = linphone_core_get_current_callbacks(core);
	if (cbs) {
		// Make a copy of the list of listeners, so that it is possible to remove a listener from a listener without corrupting the list.
		std::list<std::shared_ptr<Listener> > listeners = *static_cast<std::list<std::shared_ptr<Listener> > *>(belle_sip_object_data_get((::belle_sip_object_t *)cbs, MultiListenableObject::sListenerListName));
		for(std::list<std::shared_ptr<Listener> >::iterator it=listeners.begin(); it!=listeners.end(); it++) {
			std::shared_ptr<CoreListener> listener = std::static_pointer_cast<CoreListener,Listener>(*it);
			listener->onVersionUpdateCheckResultReceived(Object::cPtrToSharedPtr<Core>(core), (VersionUpdateCheckResult)result, StringUtilities::cStringToCpp(version), StringUtilities::cStringToCpp(url));
		}
	}
}
static void linphone_core_cbs_on_conference_state_changed_cb(LinphoneCore * core, LinphoneConference * conference, LinphoneConferenceState state) {
	LinphoneCoreCbs *cbs = linphone_core_get_current_callbacks(core);
	if (cbs) {
		// Make a copy of the list of listeners, so that it is possible to remove a listener from a listener without corrupting the list.
		std::list<std::shared_ptr<Listener> > listeners = *static_cast<std::list<std::shared_ptr<Listener> > *>(belle_sip_object_data_get((::belle_sip_object_t *)cbs, MultiListenableObject::sListenerListName));
		for(std::list<std::shared_ptr<Listener> >::iterator it=listeners.begin(); it!=listeners.end(); it++) {
			std::shared_ptr<CoreListener> listener = std::static_pointer_cast<CoreListener,Listener>(*it);
			listener->onConferenceStateChanged(Object::cPtrToSharedPtr<Core>(core), Object::cPtrToSharedPtr<Conference>(conference), (Conference::State)state);
		}
	}
}
static void linphone_core_cbs_on_chat_room_state_changed_cb(LinphoneCore * core, LinphoneChatRoom * chat_room, LinphoneChatRoomState state) {
	LinphoneCoreCbs *cbs = linphone_core_get_current_callbacks(core);
	if (cbs) {
		// Make a copy of the list of listeners, so that it is possible to remove a listener from a listener without corrupting the list.
		std::list<std::shared_ptr<Listener> > listeners = *static_cast<std::list<std::shared_ptr<Listener> > *>(belle_sip_object_data_get((::belle_sip_object_t *)cbs, MultiListenableObject::sListenerListName));
		for(std::list<std::shared_ptr<Listener> >::iterator it=listeners.begin(); it!=listeners.end(); it++) {
			std::shared_ptr<CoreListener> listener = std::static_pointer_cast<CoreListener,Listener>(*it);
			listener->onChatRoomStateChanged(Object::cPtrToSharedPtr<Core>(core), Object::cPtrToSharedPtr<ChatRoom>(chat_room), (ChatRoom::State)state);
		}
	}
}
static void linphone_core_cbs_on_chat_room_subject_changed_cb(LinphoneCore * core, LinphoneChatRoom * chat_room) {
	LinphoneCoreCbs *cbs = linphone_core_get_current_callbacks(core);
	if (cbs) {
		// Make a copy of the list of listeners, so that it is possible to remove a listener from a listener without corrupting the list.
		std::list<std::shared_ptr<Listener> > listeners = *static_cast<std::list<std::shared_ptr<Listener> > *>(belle_sip_object_data_get((::belle_sip_object_t *)cbs, MultiListenableObject::sListenerListName));
		for(std::list<std::shared_ptr<Listener> >::iterator it=listeners.begin(); it!=listeners.end(); it++) {
			std::shared_ptr<CoreListener> listener = std::static_pointer_cast<CoreListener,Listener>(*it);
			listener->onChatRoomSubjectChanged(Object::cPtrToSharedPtr<Core>(core), Object::cPtrToSharedPtr<ChatRoom>(chat_room));
		}
	}
}
static void linphone_core_cbs_on_chat_room_ephemeral_message_deleted_cb(LinphoneCore * core, LinphoneChatRoom * chat_room) {
	LinphoneCoreCbs *cbs = linphone_core_get_current_callbacks(core);
	if (cbs) {
		// Make a copy of the list of listeners, so that it is possible to remove a listener from a listener without corrupting the list.
		std::list<std::shared_ptr<Listener> > listeners = *static_cast<std::list<std::shared_ptr<Listener> > *>(belle_sip_object_data_get((::belle_sip_object_t *)cbs, MultiListenableObject::sListenerListName));
		for(std::list<std::shared_ptr<Listener> >::iterator it=listeners.begin(); it!=listeners.end(); it++) {
			std::shared_ptr<CoreListener> listener = std::static_pointer_cast<CoreListener,Listener>(*it);
			listener->onChatRoomEphemeralMessageDeleted(Object::cPtrToSharedPtr<Core>(core), Object::cPtrToSharedPtr<ChatRoom>(chat_room));
		}
	}
}
static void linphone_core_cbs_on_imee_user_registration_cb(LinphoneCore * core, const bool_t status, const char * user_id, const char * info) {
	LinphoneCoreCbs *cbs = linphone_core_get_current_callbacks(core);
	if (cbs) {
		// Make a copy of the list of listeners, so that it is possible to remove a listener from a listener without corrupting the list.
		std::list<std::shared_ptr<Listener> > listeners = *static_cast<std::list<std::shared_ptr<Listener> > *>(belle_sip_object_data_get((::belle_sip_object_t *)cbs, MultiListenableObject::sListenerListName));
		for(std::list<std::shared_ptr<Listener> >::iterator it=listeners.begin(); it!=listeners.end(); it++) {
			std::shared_ptr<CoreListener> listener = std::static_pointer_cast<CoreListener,Listener>(*it);
			listener->onImeeUserRegistration(Object::cPtrToSharedPtr<Core>(core), (status != FALSE), StringUtilities::cStringToCpp(user_id), StringUtilities::cStringToCpp(info));
		}
	}
}
static void linphone_core_cbs_on_qrcode_found_cb(LinphoneCore * core, const char * result) {
	LinphoneCoreCbs *cbs = linphone_core_get_current_callbacks(core);
	if (cbs) {
		// Make a copy of the list of listeners, so that it is possible to remove a listener from a listener without corrupting the list.
		std::list<std::shared_ptr<Listener> > listeners = *static_cast<std::list<std::shared_ptr<Listener> > *>(belle_sip_object_data_get((::belle_sip_object_t *)cbs, MultiListenableObject::sListenerListName));
		for(std::list<std::shared_ptr<Listener> >::iterator it=listeners.begin(); it!=listeners.end(); it++) {
			std::shared_ptr<CoreListener> listener = std::static_pointer_cast<CoreListener,Listener>(*it);
			listener->onQrcodeFound(Object::cPtrToSharedPtr<Core>(core), StringUtilities::cStringToCpp(result));
		}
	}
}
static void linphone_core_cbs_on_first_call_started_cb(LinphoneCore * core) {
	LinphoneCoreCbs *cbs = linphone_core_get_current_callbacks(core);
	if (cbs) {
		// Make a copy of the list of listeners, so that it is possible to remove a listener from a listener without corrupting the list.
		std::list<std::shared_ptr<Listener> > listeners = *static_cast<std::list<std::shared_ptr<Listener> > *>(belle_sip_object_data_get((::belle_sip_object_t *)cbs, MultiListenableObject::sListenerListName));
		for(std::list<std::shared_ptr<Listener> >::iterator it=listeners.begin(); it!=listeners.end(); it++) {
			std::shared_ptr<CoreListener> listener = std::static_pointer_cast<CoreListener,Listener>(*it);
			listener->onFirstCallStarted(Object::cPtrToSharedPtr<Core>(core));
		}
	}
}
static void linphone_core_cbs_on_last_call_ended_cb(LinphoneCore * core) {
	LinphoneCoreCbs *cbs = linphone_core_get_current_callbacks(core);
	if (cbs) {
		// Make a copy of the list of listeners, so that it is possible to remove a listener from a listener without corrupting the list.
		std::list<std::shared_ptr<Listener> > listeners = *static_cast<std::list<std::shared_ptr<Listener> > *>(belle_sip_object_data_get((::belle_sip_object_t *)cbs, MultiListenableObject::sListenerListName));
		for(std::list<std::shared_ptr<Listener> >::iterator it=listeners.begin(); it!=listeners.end(); it++) {
			std::shared_ptr<CoreListener> listener = std::static_pointer_cast<CoreListener,Listener>(*it);
			listener->onLastCallEnded(Object::cPtrToSharedPtr<Core>(core));
		}
	}
}
static void linphone_core_cbs_on_audio_device_changed_cb(LinphoneCore * core, LinphoneAudioDevice * audio_device) {
	LinphoneCoreCbs *cbs = linphone_core_get_current_callbacks(core);
	if (cbs) {
		// Make a copy of the list of listeners, so that it is possible to remove a listener from a listener without corrupting the list.
		std::list<std::shared_ptr<Listener> > listeners = *static_cast<std::list<std::shared_ptr<Listener> > *>(belle_sip_object_data_get((::belle_sip_object_t *)cbs, MultiListenableObject::sListenerListName));
		for(std::list<std::shared_ptr<Listener> >::iterator it=listeners.begin(); it!=listeners.end(); it++) {
			std::shared_ptr<CoreListener> listener = std::static_pointer_cast<CoreListener,Listener>(*it);
			listener->onAudioDeviceChanged(Object::cPtrToSharedPtr<Core>(core), Object::cPtrToSharedPtr<AudioDevice>(audio_device));
		}
	}
}
static void linphone_core_cbs_on_audio_devices_list_updated_cb(LinphoneCore * core) {
	LinphoneCoreCbs *cbs = linphone_core_get_current_callbacks(core);
	if (cbs) {
		// Make a copy of the list of listeners, so that it is possible to remove a listener from a listener without corrupting the list.
		std::list<std::shared_ptr<Listener> > listeners = *static_cast<std::list<std::shared_ptr<Listener> > *>(belle_sip_object_data_get((::belle_sip_object_t *)cbs, MultiListenableObject::sListenerListName));
		for(std::list<std::shared_ptr<Listener> >::iterator it=listeners.begin(); it!=listeners.end(); it++) {
			std::shared_ptr<CoreListener> listener = std::static_pointer_cast<CoreListener,Listener>(*it);
			listener->onAudioDevicesListUpdated(Object::cPtrToSharedPtr<Core>(core));
		}
	}
}
static void linphone_core_cbs_on_ec_calibration_result_cb(LinphoneCore * core, LinphoneEcCalibratorStatus status, int delay_ms) {
	LinphoneCoreCbs *cbs = linphone_core_get_current_callbacks(core);
	if (cbs) {
		// Make a copy of the list of listeners, so that it is possible to remove a listener from a listener without corrupting the list.
		std::list<std::shared_ptr<Listener> > listeners = *static_cast<std::list<std::shared_ptr<Listener> > *>(belle_sip_object_data_get((::belle_sip_object_t *)cbs, MultiListenableObject::sListenerListName));
		for(std::list<std::shared_ptr<Listener> >::iterator it=listeners.begin(); it!=listeners.end(); it++) {
			std::shared_ptr<CoreListener> listener = std::static_pointer_cast<CoreListener,Listener>(*it);
			listener->onEcCalibrationResult(Object::cPtrToSharedPtr<Core>(core), (EcCalibratorStatus)status, delay_ms);
		}
	}
}
static void linphone_core_cbs_on_ec_calibration_audio_init_cb(LinphoneCore * core) {
	LinphoneCoreCbs *cbs = linphone_core_get_current_callbacks(core);
	if (cbs) {
		// Make a copy of the list of listeners, so that it is possible to remove a listener from a listener without corrupting the list.
		std::list<std::shared_ptr<Listener> > listeners = *static_cast<std::list<std::shared_ptr<Listener> > *>(belle_sip_object_data_get((::belle_sip_object_t *)cbs, MultiListenableObject::sListenerListName));
		for(std::list<std::shared_ptr<Listener> >::iterator it=listeners.begin(); it!=listeners.end(); it++) {
			std::shared_ptr<CoreListener> listener = std::static_pointer_cast<CoreListener,Listener>(*it);
			listener->onEcCalibrationAudioInit(Object::cPtrToSharedPtr<Core>(core));
		}
	}
}
static void linphone_core_cbs_on_ec_calibration_audio_uninit_cb(LinphoneCore * core) {
	LinphoneCoreCbs *cbs = linphone_core_get_current_callbacks(core);
	if (cbs) {
		// Make a copy of the list of listeners, so that it is possible to remove a listener from a listener without corrupting the list.
		std::list<std::shared_ptr<Listener> > listeners = *static_cast<std::list<std::shared_ptr<Listener> > *>(belle_sip_object_data_get((::belle_sip_object_t *)cbs, MultiListenableObject::sListenerListName));
		for(std::list<std::shared_ptr<Listener> >::iterator it=listeners.begin(); it!=listeners.end(); it++) {
			std::shared_ptr<CoreListener> listener = std::static_pointer_cast<CoreListener,Listener>(*it);
			listener->onEcCalibrationAudioUninit(Object::cPtrToSharedPtr<Core>(core));
		}
	}
}
static void linphone_core_cbs_on_account_registration_state_changed_cb(LinphoneCore * core, LinphoneAccount * account, LinphoneRegistrationState state, const char * message) {
	LinphoneCoreCbs *cbs = linphone_core_get_current_callbacks(core);
	if (cbs) {
		// Make a copy of the list of listeners, so that it is possible to remove a listener from a listener without corrupting the list.
		std::list<std::shared_ptr<Listener> > listeners = *static_cast<std::list<std::shared_ptr<Listener> > *>(belle_sip_object_data_get((::belle_sip_object_t *)cbs, MultiListenableObject::sListenerListName));
		for(std::list<std::shared_ptr<Listener> >::iterator it=listeners.begin(); it!=listeners.end(); it++) {
			std::shared_ptr<CoreListener> listener = std::static_pointer_cast<CoreListener,Listener>(*it);
			listener->onAccountRegistrationStateChanged(Object::cPtrToSharedPtr<Core>(core), Object::cPtrToSharedPtr<Account>(account), (RegistrationState)state, StringUtilities::cStringToCpp(message));
		}
	}
}
static void linphone_core_cbs_on_default_account_changed_cb(LinphoneCore * core, LinphoneAccount * account) {
	LinphoneCoreCbs *cbs = linphone_core_get_current_callbacks(core);
	if (cbs) {
		// Make a copy of the list of listeners, so that it is possible to remove a listener from a listener without corrupting the list.
		std::list<std::shared_ptr<Listener> > listeners = *static_cast<std::list<std::shared_ptr<Listener> > *>(belle_sip_object_data_get((::belle_sip_object_t *)cbs, MultiListenableObject::sListenerListName));
		for(std::list<std::shared_ptr<Listener> >::iterator it=listeners.begin(); it!=listeners.end(); it++) {
			std::shared_ptr<CoreListener> listener = std::static_pointer_cast<CoreListener,Listener>(*it);
			listener->onDefaultAccountChanged(Object::cPtrToSharedPtr<Core>(core), Object::cPtrToSharedPtr<Account>(account));
		}
	}
}
static void linphone_core_cbs_on_account_added_cb(LinphoneCore * core, LinphoneAccount * account) {
	LinphoneCoreCbs *cbs = linphone_core_get_current_callbacks(core);
	if (cbs) {
		// Make a copy of the list of listeners, so that it is possible to remove a listener from a listener without corrupting the list.
		std::list<std::shared_ptr<Listener> > listeners = *static_cast<std::list<std::shared_ptr<Listener> > *>(belle_sip_object_data_get((::belle_sip_object_t *)cbs, MultiListenableObject::sListenerListName));
		for(std::list<std::shared_ptr<Listener> >::iterator it=listeners.begin(); it!=listeners.end(); it++) {
			std::shared_ptr<CoreListener> listener = std::static_pointer_cast<CoreListener,Listener>(*it);
			listener->onAccountAdded(Object::cPtrToSharedPtr<Core>(core), Object::cPtrToSharedPtr<Account>(account));
		}
	}
}
static void linphone_core_cbs_on_account_removed_cb(LinphoneCore * core, LinphoneAccount * account) {
	LinphoneCoreCbs *cbs = linphone_core_get_current_callbacks(core);
	if (cbs) {
		// Make a copy of the list of listeners, so that it is possible to remove a listener from a listener without corrupting the list.
		std::list<std::shared_ptr<Listener> > listeners = *static_cast<std::list<std::shared_ptr<Listener> > *>(belle_sip_object_data_get((::belle_sip_object_t *)cbs, MultiListenableObject::sListenerListName));
		for(std::list<std::shared_ptr<Listener> >::iterator it=listeners.begin(); it!=listeners.end(); it++) {
			std::shared_ptr<CoreListener> listener = std::static_pointer_cast<CoreListener,Listener>(*it);
			listener->onAccountRemoved(Object::cPtrToSharedPtr<Core>(core), Object::cPtrToSharedPtr<Account>(account));
		}
	}
}

linphone::Core::Core(void *ptr, bool takeRef): MultiListenableObject(ptr, takeRef) {
}

void Core::addListener(const std::shared_ptr<CoreListener> &listener) {
	MultiListenableObject::addListener(std::static_pointer_cast<Listener,CoreListener>(listener));
}

void Core::removeListener(const std::shared_ptr<CoreListener> &listener) {
	MultiListenableObject::removeListener(std::static_pointer_cast<Listener,CoreListener>(listener));
}

void *Core::createCallbacks() {
	LinphoneCoreCbs *cbs = linphone_factory_create_core_cbs(linphone_factory_get());
	linphone_core_cbs_set_new_alert_triggered(cbs, linphone_core_cbs_on_new_alert_triggered_cb);
	linphone_core_cbs_set_global_state_changed(cbs, linphone_core_cbs_on_global_state_changed_cb);
	linphone_core_cbs_set_registration_state_changed(cbs, linphone_core_cbs_on_registration_state_changed_cb);
	linphone_core_cbs_set_conference_info_received(cbs, linphone_core_cbs_on_conference_info_received_cb);
	linphone_core_cbs_set_push_notification_received(cbs, linphone_core_cbs_on_push_notification_received_cb);
	linphone_core_cbs_set_preview_display_error_occurred(cbs, linphone_core_cbs_on_preview_display_error_occurred_cb);
	linphone_core_cbs_set_call_state_changed(cbs, linphone_core_cbs_on_call_state_changed_cb);
	linphone_core_cbs_set_notify_presence_received(cbs, linphone_core_cbs_on_notify_presence_received_cb);
	linphone_core_cbs_set_notify_presence_received_for_uri_or_tel(cbs, linphone_core_cbs_on_notify_presence_received_for_uri_or_tel_cb);
	linphone_core_cbs_set_new_subscription_requested(cbs, linphone_core_cbs_on_new_subscription_requested_cb);
	linphone_core_cbs_set_authentication_requested(cbs, linphone_core_cbs_on_authentication_requested_cb);
	linphone_core_cbs_set_call_log_updated(cbs, linphone_core_cbs_on_call_log_updated_cb);
	linphone_core_cbs_set_call_id_updated(cbs, linphone_core_cbs_on_call_id_updated_cb);
	linphone_core_cbs_set_message_received(cbs, linphone_core_cbs_on_message_received_cb);
	linphone_core_cbs_set_new_message_reaction(cbs, linphone_core_cbs_on_new_message_reaction_cb);
	linphone_core_cbs_set_reaction_removed(cbs, linphone_core_cbs_on_reaction_removed_cb);
	linphone_core_cbs_set_messages_received(cbs, linphone_core_cbs_on_messages_received_cb);
	linphone_core_cbs_set_message_sent(cbs, linphone_core_cbs_on_message_sent_cb);
	linphone_core_cbs_set_chat_room_session_state_changed(cbs, linphone_core_cbs_on_chat_room_session_state_changed_cb);
	linphone_core_cbs_set_chat_room_read(cbs, linphone_core_cbs_on_chat_room_read_cb);
	linphone_core_cbs_set_message_received_unable_decrypt(cbs, linphone_core_cbs_on_message_received_unable_decrypt_cb);
	linphone_core_cbs_set_is_composing_received(cbs, linphone_core_cbs_on_is_composing_received_cb);
	linphone_core_cbs_set_dtmf_received(cbs, linphone_core_cbs_on_dtmf_received_cb);
	linphone_core_cbs_set_refer_received(cbs, linphone_core_cbs_on_refer_received_cb);
	linphone_core_cbs_set_call_goclear_ack_sent(cbs, linphone_core_cbs_on_call_goclear_ack_sent_cb);
	linphone_core_cbs_set_call_encryption_changed(cbs, linphone_core_cbs_on_call_encryption_changed_cb);
	linphone_core_cbs_set_call_send_master_key_changed(cbs, linphone_core_cbs_on_call_send_master_key_changed_cb);
	linphone_core_cbs_set_call_receive_master_key_changed(cbs, linphone_core_cbs_on_call_receive_master_key_changed_cb);
	linphone_core_cbs_set_transfer_state_changed(cbs, linphone_core_cbs_on_transfer_state_changed_cb);
	linphone_core_cbs_set_buddy_info_updated(cbs, linphone_core_cbs_on_buddy_info_updated_cb);
	linphone_core_cbs_set_call_stats_updated(cbs, linphone_core_cbs_on_call_stats_updated_cb);
	linphone_core_cbs_set_info_received(cbs, linphone_core_cbs_on_info_received_cb);
	linphone_core_cbs_set_subscription_state_changed(cbs, linphone_core_cbs_on_subscription_state_changed_cb);
	linphone_core_cbs_set_notify_sent(cbs, linphone_core_cbs_on_notify_sent_cb);
	linphone_core_cbs_set_notify_received(cbs, linphone_core_cbs_on_notify_received_cb);
	linphone_core_cbs_set_subscribe_received(cbs, linphone_core_cbs_on_subscribe_received_cb);
	linphone_core_cbs_set_publish_state_changed(cbs, linphone_core_cbs_on_publish_state_changed_cb);
	linphone_core_cbs_set_publish_received(cbs, linphone_core_cbs_on_publish_received_cb);
	linphone_core_cbs_set_configuring_status(cbs, linphone_core_cbs_on_configuring_status_cb);
	linphone_core_cbs_set_network_reachable(cbs, linphone_core_cbs_on_network_reachable_cb);
	linphone_core_cbs_set_log_collection_upload_state_changed(cbs, linphone_core_cbs_on_log_collection_upload_state_changed_cb);
	linphone_core_cbs_set_log_collection_upload_progress_indication(cbs, linphone_core_cbs_on_log_collection_upload_progress_indication_cb);
	linphone_core_cbs_set_friend_list_created(cbs, linphone_core_cbs_on_friend_list_created_cb);
	linphone_core_cbs_set_friend_list_removed(cbs, linphone_core_cbs_on_friend_list_removed_cb);
	linphone_core_cbs_set_call_created(cbs, linphone_core_cbs_on_call_created_cb);
	linphone_core_cbs_set_version_update_check_result_received(cbs, linphone_core_cbs_on_version_update_check_result_received_cb);
	linphone_core_cbs_set_conference_state_changed(cbs, linphone_core_cbs_on_conference_state_changed_cb);
	linphone_core_cbs_set_chat_room_state_changed(cbs, linphone_core_cbs_on_chat_room_state_changed_cb);
	linphone_core_cbs_set_chat_room_subject_changed(cbs, linphone_core_cbs_on_chat_room_subject_changed_cb);
	linphone_core_cbs_set_chat_room_ephemeral_message_deleted(cbs, linphone_core_cbs_on_chat_room_ephemeral_message_deleted_cb);
	linphone_core_cbs_set_imee_user_registration(cbs, linphone_core_cbs_on_imee_user_registration_cb);
	linphone_core_cbs_set_qrcode_found(cbs, linphone_core_cbs_on_qrcode_found_cb);
	linphone_core_cbs_set_first_call_started(cbs, linphone_core_cbs_on_first_call_started_cb);
	linphone_core_cbs_set_last_call_ended(cbs, linphone_core_cbs_on_last_call_ended_cb);
	linphone_core_cbs_set_audio_device_changed(cbs, linphone_core_cbs_on_audio_device_changed_cb);
	linphone_core_cbs_set_audio_devices_list_updated(cbs, linphone_core_cbs_on_audio_devices_list_updated_cb);
	linphone_core_cbs_set_ec_calibration_result(cbs, linphone_core_cbs_on_ec_calibration_result_cb);
	linphone_core_cbs_set_ec_calibration_audio_init(cbs, linphone_core_cbs_on_ec_calibration_audio_init_cb);
	linphone_core_cbs_set_ec_calibration_audio_uninit(cbs, linphone_core_cbs_on_ec_calibration_audio_uninit_cb);
	linphone_core_cbs_set_account_registration_state_changed(cbs, linphone_core_cbs_on_account_registration_state_changed_cb);
	linphone_core_cbs_set_default_account_changed(cbs, linphone_core_cbs_on_default_account_changed_cb);
	linphone_core_cbs_set_account_added(cbs, linphone_core_cbs_on_account_added_cb);
	linphone_core_cbs_set_account_removed(cbs, linphone_core_cbs_on_account_removed_cb);
	belle_sip_object_data_set((::belle_sip_object_t *)(cbs), MultiListenableObject::sListenerListName, new list<shared_ptr<Listener>>(), (::belle_sip_data_destroy)deleteListenerList);
	belle_sip_object_data_set((::belle_sip_object_t *)(mPrivPtr), MultiListenableObject::sCbsPtrName, cbs, nullptr);
	linphone_core_add_callbacks(static_cast<::LinphoneCore *>(mPrivPtr), cbs);
	belle_sip_object_unref((::belle_sip_object_t *)cbs);
	return cbs;
}


linphone::AccountCreator::Backend linphone::Core::getAccountCreatorBackend() const {
	return (linphone::AccountCreator::Backend)linphone_core_get_account_creator_backend((::LinphoneCore *)mPrivPtr);
}
void linphone::Core::setAccountCreatorBackend(linphone::AccountCreator::Backend backend) {
	linphone_core_set_account_creator_backend((::LinphoneCore *)mPrivPtr, (::LinphoneAccountCreatorBackend)backend);
}
std::string linphone::Core::getAccountCreatorUrl() {
	return StringUtilities::cStringToCpp(linphone_core_get_account_creator_url((::LinphoneCore *)mPrivPtr));
}
void linphone::Core::setAccountCreatorUrl(const std::string & url) {
	linphone_core_set_account_creator_url((::LinphoneCore *)mPrivPtr, StringUtilities::cppStringToC(url));
}
std::list<std::shared_ptr<linphone::Account>> linphone::Core::getAccountList() const {
	return ObjectBctbxListWrapper<linphone::Account>::bctbxListToCppList(linphone_core_get_account_list((::LinphoneCore *)mPrivPtr), true);
}
std::string linphone::Core::getAdaptiveRateAlgorithm() const {
	return StringUtilities::cStringToCpp(linphone_core_get_adaptive_rate_algorithm((::LinphoneCore *)mPrivPtr));
}
void linphone::Core::setAdaptiveRateAlgorithm(const std::string & algorithm) {
	linphone_core_set_adaptive_rate_algorithm((::LinphoneCore *)mPrivPtr, StringUtilities::cppStringToC(algorithm));
}
bool linphone::Core::adaptiveRateControlEnabled() const {
	return (linphone_core_adaptive_rate_control_enabled((::LinphoneCore *)mPrivPtr) != FALSE);
}
void linphone::Core::enableAdaptiveRateControl(bool enabled) {
	linphone_core_enable_adaptive_rate_control((::LinphoneCore *)mPrivPtr, enabled);
}
bool linphone::Core::agcEnabled() const {
	return (linphone_core_agc_enabled((::LinphoneCore *)mPrivPtr) != FALSE);
}
void linphone::Core::enableAgc(bool val) {
	linphone_core_enable_agc((::LinphoneCore *)mPrivPtr, val);
}
bool linphone::Core::alertsEnabled() const {
	return (linphone_core_alerts_enabled((::LinphoneCore *)mPrivPtr) != FALSE);
}
void linphone::Core::enableAlerts(bool enable) {
	linphone_core_enable_alerts((::LinphoneCore *)mPrivPtr, enable);
}
bool linphone::Core::audioAdaptiveJittcompEnabled() {
	return (linphone_core_audio_adaptive_jittcomp_enabled((::LinphoneCore *)mPrivPtr) != FALSE);
}
void linphone::Core::enableAudioAdaptiveJittcomp(bool enable) {
	linphone_core_enable_audio_adaptive_jittcomp((::LinphoneCore *)mPrivPtr, enable);
}
std::list<std::shared_ptr<linphone::AudioDevice>> linphone::Core::getAudioDevices() const {
	return ObjectBctbxListWrapper<linphone::AudioDevice>::bctbxListToCppList(linphone_core_get_audio_devices((::LinphoneCore *)mPrivPtr), false);
}
int linphone::Core::getAudioDscp() const {
	return linphone_core_get_audio_dscp((::LinphoneCore *)mPrivPtr);
}
void linphone::Core::setAudioDscp(int dscp) {
	linphone_core_set_audio_dscp((::LinphoneCore *)mPrivPtr, dscp);
}
int linphone::Core::getAudioJittcomp() {
	return linphone_core_get_audio_jittcomp((::LinphoneCore *)mPrivPtr);
}
void linphone::Core::setAudioJittcomp(int milliseconds) {
	linphone_core_set_audio_jittcomp((::LinphoneCore *)mPrivPtr, milliseconds);
}
std::string linphone::Core::getAudioMulticastAddr() const {
	return StringUtilities::cStringToCpp(linphone_core_get_audio_multicast_addr((::LinphoneCore *)mPrivPtr));
}
linphone::Status linphone::Core::setAudioMulticastAddr(const std::string & ip) {
	return linphone_core_set_audio_multicast_addr((::LinphoneCore *)mPrivPtr, StringUtilities::cppStringToC(ip));
}
bool linphone::Core::audioMulticastEnabled() const {
	return (linphone_core_audio_multicast_enabled((::LinphoneCore *)mPrivPtr) != FALSE);
}
void linphone::Core::enableAudioMulticast(bool yesno) {
	linphone_core_enable_audio_multicast((::LinphoneCore *)mPrivPtr, yesno);
}
int linphone::Core::getAudioMulticastTtl() const {
	return linphone_core_get_audio_multicast_ttl((::LinphoneCore *)mPrivPtr);
}
linphone::Status linphone::Core::setAudioMulticastTtl(int ttl) {
	return linphone_core_set_audio_multicast_ttl((::LinphoneCore *)mPrivPtr, ttl);
}
std::list<std::shared_ptr<linphone::PayloadType>> linphone::Core::getAudioPayloadTypes() {
	return ObjectBctbxListWrapper<linphone::PayloadType>::bctbxListToCppList(linphone_core_get_audio_payload_types((::LinphoneCore *)mPrivPtr), false);
}
void linphone::Core::setAudioPayloadTypes(const std::list<std::shared_ptr<linphone::PayloadType>> & payloadTypes) {
	linphone_core_set_audio_payload_types((::LinphoneCore *)mPrivPtr, ObjectBctbxListWrapper<linphone::PayloadType>(payloadTypes).c_list());
}
int linphone::Core::getAudioPort() const {
	return linphone_core_get_audio_port((::LinphoneCore *)mPrivPtr);
}
void linphone::Core::setAudioPort(int port) {
	linphone_core_set_audio_port((::LinphoneCore *)mPrivPtr, port);
}
std::shared_ptr<linphone::Range> linphone::Core::getAudioPortsRange() const {
	return Object::cPtrToSharedPtr<linphone::Range>(linphone_core_get_audio_ports_range((::LinphoneCore *)mPrivPtr), false);
}
std::list<std::shared_ptr<linphone::AuthInfo>> linphone::Core::getAuthInfoList() const {
	return ObjectBctbxListWrapper<linphone::AuthInfo>::bctbxListToCppList(linphone_core_get_auth_info_list((::LinphoneCore *)mPrivPtr), true);
}
bool linphone::Core::autoDownloadIcalendarsEnabled() {
	return (linphone_core_auto_download_icalendars_enabled((::LinphoneCore *)mPrivPtr) != FALSE);
}
void linphone::Core::enableAutoDownloadIcalendars(bool autoDownloadIcalendars) {
	linphone_core_enable_auto_download_icalendars((::LinphoneCore *)mPrivPtr, autoDownloadIcalendars);
}
bool linphone::Core::autoDownloadVoiceRecordingsEnabled() {
	return (linphone_core_auto_download_voice_recordings_enabled((::LinphoneCore *)mPrivPtr) != FALSE);
}
void linphone::Core::enableAutoDownloadVoiceRecordings(bool autoDownloadVoiceRecordings) {
	linphone_core_enable_auto_download_voice_recordings((::LinphoneCore *)mPrivPtr, autoDownloadVoiceRecordings);
}
int linphone::Core::getAutoIterateBackgroundSchedule() const {
	return linphone_core_get_auto_iterate_background_schedule((::LinphoneCore *)mPrivPtr);
}
void linphone::Core::setAutoIterateBackgroundSchedule(int schedule) {
	linphone_core_set_auto_iterate_background_schedule((::LinphoneCore *)mPrivPtr, schedule);
}
bool linphone::Core::autoIterateEnabled() const {
	return (linphone_core_auto_iterate_enabled((::LinphoneCore *)mPrivPtr) != FALSE);
}
void linphone::Core::enableAutoIterate(bool enable) {
	linphone_core_enable_auto_iterate((::LinphoneCore *)mPrivPtr, enable);
}
int linphone::Core::getAutoIterateForegroundSchedule() const {
	return linphone_core_get_auto_iterate_foreground_schedule((::LinphoneCore *)mPrivPtr);
}
void linphone::Core::setAutoIterateForegroundSchedule(int schedule) {
	linphone_core_set_auto_iterate_foreground_schedule((::LinphoneCore *)mPrivPtr, schedule);
}
bool linphone::Core::autoSendRingingEnabled() {
	return (linphone_core_auto_send_ringing_enabled((::LinphoneCore *)mPrivPtr) != FALSE);
}
void linphone::Core::enableAutoSendRinging(bool enable) {
	linphone_core_enable_auto_send_ringing((::LinphoneCore *)mPrivPtr, enable);
}
bool linphone::Core::automaticHttpProxyDetectionEnabled() const {
	return (linphone_core_automatic_http_proxy_detection_enabled((::LinphoneCore *)mPrivPtr) != FALSE);
}
void linphone::Core::enableAutomaticHttpProxyDetection(bool enable) {
	linphone_core_enable_automatic_http_proxy_detection((::LinphoneCore *)mPrivPtr, enable);
}
linphone::AVPFMode linphone::Core::getAvpfMode() const {
	return (linphone::AVPFMode)linphone_core_get_avpf_mode((::LinphoneCore *)mPrivPtr);
}
void linphone::Core::setAvpfMode(linphone::AVPFMode mode) {
	linphone_core_set_avpf_mode((::LinphoneCore *)mPrivPtr, (::LinphoneAVPFMode)mode);
}
int linphone::Core::getAvpfRrInterval() const {
	return linphone_core_get_avpf_rr_interval((::LinphoneCore *)mPrivPtr);
}
void linphone::Core::setAvpfRrInterval(int interval) {
	linphone_core_set_avpf_rr_interval((::LinphoneCore *)mPrivPtr, interval);
}
std::list<std::shared_ptr<linphone::CallLog>> linphone::Core::getCallLogs() {
	return ObjectBctbxListWrapper<linphone::CallLog>::bctbxListToCppList(linphone_core_get_call_logs((::LinphoneCore *)mPrivPtr), true);
}
std::string linphone::Core::getCallLogsDatabasePath() {
	return StringUtilities::cStringToCpp(linphone_core_get_call_logs_database_path((::LinphoneCore *)mPrivPtr));
}
void linphone::Core::setCallLogsDatabasePath(const std::string & path) {
	linphone_core_set_call_logs_database_path((::LinphoneCore *)mPrivPtr, StringUtilities::cppStringToC(path));
}
bool linphone::Core::callToneIndicationsEnabled() const {
	return (linphone_core_call_tone_indications_enabled((::LinphoneCore *)mPrivPtr) != FALSE);
}
void linphone::Core::enableCallToneIndications(bool yesno) const {
	linphone_core_enable_call_tone_indications((::LinphoneCore *)mPrivPtr, yesno);
}
bool linphone::Core::callkitEnabled() const {
	return (linphone_core_callkit_enabled((::LinphoneCore *)mPrivPtr) != FALSE);
}
void linphone::Core::enableCallkit(bool enabled) {
	linphone_core_enable_callkit((::LinphoneCore *)mPrivPtr, enabled);
}
std::list<std::shared_ptr<linphone::Call>> linphone::Core::getCalls() {
	return ObjectBctbxListWrapper<linphone::Call>::bctbxListToCppList(linphone_core_get_calls((::LinphoneCore *)mPrivPtr), true);
}
int linphone::Core::getCallsNb() const {
	return linphone_core_get_calls_nb((::LinphoneCore *)mPrivPtr);
}
int linphone::Core::getCameraSensorRotation() {
	return linphone_core_get_camera_sensor_rotation((::LinphoneCore *)mPrivPtr);
}
bool linphone::Core::capabilityNegociationEnabled() const {
	return (linphone_core_capability_negociation_enabled((::LinphoneCore *)mPrivPtr) != FALSE);
}
void linphone::Core::enableCapabilityNegociation(bool enable) {
	linphone_core_enable_capability_negociation((::LinphoneCore *)mPrivPtr, enable);
}
bool linphone::Core::capabilityNegotiationReinviteEnabled() const {
	return (linphone_core_capability_negotiation_reinvite_enabled((::LinphoneCore *)mPrivPtr) != FALSE);
}
void linphone::Core::enableCapabilityNegotiationReinvite(bool enable) {
	linphone_core_enable_capability_negotiation_reinvite((::LinphoneCore *)mPrivPtr, enable);
}
std::string linphone::Core::getCaptureDevice() {
	return StringUtilities::cStringToCpp(linphone_core_get_capture_device((::LinphoneCore *)mPrivPtr));
}
linphone::Status linphone::Core::setCaptureDevice(const std::string & devid) {
	return linphone_core_set_capture_device((::LinphoneCore *)mPrivPtr, StringUtilities::cppStringToC(devid));
}
bool linphone::Core::cfgLinesMergingEnabled() const {
	return (linphone_core_cfg_lines_merging_enabled((::LinphoneCore *)mPrivPtr) != FALSE);
}
void linphone::Core::enableCfgLinesMerging(bool merge) {
	linphone_core_enable_cfg_lines_merging((::LinphoneCore *)mPrivPtr, merge);
}
bool linphone::Core::chatEnabled() const {
	return (linphone_core_chat_enabled((::LinphoneCore *)mPrivPtr) != FALSE);
}
bool linphone::Core::getChatMessagesAggregationEnabled() {
	return (linphone_core_get_chat_messages_aggregation_enabled((::LinphoneCore *)mPrivPtr) != FALSE);
}
void linphone::Core::setChatMessagesAggregationEnabled(bool enabled) {
	linphone_core_set_chat_messages_aggregation_enabled((::LinphoneCore *)mPrivPtr, enabled);
}
std::list<std::shared_ptr<linphone::ChatRoom>> linphone::Core::getChatRooms() {
	return ObjectBctbxListWrapper<linphone::ChatRoom>::bctbxListToCppList(linphone_core_get_chat_rooms((::LinphoneCore *)mPrivPtr), true);
}
std::shared_ptr<linphone::Conference> linphone::Core::getConference() {
	return Object::cPtrToSharedPtr<linphone::Conference>(linphone_core_get_conference((::LinphoneCore *)mPrivPtr));
}
bool linphone::Core::conferenceIcsInMessageBodyEnabled() const {
	return (linphone_core_conference_ics_in_message_body_enabled((::LinphoneCore *)mPrivPtr) != FALSE);
}
void linphone::Core::enableConferenceIcsInMessageBody(bool enable) {
	linphone_core_enable_conference_ics_in_message_body((::LinphoneCore *)mPrivPtr, enable);
}
std::list<std::shared_ptr<linphone::ConferenceInfo>> linphone::Core::getConferenceInformationList() {
	return ObjectBctbxListWrapper<linphone::ConferenceInfo>::bctbxListToCppList(linphone_core_get_conference_information_list((::LinphoneCore *)mPrivPtr), false);
}
float linphone::Core::getConferenceLocalInputVolume() {
	return linphone_core_get_conference_local_input_volume((::LinphoneCore *)mPrivPtr);
}
linphone::Conference::ParticipantListType linphone::Core::getConferenceParticipantListType() const {
	return (linphone::Conference::ParticipantListType)linphone_core_get_conference_participant_list_type((::LinphoneCore *)mPrivPtr);
}
void linphone::Core::setConferenceParticipantListType(linphone::Conference::ParticipantListType type) {
	linphone_core_set_conference_participant_list_type((::LinphoneCore *)mPrivPtr, (::LinphoneConferenceParticipantListType)type);
}
bool linphone::Core::conferenceServerEnabled() const {
	return (linphone_core_conference_server_enabled((::LinphoneCore *)mPrivPtr) != FALSE);
}
void linphone::Core::enableConferenceServer(bool enable) {
	linphone_core_enable_conference_server((::LinphoneCore *)mPrivPtr, enable);
}
int linphone::Core::getConferenceSize() {
	return linphone_core_get_conference_size((::LinphoneCore *)mPrivPtr);
}
std::shared_ptr<linphone::Config> linphone::Core::getConfig() const {
	return Object::cPtrToSharedPtr<linphone::Config>(linphone_core_get_config((::LinphoneCore *)mPrivPtr));
}
linphone::ConsolidatedPresence linphone::Core::getConsolidatedPresence() const {
	return (linphone::ConsolidatedPresence)linphone_core_get_consolidated_presence((::LinphoneCore *)mPrivPtr);
}
void linphone::Core::setConsolidatedPresence(linphone::ConsolidatedPresence presence) {
	linphone_core_set_consolidated_presence((::LinphoneCore *)mPrivPtr, (::LinphoneConsolidatedPresence)presence);
}
std::shared_ptr<linphone::Call> linphone::Core::getCurrentCall() const {
	return Object::cPtrToSharedPtr<linphone::Call>(linphone_core_get_current_call((::LinphoneCore *)mPrivPtr));
}
std::shared_ptr<const linphone::Address> linphone::Core::getCurrentCallRemoteAddress() {
	return Object::cPtrToSharedPtr<const linphone::Address>(linphone_core_get_current_call_remote_address((::LinphoneCore *)mPrivPtr));
}
std::shared_ptr<linphone::VideoDefinition> linphone::Core::getCurrentPreviewVideoDefinition() const {
	return Object::cPtrToSharedPtr<linphone::VideoDefinition>(linphone_core_get_current_preview_video_definition((::LinphoneCore *)mPrivPtr));
}
std::shared_ptr<linphone::Account> linphone::Core::getDefaultAccount() const {
	return Object::cPtrToSharedPtr<linphone::Account>(linphone_core_get_default_account((::LinphoneCore *)mPrivPtr));
}
void linphone::Core::setDefaultAccount(const std::shared_ptr<linphone::Account> & account) {
	linphone_core_set_default_account((::LinphoneCore *)mPrivPtr, (::LinphoneAccount *)Object::sharedPtrToCPtr(std::static_pointer_cast<Object,linphone::Account>(account)));
}
linphone::Conference::Layout linphone::Core::getDefaultConferenceLayout() const {
	return (linphone::Conference::Layout)linphone_core_get_default_conference_layout((::LinphoneCore *)mPrivPtr);
}
void linphone::Core::setDefaultConferenceLayout(linphone::Conference::Layout value) {
	linphone_core_set_default_conference_layout((::LinphoneCore *)mPrivPtr, (::LinphoneConferenceLayout)value);
}
long linphone::Core::getDefaultEphemeralLifetime() const {
	return linphone_core_get_default_ephemeral_lifetime((::LinphoneCore *)mPrivPtr);
}
void linphone::Core::setDefaultEphemeralLifetime(long value) {
	linphone_core_set_default_ephemeral_lifetime((::LinphoneCore *)mPrivPtr, value);
}
std::shared_ptr<linphone::FriendList> linphone::Core::getDefaultFriendList() const {
	return Object::cPtrToSharedPtr<linphone::FriendList>(linphone_core_get_default_friend_list((::LinphoneCore *)mPrivPtr));
}
std::shared_ptr<const linphone::AudioDevice> linphone::Core::getDefaultInputAudioDevice() const {
	return Object::cPtrToSharedPtr<const linphone::AudioDevice>(linphone_core_get_default_input_audio_device((::LinphoneCore *)mPrivPtr));
}
void linphone::Core::setDefaultInputAudioDevice(const std::shared_ptr<linphone::AudioDevice> & audioDevice) {
	linphone_core_set_default_input_audio_device((::LinphoneCore *)mPrivPtr, (::LinphoneAudioDevice *)Object::sharedPtrToCPtr(std::static_pointer_cast<Object,linphone::AudioDevice>(audioDevice)));
}
std::shared_ptr<const linphone::AudioDevice> linphone::Core::getDefaultOutputAudioDevice() const {
	return Object::cPtrToSharedPtr<const linphone::AudioDevice>(linphone_core_get_default_output_audio_device((::LinphoneCore *)mPrivPtr));
}
void linphone::Core::setDefaultOutputAudioDevice(const std::shared_ptr<linphone::AudioDevice> & audioDevice) {
	linphone_core_set_default_output_audio_device((::LinphoneCore *)mPrivPtr, (::LinphoneAudioDevice *)Object::sharedPtrToCPtr(std::static_pointer_cast<Object,linphone::AudioDevice>(audioDevice)));
}
std::shared_ptr<linphone::ProxyConfig> linphone::Core::getDefaultProxyConfig() const {
	return Object::cPtrToSharedPtr<linphone::ProxyConfig>(linphone_core_get_default_proxy_config((::LinphoneCore *)mPrivPtr));
}
void linphone::Core::setDefaultProxyConfig(const std::shared_ptr<linphone::ProxyConfig> & config) {
	linphone_core_set_default_proxy_config((::LinphoneCore *)mPrivPtr, (::LinphoneProxyConfig *)Object::sharedPtrToCPtr(std::static_pointer_cast<Object,linphone::ProxyConfig>(config)));
}
std::string linphone::Core::getDefaultVideoDisplayFilter() {
	return StringUtilities::cStringToCpp(linphone_core_get_default_video_display_filter((::LinphoneCore *)mPrivPtr));
}
int linphone::Core::getDelayedTimeout() {
	return linphone_core_get_delayed_timeout((::LinphoneCore *)mPrivPtr);
}
void linphone::Core::setDelayedTimeout(int seconds) {
	linphone_core_set_delayed_timeout((::LinphoneCore *)mPrivPtr, seconds);
}
int linphone::Core::getDeviceRotation() {
	return linphone_core_get_device_rotation((::LinphoneCore *)mPrivPtr);
}
void linphone::Core::setDeviceRotation(int rotation) {
	linphone_core_set_device_rotation((::LinphoneCore *)mPrivPtr, rotation);
}
std::shared_ptr<const linphone::DigestAuthenticationPolicy> linphone::Core::getDigestAuthenticationPolicy() const {
	return Object::cPtrToSharedPtr<const linphone::DigestAuthenticationPolicy>(linphone_core_get_digest_authentication_policy((::LinphoneCore *)mPrivPtr));
}
void linphone::Core::setDigestAuthenticationPolicy(const std::shared_ptr<linphone::DigestAuthenticationPolicy> & policy) {
	linphone_core_set_digest_authentication_policy((::LinphoneCore *)mPrivPtr, (::LinphoneDigestAuthenticationPolicy *)Object::sharedPtrToCPtr(std::static_pointer_cast<Object,linphone::DigestAuthenticationPolicy>(policy)));
}
bool linphone::Core::getDisableRecordOnMute() {
	return (linphone_core_get_disable_record_on_mute((::LinphoneCore *)mPrivPtr) != FALSE);
}
void linphone::Core::setDisableRecordOnMute(bool disable) {
	linphone_core_set_disable_record_on_mute((::LinphoneCore *)mPrivPtr, disable);
}
bool linphone::Core::dnsSearchEnabled() const {
	return (linphone_core_dns_search_enabled((::LinphoneCore *)mPrivPtr) != FALSE);
}
void linphone::Core::enableDnsSearch(bool enable) {
	linphone_core_enable_dns_search((::LinphoneCore *)mPrivPtr, enable);
}
void linphone::Core::setDnsServers(const std::list<std::string> & servers) {
	linphone_core_set_dns_servers((::LinphoneCore *)mPrivPtr, StringBctbxListWrapper(servers).c_list());
}
void linphone::Core::setDnsServersApp(const std::list<std::string> & servers) {
	linphone_core_set_dns_servers_app((::LinphoneCore *)mPrivPtr, StringBctbxListWrapper(servers).c_list());
}
bool linphone::Core::getDnsSetByApp() {
	return (linphone_core_get_dns_set_by_app((::LinphoneCore *)mPrivPtr) != FALSE);
}
bool linphone::Core::dnsSrvEnabled() const {
	return (linphone_core_dns_srv_enabled((::LinphoneCore *)mPrivPtr) != FALSE);
}
void linphone::Core::enableDnsSrv(bool enable) {
	linphone_core_enable_dns_srv((::LinphoneCore *)mPrivPtr, enable);
}
int linphone::Core::getDownloadBandwidth() const {
	return linphone_core_get_download_bandwidth((::LinphoneCore *)mPrivPtr);
}
void linphone::Core::setDownloadBandwidth(int bandwidth) {
	linphone_core_set_download_bandwidth((::LinphoneCore *)mPrivPtr, bandwidth);
}
int linphone::Core::getDownloadPtime() {
	return linphone_core_get_download_ptime((::LinphoneCore *)mPrivPtr);
}
void linphone::Core::setDownloadPtime(int ptime) {
	linphone_core_set_download_ptime((::LinphoneCore *)mPrivPtr, ptime);
}
int linphone::Core::getEchoCancellationCalibration() const {
	return linphone_core_get_echo_cancellation_calibration((::LinphoneCore *)mPrivPtr);
}
bool linphone::Core::echoCancellationEnabled() const {
	return (linphone_core_echo_cancellation_enabled((::LinphoneCore *)mPrivPtr) != FALSE);
}
void linphone::Core::enableEchoCancellation(bool enable) {
	linphone_core_enable_echo_cancellation((::LinphoneCore *)mPrivPtr, enable);
}
std::string linphone::Core::getEchoCancellerFilterName() const {
	return StringUtilities::cStringToCpp(linphone_core_get_echo_canceller_filter_name((::LinphoneCore *)mPrivPtr));
}
void linphone::Core::setEchoCancellerFilterName(const std::string & filtername) {
	linphone_core_set_echo_canceller_filter_name((::LinphoneCore *)mPrivPtr, StringUtilities::cppStringToC(filtername));
}
bool linphone::Core::echoLimiterEnabled() const {
	return (linphone_core_echo_limiter_enabled((::LinphoneCore *)mPrivPtr) != FALSE);
}
void linphone::Core::enableEchoLimiter(bool enable) {
	linphone_core_enable_echo_limiter((::LinphoneCore *)mPrivPtr, enable);
}
void linphone::Core::setEnableSipUpdate(int value) const {
	linphone_core_set_enable_sip_update((::LinphoneCore *)mPrivPtr, value);
}
void linphone::Core::setExpectedBandwidth(int bandwidth) {
	linphone_core_set_expected_bandwidth((::LinphoneCore *)mPrivPtr, bandwidth);
}
std::list<std::shared_ptr<linphone::AudioDevice>> linphone::Core::getExtendedAudioDevices() const {
	return ObjectBctbxListWrapper<linphone::AudioDevice>::bctbxListToCppList(linphone_core_get_extended_audio_devices((::LinphoneCore *)mPrivPtr), false);
}
std::string linphone::Core::getFileTransferServer() {
	return StringUtilities::cStringToCpp(linphone_core_get_file_transfer_server((::LinphoneCore *)mPrivPtr));
}
void linphone::Core::setFileTransferServer(const std::string & serverUrl) {
	linphone_core_set_file_transfer_server((::LinphoneCore *)mPrivPtr, StringUtilities::cppStringToC(serverUrl));
}
bool linphone::Core::forcedIceRelayEnabled() const {
	return (linphone_core_forced_ice_relay_enabled((::LinphoneCore *)mPrivPtr) != FALSE);
}
void linphone::Core::enableForcedIceRelay(bool enable) {
	linphone_core_enable_forced_ice_relay((::LinphoneCore *)mPrivPtr, enable);
}
bool linphone::Core::friendListSubscriptionEnabled() {
	return (linphone_core_friend_list_subscription_enabled((::LinphoneCore *)mPrivPtr) != FALSE);
}
void linphone::Core::enableFriendListSubscription(bool enable) {
	linphone_core_enable_friend_list_subscription((::LinphoneCore *)mPrivPtr, enable);
}
std::string linphone::Core::getFriendsDatabasePath() {
	return StringUtilities::cStringToCpp(linphone_core_get_friends_database_path((::LinphoneCore *)mPrivPtr));
}
void linphone::Core::setFriendsDatabasePath(const std::string & path) {
	linphone_core_set_friends_database_path((::LinphoneCore *)mPrivPtr, StringUtilities::cppStringToC(path));
}
std::list<std::shared_ptr<linphone::FriendList>> linphone::Core::getFriendsLists() const {
	return ObjectBctbxListWrapper<linphone::FriendList>::bctbxListToCppList(linphone_core_get_friends_lists((::LinphoneCore *)mPrivPtr), true);
}
std::list<std::shared_ptr<linphone::ConferenceInfo>> linphone::Core::getFutureConferenceInformationList() {
	return ObjectBctbxListWrapper<linphone::ConferenceInfo>::bctbxListToCppList(linphone_core_get_future_conference_information_list((::LinphoneCore *)mPrivPtr), false);
}
bool linphone::Core::genericComfortNoiseEnabled() const {
	return (linphone_core_generic_comfort_noise_enabled((::LinphoneCore *)mPrivPtr) != FALSE);
}
void linphone::Core::enableGenericComfortNoise(bool enabled) {
	linphone_core_enable_generic_comfort_noise((::LinphoneCore *)mPrivPtr, enabled);
}
linphone::GlobalState linphone::Core::getGlobalState() const {
	return (linphone::GlobalState)linphone_core_get_global_state((::LinphoneCore *)mPrivPtr);
}
bool linphone::Core::getGuessHostname() {
	return (linphone_core_get_guess_hostname((::LinphoneCore *)mPrivPtr) != FALSE);
}
void linphone::Core::setGuessHostname(bool enable) {
	linphone_core_set_guess_hostname((::LinphoneCore *)mPrivPtr, enable);
}
std::string linphone::Core::getHttpProxyHost() const {
	return StringUtilities::cStringToCpp(linphone_core_get_http_proxy_host((::LinphoneCore *)mPrivPtr));
}
void linphone::Core::setHttpProxyHost(const std::string & host) {
	linphone_core_set_http_proxy_host((::LinphoneCore *)mPrivPtr, StringUtilities::cppStringToC(host));
}
int linphone::Core::getHttpProxyPort() const {
	return linphone_core_get_http_proxy_port((::LinphoneCore *)mPrivPtr);
}
void linphone::Core::setHttpProxyPort(int port) {
	linphone_core_set_http_proxy_port((::LinphoneCore *)mPrivPtr, port);
}
std::string linphone::Core::getIdentity() {
	return StringUtilities::cStringToCpp(linphone_core_get_identity((::LinphoneCore *)mPrivPtr));
}
std::shared_ptr<linphone::ImNotifPolicy> linphone::Core::getImNotifPolicy() const {
	return Object::cPtrToSharedPtr<linphone::ImNotifPolicy>(linphone_core_get_im_notif_policy((::LinphoneCore *)mPrivPtr));
}
int linphone::Core::getInCallTimeout() {
	return linphone_core_get_in_call_timeout((::LinphoneCore *)mPrivPtr);
}
void linphone::Core::setInCallTimeout(int seconds) {
	linphone_core_set_in_call_timeout((::LinphoneCore *)mPrivPtr, seconds);
}
int linphone::Core::getIncTimeout() {
	return linphone_core_get_inc_timeout((::LinphoneCore *)mPrivPtr);
}
void linphone::Core::setIncTimeout(int seconds) {
	linphone_core_set_inc_timeout((::LinphoneCore *)mPrivPtr, seconds);
}
std::shared_ptr<const linphone::AudioDevice> linphone::Core::getInputAudioDevice() const {
	return Object::cPtrToSharedPtr<const linphone::AudioDevice>(linphone_core_get_input_audio_device((::LinphoneCore *)mPrivPtr));
}
void linphone::Core::setInputAudioDevice(const std::shared_ptr<linphone::AudioDevice> & audioDevice) {
	linphone_core_set_input_audio_device((::LinphoneCore *)mPrivPtr, (::LinphoneAudioDevice *)Object::sharedPtrToCPtr(std::static_pointer_cast<Object,linphone::AudioDevice>(audioDevice)));
}
bool linphone::Core::ipv6Enabled() {
	return (linphone_core_ipv6_enabled((::LinphoneCore *)mPrivPtr) != FALSE);
}
void linphone::Core::enableIpv6(bool enable) {
	linphone_core_enable_ipv6((::LinphoneCore *)mPrivPtr, enable);
}
bool linphone::Core::isAutoDownloadIcalendarsEnabled() {
	return (linphone_core_is_auto_download_icalendars_enabled((::LinphoneCore *)mPrivPtr) != FALSE);
}
bool linphone::Core::isAutoDownloadVoiceRecordingsEnabled() {
	return (linphone_core_is_auto_download_voice_recordings_enabled((::LinphoneCore *)mPrivPtr) != FALSE);
}
bool linphone::Core::isAutoIterateEnabled() const {
	return (linphone_core_is_auto_iterate_enabled((::LinphoneCore *)mPrivPtr) != FALSE);
}
bool linphone::Core::isEchoCancellerCalibrationRequired() {
	return (linphone_core_is_echo_canceller_calibration_required((::LinphoneCore *)mPrivPtr) != FALSE);
}
bool linphone::Core::isFriendListSubscriptionEnabled() {
	return (linphone_core_is_friend_list_subscription_enabled((::LinphoneCore *)mPrivPtr) != FALSE);
}
bool linphone::Core::isInBackground() const {
	return (linphone_core_is_in_background((::LinphoneCore *)mPrivPtr) != FALSE);
}
bool linphone::Core::isInConference() const {
	return (linphone_core_is_in_conference((::LinphoneCore *)mPrivPtr) != FALSE);
}
bool linphone::Core::isIncomingInvitePending() {
	return (linphone_core_is_incoming_invite_pending((::LinphoneCore *)mPrivPtr) != FALSE);
}
bool linphone::Core::isMediaEncryptionMandatory() {
	return (linphone_core_is_media_encryption_mandatory((::LinphoneCore *)mPrivPtr) != FALSE);
}
bool linphone::Core::isNativeRingingEnabled() const {
	return (linphone_core_is_native_ringing_enabled((::LinphoneCore *)mPrivPtr) != FALSE);
}
bool linphone::Core::isNetworkReachable() {
	return (linphone_core_is_network_reachable((::LinphoneCore *)mPrivPtr) != FALSE);
}
bool linphone::Core::isPushNotificationAvailable() {
	return (linphone_core_is_push_notification_available((::LinphoneCore *)mPrivPtr) != FALSE);
}
bool linphone::Core::isPushNotificationEnabled() {
	return (linphone_core_is_push_notification_enabled((::LinphoneCore *)mPrivPtr) != FALSE);
}
bool linphone::Core::isRecordAwareEnabled() {
	return (linphone_core_is_record_aware_enabled((::LinphoneCore *)mPrivPtr) != FALSE);
}
bool linphone::Core::isSenderNameHiddenInForwardMessage() {
	return (linphone_core_is_sender_name_hidden_in_forward_message((::LinphoneCore *)mPrivPtr) != FALSE);
}
bool linphone::Core::isVerifyServerCertificates() {
	return (linphone_core_is_verify_server_certificates((::LinphoneCore *)mPrivPtr) != FALSE);
}
bool linphone::Core::isVerifyServerCn() {
	return (linphone_core_is_verify_server_cn((::LinphoneCore *)mPrivPtr) != FALSE);
}
bool linphone::Core::isVibrationOnIncomingCallEnabled() {
	return (linphone_core_is_vibration_on_incoming_call_enabled((::LinphoneCore *)mPrivPtr) != FALSE);
}
bool linphone::Core::keepAliveEnabled() {
	return (linphone_core_keep_alive_enabled((::LinphoneCore *)mPrivPtr) != FALSE);
}
void linphone::Core::enableKeepAlive(bool enable) {
	linphone_core_enable_keep_alive((::LinphoneCore *)mPrivPtr, enable);
}
std::string linphone::Core::getLabel() const {
	return StringUtilities::cStringToCpp(linphone_core_get_label((::LinphoneCore *)mPrivPtr));
}
void linphone::Core::setLabel(const std::string & label) {
	linphone_core_set_label((::LinphoneCore *)mPrivPtr, StringUtilities::cppStringToC(label));
}
std::shared_ptr<linphone::CallLog> linphone::Core::getLastOutgoingCallLog() {
	return Object::cPtrToSharedPtr<linphone::CallLog>(linphone_core_get_last_outgoing_call_log((::LinphoneCore *)mPrivPtr));
}
std::list<std::shared_ptr<linphone::Ldap>> linphone::Core::getLdapList() {
	return ObjectBctbxListWrapper<linphone::Ldap>::bctbxListToCppList(linphone_core_get_ldap_list((::LinphoneCore *)mPrivPtr), false);
}
bool linphone::Core::limeX3DhEnabled() const {
	return (linphone_core_lime_x3dh_enabled((::LinphoneCore *)mPrivPtr) != FALSE);
}
void linphone::Core::enableLimeX3Dh(bool enable) {
	linphone_core_enable_lime_x3dh((::LinphoneCore *)mPrivPtr, enable);
}
std::string linphone::Core::getLimeX3DhServerUrl() {
	return StringUtilities::cStringToCpp(linphone_core_get_lime_x3dh_server_url((::LinphoneCore *)mPrivPtr));
}
void linphone::Core::setLimeX3DhServerUrl(const std::string & url) {
	linphone_core_set_lime_x3dh_server_url((::LinphoneCore *)mPrivPtr, StringUtilities::cppStringToC(url));
}
std::list<std::string> linphone::Core::getLinphoneSpecsList() {
	return StringBctbxListWrapper::bctbxListToCppList(linphone_core_get_linphone_specs_list((::LinphoneCore *)mPrivPtr));
}
void linphone::Core::setLinphoneSpecsList(const std::list<std::string> & specs) {
	linphone_core_set_linphone_specs_list((::LinphoneCore *)mPrivPtr, StringBctbxListWrapper(specs).c_list());
}
std::list<std::string> linphone::Core::getLoadedPlugins() {
	return StringBctbxListWrapper::bctbxListToCppList(linphone_core_get_loaded_plugins((::LinphoneCore *)mPrivPtr));
}
bool linphone::Core::localPermissionEnabled() const {
	return (linphone_core_local_permission_enabled((::LinphoneCore *)mPrivPtr) != FALSE);
}
std::string linphone::Core::getLogCollectionUploadServerUrl() {
	return StringUtilities::cStringToCpp(linphone_core_get_log_collection_upload_server_url((::LinphoneCore *)mPrivPtr));
}
void linphone::Core::setLogCollectionUploadServerUrl(const std::string & serverUrl) {
	linphone_core_set_log_collection_upload_server_url((::LinphoneCore *)mPrivPtr, StringUtilities::cppStringToC(serverUrl));
}
int linphone::Core::getMaxCalls() {
	return linphone_core_get_max_calls((::LinphoneCore *)mPrivPtr);
}
void linphone::Core::setMaxCalls(int max) {
	linphone_core_set_max_calls((::LinphoneCore *)mPrivPtr, max);
}
int linphone::Core::getMaxSizeForAutoDownloadIncomingFiles() {
	return linphone_core_get_max_size_for_auto_download_incoming_files((::LinphoneCore *)mPrivPtr);
}
void linphone::Core::setMaxSizeForAutoDownloadIncomingFiles(int size) {
	linphone_core_set_max_size_for_auto_download_incoming_files((::LinphoneCore *)mPrivPtr, size);
}
std::string linphone::Core::getMediaDevice() {
	return StringUtilities::cStringToCpp(linphone_core_get_media_device((::LinphoneCore *)mPrivPtr));
}
linphone::Status linphone::Core::setMediaDevice(const std::string & devid) {
	return linphone_core_set_media_device((::LinphoneCore *)mPrivPtr, StringUtilities::cppStringToC(devid));
}
linphone::MediaEncryption linphone::Core::getMediaEncryption() const {
	return (linphone::MediaEncryption)linphone_core_get_media_encryption((::LinphoneCore *)mPrivPtr);
}
linphone::Status linphone::Core::setMediaEncryption(linphone::MediaEncryption menc) {
	return linphone_core_set_media_encryption((::LinphoneCore *)mPrivPtr, (::LinphoneMediaEncryption)menc);
}
void linphone::Core::setMediaEncryptionMandatory(bool mandatory) {
	linphone_core_set_media_encryption_mandatory((::LinphoneCore *)mPrivPtr, mandatory);
}
void linphone::Core::setMediaNetworkReachable(bool reachable) {
	linphone_core_set_media_network_reachable((::LinphoneCore *)mPrivPtr, reachable);
}
linphone::MediaResourceMode linphone::Core::getMediaResourceMode() const {
	return (linphone::MediaResourceMode)linphone_core_get_media_resource_mode((::LinphoneCore *)mPrivPtr);
}
void linphone::Core::setMediaResourceMode(linphone::MediaResourceMode mode) {
	linphone_core_set_media_resource_mode((::LinphoneCore *)mPrivPtr, (::LinphoneMediaResourceMode)mode);
}
bool linphone::Core::micEnabled() {
	return (linphone_core_mic_enabled((::LinphoneCore *)mPrivPtr) != FALSE);
}
void linphone::Core::enableMic(bool enable) {
	linphone_core_enable_mic((::LinphoneCore *)mPrivPtr, enable);
}
float linphone::Core::getMicGainDb() {
	return linphone_core_get_mic_gain_db((::LinphoneCore *)mPrivPtr);
}
void linphone::Core::setMicGainDb(float level) {
	linphone_core_set_mic_gain_db((::LinphoneCore *)mPrivPtr, level);
}
int linphone::Core::getMissedCallsCount() {
	return linphone_core_get_missed_calls_count((::LinphoneCore *)mPrivPtr);
}
int linphone::Core::getMtu() const {
	return linphone_core_get_mtu((::LinphoneCore *)mPrivPtr);
}
void linphone::Core::setMtu(int mtu) {
	linphone_core_set_mtu((::LinphoneCore *)mPrivPtr, mtu);
}
std::string linphone::Core::getNatAddress() const {
	return StringUtilities::cStringToCpp(linphone_core_get_nat_address((::LinphoneCore *)mPrivPtr));
}
void linphone::Core::setNatAddress(const std::string & addr) {
	linphone_core_set_nat_address((::LinphoneCore *)mPrivPtr, StringUtilities::cppStringToC(addr));
}
std::shared_ptr<linphone::NatPolicy> linphone::Core::getNatPolicy() const {
	return Object::cPtrToSharedPtr<linphone::NatPolicy>(linphone_core_get_nat_policy((::LinphoneCore *)mPrivPtr));
}
void linphone::Core::setNatPolicy(const std::shared_ptr<linphone::NatPolicy> & policy) {
	linphone_core_set_nat_policy((::LinphoneCore *)mPrivPtr, (::LinphoneNatPolicy *)Object::sharedPtrToCPtr(std::static_pointer_cast<Object,linphone::NatPolicy>(policy)));
}
void * linphone::Core::getNativePreviewWindowId() {
	return linphone_core_get_native_preview_window_id((::LinphoneCore *)mPrivPtr);
}
void linphone::Core::setNativePreviewWindowId(void * windowId) {
	linphone_core_set_native_preview_window_id((::LinphoneCore *)mPrivPtr, windowId);
}
bool linphone::Core::nativeRingingEnabled() const {
	return (linphone_core_native_ringing_enabled((::LinphoneCore *)mPrivPtr) != FALSE);
}
void linphone::Core::enableNativeRinging(bool enable) {
	linphone_core_enable_native_ringing((::LinphoneCore *)mPrivPtr, enable);
}
void * linphone::Core::getNativeVideoWindowId() const {
	return linphone_core_get_native_video_window_id((::LinphoneCore *)mPrivPtr);
}
void linphone::Core::setNativeVideoWindowId(void * windowId) {
	linphone_core_set_native_video_window_id((::LinphoneCore *)mPrivPtr, windowId);
}
void linphone::Core::setNetworkReachable(bool reachable) {
	linphone_core_set_network_reachable((::LinphoneCore *)mPrivPtr, reachable);
}
int linphone::Core::getNortpOnholdTimeout() const {
	return linphone_core_get_nortp_onhold_timeout((::LinphoneCore *)mPrivPtr);
}
void linphone::Core::setNortpOnholdTimeout(int seconds) {
	linphone_core_set_nortp_onhold_timeout((::LinphoneCore *)mPrivPtr, seconds);
}
int linphone::Core::getNortpTimeout() const {
	return linphone_core_get_nortp_timeout((::LinphoneCore *)mPrivPtr);
}
void linphone::Core::setNortpTimeout(int seconds) {
	linphone_core_set_nortp_timeout((::LinphoneCore *)mPrivPtr, seconds);
}
std::shared_ptr<const linphone::AudioDevice> linphone::Core::getOutputAudioDevice() const {
	return Object::cPtrToSharedPtr<const linphone::AudioDevice>(linphone_core_get_output_audio_device((::LinphoneCore *)mPrivPtr));
}
void linphone::Core::setOutputAudioDevice(const std::shared_ptr<linphone::AudioDevice> & audioDevice) {
	linphone_core_set_output_audio_device((::LinphoneCore *)mPrivPtr, (::LinphoneAudioDevice *)Object::sharedPtrToCPtr(std::static_pointer_cast<Object,linphone::AudioDevice>(audioDevice)));
}
std::string linphone::Core::getPlayFile() const {
	return StringUtilities::cStringToCpp(linphone_core_get_play_file((::LinphoneCore *)mPrivPtr));
}
void linphone::Core::setPlayFile(const std::string & file) {
	linphone_core_set_play_file((::LinphoneCore *)mPrivPtr, StringUtilities::cppStringToC(file));
}
std::string linphone::Core::getPlaybackDevice() {
	return StringUtilities::cStringToCpp(linphone_core_get_playback_device((::LinphoneCore *)mPrivPtr));
}
linphone::Status linphone::Core::setPlaybackDevice(const std::string & devid) {
	return linphone_core_set_playback_device((::LinphoneCore *)mPrivPtr, StringUtilities::cppStringToC(devid));
}
float linphone::Core::getPlaybackGainDb() {
	return linphone_core_get_playback_gain_db((::LinphoneCore *)mPrivPtr);
}
void linphone::Core::setPlaybackGainDb(float level) {
	linphone_core_set_playback_gain_db((::LinphoneCore *)mPrivPtr, level);
}
float linphone::Core::getPreferredFramerate() {
	return linphone_core_get_preferred_framerate((::LinphoneCore *)mPrivPtr);
}
void linphone::Core::setPreferredFramerate(float fps) {
	linphone_core_set_preferred_framerate((::LinphoneCore *)mPrivPtr, fps);
}
std::shared_ptr<const linphone::VideoDefinition> linphone::Core::getPreferredVideoDefinition() const {
	return Object::cPtrToSharedPtr<const linphone::VideoDefinition>(linphone_core_get_preferred_video_definition((::LinphoneCore *)mPrivPtr));
}
void linphone::Core::setPreferredVideoDefinition(const std::shared_ptr<linphone::VideoDefinition> & videoDefinition) {
	linphone_core_set_preferred_video_definition((::LinphoneCore *)mPrivPtr, (::LinphoneVideoDefinition *)Object::sharedPtrToCPtr(std::static_pointer_cast<Object,linphone::VideoDefinition>(videoDefinition)));
}
void linphone::Core::setPreferredVideoDefinitionByName(const std::string & name) {
	linphone_core_set_preferred_video_definition_by_name((::LinphoneCore *)mPrivPtr, StringUtilities::cppStringToC(name));
}
std::shared_ptr<linphone::PresenceModel> linphone::Core::getPresenceModel() const {
	return Object::cPtrToSharedPtr<linphone::PresenceModel>(linphone_core_get_presence_model((::LinphoneCore *)mPrivPtr));
}
void linphone::Core::setPresenceModel(const std::shared_ptr<linphone::PresenceModel> & presence) {
	linphone_core_set_presence_model((::LinphoneCore *)mPrivPtr, (::LinphonePresenceModel *)Object::sharedPtrToCPtr(std::static_pointer_cast<Object,linphone::PresenceModel>(presence)));
}
std::shared_ptr<const linphone::VideoDefinition> linphone::Core::getPreviewVideoDefinition() const {
	return Object::cPtrToSharedPtr<const linphone::VideoDefinition>(linphone_core_get_preview_video_definition((::LinphoneCore *)mPrivPtr));
}
void linphone::Core::setPreviewVideoDefinition(const std::shared_ptr<linphone::VideoDefinition> & videoDefinition) {
	linphone_core_set_preview_video_definition((::LinphoneCore *)mPrivPtr, (::LinphoneVideoDefinition *)Object::sharedPtrToCPtr(std::static_pointer_cast<Object,linphone::VideoDefinition>(videoDefinition)));
}
void linphone::Core::setPreviewVideoDefinitionByName(const std::string & name) {
	linphone_core_set_preview_video_definition_by_name((::LinphoneCore *)mPrivPtr, StringUtilities::cppStringToC(name));
}
std::string linphone::Core::getPrimaryContact() {
	return StringUtilities::cStringToCpp(linphone_core_get_primary_contact((::LinphoneCore *)mPrivPtr));
}
linphone::Status linphone::Core::setPrimaryContact(const std::string & contact) {
	return linphone_core_set_primary_contact((::LinphoneCore *)mPrivPtr, StringUtilities::cppStringToC(contact));
}
std::shared_ptr<linphone::Address> linphone::Core::getPrimaryContactParsed() {
	return Object::cPtrToSharedPtr<linphone::Address>(linphone_core_get_primary_contact_parsed((::LinphoneCore *)mPrivPtr), false);
}
std::string linphone::Core::getProvisioningUri() const {
	return StringUtilities::cStringToCpp(linphone_core_get_provisioning_uri((::LinphoneCore *)mPrivPtr));
}
linphone::Status linphone::Core::setProvisioningUri(const std::string & uri) {
	return linphone_core_set_provisioning_uri((::LinphoneCore *)mPrivPtr, StringUtilities::cppStringToC(uri));
}
std::list<std::shared_ptr<linphone::ProxyConfig>> linphone::Core::getProxyConfigList() const {
	return ObjectBctbxListWrapper<linphone::ProxyConfig>::bctbxListToCppList(linphone_core_get_proxy_config_list((::LinphoneCore *)mPrivPtr), true);
}
int linphone::Core::getPushIncomingCallTimeout() const {
	return linphone_core_get_push_incoming_call_timeout((::LinphoneCore *)mPrivPtr);
}
void linphone::Core::setPushIncomingCallTimeout(int seconds) {
	linphone_core_set_push_incoming_call_timeout((::LinphoneCore *)mPrivPtr, seconds);
}
std::shared_ptr<const linphone::PushNotificationConfig> linphone::Core::getPushNotificationConfig() const {
	return Object::cPtrToSharedPtr<const linphone::PushNotificationConfig>(linphone_core_get_push_notification_config((::LinphoneCore *)mPrivPtr));
}
bool linphone::Core::pushNotificationEnabled() {
	return (linphone_core_push_notification_enabled((::LinphoneCore *)mPrivPtr) != FALSE);
}
void linphone::Core::enablePushNotification(bool enable) {
	linphone_core_enable_push_notification((::LinphoneCore *)mPrivPtr, enable);
}
bool linphone::Core::qrcodeVideoPreviewEnabled() const {
	return (linphone_core_qrcode_video_preview_enabled((::LinphoneCore *)mPrivPtr) != FALSE);
}
void linphone::Core::enableQrcodeVideoPreview(bool enable) {
	linphone_core_enable_qrcode_video_preview((::LinphoneCore *)mPrivPtr, enable);
}
bool linphone::Core::realtimeTextEnabled() {
	return (linphone_core_realtime_text_enabled((::LinphoneCore *)mPrivPtr) != FALSE);
}
bool linphone::Core::recordAwareEnabled() {
	return (linphone_core_record_aware_enabled((::LinphoneCore *)mPrivPtr) != FALSE);
}
void linphone::Core::enableRecordAware(bool enable) {
	linphone_core_enable_record_aware((::LinphoneCore *)mPrivPtr, enable);
}
std::string linphone::Core::getRecordFile() const {
	return StringUtilities::cStringToCpp(linphone_core_get_record_file((::LinphoneCore *)mPrivPtr));
}
void linphone::Core::setRecordFile(const std::string & file) {
	linphone_core_set_record_file((::LinphoneCore *)mPrivPtr, StringUtilities::cppStringToC(file));
}
std::string linphone::Core::getRemoteRingbackTone() const {
	return StringUtilities::cStringToCpp(linphone_core_get_remote_ringback_tone((::LinphoneCore *)mPrivPtr));
}
void linphone::Core::setRemoteRingbackTone(const std::string & ring) {
	linphone_core_set_remote_ringback_tone((::LinphoneCore *)mPrivPtr, StringUtilities::cppStringToC(ring));
}
bool linphone::Core::retransmissionOnNackEnabled() {
	return (linphone_core_retransmission_on_nack_enabled((::LinphoneCore *)mPrivPtr) != FALSE);
}
void linphone::Core::enableRetransmissionOnNack(bool enable) {
	linphone_core_enable_retransmission_on_nack((::LinphoneCore *)mPrivPtr, enable);
}
std::string linphone::Core::getRing() const {
	return StringUtilities::cStringToCpp(linphone_core_get_ring((::LinphoneCore *)mPrivPtr));
}
void linphone::Core::setRing(const std::string & path) {
	linphone_core_set_ring((::LinphoneCore *)mPrivPtr, StringUtilities::cppStringToC(path));
}
bool linphone::Core::getRingDuringIncomingEarlyMedia() const {
	return (linphone_core_get_ring_during_incoming_early_media((::LinphoneCore *)mPrivPtr) != FALSE);
}
void linphone::Core::setRingDuringIncomingEarlyMedia(bool enable) {
	linphone_core_set_ring_during_incoming_early_media((::LinphoneCore *)mPrivPtr, enable);
}
std::string linphone::Core::getRingback() const {
	return StringUtilities::cStringToCpp(linphone_core_get_ringback((::LinphoneCore *)mPrivPtr));
}
void linphone::Core::setRingback(const std::string & path) {
	linphone_core_set_ringback((::LinphoneCore *)mPrivPtr, StringUtilities::cppStringToC(path));
}
std::string linphone::Core::getRingerDevice() {
	return StringUtilities::cStringToCpp(linphone_core_get_ringer_device((::LinphoneCore *)mPrivPtr));
}
linphone::Status linphone::Core::setRingerDevice(const std::string & devid) {
	return linphone_core_set_ringer_device((::LinphoneCore *)mPrivPtr, StringUtilities::cppStringToC(devid));
}
std::string linphone::Core::getRootCa() {
	return StringUtilities::cStringToCpp(linphone_core_get_root_ca((::LinphoneCore *)mPrivPtr));
}
void linphone::Core::setRootCa(const std::string & path) {
	linphone_core_set_root_ca((::LinphoneCore *)mPrivPtr, StringUtilities::cppStringToC(path));
}
void linphone::Core::setRootCaData(const std::string & data) {
	linphone_core_set_root_ca_data((::LinphoneCore *)mPrivPtr, StringUtilities::cppStringToC(data));
}
bool linphone::Core::rtpBundleEnabled() const {
	return (linphone_core_rtp_bundle_enabled((::LinphoneCore *)mPrivPtr) != FALSE);
}
void linphone::Core::enableRtpBundle(bool value) {
	linphone_core_enable_rtp_bundle((::LinphoneCore *)mPrivPtr, value);
}
bool linphone::Core::sdp200AckEnabled() const {
	return (linphone_core_sdp_200_ack_enabled((::LinphoneCore *)mPrivPtr) != FALSE);
}
void linphone::Core::enableSdp200Ack(bool enable) {
	linphone_core_enable_sdp_200_ack((::LinphoneCore *)mPrivPtr, enable);
}
bool linphone::Core::selfViewEnabled() const {
	return (linphone_core_self_view_enabled((::LinphoneCore *)mPrivPtr) != FALSE);
}
void linphone::Core::enableSelfView(bool enable) {
	linphone_core_enable_self_view((::LinphoneCore *)mPrivPtr, enable);
}
void linphone::Core::enableSenderNameHiddenInForwardMessage(bool enable) {
	linphone_core_enable_sender_name_hidden_in_forward_message((::LinphoneCore *)mPrivPtr, enable);
}
bool linphone::Core::sessionExpiresEnabled() const {
	return (linphone_core_session_expires_enabled((::LinphoneCore *)mPrivPtr) != FALSE);
}
void linphone::Core::enableSessionExpires(bool enabled) const {
	linphone_core_enable_session_expires((::LinphoneCore *)mPrivPtr, enabled);
}
int linphone::Core::getSessionExpiresMinValue() const {
	return linphone_core_get_session_expires_min_value((::LinphoneCore *)mPrivPtr);
}
void linphone::Core::setSessionExpiresMinValue(int min) const {
	linphone_core_set_session_expires_min_value((::LinphoneCore *)mPrivPtr, min);
}
linphone::SessionExpiresRefresher linphone::Core::getSessionExpiresRefresherValue() const {
	return (linphone::SessionExpiresRefresher)linphone_core_get_session_expires_refresher_value((::LinphoneCore *)mPrivPtr);
}
void linphone::Core::setSessionExpiresRefresherValue(linphone::SessionExpiresRefresher refresher) const {
	linphone_core_set_session_expires_refresher_value((::LinphoneCore *)mPrivPtr, (::LinphoneSessionExpiresRefresher)refresher);
}
int linphone::Core::getSessionExpiresValue() const {
	return linphone_core_get_session_expires_value((::LinphoneCore *)mPrivPtr);
}
void linphone::Core::setSessionExpiresValue(int expires) const {
	linphone_core_set_session_expires_value((::LinphoneCore *)mPrivPtr, expires);
}
int linphone::Core::getSipDscp() const {
	return linphone_core_get_sip_dscp((::LinphoneCore *)mPrivPtr);
}
void linphone::Core::setSipDscp(int dscp) {
	linphone_core_set_sip_dscp((::LinphoneCore *)mPrivPtr, dscp);
}
void linphone::Core::setSipNetworkReachable(bool reachable) {
	linphone_core_set_sip_network_reachable((::LinphoneCore *)mPrivPtr, reachable);
}
int linphone::Core::getSipTransportTimeout() {
	return linphone_core_get_sip_transport_timeout((::LinphoneCore *)mPrivPtr);
}
void linphone::Core::setSipTransportTimeout(int timeoutMs) {
	linphone_core_set_sip_transport_timeout((::LinphoneCore *)mPrivPtr, timeoutMs);
}
std::list<std::string> linphone::Core::getSoundDevicesList() const {
	return StringBctbxListWrapper::bctbxListToCppList(linphone_core_get_sound_devices_list((::LinphoneCore *)mPrivPtr));
}
std::string linphone::Core::getSrtpCryptoSuites() {
	return StringUtilities::cStringToCpp(linphone_core_get_srtp_crypto_suites((::LinphoneCore *)mPrivPtr));
}
void linphone::Core::setSrtpCryptoSuites(const std::string & suites) {
	linphone_core_set_srtp_crypto_suites((::LinphoneCore *)mPrivPtr, StringUtilities::cppStringToC(suites));
}
std::string linphone::Core::getStaticPicture() {
	return StringUtilities::cStringToCpp(linphone_core_get_static_picture((::LinphoneCore *)mPrivPtr));
}
linphone::Status linphone::Core::setStaticPicture(const std::string & path) {
	return linphone_core_set_static_picture((::LinphoneCore *)mPrivPtr, StringUtilities::cppStringToC(path));
}
float linphone::Core::getStaticPictureFps() {
	return linphone_core_get_static_picture_fps((::LinphoneCore *)mPrivPtr);
}
linphone::Status linphone::Core::setStaticPictureFps(float fps) {
	return linphone_core_set_static_picture_fps((::LinphoneCore *)mPrivPtr, fps);
}
std::string linphone::Core::getStunServer() const {
	return StringUtilities::cStringToCpp(linphone_core_get_stun_server((::LinphoneCore *)mPrivPtr));
}
void linphone::Core::setStunServer(const std::string & server) {
	linphone_core_set_stun_server((::LinphoneCore *)mPrivPtr, StringUtilities::cppStringToC(server));
}
std::list<std::string> linphone::Core::getSupportedFileFormatsList() const {
	return StringBctbxListWrapper::bctbxListToCppList(linphone_core_get_supported_file_formats_list((::LinphoneCore *)mPrivPtr));
}
void linphone::Core::setSupportedTag(const std::string & tags) {
	linphone_core_set_supported_tag((::LinphoneCore *)mPrivPtr, StringUtilities::cppStringToC(tags));
}
linphone::SupportLevel linphone::Core::getTag100RelSupportLevel() const {
	return (linphone::SupportLevel)linphone_core_get_tag_100rel_support_level((::LinphoneCore *)mPrivPtr);
}
void linphone::Core::setTag100RelSupportLevel(linphone::SupportLevel level) {
	linphone_core_set_tag_100rel_support_level((::LinphoneCore *)mPrivPtr, (::LinphoneSupportLevel)level);
}
void linphone::Core::enableTcapLineMerging(bool merge) {
	linphone_core_enable_tcap_line_merging((::LinphoneCore *)mPrivPtr, merge);
}
bool linphone::Core::tcapLinesMergingEnabled() const {
	return (linphone_core_tcap_lines_merging_enabled((::LinphoneCore *)mPrivPtr) != FALSE);
}
std::list<std::shared_ptr<linphone::PayloadType>> linphone::Core::getTextPayloadTypes() {
	return ObjectBctbxListWrapper<linphone::PayloadType>::bctbxListToCppList(linphone_core_get_text_payload_types((::LinphoneCore *)mPrivPtr), true);
}
void linphone::Core::setTextPayloadTypes(const std::list<std::shared_ptr<linphone::PayloadType>> & payloadTypes) {
	linphone_core_set_text_payload_types((::LinphoneCore *)mPrivPtr, ObjectBctbxListWrapper<linphone::PayloadType>(payloadTypes).c_list());
}
int linphone::Core::getTextPort() const {
	return linphone_core_get_text_port((::LinphoneCore *)mPrivPtr);
}
void linphone::Core::setTextPort(int port) {
	linphone_core_set_text_port((::LinphoneCore *)mPrivPtr, port);
}
std::shared_ptr<linphone::Range> linphone::Core::getTextPortsRange() const {
	return Object::cPtrToSharedPtr<linphone::Range>(linphone_core_get_text_ports_range((::LinphoneCore *)mPrivPtr), false);
}
std::string linphone::Core::getTlsCert() const {
	return StringUtilities::cStringToCpp(linphone_core_get_tls_cert((::LinphoneCore *)mPrivPtr));
}
void linphone::Core::setTlsCert(const std::string & tlsCert) {
	linphone_core_set_tls_cert((::LinphoneCore *)mPrivPtr, StringUtilities::cppStringToC(tlsCert));
}
std::string linphone::Core::getTlsCertPath() const {
	return StringUtilities::cStringToCpp(linphone_core_get_tls_cert_path((::LinphoneCore *)mPrivPtr));
}
void linphone::Core::setTlsCertPath(const std::string & tlsCertPath) {
	linphone_core_set_tls_cert_path((::LinphoneCore *)mPrivPtr, StringUtilities::cppStringToC(tlsCertPath));
}
std::string linphone::Core::getTlsKey() const {
	return StringUtilities::cStringToCpp(linphone_core_get_tls_key((::LinphoneCore *)mPrivPtr));
}
void linphone::Core::setTlsKey(const std::string & tlsKey) {
	linphone_core_set_tls_key((::LinphoneCore *)mPrivPtr, StringUtilities::cppStringToC(tlsKey));
}
std::string linphone::Core::getTlsKeyPath() const {
	return StringUtilities::cStringToCpp(linphone_core_get_tls_key_path((::LinphoneCore *)mPrivPtr));
}
void linphone::Core::setTlsKeyPath(const std::string & tlsKeyPath) {
	linphone_core_set_tls_key_path((::LinphoneCore *)mPrivPtr, StringUtilities::cppStringToC(tlsKeyPath));
}
std::shared_ptr<linphone::Transports> linphone::Core::getTransports() {
	return Object::cPtrToSharedPtr<linphone::Transports>(linphone_core_get_transports((::LinphoneCore *)mPrivPtr), false);
}
linphone::Status linphone::Core::setTransports(const std::shared_ptr<const linphone::Transports> & transports) {
	return linphone_core_set_transports((::LinphoneCore *)mPrivPtr, (::LinphoneTransports *)Object::sharedPtrToCPtr(std::static_pointer_cast<const Object,const linphone::Transports>(transports)));
}
std::shared_ptr<linphone::Transports> linphone::Core::getTransportsUsed() {
	return Object::cPtrToSharedPtr<linphone::Transports>(linphone_core_get_transports_used((::LinphoneCore *)mPrivPtr), false);
}
std::shared_ptr<linphone::Tunnel> linphone::Core::getTunnel() const {
	return Object::cPtrToSharedPtr<linphone::Tunnel>(linphone_core_get_tunnel((::LinphoneCore *)mPrivPtr));
}
int linphone::Core::getUnreadChatMessageCount() const {
	return linphone_core_get_unread_chat_message_count((::LinphoneCore *)mPrivPtr);
}
int linphone::Core::getUnreadChatMessageCountFromActiveLocals() const {
	return linphone_core_get_unread_chat_message_count_from_active_locals((::LinphoneCore *)mPrivPtr);
}
int linphone::Core::getUploadBandwidth() const {
	return linphone_core_get_upload_bandwidth((::LinphoneCore *)mPrivPtr);
}
void linphone::Core::setUploadBandwidth(int bandwidth) {
	linphone_core_set_upload_bandwidth((::LinphoneCore *)mPrivPtr, bandwidth);
}
int linphone::Core::getUploadPtime() {
	return linphone_core_get_upload_ptime((::LinphoneCore *)mPrivPtr);
}
void linphone::Core::setUploadPtime(int ptime) {
	linphone_core_set_upload_ptime((::LinphoneCore *)mPrivPtr, ptime);
}
std::string linphone::Core::getUpnpExternalIpaddress() const {
	return StringUtilities::cStringToCpp(linphone_core_get_upnp_external_ipaddress((::LinphoneCore *)mPrivPtr));
}
linphone::UpnpState linphone::Core::getUpnpState() const {
	return (linphone::UpnpState)linphone_core_get_upnp_state((::LinphoneCore *)mPrivPtr);
}
bool linphone::Core::getUseFiles() {
	return (linphone_core_get_use_files((::LinphoneCore *)mPrivPtr) != FALSE);
}
void linphone::Core::setUseFiles(bool yesno) {
	linphone_core_set_use_files((::LinphoneCore *)mPrivPtr, yesno);
}
bool linphone::Core::getUseInfoForDtmf() {
	return (linphone_core_get_use_info_for_dtmf((::LinphoneCore *)mPrivPtr) != FALSE);
}
void linphone::Core::setUseInfoForDtmf(bool useInfo) {
	linphone_core_set_use_info_for_dtmf((::LinphoneCore *)mPrivPtr, useInfo);
}
bool linphone::Core::getUseRfc2833ForDtmf() {
	return (linphone_core_get_use_rfc2833_for_dtmf((::LinphoneCore *)mPrivPtr) != FALSE);
}
void linphone::Core::setUseRfc2833ForDtmf(bool useRfc2833) {
	linphone_core_set_use_rfc2833_for_dtmf((::LinphoneCore *)mPrivPtr, useRfc2833);
}
std::string linphone::Core::getUserAgent() {
	return StringUtilities::cStringToCpp(linphone_core_get_user_agent((::LinphoneCore *)mPrivPtr));
}
std::string linphone::Core::getUserCertificatesPath() {
	return StringUtilities::cStringToCpp(linphone_core_get_user_certificates_path((::LinphoneCore *)mPrivPtr));
}
void linphone::Core::setUserCertificatesPath(const std::string & path) {
	linphone_core_set_user_certificates_path((::LinphoneCore *)mPrivPtr, StringUtilities::cppStringToC(path));
}
bool linphone::Core::vibrationOnIncomingCallEnabled() {
	return (linphone_core_vibration_on_incoming_call_enabled((::LinphoneCore *)mPrivPtr) != FALSE);
}
void linphone::Core::enableVibrationOnIncomingCall(bool enable) {
	linphone_core_enable_vibration_on_incoming_call((::LinphoneCore *)mPrivPtr, enable);
}
std::shared_ptr<linphone::VideoActivationPolicy> linphone::Core::getVideoActivationPolicy() const {
	return Object::cPtrToSharedPtr<linphone::VideoActivationPolicy>(linphone_core_get_video_activation_policy((::LinphoneCore *)mPrivPtr), false);
}
void linphone::Core::setVideoActivationPolicy(const std::shared_ptr<const linphone::VideoActivationPolicy> & policy) {
	linphone_core_set_video_activation_policy((::LinphoneCore *)mPrivPtr, (::LinphoneVideoActivationPolicy *)Object::sharedPtrToCPtr(std::static_pointer_cast<const Object,const linphone::VideoActivationPolicy>(policy)));
}
bool linphone::Core::videoAdaptiveJittcompEnabled() {
	return (linphone_core_video_adaptive_jittcomp_enabled((::LinphoneCore *)mPrivPtr) != FALSE);
}
void linphone::Core::enableVideoAdaptiveJittcomp(bool enable) {
	linphone_core_enable_video_adaptive_jittcomp((::LinphoneCore *)mPrivPtr, enable);
}
bool linphone::Core::videoCaptureEnabled() {
	return (linphone_core_video_capture_enabled((::LinphoneCore *)mPrivPtr) != FALSE);
}
void linphone::Core::enableVideoCapture(bool enable) {
	linphone_core_enable_video_capture((::LinphoneCore *)mPrivPtr, enable);
}
linphone::CodecPriorityPolicy linphone::Core::getVideoCodecPriorityPolicy() const {
	return (linphone::CodecPriorityPolicy)linphone_core_get_video_codec_priority_policy((::LinphoneCore *)mPrivPtr);
}
void linphone::Core::setVideoCodecPriorityPolicy(linphone::CodecPriorityPolicy policy) {
	linphone_core_set_video_codec_priority_policy((::LinphoneCore *)mPrivPtr, (::LinphoneCodecPriorityPolicy)policy);
}
std::string linphone::Core::getVideoDevice() const {
	return StringUtilities::cStringToCpp(linphone_core_get_video_device((::LinphoneCore *)mPrivPtr));
}
linphone::Status linphone::Core::setVideoDevice(const std::string & id) {
	return linphone_core_set_video_device((::LinphoneCore *)mPrivPtr, StringUtilities::cppStringToC(id));
}
std::list<std::string> linphone::Core::getVideoDevicesList() const {
	return StringBctbxListWrapper::bctbxListToCppList(linphone_core_get_video_devices_list((::LinphoneCore *)mPrivPtr));
}
bool linphone::Core::videoDisplayEnabled() {
	return (linphone_core_video_display_enabled((::LinphoneCore *)mPrivPtr) != FALSE);
}
void linphone::Core::enableVideoDisplay(bool enable) {
	linphone_core_enable_video_display((::LinphoneCore *)mPrivPtr, enable);
}
std::string linphone::Core::getVideoDisplayFilter() {
	return StringUtilities::cStringToCpp(linphone_core_get_video_display_filter((::LinphoneCore *)mPrivPtr));
}
void linphone::Core::setVideoDisplayFilter(const std::string & filterName) {
	linphone_core_set_video_display_filter((::LinphoneCore *)mPrivPtr, StringUtilities::cppStringToC(filterName));
}
int linphone::Core::getVideoDscp() const {
	return linphone_core_get_video_dscp((::LinphoneCore *)mPrivPtr);
}
void linphone::Core::setVideoDscp(int dscp) {
	linphone_core_set_video_dscp((::LinphoneCore *)mPrivPtr, dscp);
}
bool linphone::Core::videoEnabled() {
	return (linphone_core_video_enabled((::LinphoneCore *)mPrivPtr) != FALSE);
}
int linphone::Core::getVideoJittcomp() {
	return linphone_core_get_video_jittcomp((::LinphoneCore *)mPrivPtr);
}
void linphone::Core::setVideoJittcomp(int milliseconds) {
	linphone_core_set_video_jittcomp((::LinphoneCore *)mPrivPtr, milliseconds);
}
std::string linphone::Core::getVideoMulticastAddr() const {
	return StringUtilities::cStringToCpp(linphone_core_get_video_multicast_addr((::LinphoneCore *)mPrivPtr));
}
linphone::Status linphone::Core::setVideoMulticastAddr(const std::string & ip) {
	return linphone_core_set_video_multicast_addr((::LinphoneCore *)mPrivPtr, StringUtilities::cppStringToC(ip));
}
bool linphone::Core::videoMulticastEnabled() const {
	return (linphone_core_video_multicast_enabled((::LinphoneCore *)mPrivPtr) != FALSE);
}
void linphone::Core::enableVideoMulticast(bool yesno) {
	linphone_core_enable_video_multicast((::LinphoneCore *)mPrivPtr, yesno);
}
int linphone::Core::getVideoMulticastTtl() const {
	return linphone_core_get_video_multicast_ttl((::LinphoneCore *)mPrivPtr);
}
linphone::Status linphone::Core::setVideoMulticastTtl(int ttl) {
	return linphone_core_set_video_multicast_ttl((::LinphoneCore *)mPrivPtr, ttl);
}
std::list<std::shared_ptr<linphone::PayloadType>> linphone::Core::getVideoPayloadTypes() {
	return ObjectBctbxListWrapper<linphone::PayloadType>::bctbxListToCppList(linphone_core_get_video_payload_types((::LinphoneCore *)mPrivPtr), false);
}
void linphone::Core::setVideoPayloadTypes(const std::list<std::shared_ptr<linphone::PayloadType>> & payloadTypes) {
	linphone_core_set_video_payload_types((::LinphoneCore *)mPrivPtr, ObjectBctbxListWrapper<linphone::PayloadType>(payloadTypes).c_list());
}
int linphone::Core::getVideoPort() const {
	return linphone_core_get_video_port((::LinphoneCore *)mPrivPtr);
}
void linphone::Core::setVideoPort(int port) {
	linphone_core_set_video_port((::LinphoneCore *)mPrivPtr, port);
}
std::shared_ptr<linphone::Range> linphone::Core::getVideoPortsRange() const {
	return Object::cPtrToSharedPtr<linphone::Range>(linphone_core_get_video_ports_range((::LinphoneCore *)mPrivPtr), false);
}
std::string linphone::Core::getVideoPreset() const {
	return StringUtilities::cStringToCpp(linphone_core_get_video_preset((::LinphoneCore *)mPrivPtr));
}
void linphone::Core::setVideoPreset(const std::string & preset) {
	linphone_core_set_video_preset((::LinphoneCore *)mPrivPtr, StringUtilities::cppStringToC(preset));
}
bool linphone::Core::videoPreviewEnabled() const {
	return (linphone_core_video_preview_enabled((::LinphoneCore *)mPrivPtr) != FALSE);
}
void linphone::Core::enableVideoPreview(bool enable) {
	linphone_core_enable_video_preview((::LinphoneCore *)mPrivPtr, enable);
}
void linphone::Core::enableVideoSourceReuse(bool enable) {
	linphone_core_enable_video_source_reuse((::LinphoneCore *)mPrivPtr, enable);
}
bool linphone::Core::wifiOnlyEnabled() {
	return (linphone_core_wifi_only_enabled((::LinphoneCore *)mPrivPtr) != FALSE);
}
void linphone::Core::enableWifiOnly(bool enable) {
	linphone_core_enable_wifi_only((::LinphoneCore *)mPrivPtr, enable);
}
bool linphone::Core::zeroRtpPortForStreamInactiveEnabled() const {
	return (linphone_core_zero_rtp_port_for_stream_inactive_enabled((::LinphoneCore *)mPrivPtr) != FALSE);
}
void linphone::Core::enableZeroRtpPortForStreamInactive(bool enable) {
	linphone_core_enable_zero_rtp_port_for_stream_inactive((::LinphoneCore *)mPrivPtr, enable);
}
std::list<linphone::ZrtpKeyAgreement> linphone::Core::getZrtpAvailableKeyAgreementList() {
	return EnumBctbxListWrapper<linphone::ZrtpKeyAgreement>::bctbxListToCppList(linphone_core_get_zrtp_available_key_agreement_list((::LinphoneCore *)mPrivPtr));
}
void * linphone::Core::getZrtpCacheDb() {
	return linphone_core_get_zrtp_cache_db((::LinphoneCore *)mPrivPtr);
}
bool linphone::Core::zrtpGoClearEnabled() const {
	return (linphone_core_zrtp_go_clear_enabled((::LinphoneCore *)mPrivPtr) != FALSE);
}
void linphone::Core::enableZrtpGoClear(bool enabled) {
	linphone_core_enable_zrtp_go_clear((::LinphoneCore *)mPrivPtr, enabled);
}
std::list<linphone::ZrtpKeyAgreement> linphone::Core::getZrtpKeyAgreementList() {
	return EnumBctbxListWrapper<linphone::ZrtpKeyAgreement>::bctbxListToCppList(linphone_core_get_zrtp_key_agreement_list((::LinphoneCore *)mPrivPtr));
}
void linphone::Core::setZrtpKeyAgreementSuites(const std::list<linphone::ZrtpKeyAgreement> & keyAgreements) {
	linphone_core_set_zrtp_key_agreement_suites((::LinphoneCore *)mPrivPtr, EnumBctbxListWrapper<linphone::ZrtpKeyAgreement>(keyAgreements).c_list());
}
std::string linphone::Core::getZrtpSecretsFile() {
	return StringUtilities::cStringToCpp(linphone_core_get_zrtp_secrets_file((::LinphoneCore *)mPrivPtr));
}
void linphone::Core::setZrtpSecretsFile(const std::string & file) {
	linphone_core_set_zrtp_secrets_file((::LinphoneCore *)mPrivPtr, StringUtilities::cppStringToC(file));
}
void linphone::Core::activateAudioSession(bool actived) {
	linphone_core_activate_audio_session((::LinphoneCore *)mPrivPtr, actived);
}
linphone::Status linphone::Core::addAccount(const std::shared_ptr<linphone::Account> & account) {
	return linphone_core_add_account((::LinphoneCore *)mPrivPtr, (::LinphoneAccount *)Object::sharedPtrToCPtr(std::static_pointer_cast<Object,linphone::Account>(account)));
}
linphone::Status linphone::Core::addAllToConference() {
	return linphone_core_add_all_to_conference((::LinphoneCore *)mPrivPtr);
}
void linphone::Core::addAuthInfo(const std::shared_ptr<const linphone::AuthInfo> & info) {
	linphone_core_add_auth_info((::LinphoneCore *)mPrivPtr, (::LinphoneAuthInfo *)Object::sharedPtrToCPtr(std::static_pointer_cast<const Object,const linphone::AuthInfo>(info)));
}
void linphone::Core::addContentTypeSupport(const std::string & contentType) {
	linphone_core_add_content_type_support((::LinphoneCore *)mPrivPtr, StringUtilities::cppStringToC(contentType));
}
void linphone::Core::addFriendList(const std::shared_ptr<linphone::FriendList> & list) {
	linphone_core_add_friend_list((::LinphoneCore *)mPrivPtr, (::LinphoneFriendList *)Object::sharedPtrToCPtr(std::static_pointer_cast<Object,linphone::FriendList>(list)));
}
void linphone::Core::addLdap(const std::shared_ptr<linphone::Ldap> & ldap) {
	linphone_core_add_ldap((::LinphoneCore *)mPrivPtr, (::LinphoneLdap *)Object::sharedPtrToCPtr(std::static_pointer_cast<Object,linphone::Ldap>(ldap)));
}
void linphone::Core::addLinphoneSpec(const std::string & spec) {
	linphone_core_add_linphone_spec((::LinphoneCore *)mPrivPtr, StringUtilities::cppStringToC(spec));
}
void linphone::Core::addProvisioningHeader(const std::string & headerName, const std::string & value) {
	linphone_core_add_provisioning_header((::LinphoneCore *)mPrivPtr, StringUtilities::cppStringToC(headerName), StringUtilities::cppStringToC(value));
}
linphone::Status linphone::Core::addProxyConfig(const std::shared_ptr<linphone::ProxyConfig> & config) {
	return linphone_core_add_proxy_config((::LinphoneCore *)mPrivPtr, (::LinphoneProxyConfig *)Object::sharedPtrToCPtr(std::static_pointer_cast<Object,linphone::ProxyConfig>(config)));
}
void linphone::Core::addSupportedTag(const std::string & tag) {
	linphone_core_add_supported_tag((::LinphoneCore *)mPrivPtr, StringUtilities::cppStringToC(tag));
}
linphone::Status linphone::Core::addToConference(const std::shared_ptr<linphone::Call> & call) {
	return linphone_core_add_to_conference((::LinphoneCore *)mPrivPtr, (::LinphoneCall *)Object::sharedPtrToCPtr(std::static_pointer_cast<Object,linphone::Call>(call)));
}
void linphone::Core::audioRouteChanged() {
	linphone_core_audio_route_changed((::LinphoneCore *)mPrivPtr);
}
linphone::ChatRoom::EphemeralMode linphone::Core::chatRoomGetDefaultEphemeralMode() const {
	return (linphone::ChatRoom::EphemeralMode)linphone_core_chat_room_get_default_ephemeral_mode((::LinphoneCore *)mPrivPtr);
}
void linphone::Core::chatRoomSetDefaultEphemeralMode(linphone::ChatRoom::EphemeralMode mode) {
	linphone_core_chat_room_set_default_ephemeral_mode((::LinphoneCore *)mPrivPtr, (::LinphoneChatRoomEphemeralMode)mode);
}
void linphone::Core::checkForUpdate(const std::string & currentVersion) {
	linphone_core_check_for_update((::LinphoneCore *)mPrivPtr, StringUtilities::cppStringToC(currentVersion));
}
void linphone::Core::clearAccounts() {
	linphone_core_clear_accounts((::LinphoneCore *)mPrivPtr);
}
void linphone::Core::clearAllAuthInfo() {
	linphone_core_clear_all_auth_info((::LinphoneCore *)mPrivPtr);
}
void linphone::Core::clearCallLogs() {
	linphone_core_clear_call_logs((::LinphoneCore *)mPrivPtr);
}
void linphone::Core::clearLdaps() {
	linphone_core_clear_ldaps((::LinphoneCore *)mPrivPtr);
}
void linphone::Core::clearProvisioningHeaders() {
	linphone_core_clear_provisioning_headers((::LinphoneCore *)mPrivPtr);
}
void linphone::Core::clearProxyConfig() {
	linphone_core_clear_proxy_config((::LinphoneCore *)mPrivPtr);
}
linphone::Status linphone::Core::configSync() {
	return linphone_core_config_sync((::LinphoneCore *)mPrivPtr);
}
void linphone::Core::configureAudioSession() {
	linphone_core_configure_audio_session((::LinphoneCore *)mPrivPtr);
}
std::shared_ptr<linphone::Account> linphone::Core::createAccount(const std::shared_ptr<linphone::AccountParams> & params) {
	return Object::cPtrToSharedPtr<linphone::Account>(linphone_core_create_account((::LinphoneCore *)mPrivPtr, (::LinphoneAccountParams *)Object::sharedPtrToCPtr(std::static_pointer_cast<Object,linphone::AccountParams>(params))), false);
}
std::shared_ptr<linphone::AccountCreator> linphone::Core::createAccountCreator(const std::string & xmlrpcUrl) {
	return Object::cPtrToSharedPtr<linphone::AccountCreator>(linphone_core_create_account_creator((::LinphoneCore *)mPrivPtr, StringUtilities::cppStringToC(xmlrpcUrl)), false);
}
std::shared_ptr<linphone::AccountParams> linphone::Core::createAccountParams() {
	return Object::cPtrToSharedPtr<linphone::AccountParams>(linphone_core_create_account_params((::LinphoneCore *)mPrivPtr), false);
}
std::shared_ptr<linphone::Address> linphone::Core::createAddress(const std::string & address) {
	return Object::cPtrToSharedPtr<linphone::Address>(linphone_core_create_address((::LinphoneCore *)mPrivPtr, StringUtilities::cppStringToC(address)), false);
}
std::shared_ptr<linphone::CallLog> linphone::Core::createCallLog(const std::shared_ptr<linphone::Address> & from, const std::shared_ptr<linphone::Address> & to, linphone::Call::Dir dir, int duration, time_t startTime, time_t connectedTime, linphone::Call::Status status, bool videoEnabled, float quality) {
	return Object::cPtrToSharedPtr<linphone::CallLog>(linphone_core_create_call_log((::LinphoneCore *)mPrivPtr, (::LinphoneAddress *)Object::sharedPtrToCPtr(std::static_pointer_cast<Object,linphone::Address>(from)), (::LinphoneAddress *)Object::sharedPtrToCPtr(std::static_pointer_cast<Object,linphone::Address>(to)), (::LinphoneCallDir)dir, duration, startTime, connectedTime, (::LinphoneCallStatus)status, videoEnabled, quality), false);
}
std::shared_ptr<linphone::CallParams> linphone::Core::createCallParams(const std::shared_ptr<linphone::Call> & call) {
	return Object::cPtrToSharedPtr<linphone::CallParams>(linphone_core_create_call_params((::LinphoneCore *)mPrivPtr, (::LinphoneCall *)Object::sharedPtrToCPtr(std::static_pointer_cast<Object,linphone::Call>(call))), false);
}
std::shared_ptr<linphone::ChatRoom> linphone::Core::createChatRoom(const std::shared_ptr<const linphone::ChatRoomParams> & params, const std::shared_ptr<const linphone::Address> & localAddr, const std::list<std::shared_ptr<linphone::Address>> & participants) {
	return Object::cPtrToSharedPtr<linphone::ChatRoom>(linphone_core_create_chat_room_6((::LinphoneCore *)mPrivPtr, (::LinphoneChatRoomParams *)Object::sharedPtrToCPtr(std::static_pointer_cast<const Object,const linphone::ChatRoomParams>(params)), (::LinphoneAddress *)Object::sharedPtrToCPtr(std::static_pointer_cast<const Object,const linphone::Address>(localAddr)), ObjectBctbxListWrapper<linphone::Address>(participants).c_list()), false);
}
std::shared_ptr<linphone::ChatRoom> linphone::Core::createChatRoom(const std::shared_ptr<const linphone::ChatRoomParams> & params, const std::shared_ptr<const linphone::Address> & localAddr, const std::string & subject, const std::list<std::shared_ptr<linphone::Address>> & participants) {
	return Object::cPtrToSharedPtr<linphone::ChatRoom>(linphone_core_create_chat_room((::LinphoneCore *)mPrivPtr, (::LinphoneChatRoomParams *)Object::sharedPtrToCPtr(std::static_pointer_cast<const Object,const linphone::ChatRoomParams>(params)), (::LinphoneAddress *)Object::sharedPtrToCPtr(std::static_pointer_cast<const Object,const linphone::Address>(localAddr)), StringUtilities::cppStringToC(subject), ObjectBctbxListWrapper<linphone::Address>(participants).c_list()), false);
}
std::shared_ptr<linphone::ChatRoom> linphone::Core::createChatRoom(const std::shared_ptr<const linphone::ChatRoomParams> & params, const std::string & subject, const std::list<std::shared_ptr<linphone::Address>> & participants) {
	return Object::cPtrToSharedPtr<linphone::ChatRoom>(linphone_core_create_chat_room_2((::LinphoneCore *)mPrivPtr, (::LinphoneChatRoomParams *)Object::sharedPtrToCPtr(std::static_pointer_cast<const Object,const linphone::ChatRoomParams>(params)), StringUtilities::cppStringToC(subject), ObjectBctbxListWrapper<linphone::Address>(participants).c_list()), false);
}
std::shared_ptr<linphone::ChatRoom> linphone::Core::createChatRoom(const std::string & subject, const std::list<std::shared_ptr<linphone::Address>> & participants) {
	return Object::cPtrToSharedPtr<linphone::ChatRoom>(linphone_core_create_chat_room_3((::LinphoneCore *)mPrivPtr, StringUtilities::cppStringToC(subject), ObjectBctbxListWrapper<linphone::Address>(participants).c_list()), false);
}
std::shared_ptr<linphone::ChatRoom> linphone::Core::createChatRoom(const std::shared_ptr<const linphone::ChatRoomParams> & params, const std::shared_ptr<const linphone::Address> & localAddr, const std::shared_ptr<const linphone::Address> & participant) {
	return Object::cPtrToSharedPtr<linphone::ChatRoom>(linphone_core_create_chat_room_4((::LinphoneCore *)mPrivPtr, (::LinphoneChatRoomParams *)Object::sharedPtrToCPtr(std::static_pointer_cast<const Object,const linphone::ChatRoomParams>(params)), (::LinphoneAddress *)Object::sharedPtrToCPtr(std::static_pointer_cast<const Object,const linphone::Address>(localAddr)), (::LinphoneAddress *)Object::sharedPtrToCPtr(std::static_pointer_cast<const Object,const linphone::Address>(participant))), false);
}
std::shared_ptr<linphone::ChatRoom> linphone::Core::createChatRoom(const std::shared_ptr<const linphone::Address> & participant) {
	return Object::cPtrToSharedPtr<linphone::ChatRoom>(linphone_core_create_chat_room_5((::LinphoneCore *)mPrivPtr, (::LinphoneAddress *)Object::sharedPtrToCPtr(std::static_pointer_cast<const Object,const linphone::Address>(participant))), false);
}
std::shared_ptr<linphone::ChatRoom> linphone::Core::createClientGroupChatRoom(const std::string & subject, bool fallback) {
	return Object::cPtrToSharedPtr<linphone::ChatRoom>(linphone_core_create_client_group_chat_room((::LinphoneCore *)mPrivPtr, StringUtilities::cppStringToC(subject), fallback), false);
}
std::shared_ptr<linphone::ChatRoom> linphone::Core::createClientGroupChatRoom(const std::string & subject, bool fallback, bool encrypted) {
	return Object::cPtrToSharedPtr<linphone::ChatRoom>(linphone_core_create_client_group_chat_room_2((::LinphoneCore *)mPrivPtr, StringUtilities::cppStringToC(subject), fallback, encrypted), false);
}
std::shared_ptr<linphone::ConferenceParams> linphone::Core::createConferenceParams(const std::shared_ptr<linphone::Conference> & conference) {
	return Object::cPtrToSharedPtr<linphone::ConferenceParams>(linphone_core_create_conference_params_2((::LinphoneCore *)mPrivPtr, (::LinphoneConference *)Object::sharedPtrToCPtr(std::static_pointer_cast<Object,linphone::Conference>(conference))), false);
}
std::shared_ptr<linphone::ConferenceScheduler> linphone::Core::createConferenceScheduler() {
	return Object::cPtrToSharedPtr<linphone::ConferenceScheduler>(linphone_core_create_conference_scheduler((::LinphoneCore *)mPrivPtr), false);
}
std::shared_ptr<linphone::Conference> linphone::Core::createConferenceWithParams(const std::shared_ptr<const linphone::ConferenceParams> & params) {
	return Object::cPtrToSharedPtr<linphone::Conference>(linphone_core_create_conference_with_params((::LinphoneCore *)mPrivPtr, (::LinphoneConferenceParams *)Object::sharedPtrToCPtr(std::static_pointer_cast<const Object,const linphone::ConferenceParams>(params))), false);
}
std::shared_ptr<linphone::Config> linphone::Core::createConfig(const std::string & filename) {
	return Object::cPtrToSharedPtr<linphone::Config>(linphone_core_create_config((::LinphoneCore *)mPrivPtr, StringUtilities::cppStringToC(filename)), false);
}
std::shared_ptr<linphone::Content> linphone::Core::createContent() {
	return Object::cPtrToSharedPtr<linphone::Content>(linphone_core_create_content((::LinphoneCore *)mPrivPtr), false);
}
std::shared_ptr<linphone::ChatRoomParams> linphone::Core::createDefaultChatRoomParams() {
	return Object::cPtrToSharedPtr<linphone::ChatRoomParams>(linphone_core_create_default_chat_room_params((::LinphoneCore *)mPrivPtr), false);
}
std::shared_ptr<linphone::Friend> linphone::Core::createFriend() {
	return Object::cPtrToSharedPtr<linphone::Friend>(linphone_core_create_friend((::LinphoneCore *)mPrivPtr), false);
}
std::shared_ptr<linphone::FriendList> linphone::Core::createFriendList() {
	return Object::cPtrToSharedPtr<linphone::FriendList>(linphone_core_create_friend_list((::LinphoneCore *)mPrivPtr), false);
}
std::shared_ptr<linphone::Friend> linphone::Core::createFriendWithAddress(const std::string & address) {
	return Object::cPtrToSharedPtr<linphone::Friend>(linphone_core_create_friend_with_address((::LinphoneCore *)mPrivPtr, StringUtilities::cppStringToC(address)), false);
}
std::shared_ptr<linphone::InfoMessage> linphone::Core::createInfoMessage() {
	return Object::cPtrToSharedPtr<linphone::InfoMessage>(linphone_core_create_info_message((::LinphoneCore *)mPrivPtr), false);
}
std::shared_ptr<linphone::Ldap> linphone::Core::createLdap() {
	return Object::cPtrToSharedPtr<linphone::Ldap>(linphone_core_create_ldap((::LinphoneCore *)mPrivPtr), false);
}
std::shared_ptr<linphone::LdapParams> linphone::Core::createLdapParams() {
	return Object::cPtrToSharedPtr<linphone::LdapParams>(linphone_core_create_ldap_params((::LinphoneCore *)mPrivPtr), false);
}
std::shared_ptr<linphone::Ldap> linphone::Core::createLdapWithParams(const std::shared_ptr<linphone::LdapParams> & params) {
	return Object::cPtrToSharedPtr<linphone::Ldap>(linphone_core_create_ldap_with_params((::LinphoneCore *)mPrivPtr, (::LinphoneLdapParams *)Object::sharedPtrToCPtr(std::static_pointer_cast<Object,linphone::LdapParams>(params))), false);
}
std::shared_ptr<linphone::Player> linphone::Core::createLocalPlayer(const std::string & soundCardName, const std::string & videoDisplayName, void * windowId) {
	return Object::cPtrToSharedPtr<linphone::Player>(linphone_core_create_local_player((::LinphoneCore *)mPrivPtr, StringUtilities::cppStringToC(soundCardName), StringUtilities::cppStringToC(videoDisplayName), windowId), false);
}
std::shared_ptr<linphone::MagicSearch> linphone::Core::createMagicSearch() {
	return Object::cPtrToSharedPtr<linphone::MagicSearch>(linphone_core_create_magic_search((::LinphoneCore *)mPrivPtr), false);
}
std::shared_ptr<linphone::NatPolicy> linphone::Core::createNatPolicy() {
	return Object::cPtrToSharedPtr<linphone::NatPolicy>(linphone_core_create_nat_policy((::LinphoneCore *)mPrivPtr), false);
}
void * linphone::Core::createNativePreviewWindowId() {
	return linphone_core_create_native_preview_window_id((::LinphoneCore *)mPrivPtr);
}
void * linphone::Core::createNativeVideoWindowId() const {
	return linphone_core_create_native_video_window_id((::LinphoneCore *)mPrivPtr);
}
std::shared_ptr<linphone::Event> linphone::Core::createNotify(const std::shared_ptr<linphone::Address> & resource, const std::string & event) {
	return Object::cPtrToSharedPtr<linphone::Event>(linphone_core_create_notify((::LinphoneCore *)mPrivPtr, (::LinphoneAddress *)Object::sharedPtrToCPtr(std::static_pointer_cast<Object,linphone::Address>(resource)), StringUtilities::cppStringToC(event)), false);
}
std::shared_ptr<linphone::Event> linphone::Core::createOneShotPublish(const std::shared_ptr<linphone::Address> & resource, const std::string & event) {
	return Object::cPtrToSharedPtr<linphone::Event>(linphone_core_create_one_shot_publish((::LinphoneCore *)mPrivPtr, (::LinphoneAddress *)Object::sharedPtrToCPtr(std::static_pointer_cast<Object,linphone::Address>(resource)), StringUtilities::cppStringToC(event)), false);
}
std::shared_ptr<linphone::PresenceActivity> linphone::Core::createPresenceActivity(linphone::PresenceActivity::Type acttype, const std::string & description) {
	return Object::cPtrToSharedPtr<linphone::PresenceActivity>(linphone_core_create_presence_activity((::LinphoneCore *)mPrivPtr, (::LinphonePresenceActivityType)acttype, StringUtilities::cppStringToC(description)), false);
}
std::shared_ptr<linphone::PresenceModel> linphone::Core::createPresenceModel() {
	return Object::cPtrToSharedPtr<linphone::PresenceModel>(linphone_core_create_presence_model((::LinphoneCore *)mPrivPtr), false);
}
std::shared_ptr<linphone::PresenceModel> linphone::Core::createPresenceModelWithActivity(linphone::PresenceActivity::Type acttype, const std::string & description) {
	return Object::cPtrToSharedPtr<linphone::PresenceModel>(linphone_core_create_presence_model_with_activity((::LinphoneCore *)mPrivPtr, (::LinphonePresenceActivityType)acttype, StringUtilities::cppStringToC(description)), false);
}
std::shared_ptr<linphone::PresenceModel> linphone::Core::createPresenceModelWithActivityAndNote(linphone::PresenceActivity::Type acttype, const std::string & description, const std::string & note, const std::string & lang) {
	return Object::cPtrToSharedPtr<linphone::PresenceModel>(linphone_core_create_presence_model_with_activity_and_note((::LinphoneCore *)mPrivPtr, (::LinphonePresenceActivityType)acttype, StringUtilities::cppStringToC(description), StringUtilities::cppStringToC(note), StringUtilities::cppStringToC(lang)), false);
}
std::shared_ptr<linphone::PresenceNote> linphone::Core::createPresenceNote(const std::string & content, const std::string & lang) {
	return Object::cPtrToSharedPtr<linphone::PresenceNote>(linphone_core_create_presence_note((::LinphoneCore *)mPrivPtr, StringUtilities::cppStringToC(content), StringUtilities::cppStringToC(lang)), false);
}
std::shared_ptr<linphone::PresencePerson> linphone::Core::createPresencePerson(const std::string & id) {
	return Object::cPtrToSharedPtr<linphone::PresencePerson>(linphone_core_create_presence_person((::LinphoneCore *)mPrivPtr, StringUtilities::cppStringToC(id)), false);
}
std::shared_ptr<linphone::PresenceService> linphone::Core::createPresenceService(const std::string & id, linphone::PresenceBasicStatus basicStatus, const std::string & contact) {
	return Object::cPtrToSharedPtr<linphone::PresenceService>(linphone_core_create_presence_service((::LinphoneCore *)mPrivPtr, StringUtilities::cppStringToC(id), (::LinphonePresenceBasicStatus)basicStatus, StringUtilities::cppStringToC(contact)), false);
}
std::shared_ptr<linphone::Address> linphone::Core::createPrimaryContactParsed() {
	return Object::cPtrToSharedPtr<linphone::Address>(linphone_core_create_primary_contact_parsed((::LinphoneCore *)mPrivPtr), false);
}
std::shared_ptr<linphone::ProxyConfig> linphone::Core::createProxyConfig() {
	return Object::cPtrToSharedPtr<linphone::ProxyConfig>(linphone_core_create_proxy_config((::LinphoneCore *)mPrivPtr), false);
}
std::shared_ptr<linphone::Event> linphone::Core::createPublish(const std::shared_ptr<linphone::Address> & resource, const std::string & event, int expires) {
	return Object::cPtrToSharedPtr<linphone::Event>(linphone_core_create_publish((::LinphoneCore *)mPrivPtr, (::LinphoneAddress *)Object::sharedPtrToCPtr(std::static_pointer_cast<Object,linphone::Address>(resource)), StringUtilities::cppStringToC(event), expires), false);
}
std::shared_ptr<linphone::Recorder> linphone::Core::createRecorder(const std::shared_ptr<linphone::RecorderParams> & params) {
	return Object::cPtrToSharedPtr<linphone::Recorder>(linphone_core_create_recorder((::LinphoneCore *)mPrivPtr, (::LinphoneRecorderParams *)Object::sharedPtrToCPtr(std::static_pointer_cast<Object,linphone::RecorderParams>(params))), false);
}
std::shared_ptr<linphone::RecorderParams> linphone::Core::createRecorderParams() const {
	return Object::cPtrToSharedPtr<linphone::RecorderParams>(linphone_core_create_recorder_params((::LinphoneCore *)mPrivPtr), false);
}
std::shared_ptr<linphone::Event> linphone::Core::createSubscribe(const std::shared_ptr<linphone::Address> & resource, const std::string & event, int expires) {
	return Object::cPtrToSharedPtr<linphone::Event>(linphone_core_create_subscribe((::LinphoneCore *)mPrivPtr, (::LinphoneAddress *)Object::sharedPtrToCPtr(std::static_pointer_cast<Object,linphone::Address>(resource)), StringUtilities::cppStringToC(event), expires), false);
}
std::shared_ptr<linphone::Event> linphone::Core::createSubscribe(const std::shared_ptr<linphone::Address> & resource, const std::shared_ptr<linphone::ProxyConfig> & proxy, const std::string & event, int expires) {
	return Object::cPtrToSharedPtr<linphone::Event>(linphone_core_create_subscribe_2((::LinphoneCore *)mPrivPtr, (::LinphoneAddress *)Object::sharedPtrToCPtr(std::static_pointer_cast<Object,linphone::Address>(resource)), (::LinphoneProxyConfig *)Object::sharedPtrToCPtr(std::static_pointer_cast<Object,linphone::ProxyConfig>(proxy)), StringUtilities::cppStringToC(event), expires), false);
}
std::shared_ptr<linphone::XmlRpcSession> linphone::Core::createXmlRpcSession(const std::string & url) {
	return Object::cPtrToSharedPtr<linphone::XmlRpcSession>(linphone_core_create_xml_rpc_session((::LinphoneCore *)mPrivPtr, StringUtilities::cppStringToC(url)), false);
}
void linphone::Core::deleteChatRoom(const std::shared_ptr<linphone::ChatRoom> & chatRoom) {
	linphone_core_delete_chat_room((::LinphoneCore *)mPrivPtr, (::LinphoneChatRoom *)Object::sharedPtrToCPtr(std::static_pointer_cast<Object,linphone::ChatRoom>(chatRoom)));
}
void linphone::Core::deleteConferenceInformation(const std::shared_ptr<linphone::ConferenceInfo> & conferenceInfo) {
	linphone_core_delete_conference_information((::LinphoneCore *)mPrivPtr, (::LinphoneConferenceInfo *)Object::sharedPtrToCPtr(std::static_pointer_cast<Object,linphone::ConferenceInfo>(conferenceInfo)));
}
void linphone::Core::didRegisterForRemotePush(void * deviceToken) {
	linphone_core_did_register_for_remote_push((::LinphoneCore *)mPrivPtr, deviceToken);
}
void linphone::Core::didRegisterForRemotePushWithStringifiedToken(const std::string & deviceTokenStr) {
	linphone_core_did_register_for_remote_push_with_stringified_token((::LinphoneCore *)mPrivPtr, StringUtilities::cppStringToC(deviceTokenStr));
}
void linphone::Core::disableChat(linphone::Reason denyReason) {
	linphone_core_disable_chat((::LinphoneCore *)mPrivPtr, (::LinphoneReason)denyReason);
}
void linphone::Core::enableChat() {
	linphone_core_enable_chat((::LinphoneCore *)mPrivPtr);
}
void linphone::Core::ensureRegistered() {
	linphone_core_ensure_registered((::LinphoneCore *)mPrivPtr);
}
void linphone::Core::enterBackground() {
	linphone_core_enter_background((::LinphoneCore *)mPrivPtr);
}
linphone::Status linphone::Core::enterConference() {
	return linphone_core_enter_conference((::LinphoneCore *)mPrivPtr);
}
void linphone::Core::enterForeground() {
	linphone_core_enter_foreground((::LinphoneCore *)mPrivPtr);
}
bool linphone::Core::fileFormatSupported(const std::string & fmt) {
	return (linphone_core_file_format_supported((::LinphoneCore *)mPrivPtr, StringUtilities::cppStringToC(fmt)) != FALSE);
}
std::shared_ptr<const linphone::AuthInfo> linphone::Core::findAuthInfo(const std::string & realm, const std::string & username, const std::string & sipDomain) {
	return Object::cPtrToSharedPtr<const linphone::AuthInfo>(linphone_core_find_auth_info((::LinphoneCore *)mPrivPtr, StringUtilities::cppStringToC(realm), StringUtilities::cppStringToC(username), StringUtilities::cppStringToC(sipDomain)));
}
std::shared_ptr<linphone::Call> linphone::Core::findCallFromUri(const std::string & uri) const {
	return Object::cPtrToSharedPtr<linphone::Call>(linphone_core_find_call_from_uri((::LinphoneCore *)mPrivPtr, StringUtilities::cppStringToC(uri)));
}
std::shared_ptr<linphone::CallLog> linphone::Core::findCallLog(const std::string & callId, int limit) {
	return Object::cPtrToSharedPtr<linphone::CallLog>(linphone_core_find_call_log((::LinphoneCore *)mPrivPtr, StringUtilities::cppStringToC(callId), limit), false);
}
std::shared_ptr<linphone::CallLog> linphone::Core::findCallLogFromCallId(const std::string & callId) {
	return Object::cPtrToSharedPtr<linphone::CallLog>(linphone_core_find_call_log_from_call_id((::LinphoneCore *)mPrivPtr, StringUtilities::cppStringToC(callId)), false);
}
std::shared_ptr<linphone::ChatRoom> linphone::Core::findChatRoom(const std::shared_ptr<const linphone::Address> & peerAddr, const std::shared_ptr<const linphone::Address> & localAddr) const {
	return Object::cPtrToSharedPtr<linphone::ChatRoom>(linphone_core_find_chat_room((::LinphoneCore *)mPrivPtr, (::LinphoneAddress *)Object::sharedPtrToCPtr(std::static_pointer_cast<const Object,const linphone::Address>(peerAddr)), (::LinphoneAddress *)Object::sharedPtrToCPtr(std::static_pointer_cast<const Object,const linphone::Address>(localAddr))));
}
std::shared_ptr<linphone::ConferenceInfo> linphone::Core::findConferenceInformationFromUri(const std::shared_ptr<linphone::Address> & uri) {
	return Object::cPtrToSharedPtr<linphone::ConferenceInfo>(linphone_core_find_conference_information_from_uri((::LinphoneCore *)mPrivPtr, (::LinphoneAddress *)Object::sharedPtrToCPtr(std::static_pointer_cast<Object,linphone::Address>(uri))), false);
}
std::list<std::shared_ptr<linphone::Address>> linphone::Core::findContactsByChar(const std::string & filter, bool sipOnly) {
	return ObjectBctbxListWrapper<linphone::Address>::bctbxListToCppList(linphone_core_find_contacts_by_char((::LinphoneCore *)mPrivPtr, StringUtilities::cppStringToC(filter), sipOnly), true);
}
std::shared_ptr<linphone::Friend> linphone::Core::findFriend(const std::shared_ptr<const linphone::Address> & address) const {
	return Object::cPtrToSharedPtr<linphone::Friend>(linphone_core_find_friend((::LinphoneCore *)mPrivPtr, (::LinphoneAddress *)Object::sharedPtrToCPtr(std::static_pointer_cast<const Object,const linphone::Address>(address))));
}
std::shared_ptr<linphone::Friend> linphone::Core::findFriendByPhoneNumber(const std::string & phoneNumber) const {
	return Object::cPtrToSharedPtr<linphone::Friend>(linphone_core_find_friend_by_phone_number((::LinphoneCore *)mPrivPtr, StringUtilities::cppStringToC(phoneNumber)));
}
std::list<std::shared_ptr<linphone::Friend>> linphone::Core::findFriends(const std::shared_ptr<const linphone::Address> & address) const {
	return ObjectBctbxListWrapper<linphone::Friend>::bctbxListToCppList(linphone_core_find_friends((::LinphoneCore *)mPrivPtr, (::LinphoneAddress *)Object::sharedPtrToCPtr(std::static_pointer_cast<const Object,const linphone::Address>(address))), false);
}
std::shared_ptr<linphone::ChatRoom> linphone::Core::findOneToOneChatRoom(const std::shared_ptr<const linphone::Address> & localAddr, const std::shared_ptr<const linphone::Address> & participantAddr, bool encrypted) const {
	return Object::cPtrToSharedPtr<linphone::ChatRoom>(linphone_core_find_one_to_one_chat_room_2((::LinphoneCore *)mPrivPtr, (::LinphoneAddress *)Object::sharedPtrToCPtr(std::static_pointer_cast<const Object,const linphone::Address>(localAddr)), (::LinphoneAddress *)Object::sharedPtrToCPtr(std::static_pointer_cast<const Object,const linphone::Address>(participantAddr)), encrypted));
}
std::shared_ptr<linphone::Account> linphone::Core::getAccountByIdkey(const std::string & idkey) {
	return Object::cPtrToSharedPtr<linphone::Account>(linphone_core_get_account_by_idkey((::LinphoneCore *)mPrivPtr, StringUtilities::cppStringToC(idkey)));
}
std::shared_ptr<linphone::Call> linphone::Core::getCallByCallid(const std::string & callId) const {
	return Object::cPtrToSharedPtr<linphone::Call>(linphone_core_get_call_by_callid((::LinphoneCore *)mPrivPtr, StringUtilities::cppStringToC(callId)));
}
std::shared_ptr<linphone::Call> linphone::Core::getCallByRemoteAddress(const std::string & remoteAddress) const {
	return Object::cPtrToSharedPtr<linphone::Call>(linphone_core_get_call_by_remote_address((::LinphoneCore *)mPrivPtr, StringUtilities::cppStringToC(remoteAddress)));
}
std::shared_ptr<linphone::Call> linphone::Core::getCallByRemoteAddress2(const std::shared_ptr<const linphone::Address> & remoteAddress) const {
	return Object::cPtrToSharedPtr<linphone::Call>(linphone_core_get_call_by_remote_address2((::LinphoneCore *)mPrivPtr, (::LinphoneAddress *)Object::sharedPtrToCPtr(std::static_pointer_cast<const Object,const linphone::Address>(remoteAddress))));
}
std::list<std::shared_ptr<linphone::CallLog>> linphone::Core::getCallHistory(const std::shared_ptr<const linphone::Address> & peerAddress, const std::shared_ptr<const linphone::Address> & localAddress) {
	return ObjectBctbxListWrapper<linphone::CallLog>::bctbxListToCppList(linphone_core_get_call_history_2((::LinphoneCore *)mPrivPtr, (::LinphoneAddress *)Object::sharedPtrToCPtr(std::static_pointer_cast<const Object,const linphone::Address>(peerAddress)), (::LinphoneAddress *)Object::sharedPtrToCPtr(std::static_pointer_cast<const Object,const linphone::Address>(localAddress))), false);
}
std::shared_ptr<linphone::ChatRoom> linphone::Core::getChatRoom(const std::shared_ptr<const linphone::Address> & addr) {
	return Object::cPtrToSharedPtr<linphone::ChatRoom>(linphone_core_get_chat_room((::LinphoneCore *)mPrivPtr, (::LinphoneAddress *)Object::sharedPtrToCPtr(std::static_pointer_cast<const Object,const linphone::Address>(addr))));
}
std::shared_ptr<linphone::ChatRoom> linphone::Core::getChatRoom(const std::shared_ptr<const linphone::Address> & peerAddr, const std::shared_ptr<const linphone::Address> & localAddr) {
	return Object::cPtrToSharedPtr<linphone::ChatRoom>(linphone_core_get_chat_room_2((::LinphoneCore *)mPrivPtr, (::LinphoneAddress *)Object::sharedPtrToCPtr(std::static_pointer_cast<const Object,const linphone::Address>(peerAddr)), (::LinphoneAddress *)Object::sharedPtrToCPtr(std::static_pointer_cast<const Object,const linphone::Address>(localAddr))));
}
std::shared_ptr<linphone::ChatRoom> linphone::Core::getChatRoomFromUri(const std::string & to) {
	return Object::cPtrToSharedPtr<linphone::ChatRoom>(linphone_core_get_chat_room_from_uri((::LinphoneCore *)mPrivPtr, StringUtilities::cppStringToC(to)));
}
std::list<std::shared_ptr<linphone::ConferenceInfo>> linphone::Core::getConferenceInformationListAfterTime(time_t time) {
	return ObjectBctbxListWrapper<linphone::ConferenceInfo>::bctbxListToCppList(linphone_core_get_conference_information_list_after_time((::LinphoneCore *)mPrivPtr, time), false);
}
std::shared_ptr<linphone::Friend> linphone::Core::getFriendByRefKey(const std::string & key) const {
	return Object::cPtrToSharedPtr<linphone::Friend>(linphone_core_get_friend_by_ref_key((::LinphoneCore *)mPrivPtr, StringUtilities::cppStringToC(key)));
}
std::shared_ptr<linphone::FriendList> linphone::Core::getFriendListByName(const std::string & name) const {
	return Object::cPtrToSharedPtr<linphone::FriendList>(linphone_core_get_friend_list_by_name((::LinphoneCore *)mPrivPtr, StringUtilities::cppStringToC(name)));
}
std::shared_ptr<linphone::PayloadType> linphone::Core::getPayloadType(const std::string & type, int rate, int channels) {
	return Object::cPtrToSharedPtr<linphone::PayloadType>(linphone_core_get_payload_type((::LinphoneCore *)mPrivPtr, StringUtilities::cppStringToC(type), rate, channels), false);
}
std::shared_ptr<linphone::ProxyConfig> linphone::Core::getProxyConfigByIdkey(const std::string & idkey) {
	return Object::cPtrToSharedPtr<linphone::ProxyConfig>(linphone_core_get_proxy_config_by_idkey((::LinphoneCore *)mPrivPtr, StringUtilities::cppStringToC(idkey)));
}
int linphone::Core::getUnreadChatMessageCountFromLocal(const std::shared_ptr<const linphone::Address> & address) const {
	return linphone_core_get_unread_chat_message_count_from_local((::LinphoneCore *)mPrivPtr, (::LinphoneAddress *)Object::sharedPtrToCPtr(std::static_pointer_cast<const Object,const linphone::Address>(address)));
}
linphone::ZrtpPeerStatus linphone::Core::getZrtpStatus(const std::string & addr) {
	return (linphone::ZrtpPeerStatus)linphone_core_get_zrtp_status((::LinphoneCore *)mPrivPtr, StringUtilities::cppStringToC(addr));
}
bool linphone::Core::hasBuiltinEchoCanceller() {
	return (linphone_core_has_builtin_echo_canceller((::LinphoneCore *)mPrivPtr) != FALSE);
}
bool linphone::Core::hasCrappyOpengl() {
	return (linphone_core_has_crappy_opengl((::LinphoneCore *)mPrivPtr) != FALSE);
}
bool linphone::Core::inCall() const {
	return (linphone_core_in_call((::LinphoneCore *)mPrivPtr) != FALSE);
}
std::shared_ptr<linphone::Address> linphone::Core::interpretUrl(const std::string & url) {
	return Object::cPtrToSharedPtr<linphone::Address>(linphone_core_interpret_url((::LinphoneCore *)mPrivPtr, StringUtilities::cppStringToC(url)), false);
}
std::shared_ptr<linphone::Address> linphone::Core::interpretUrl(const std::string & url, bool applyInternationalPrefix) {
	return Object::cPtrToSharedPtr<linphone::Address>(linphone_core_interpret_url_2((::LinphoneCore *)mPrivPtr, StringUtilities::cppStringToC(url), applyInternationalPrefix), false);
}
std::shared_ptr<linphone::Call> linphone::Core::invite(const std::string & url) {
	return Object::cPtrToSharedPtr<linphone::Call>(linphone_core_invite((::LinphoneCore *)mPrivPtr, StringUtilities::cppStringToC(url)));
}
std::shared_ptr<linphone::Call> linphone::Core::inviteAddress(const std::shared_ptr<const linphone::Address> & addr) {
	return Object::cPtrToSharedPtr<linphone::Call>(linphone_core_invite_address((::LinphoneCore *)mPrivPtr, (::LinphoneAddress *)Object::sharedPtrToCPtr(std::static_pointer_cast<const Object,const linphone::Address>(addr))));
}
std::shared_ptr<linphone::Call> linphone::Core::inviteAddressWithParams(const std::shared_ptr<const linphone::Address> & addr, const std::shared_ptr<const linphone::CallParams> & params) {
	return Object::cPtrToSharedPtr<linphone::Call>(linphone_core_invite_address_with_params((::LinphoneCore *)mPrivPtr, (::LinphoneAddress *)Object::sharedPtrToCPtr(std::static_pointer_cast<const Object,const linphone::Address>(addr)), (::LinphoneCallParams *)Object::sharedPtrToCPtr(std::static_pointer_cast<const Object,const linphone::CallParams>(params))));
}
std::shared_ptr<linphone::Call> linphone::Core::inviteAddressWithParams(const std::shared_ptr<const linphone::Address> & addr, const std::shared_ptr<const linphone::CallParams> & params, const std::string & subject, const std::shared_ptr<const linphone::Content> & content) {
	return Object::cPtrToSharedPtr<linphone::Call>(linphone_core_invite_address_with_params_2((::LinphoneCore *)mPrivPtr, (::LinphoneAddress *)Object::sharedPtrToCPtr(std::static_pointer_cast<const Object,const linphone::Address>(addr)), (::LinphoneCallParams *)Object::sharedPtrToCPtr(std::static_pointer_cast<const Object,const linphone::CallParams>(params)), StringUtilities::cppStringToC(subject), (::LinphoneContent *)Object::sharedPtrToCPtr(std::static_pointer_cast<const Object,const linphone::Content>(content))));
}
std::shared_ptr<linphone::Call> linphone::Core::inviteWithParams(const std::string & url, const std::shared_ptr<const linphone::CallParams> & params) {
	return Object::cPtrToSharedPtr<linphone::Call>(linphone_core_invite_with_params((::LinphoneCore *)mPrivPtr, StringUtilities::cppStringToC(url), (::LinphoneCallParams *)Object::sharedPtrToCPtr(std::static_pointer_cast<const Object,const linphone::CallParams>(params))));
}
bool linphone::Core::isContentTypeSupported(const std::string & contentType) const {
	return (linphone_core_is_content_type_supported((::LinphoneCore *)mPrivPtr, StringUtilities::cppStringToC(contentType)) != FALSE);
}
bool linphone::Core::isMediaEncryptionSupported(linphone::MediaEncryption menc) {
	return (linphone_core_is_media_encryption_supported((::LinphoneCore *)mPrivPtr, (::LinphoneMediaEncryption)menc) != FALSE);
}
bool linphone::Core::isMediaFilterSupported(const std::string & filtername) {
	return (linphone_core_is_media_filter_supported((::LinphoneCore *)mPrivPtr, StringUtilities::cppStringToC(filtername)) != FALSE);
}
bool linphone::Core::isPluginLoaded(const std::string & name) const {
	return (linphone_core_is_plugin_loaded((::LinphoneCore *)mPrivPtr, StringUtilities::cppStringToC(name)) != FALSE);
}
void linphone::Core::iterate() {
	linphone_core_iterate((::LinphoneCore *)mPrivPtr);
}
bool linphone::Core::ldapAvailable() {
	return (linphone_core_ldap_available((::LinphoneCore *)mPrivPtr) != FALSE);
}
linphone::Status linphone::Core::leaveConference() {
	return linphone_core_leave_conference((::LinphoneCore *)mPrivPtr);
}
bool linphone::Core::limeX3DhAvailable() const {
	return (linphone_core_lime_x3dh_available((::LinphoneCore *)mPrivPtr) != FALSE);
}
void linphone::Core::loadConfigFromXml(const std::string & xmlUri) {
	linphone_core_load_config_from_xml((::LinphoneCore *)mPrivPtr, StringUtilities::cppStringToC(xmlUri));
}
bool linphone::Core::mediaEncryptionSupported(linphone::MediaEncryption menc) {
	return (linphone_core_media_encryption_supported((::LinphoneCore *)mPrivPtr, (::LinphoneMediaEncryption)menc) != FALSE);
}
void linphone::Core::migrateLogsFromRcToDb() {
	linphone_core_migrate_logs_from_rc_to_db((::LinphoneCore *)mPrivPtr);
}
linphone::Status linphone::Core::migrateToMultiTransport() {
	return linphone_core_migrate_to_multi_transport((::LinphoneCore *)mPrivPtr);
}
void linphone::Core::notifyAllFriends(const std::shared_ptr<linphone::PresenceModel> & presence) {
	linphone_core_notify_all_friends((::LinphoneCore *)mPrivPtr, (::LinphonePresenceModel *)Object::sharedPtrToCPtr(std::static_pointer_cast<Object,linphone::PresenceModel>(presence)));
}
void linphone::Core::notifyNotifyPresenceReceived(const std::shared_ptr<linphone::Friend> & linphoneFriend) {
	linphone_core_notify_notify_presence_received((::LinphoneCore *)mPrivPtr, (::LinphoneFriend *)Object::sharedPtrToCPtr(std::static_pointer_cast<Object,linphone::Friend>(linphoneFriend)));
}
void linphone::Core::notifyNotifyPresenceReceivedForUriOrTel(const std::shared_ptr<linphone::Friend> & linphoneFriend, const std::string & uriOrTel, const std::shared_ptr<const linphone::PresenceModel> & presenceModel) {
	linphone_core_notify_notify_presence_received_for_uri_or_tel((::LinphoneCore *)mPrivPtr, (::LinphoneFriend *)Object::sharedPtrToCPtr(std::static_pointer_cast<Object,linphone::Friend>(linphoneFriend)), StringUtilities::cppStringToC(uriOrTel), (::LinphonePresenceModel *)Object::sharedPtrToCPtr(std::static_pointer_cast<const Object,const linphone::PresenceModel>(presenceModel)));
}
linphone::Status linphone::Core::pauseAllCalls() {
	return linphone_core_pause_all_calls((::LinphoneCore *)mPrivPtr);
}
void linphone::Core::playDtmf(char dtmf, int durationMs) {
	linphone_core_play_dtmf((::LinphoneCore *)mPrivPtr, dtmf, durationMs);
}
linphone::Status linphone::Core::playLocal(const std::string & audiofile) {
	return linphone_core_play_local((::LinphoneCore *)mPrivPtr, StringUtilities::cppStringToC(audiofile));
}
int linphone::Core::preemptSoundResources() {
	return linphone_core_preempt_sound_resources((::LinphoneCore *)mPrivPtr);
}
void linphone::Core::previewOglRender() const {
	linphone_core_preview_ogl_render((::LinphoneCore *)mPrivPtr);
}
void linphone::Core::processPushNotification(const std::string & callId) {
	linphone_core_process_push_notification((::LinphoneCore *)mPrivPtr, StringUtilities::cppStringToC(callId));
}
std::shared_ptr<linphone::Event> linphone::Core::publish(const std::shared_ptr<linphone::Address> & resource, const std::string & event, int expires, const std::shared_ptr<const linphone::Content> & body) {
	return Object::cPtrToSharedPtr<linphone::Event>(linphone_core_publish((::LinphoneCore *)mPrivPtr, (::LinphoneAddress *)Object::sharedPtrToCPtr(std::static_pointer_cast<Object,linphone::Address>(resource)), StringUtilities::cppStringToC(event), expires, (::LinphoneContent *)Object::sharedPtrToCPtr(std::static_pointer_cast<const Object,const linphone::Content>(body))));
}
unsigned int linphone::Core::realtimeTextGetKeepaliveInterval() const {
	return linphone_core_realtime_text_get_keepalive_interval((::LinphoneCore *)mPrivPtr);
}
void linphone::Core::realtimeTextSetKeepaliveInterval(unsigned int interval) {
	linphone_core_realtime_text_set_keepalive_interval((::LinphoneCore *)mPrivPtr, interval);
}
void linphone::Core::refreshRegisters() {
	linphone_core_refresh_registers((::LinphoneCore *)mPrivPtr);
}
void linphone::Core::rejectSubscriber(const std::shared_ptr<linphone::Friend> & linphoneFriend) {
	linphone_core_reject_subscriber((::LinphoneCore *)mPrivPtr, (::LinphoneFriend *)Object::sharedPtrToCPtr(std::static_pointer_cast<Object,linphone::Friend>(linphoneFriend)));
}
void linphone::Core::reloadMsPlugins(const std::string & path) {
	linphone_core_reload_ms_plugins((::LinphoneCore *)mPrivPtr, StringUtilities::cppStringToC(path));
}
void linphone::Core::reloadSoundDevices() {
	linphone_core_reload_sound_devices((::LinphoneCore *)mPrivPtr);
}
void linphone::Core::reloadVideoDevices() {
	linphone_core_reload_video_devices((::LinphoneCore *)mPrivPtr);
}
void linphone::Core::removeAccount(const std::shared_ptr<linphone::Account> & account) {
	linphone_core_remove_account((::LinphoneCore *)mPrivPtr, (::LinphoneAccount *)Object::sharedPtrToCPtr(std::static_pointer_cast<Object,linphone::Account>(account)));
}
void linphone::Core::removeAuthInfo(const std::shared_ptr<const linphone::AuthInfo> & info) {
	linphone_core_remove_auth_info((::LinphoneCore *)mPrivPtr, (::LinphoneAuthInfo *)Object::sharedPtrToCPtr(std::static_pointer_cast<const Object,const linphone::AuthInfo>(info)));
}
void linphone::Core::removeCallLog(const std::shared_ptr<linphone::CallLog> & callLog) {
	linphone_core_remove_call_log((::LinphoneCore *)mPrivPtr, (::LinphoneCallLog *)Object::sharedPtrToCPtr(std::static_pointer_cast<Object,linphone::CallLog>(callLog)));
}
void linphone::Core::removeContentTypeSupport(const std::string & contentType) {
	linphone_core_remove_content_type_support((::LinphoneCore *)mPrivPtr, StringUtilities::cppStringToC(contentType));
}
void linphone::Core::removeFriendList(const std::shared_ptr<linphone::FriendList> & list) {
	linphone_core_remove_friend_list((::LinphoneCore *)mPrivPtr, (::LinphoneFriendList *)Object::sharedPtrToCPtr(std::static_pointer_cast<Object,linphone::FriendList>(list)));
}
linphone::Status linphone::Core::removeFromConference(const std::shared_ptr<linphone::Call> & call) {
	return linphone_core_remove_from_conference((::LinphoneCore *)mPrivPtr, (::LinphoneCall *)Object::sharedPtrToCPtr(std::static_pointer_cast<Object,linphone::Call>(call)));
}
void linphone::Core::removeLdap(const std::shared_ptr<linphone::Ldap> & ldap) {
	linphone_core_remove_ldap((::LinphoneCore *)mPrivPtr, (::LinphoneLdap *)Object::sharedPtrToCPtr(std::static_pointer_cast<Object,linphone::Ldap>(ldap)));
}
void linphone::Core::removeLinphoneSpec(const std::string & spec) {
	linphone_core_remove_linphone_spec((::LinphoneCore *)mPrivPtr, StringUtilities::cppStringToC(spec));
}
void linphone::Core::removeProxyConfig(const std::shared_ptr<linphone::ProxyConfig> & config) {
	linphone_core_remove_proxy_config((::LinphoneCore *)mPrivPtr, (::LinphoneProxyConfig *)Object::sharedPtrToCPtr(std::static_pointer_cast<Object,linphone::ProxyConfig>(config)));
}
void linphone::Core::removeSupportedTag(const std::string & tag) {
	linphone_core_remove_supported_tag((::LinphoneCore *)mPrivPtr, StringUtilities::cppStringToC(tag));
}
void linphone::Core::resetEchoCancellationCalibration() {
	linphone_core_reset_echo_cancellation_calibration((::LinphoneCore *)mPrivPtr);
}
void linphone::Core::resetMissedCallsCount() {
	linphone_core_reset_missed_calls_count((::LinphoneCore *)mPrivPtr);
}
std::shared_ptr<linphone::ChatRoom> linphone::Core::searchChatRoom(const std::shared_ptr<const linphone::ChatRoomParams> & params, const std::shared_ptr<const linphone::Address> & localAddr, const std::shared_ptr<const linphone::Address> & remoteAddr, const std::list<std::shared_ptr<linphone::Address>> & participants) const {
	return Object::cPtrToSharedPtr<linphone::ChatRoom>(linphone_core_search_chat_room((::LinphoneCore *)mPrivPtr, (::LinphoneChatRoomParams *)Object::sharedPtrToCPtr(std::static_pointer_cast<const Object,const linphone::ChatRoomParams>(params)), (::LinphoneAddress *)Object::sharedPtrToCPtr(std::static_pointer_cast<const Object,const linphone::Address>(localAddr)), (::LinphoneAddress *)Object::sharedPtrToCPtr(std::static_pointer_cast<const Object,const linphone::Address>(remoteAddr)), ObjectBctbxListWrapper<linphone::Address>(participants).c_list()));
}
std::shared_ptr<linphone::Conference> linphone::Core::searchConference(const std::shared_ptr<const linphone::ConferenceParams> & params, const std::shared_ptr<const linphone::Address> & localAddr, const std::shared_ptr<const linphone::Address> & remoteAddr, const std::list<std::shared_ptr<linphone::Address>> & participants) const {
	return Object::cPtrToSharedPtr<linphone::Conference>(linphone_core_search_conference((::LinphoneCore *)mPrivPtr, (::LinphoneConferenceParams *)Object::sharedPtrToCPtr(std::static_pointer_cast<const Object,const linphone::ConferenceParams>(params)), (::LinphoneAddress *)Object::sharedPtrToCPtr(std::static_pointer_cast<const Object,const linphone::Address>(localAddr)), (::LinphoneAddress *)Object::sharedPtrToCPtr(std::static_pointer_cast<const Object,const linphone::Address>(remoteAddr)), ObjectBctbxListWrapper<linphone::Address>(participants).c_list()));
}
std::shared_ptr<linphone::Conference> linphone::Core::searchConference(const std::shared_ptr<const linphone::Address> & conferenceAddr) const {
	return Object::cPtrToSharedPtr<linphone::Conference>(linphone_core_search_conference_2((::LinphoneCore *)mPrivPtr, (::LinphoneAddress *)Object::sharedPtrToCPtr(std::static_pointer_cast<const Object,const linphone::Address>(conferenceAddr))));
}
void linphone::Core::setAudioPortRange(int minPort, int maxPort) {
	linphone_core_set_audio_port_range((::LinphoneCore *)mPrivPtr, minPort, maxPort);
}
void linphone::Core::setQrcodeDecodeRect(const int x, const int y, const int w, const int h) {
	linphone_core_set_qrcode_decode_rect((::LinphoneCore *)mPrivPtr, x, y, w, h);
}
void linphone::Core::setTextPortRange(int minPort, int maxPort) {
	linphone_core_set_text_port_range((::LinphoneCore *)mPrivPtr, minPort, maxPort);
}
void linphone::Core::setTone(linphone::ToneID toneId, const std::string & audiofile) {
	linphone_core_set_tone((::LinphoneCore *)mPrivPtr, (::LinphoneToneID)toneId, StringUtilities::cppStringToC(audiofile));
}
void linphone::Core::setUserAgent(const std::string & name, const std::string & version) {
	linphone_core_set_user_agent((::LinphoneCore *)mPrivPtr, StringUtilities::cppStringToC(name), StringUtilities::cppStringToC(version));
}
void linphone::Core::setVideoPortRange(int minPort, int maxPort) {
	linphone_core_set_video_port_range((::LinphoneCore *)mPrivPtr, minPort, maxPort);
}
bool linphone::Core::soundDeviceCanCapture(const std::string & device) {
	return (linphone_core_sound_device_can_capture((::LinphoneCore *)mPrivPtr, StringUtilities::cppStringToC(device)) != FALSE);
}
bool linphone::Core::soundDeviceCanPlayback(const std::string & device) {
	return (linphone_core_sound_device_can_playback((::LinphoneCore *)mPrivPtr, StringUtilities::cppStringToC(device)) != FALSE);
}
bool linphone::Core::soundResourcesLocked() {
	return (linphone_core_sound_resources_locked((::LinphoneCore *)mPrivPtr) != FALSE);
}
linphone::Status linphone::Core::start() {
	return linphone_core_start((::LinphoneCore *)mPrivPtr);
}
linphone::Status linphone::Core::startConferenceRecording(const std::string & path) {
	return linphone_core_start_conference_recording((::LinphoneCore *)mPrivPtr, StringUtilities::cppStringToC(path));
}
linphone::Status linphone::Core::startEchoCancellerCalibration() {
	return linphone_core_start_echo_canceller_calibration((::LinphoneCore *)mPrivPtr);
}
linphone::Status linphone::Core::startEchoTester(unsigned int rate) {
	return linphone_core_start_echo_tester((::LinphoneCore *)mPrivPtr, rate);
}
void linphone::Core::stop() {
	linphone_core_stop((::LinphoneCore *)mPrivPtr);
}
void linphone::Core::stopAsync() {
	linphone_core_stop_async((::LinphoneCore *)mPrivPtr);
}
linphone::Status linphone::Core::stopConferenceRecording() {
	return linphone_core_stop_conference_recording((::LinphoneCore *)mPrivPtr);
}
void linphone::Core::stopDtmf() {
	linphone_core_stop_dtmf((::LinphoneCore *)mPrivPtr);
}
linphone::Status linphone::Core::stopEchoTester() {
	return linphone_core_stop_echo_tester((::LinphoneCore *)mPrivPtr);
}
void linphone::Core::stopRinging() {
	linphone_core_stop_ringing((::LinphoneCore *)mPrivPtr);
}
std::shared_ptr<linphone::Event> linphone::Core::subscribe(const std::shared_ptr<linphone::Address> & resource, const std::string & event, int expires, const std::shared_ptr<const linphone::Content> & body) {
	return Object::cPtrToSharedPtr<linphone::Event>(linphone_core_subscribe((::LinphoneCore *)mPrivPtr, (::LinphoneAddress *)Object::sharedPtrToCPtr(std::static_pointer_cast<Object,linphone::Address>(resource)), StringUtilities::cppStringToC(event), expires, (::LinphoneContent *)Object::sharedPtrToCPtr(std::static_pointer_cast<const Object,const linphone::Content>(body))));
}
linphone::Status linphone::Core::takePreviewSnapshot(const std::string & file) {
	return linphone_core_take_preview_snapshot((::LinphoneCore *)mPrivPtr, StringUtilities::cppStringToC(file));
}
linphone::Status linphone::Core::terminateAllCalls() {
	return linphone_core_terminate_all_calls((::LinphoneCore *)mPrivPtr);
}
linphone::Status linphone::Core::terminateConference() {
	return linphone_core_terminate_conference((::LinphoneCore *)mPrivPtr);
}
void linphone::Core::uploadLogCollection() {
	linphone_core_upload_log_collection((::LinphoneCore *)mPrivPtr);
}
void linphone::Core::usePreviewWindow(bool yesno) {
	linphone_core_use_preview_window((::LinphoneCore *)mPrivPtr, yesno);
}
void linphone::Core::verifyServerCertificates(bool yesno) {
	linphone_core_verify_server_certificates((::LinphoneCore *)mPrivPtr, yesno);
}
void linphone::Core::verifyServerCn(bool yesno) {
	linphone_core_verify_server_cn((::LinphoneCore *)mPrivPtr, yesno);
}
bool linphone::Core::videoSupported() {
	return (linphone_core_video_supported((::LinphoneCore *)mPrivPtr) != FALSE);
}

std::string linphone::Core::compressLogCollection() {
	return StringUtilities::cStringToCpp(linphone_core_compress_log_collection());
}
void linphone::Core::enableLogCollection(linphone::LogCollectionState state) {
	linphone_core_enable_log_collection((::LinphoneLogCollectionState)state);
}
size_t linphone::Core::getLogCollectionMaxFileSize() {
	return linphone_core_get_log_collection_max_file_size();
}
std::string linphone::Core::getLogCollectionPath() {
	return StringUtilities::cStringToCpp(linphone_core_get_log_collection_path());
}
std::string linphone::Core::getLogCollectionPrefix() {
	return StringUtilities::cStringToCpp(linphone_core_get_log_collection_prefix());
}
bool linphone::Core::getPostQuantumAvailable() {
	return (linphone_core_get_post_quantum_available() != FALSE);
}
std::string linphone::Core::getVersion() {
	return StringUtilities::cStringToCpp(linphone_core_get_version());
}
linphone::LogCollectionState linphone::Core::logCollectionEnabled() {
	return (linphone::LogCollectionState)linphone_core_log_collection_enabled();
}
void linphone::Core::resetLogCollection() {
	linphone_core_reset_log_collection();
}
void linphone::Core::serializeLogs() {
	linphone_core_serialize_logs();
}
void linphone::Core::setLogCollectionMaxFileSize(size_t size) {
	linphone_core_set_log_collection_max_file_size(size);
}
void linphone::Core::setLogCollectionPath(const std::string & path) {
	linphone_core_set_log_collection_path(StringUtilities::cppStringToC(path));
}
void linphone::Core::setLogCollectionPrefix(const std::string & prefix) {
	linphone_core_set_log_collection_prefix(StringUtilities::cppStringToC(prefix));
}
bool linphone::Core::tunnelAvailable() {
	return (linphone_core_tunnel_available() != FALSE);
}
bool linphone::Core::upnpAvailable() {
	return (linphone_core_upnp_available() != FALSE);
}
bool linphone::Core::vcardSupported() {
	return (linphone_core_vcard_supported() != FALSE);
}



linphone::Ldap::Ldap(void *ptr, bool takeRef): Object(ptr, takeRef) {
}



std::shared_ptr<linphone::Core> linphone::Ldap::getCore() {
	return Object::cPtrToSharedPtr<linphone::Core>(linphone_ldap_get_core((::LinphoneLdap *)mPrivPtr));
}
int linphone::Ldap::getIndex() const {
	return linphone_ldap_get_index((::LinphoneLdap *)mPrivPtr);
}
void linphone::Ldap::setIndex(int index) {
	linphone_ldap_set_index((::LinphoneLdap *)mPrivPtr, index);
}
std::shared_ptr<const linphone::LdapParams> linphone::Ldap::getParams() {
	return Object::cPtrToSharedPtr<const linphone::LdapParams>(linphone_ldap_get_params((::LinphoneLdap *)mPrivPtr));
}
void linphone::Ldap::setParams(const std::shared_ptr<linphone::LdapParams> & params) {
	linphone_ldap_set_params((::LinphoneLdap *)mPrivPtr, (::LinphoneLdapParams *)Object::sharedPtrToCPtr(std::static_pointer_cast<Object,linphone::LdapParams>(params)));
}

std::shared_ptr<linphone::Ldap> linphone::Ldap::newWithParams(const std::shared_ptr<linphone::Core> & lc, const std::shared_ptr<linphone::LdapParams> & params) {
	return Object::cPtrToSharedPtr<linphone::Ldap>(linphone_ldap_new_with_params((::LinphoneCore *)Object::sharedPtrToCPtr(std::static_pointer_cast<Object,linphone::Core>(lc)), (::LinphoneLdapParams *)Object::sharedPtrToCPtr(std::static_pointer_cast<Object,linphone::LdapParams>(params))), false);
}


#ifndef _MSC_VER
#pragma GCC diagnostic pop
#endif // _MSC_VER
