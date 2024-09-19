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

#ifndef _FACTORY_HH
#define _FACTORY_HH

#include <string>
#include <list>
#include <cstdint>
#include "enums.hh"
#include "chat_room.hh"
#include "object.hh"




struct _LinphoneFactory;


namespace linphone {

	class DialPlan;
	class VideoDefinition;
	class Factory;
	class Address;
	class AuthInfo;
	class Buffer;
	class ConferenceInfo;
	class Content;
	class Config;
	class Core;
	class DigestAuthenticationPolicy;
	class ErrorInfo;
	class FriendPhoneNumber;
	class ParticipantDeviceIdentity;
	class ParticipantInfo;
	class Range;
	class SignalInformation;
	class Transports;
	class TunnelConfig;
	class Vcard;
	class VideoActivationPolicy;
	class VideoSourceDescriptor;

	/**
	 * @brief The factory is a singleton object devoted to the creation of all the
	 * objects of Liblinphone that cannot be created by @ref Core itself. 
	 *
	 * It is also used to configure a few behaviors before creating the @ref Core,
	 * like the logs verbosity or collection. 
	 */
	class Factory: public Object {
	
		public:

			LINPHONECXX_PUBLIC Factory(void *ptr, bool takeRef=true);
			LINPHONECXX_PUBLIC _LinphoneFactory *cPtr() {return (_LinphoneFactory *)mPrivPtr;}

	
		public:
			
		
			/**
			 * @brief Set the directory where the application local cache is located. 
			 *
			 * If the path is empty (default value), the path will be computed when calling
			 * getDataDir() 
			 * @param path The path to the directory where the application local cache is
			 * located    
			 */
			LINPHONECXX_PUBLIC void setCacheDir(const std::string & path);
			
			/**
			 * @brief Set the directory where the configurations are located. 
			 *
			 * If the path is empty (default value), the path will be computed when calling
			 * getConfigDir() 
			 * @param path The path to the directory where the configurations are located    
			 */
			LINPHONECXX_PUBLIC void setConfigDir(const std::string & path);
			
			/**
			 * @brief Set the directory where the application local data are located. 
			 *
			 * If the path is empty (default value), the path will be computed when calling
			 * getDataDir() 
			 * @param path The path to the directory where the application local data are
			 * located    
			 */
			LINPHONECXX_PUBLIC void setDataDir(const std::string & path);
			
			/**
			 * @brief Get the directory where the data resources are located. 
			 *
			 * @return The path to the directory where the data resources are located    
			 */
			LINPHONECXX_PUBLIC std::string getDataResourcesDir();
			
			/**
			 * @brief Set the directory where the data resources are located. 
			 *
			 * @param path The path where the data resources are located    
			 */
			LINPHONECXX_PUBLIC void setDataResourcesDir(const std::string & path);
			
			/**
			 * @brief Returns a bctbx_list_t of all DialPlans. 
			 *
			 * @return A list of @ref DialPlan      
			 */
			LINPHONECXX_PUBLIC std::list<std::shared_ptr<linphone::DialPlan>> getDialPlans() const;
			
			/**
			 * @brief Set the directory where downloads are located. 
			 *
			 * If the path is empty (default value), the path will be computed when calling
			 * getDownloadDir() 
			 * @param path The path to the directory where downloads are located    
			 */
			LINPHONECXX_PUBLIC void setDownloadDir(const std::string & path);
			
			/**
			 * @brief Get the directory where the image resources are located. 
			 *
			 * @return The path to the directory where the image resources are located    
			 */
			LINPHONECXX_PUBLIC std::string getImageResourcesDir();
			
			/**
			 * @brief Set the directory where the image resources are located. 
			 *
			 * @param path The path where the image resources are located    
			 */
			LINPHONECXX_PUBLIC void setImageResourcesDir(const std::string & path);
			
			/**
			 * @brief Test if cache dir has been set. 
			 *
			 * @return true if cache dir has been set. 
			 */
			LINPHONECXX_PUBLIC bool isCacheDirSet() const;
			
			/**
			 * @brief Test if config dir has been set. 
			 *
			 * @return true if config dir has been set. 
			 */
			LINPHONECXX_PUBLIC bool isConfigDirSet() const;
			
			/**
			 * @brief Test if data dir has been set. 
			 *
			 * @return true if data dir has been set. 
			 */
			LINPHONECXX_PUBLIC bool isDataDirSet() const;
			
			/**
			 * @brief Indicates if the storage in database is available. 
			 *
			 * @return true if the database storage is available, false otherwise 
			 */
			LINPHONECXX_PUBLIC bool isDatabaseStorageAvailable();
			
			/**
			 * @brief Test if download dir has been set. 
			 *
			 * @return true if download dir has been set. 
			 */
			LINPHONECXX_PUBLIC bool isDownloadDirSet() const;
			
			/**
			 * @brief Indicates if IMDN are available. 
			 *
			 * @return true if IDMN are available 
			 */
			LINPHONECXX_PUBLIC bool isImdnAvailable();
			
			/**
			 * @brief Indicates if the QRCode feature is available. 
			 *
			 * @return true if QRCodes can be used 
			 */
			LINPHONECXX_PUBLIC bool isQrcodeAvailable();
			
			/**
			 * @brief Get the directory where the liblinphone plugins are located. 
			 *
			 * @return The path to the directory where the liblinphone plugins are located, or
			 * nullptr if it has not been set.    
			 */
			LINPHONECXX_PUBLIC std::string getLiblinphonePluginsDir();
			
			/**
			 * @brief Set the directory where the liblinphone plugins are located. 
			 *
			 * @param path The path to the directory where the liblinphone plugins are located
			 *    
			 */
			LINPHONECXX_PUBLIC void setLiblinphonePluginsDir(const std::string & path);
			
			/**
			 * @brief Sets the log collection path. 
			 *
			 * @param path the path of the logs    
			 */
			LINPHONECXX_PUBLIC void setLogCollectionPath(const std::string & path);
			
			/**
			 * @brief Get the directory where the mediastreamer2 plugins are located. 
			 *
			 * @return The path to the directory where the mediastreamer2 plugins are located,
			 * or nullptr if it has not been set.    
			 */
			LINPHONECXX_PUBLIC std::string getMspluginsDir();
			
			/**
			 * @brief Set the directory where the mediastreamer2 plugins are located. 
			 *
			 * @param path The path to the directory where the mediastreamer2 plugins are
			 * located    
			 */
			LINPHONECXX_PUBLIC void setMspluginsDir(const std::string & path);
			
			/**
			 * @brief Get the recommended list of standard video definitions. 
			 *
			 * This list is suitable for a widest set of hardware for all video codec
			 * implementations, and thus excludes some very high definition formats that are
			 * unlikely to work unless specific hardware or codecs are used. 
			 * @return A list of video definitions.      
			 */
			LINPHONECXX_PUBLIC std::list<std::shared_ptr<linphone::VideoDefinition>> getRecommendedVideoDefinitions() const;
			
			/**
			 * @brief Get the directory where the ring resources are located. 
			 *
			 * @return The path to the directory where the ring resources are located    
			 */
			LINPHONECXX_PUBLIC std::string getRingResourcesDir();
			
			/**
			 * @brief Set the directory where the ring resources are located. 
			 *
			 * @param path The path where the ring resources are located    
			 */
			LINPHONECXX_PUBLIC void setRingResourcesDir(const std::string & path);
			
			/**
			 * @brief Get the directory where the sound resources are located. 
			 *
			 * @return The path to the directory where the sound resources are located    
			 */
			LINPHONECXX_PUBLIC std::string getSoundResourcesDir();
			
			/**
			 * @brief Set the directory where the sound resources are located. 
			 *
			 * @param path The path where the sound resources are located    
			 */
			LINPHONECXX_PUBLIC void setSoundResourcesDir(const std::string & path);
			
			/**
			 * @brief Get the list of standard video definitions supported by Linphone. 
			 *
			 * @return A list of video definitions.      
			 */
			LINPHONECXX_PUBLIC std::list<std::shared_ptr<linphone::VideoDefinition>> getSupportedVideoDefinitions() const;
			
			/**
			 * @brief Get the top directory where the resources are located. 
			 *
			 * @return The path to the top directory where the resources are located    
			 */
			LINPHONECXX_PUBLIC std::string getTopResourcesDir() const;
			
			/**
			 * @brief Set the top directory where the resources are located. 
			 *
			 * If you only define this top directory, the other resources directory will
			 * automatically be derived form this one. 
			 * @param path The path to the top directory where the resources are located    
			 */
			LINPHONECXX_PUBLIC void setTopResourcesDir(const std::string & path);
			
			/**
			 * @brief Computes the hashed version of the password given the user ID and the
			 * realm, using given algorithm. 
			 *
			 * @param userid the username or user ID to use.    
			 * @param password the password to hash.    
			 * @param realm the real to use.    
			 * @param algorithm the algorithm to use (MD5 or SHA-256).    
			 * @return the generated hash if it succeeded, nullptr otherwise.       
			 */
			LINPHONECXX_PUBLIC std::string computeHa1ForAlgorithm(const std::string & userid, const std::string & password, const std::string & realm, const std::string & algorithm) const;
			
			/**
			 * @brief Parse a string holding a SIP URI and create the according @ref Address
			 * object. 
			 *
			 * @param addr A string holding the SIP URI to parse.    
			 * @return A new @ref Address.    
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<linphone::Address> createAddress(const std::string & addr) const;
			
			/**
			 * @brief Creates a @ref AuthInfo object. 
			 *
			 * The object can be created empty, that is with all arguments set to nullptr.
			 * Username, userid, password, realm and domain can be set later using specific
			 * methods. At the end, username and passwd (or ha1) are required. 
			 * @param username The username that needs to be authenticated    
			 * @param userid The userid used for authenticating (use nullptr if you don't know
			 * what it is)    
			 * @param passwd The password in clear text    
			 * @param ha1 The ha1-encrypted password if password is not given in clear text.  
			 *  
			 * @param realm The authentication domain (which can be larger than the sip
			 * domain. Unfortunately many SIP servers don't use this parameter.    
			 * @param domain The SIP domain for which this authentication information is
			 * valid, if it has to be restricted for a single SIP domain.    
			 * @return A @ref AuthInfo object. linphone_auth_info_destroy must be used to
			 * destroy it when no longer needed. The @ref Core makes a copy of @ref AuthInfo
			 * passed through Core::addAuthInfo().    
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<linphone::AuthInfo> createAuthInfo(const std::string & username, const std::string & userid, const std::string & passwd, const std::string & ha1, const std::string & realm, const std::string & domain) const;
			
			/**
			 * @brief Creates a @ref AuthInfo object. 
			 *
			 * The object can be created empty, that is with all arguments set to nullptr.
			 * Username, userid, password, realm and domain can be set later using specific
			 * methods. At the end, username and passwd (or ha1) are required. 
			 * @param username The username that needs to be authenticated    
			 * @param userid The userid used for authenticating (use nullptr if you don't know
			 * what it is)    
			 * @param passwd The password in clear text    
			 * @param ha1 The ha1-encrypted password if password is not given in clear text.  
			 *  
			 * @param realm The authentication domain (which can be larger than the sip
			 * domain. Unfortunately many SIP servers don't use this parameter.    
			 * @param domain The SIP domain for which this authentication information is
			 * valid, if it has to be restricted for a single SIP domain.    
			 * @param algorithm The algorithm for encrypting password.    
			 * @return A @ref AuthInfo object. linphone_auth_info_destroy must be used to
			 * destroy it when no longer needed. The @ref Core makes a copy of @ref AuthInfo
			 * passed through Core::addAuthInfo().    
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<linphone::AuthInfo> createAuthInfo(const std::string & username, const std::string & userid, const std::string & passwd, const std::string & ha1, const std::string & realm, const std::string & domain, const std::string & algorithm) const;
			
			/**
			 * @brief Creates an object @ref Buffer. 
			 *
			 * @return a @ref Buffer    
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<linphone::Buffer> createBuffer();
			
			/**
			 * @brief Creates an object @ref Buffer. 
			 *
			 * @param data the data to set in the buffer    
			 * @param size the size of the data 
			 * @return a @ref Buffer    
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<linphone::Buffer> createBufferFromData(const uint8_t * data, size_t size);
			
			/**
			 * @brief Creates an object @ref Buffer. 
			 *
			 * @param data the data to set in the buffer    
			 * @return a @ref Buffer    
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<linphone::Buffer> createBufferFromString(const std::string & data);
			
			/**
			 * @brief Creates an object @ref ConferenceInfo. 
			 *
			 * @return a @ref ConferenceInfo    
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<linphone::ConferenceInfo> createConferenceInfo();
			
			/**
			 * @brief Creates an object @ref ConferenceInfo from an Icalendar @ref Content. 
			 *
			 * @param content the Icalendar @ref Content    
			 * @return a @ref ConferenceInfo created from an Icalendar @ref Content    
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<linphone::ConferenceInfo> createConferenceInfoFromIcalendarContent(const std::shared_ptr<linphone::Content> & content);
			
			/**
			 * @brief Creates an object @ref Config. 
			 *
			 * @param path the path of the config    
			 * @return a @ref Config    
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<linphone::Config> createConfig(const std::string & path);
			
			/**
			 * @brief Creates an object @ref Config. 
			 *
			 * @param data the config data    
			 * @return a @ref Config    
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<linphone::Config> createConfigFromString(const std::string & data);
			
			/**
			 * @brief Creates an object @ref Config. 
			 *
			 * @param path the path of the config    
			 * @param factoryPath the path of the factory    
			 * @return a @ref Config    
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<linphone::Config> createConfigWithFactory(const std::string & path, const std::string & factoryPath);
			
			/**
			 * @brief Creates an object @ref Content. 
			 *
			 * @return a @ref Content    
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<linphone::Content> createContent();
			
			/**
			 * @brief Creates a file object of @ref Content from a file path. 
			 *
			 * @param filePath the path of the file    
			 * @return a @ref Content which can be used as a file    
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<linphone::Content> createContentFromFile(const std::string & filePath);
			
			/**
			 * @brief Instantiate a @ref Core object. 
			 *
			 * The @ref Core object is the primary handle for doing all phone actions. It
			 * should be unique within your application. The @ref Core object is not started
			 * automatically, you need to call Core::start() to that effect. The returned @ref
			 * Core will be in @ref GlobalState Ready. Core ressources can be released using
			 * Core::stop() which is strongly encouraged on garbage collected languages. 
			 * @param configPath A path to a config file. If it does not exists it will be
			 * created. The config file is used to store all settings, proxies... so that all
			 * these settings become persistent over the life of the @ref Core object. It is
			 * allowed to set a nullptr config file. In that case @ref Core will not store any
			 * settings.    
			 * @param factoryConfigPath A path to a read-only config file that can be used to
			 * store hard-coded preferences such as proxy settings or internal preferences.
			 * The settings in this factory file always override the ones in the normal config
			 * file. It is optional, use nullptr if unneeded.    
			 * @param systemContext A pointer to a system object required by the core to
			 * operate. Currently it is required to pass an android Context on android, pass
			 * nullptr on other platforms.    
			 * @return a @ref Core object    
			 * @see linphone_core_new_with_config_3() 
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<linphone::Core> createCore(const std::string & configPath, const std::string & factoryConfigPath, void * systemContext) const;
			
			/**
			 * @brief Instantiate a @ref Core object with a given LinphoneConfig. 
			 *
			 * The @ref Core object is the primary handle for doing all phone actions. It
			 * should be unique within your application. The @ref Core object is not started
			 * automatically, you need to call Core::start() to that effect. The returned @ref
			 * Core will be in @ref GlobalState Ready. Core ressources can be released using
			 * Core::stop() which is strongly encouraged on garbage collected languages. 
			 * @param config A @ref Config object holding the configuration for the @ref Core
			 * to be instantiated.    
			 * @param systemContext A pointer to a system object required by the core to
			 * operate. Currently it is required to pass an android Context on android, pass
			 * nullptr on other platforms.    
			 * @return a @ref Core object    
			 * @see createCore() 
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<linphone::Core> createCoreWithConfig(const std::shared_ptr<linphone::Config> & config, void * systemContext) const;
			
			/**
			 * @brief Create a @ref DigestAuthenticationPolicy object. 
			 *
			 * The @ref DigestAuthenticationPolicy object which is used to configure a policy
			 * for digest authentication, such as allowing MD5 or mode without qop=auth. 
			 * @return a new @ref DigestAuthenticationPolicy .    
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<linphone::DigestAuthenticationPolicy> createDigestAuthenticationPolicy() const;
			
			/**
			 * @brief Creates an object LinphoneErrorInfo. 
			 *
			 * @return a @ref ErrorInfo object.    
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<linphone::ErrorInfo> createErrorInfo();
			
			/**
			 * @brief Creates a new @ref FriendPhoneNumber objects. 
			 *
			 * @param phoneNumber The phone number.    
			 * @param label the type of phone number, for example "home", "cell", etc. Use
			 * nullptr or empty for no label.    
			 * @return The newly created @ref FriendPhoneNumber object.    
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<linphone::FriendPhoneNumber> createFriendPhoneNumber(const std::string & phoneNumber, const std::string & label) const;
			
			/**
			 * @brief Create a @ref ParticipantDeviceIdentity object. 
			 *
			 * @param address @ref Address object.    
			 * @param name the name given to the device.    
			 * @return A new @ref ParticipantDeviceIdentity.    
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<linphone::ParticipantDeviceIdentity> createParticipantDeviceIdentity(const std::shared_ptr<const linphone::Address> & address, const std::string & name) const;
			
			/**
			 * @brief Creates an object @ref ConferenceInfo from an Icalendar @ref Content. 
			 *
			 * @param address the @ref Address of the participant    
			 * @return a @ref ParticipantInfo    
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<linphone::ParticipantInfo> createParticipantInfo(const std::shared_ptr<linphone::Address> & address);
			
			/**
			 * @brief Creates a Bitmap QRCode and return it into an object @ref Content. 
			 *
			 * @param code The code to be generated into an image. It must not be empty.    
			 * @param width The requested width of the QRCode image. It will be 100 if 0. 
			 * @param height The requested height of the QRCode image. It will be 100 if 0. 
			 * @param margin The requested margin of the QRCode image. 
			 * @return a @ref Content    
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<linphone::Content> createQrcode(const std::string & code, unsigned int width, unsigned int height, unsigned int margin);
			
			/**
			 * @brief Creates an object LinphoneRange. 
			 *
			 * @return a @ref Range object.    
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<linphone::Range> createRange();
			
			/**
			 * @brief Creates an object @ref SignalInformation. 
			 *
			 * @return a @ref SignalInformation    
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<linphone::SignalInformation> createSignalInformation();
			
			/**
			 * @brief Creates an object LinphoneTransports. 
			 *
			 * @return a @ref Transports object.    
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<linphone::Transports> createTransports();
			
			/**
			 * @brief Creates an object @ref TunnelConfig. 
			 *
			 * @return a @ref TunnelConfig    
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<linphone::TunnelConfig> createTunnelConfig();
			
			/**
			 * @brief Create an empty @ref Vcard. 
			 *
			 * @return a new @ref Vcard.    
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<linphone::Vcard> createVcard();
			
			/**
			 * @brief Creates an object LinphoneVideoActivationPolicy. 
			 *
			 * @return @ref VideoActivationPolicy object.    
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<linphone::VideoActivationPolicy> createVideoActivationPolicy();
			
			/**
			 * @brief Create a @ref VideoDefinition from a given width and height. 
			 *
			 * @param width The width of the created video definition 
			 * @param height The height of the created video definition 
			 * @return A new @ref VideoDefinition object    
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<linphone::VideoDefinition> createVideoDefinition(unsigned int width, unsigned int height) const;
			
			/**
			 * @brief Create a @ref VideoDefinition from a given standard definition name. 
			 *
			 * @param name The standard definition name of the video definition to create    
			 * @return A new @ref VideoDefinition object    
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<linphone::VideoDefinition> createVideoDefinitionFromName(const std::string & name) const;
			
			/**
			 * @brief Creates an object @ref VideoSourceDescriptor. 
			 *
			 * @return a @ref VideoSourceDescriptor    
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<linphone::VideoSourceDescriptor> createVideoSourceDescriptor();
			
			/**
			 * @brief Enables or disables log collection. 
			 *
			 * @param state the @ref LogCollectionState for log collection 
			 */
			LINPHONECXX_PUBLIC void enableLogCollection(linphone::LogCollectionState state);
			
			/**
			 * @brief Get the cache path. 
			 *
			 * @param context used to compute path. Can be nullptr. JavaPlatformHelper on
			 * Android and char *appGroupId on iOS with shared core.    
			 * @return The cache path    
			 */
			LINPHONECXX_PUBLIC std::string getCacheDir(void * context);
			
			/**
			 * @brief Get the config path. 
			 *
			 * @param context used to compute path. Can be nullptr. JavaPlatformHelper on
			 * Android and char *appGroupId on iOS with shared core.    
			 * @return The config path    
			 */
			LINPHONECXX_PUBLIC std::string getConfigDir(void * context);
			
			/**
			 * @brief Get the data path. 
			 *
			 * @param context used to compute path. Can be nullptr. JavaPlatformHelper on
			 * Android and char *appGroupId on iOS with shared core.    
			 * @return The data path    
			 */
			LINPHONECXX_PUBLIC std::string getDataDir(void * context);
			
			/**
			 * @brief Get the download path. 
			 *
			 * @param context used to compute path. Can be nullptr. JavaPlatformHelper on
			 * Android and char *appGroupId on iOS with shared core.    
			 * @return The download path    
			 */
			LINPHONECXX_PUBLIC std::string getDownloadDir(void * context);
			
			/**
			 * @brief Indicates if the given LinphoneChatRoomBackend is available. 
			 *
			 * @param chatroomBackend the @ref ChatRoom::Backend 
			 * @return true if the chatroom backend is available, false otherwise 
			 */
			LINPHONECXX_PUBLIC bool isChatroomBackendAvailable(linphone::ChatRoom::Backend chatroomBackend);
			
			/**
			 * @brief Select encryption module and set secret material to encrypt the files. 
			 *
			 * @param encryptionModule One of the available encryption module for VFS, pick in
			 * the LINPHONE_VFS_ENCRYPTION_* list if set to _UNSET, default bctoolbox VFS is
			 * switch to Standard one 
			 * @param secret the secret material used to encrypt the files, can be nullptr for
			 * the _PLAIN module    
			 * @param secretSize size of the secret
			 * @return true if everything went well, false if it appears that the given secret
			 * is unable to decrypt existing configuration 
			 */
			LINPHONECXX_PUBLIC bool setVfsEncryption(const uint16_t encryptionModule, const uint8_t * secret, const size_t secretSize);
			
			/**
			 * @brief Creates a QRCode and write it into a JPEG file specified by file_path
			 * (only if build with JPEG). 
			 *
			 * @param filePath The file where to write the QRCode JPEG image.    
			 * @param code The code to be generated into an image. It must not be empty.    
			 * @param width The requested width of the QRCode image. It will be 100 if 0. 
			 * @param height The requested height of the QRCode image. It will be 100 if 0. 
			 * @param margin The requested margin of the QRCode image. 
			 * @return 0 if successful, -2 if JPEG is not supported, -1 otherwise 
			 */
			LINPHONECXX_PUBLIC int writeQrcodeFile(const std::string & filePath, const std::string & code, unsigned int width, unsigned int height, unsigned int margin);
			
			;
			/**
			 * @brief Clean the factory. 
			 *
			 * This function is generally useless as the factory is unique per process,
			 * however calling this function at the end avoid getting reports from belle-sip
			 * leak detector about memory leaked in get(). 
			 */
			LINPHONECXX_PUBLIC static void clean();
			
;
			/**
			 * @brief Create the @ref Factory if that has not been done and return a pointer
			 * on it. 
			 *
			 * @return A pointer on the @ref Factory    
			 */
			LINPHONECXX_PUBLIC static std::shared_ptr<linphone::Factory> get();
			

	};

};

#endif // _FACTORY_HH

#ifndef _MSC_VER
#pragma GCC diagnostic pop
#endif // _MSC_VER
