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

#ifndef _MAGIC_SEARCH_HH
#define _MAGIC_SEARCH_HH

#include <string>
#include <list>
#include "magic_search.hh"
#include "object.hh"




struct _LinphoneMagicSearch;


namespace linphone {

	class SearchResult;
	class MagicSearchListener;

	/**
	 * @brief A @ref MagicSearch is used to do specifics searchs. 
	 *
	 */
	class MagicSearch: public MultiListenableObject {
	
		public:
			/**
			* Enum describing how to merge @ref SearchResult from @ref MagicSearch. 
			*
			*/
			enum class Aggregation {
				/**
				* No aggregation is done, you can have multiple SearchResult with the same
				* Friend. 
				*/
				None = 0,
				/**
				* Aggregation is done by friend, you will have at most a SearchResult per Friend. 
				*/
				Friend = 1
			};

			/**
			* Enum describing the search categories for Magic Search. 
			*
			*/
			enum class Source {
				/**
				* no Source specified. 
				*/
				None = 0,
				/**
				* Search in friends only. 
				*/
				Friends = 1<<0,
				/**
				* Search in Call Logs. 
				*/
				CallLogs = 1<<1,
				/**
				* Search in LDAP servers. 
				*/
				LdapServers = 1<<2,
				/**
				* Search in Chat rooms participants. 
				*/
				ChatRooms = 1<<3,
				/**
				* Search from request : it is usually an address built from the request. 
				*/
				Request = 1<<4,
				/**
				* Search in "starred" friends only. 
				*/
				FavoriteFriends = 1<<5,
				/**
				* Search in conferences info (organizer and participants) 
				*/
				ConferencesInfo = 1<<6,
				/**
				* Search in all sources. 
				*/
				All = -1
			};


			LINPHONECXX_PUBLIC MagicSearch(void *ptr, bool takeRef=true);
			LINPHONECXX_PUBLIC _LinphoneMagicSearch *cPtr() {return (_LinphoneMagicSearch *)mPrivPtr;}

			/**
			 * @brief Add an application listener to the MagicSearch instance.
			 *
			 * @param listener the application listener
			 */
			LINPHONECXX_PUBLIC void addListener(const std::shared_ptr<MagicSearchListener> &listener);
			/**
			 * @brief Remove a previously added listener from the MagicSearch instance.
			 *
			 * @param listener the application listener
			 */
			LINPHONECXX_PUBLIC void removeListener(const std::shared_ptr<MagicSearchListener> &listener);
	
		public:
			
		
			/**
			 * @brief Get the delimiter used for the search. 
			 *
			 * @return the delimiter used to find matched filter word    
			 */
			LINPHONECXX_PUBLIC std::string getDelimiter() const;
			
			/**
			 * @brief Set the delimiter used to find matched filter word. 
			 *
			 * @param delimiter delimiter (example "-_.,")    
			 */
			LINPHONECXX_PUBLIC void setDelimiter(const std::string & delimiter);
			
			/**
			 *
			 * @return sorted list of         
			 */
			LINPHONECXX_PUBLIC std::list<std::shared_ptr<linphone::SearchResult>> getLastSearch() const;
			
			/**
			 * @brief Return whether or not the search is limited. 
			 *
			 * @return true if the search is limited, false otherwise 
			 */
			LINPHONECXX_PUBLIC bool getLimitedSearch() const;
			
			/**
			 * @brief Enable or disable the limited search. 
			 *
			 * @param limited true to limit the search, false otherwise 
			 */
			LINPHONECXX_PUBLIC void setLimitedSearch(bool limited);
			
			/**
			 * @brief Get the maximum value used to calculate the weight in search. 
			 *
			 * @return the maximum value used to calculate the weight in search 
			 */
			LINPHONECXX_PUBLIC unsigned int getMaxWeight() const;
			
			/**
			 * @brief Set the maximum value used to calculate the weight in search. 
			 *
			 * @param weight maximum weight 
			 */
			LINPHONECXX_PUBLIC void setMaxWeight(unsigned int weight);
			
			/**
			 * @brief Get the minimum value used to calculate the weight in search. 
			 *
			 * @return the minimum value used to calculate the weight in search 
			 */
			LINPHONECXX_PUBLIC unsigned int getMinWeight() const;
			
			/**
			 * @brief Set the minimum value used to calculate the weight in search. 
			 *
			 * @param weight minimum weight 
			 */
			LINPHONECXX_PUBLIC void setMinWeight(unsigned int weight);
			
			/**
			 * @brief Get the number of maximum search result the search will return. 
			 *
			 * @return the number of the maximum @ref SearchResult which will be returned 
			 */
			LINPHONECXX_PUBLIC unsigned int getSearchLimit() const;
			
			/**
			 * @brief Set the number of the maximum SearchResult which will be returned. 
			 *
			 * @param limit the maximum number of @ref SearchResult the search will return 
			 */
			LINPHONECXX_PUBLIC void setSearchLimit(unsigned int limit);
			
			/**
			 * @brief Returns whether the delimiter is being used for the search. 
			 *
			 * @return if the delimiter search is used 
			 */
			LINPHONECXX_PUBLIC bool getUseDelimiter();
			
			/**
			 * @brief Enable or disable the delimiter in search. 
			 *
			 * @param enable true to use the delimiter, false otherwise 
			 */
			LINPHONECXX_PUBLIC void setUseDelimiter(bool enable);
			
			/**
			 * @brief Create a sorted list of SearchResult from SipUri, Contact name, Contact
			 * displayname, Contact phone number, which match with a filter word The last item
			 * list will be an address formed with "filter" if a proxy config exist During the
			 * first search, a cache is created and used for the next search Use
			 * resetSearchCache() to begin a new search. 
			 *
			 * @param filter word we search    
			 * @param domain domain which we want to search only   
			 * @return sorted list of         
			 * @deprecated 22/03/2022 Use getContacts() instead. 
			 */
			LINPHONECXX_PUBLIC LINPHONECXX_DEPRECATED std::list<std::shared_ptr<linphone::SearchResult>> getContactListFromFilter(const std::string & filter, const std::string & domain);
			
			/**
			 * @brief Create a sorted list of SearchResult asynchronous from SipUri, Contact
			 * name, Contact displayname, Contact phone number, which match with a filter word
			 * The last item list will be an address formed with "filter" if a proxy config
			 * exist During the first search, a cache is created and used for the next search
			 * Use resetSearchCache() to begin a new search. 
			 *
			 * @param filter word we search    
			 * @param domain domain which we want to search only    nullptr or "" for
			 * searching in all contact "*" for searching in contact with sip SipUri
			 * "yourdomain" for searching in contact from "yourdomain" domain 
			 * @deprecated 22/03/2022 Use getContactsAsync() instead. 
			 */
			LINPHONECXX_PUBLIC LINPHONECXX_DEPRECATED void getContactListFromFilterAsync(const std::string & filter, const std::string & domain);
			
			/**
			 * @brief Create a sorted list of SearchResult which match with a filter word,
			 * from SipUri in this order : Contact's display name, address username, address
			 * domain and phone number. 
			 *
			 * The last item list will be an address formed with "filter" if a proxy config
			 * exist and requested in sourceFlags During the first search, a cache is created
			 * and used for the next search Use resetSearchCache() to begin a new search 
			 * @param filter word we search    
			 * @param domain domain which we want to search only   
			 * @param sourceFlags Flags that specify where to search : @ref Source 
			 * @return sorted list of         
			 * @deprecated 08/04/2022 Use getContactsList() instead. 
			 */
			LINPHONECXX_PUBLIC LINPHONECXX_DEPRECATED std::list<std::shared_ptr<linphone::SearchResult>> getContacts(const std::string & filter, const std::string & domain, int sourceFlags);
			
			/**
			 * @brief This is the asynchronous version of getContacts(). 
			 *
			 * Create a sorted list of SearchResult which match with a filter word, from
			 * SipUri in this order : Contact's display name, address username, address domain
			 * and phone number. The last item list will be an address formed with "filter" if
			 * a proxy config exist and requested in sourceFlags During the first search, a
			 * cache is created and used for the next search Use resetSearchCache() to begin a
			 * new search 
			 * @param filter word we search    
			 * @param domain domain which we want to search only   
			 * @param sourceFlags Flags that specify where to search : @ref Source 
			 * @deprecated 08/04/2022 Use getContactsListAsync() instead. 
			 */
			LINPHONECXX_PUBLIC LINPHONECXX_DEPRECATED void getContactsAsync(const std::string & filter, const std::string & domain, int sourceFlags);
			
			/**
			 * @brief Create a sorted list of SearchResult which match with a filter word,
			 * from SipUri in this order : Contact's display name, address username, address
			 * domain and phone number. 
			 *
			 * The last item list will be an address formed with "filter" if a proxy config
			 * exist and requested in sourceFlags During the first search, a cache is created
			 * and used for the next search Use resetSearchCache() to begin a new search 
			 * @param filter word we search    
			 * @param domain domain which we want to search only   
			 * @param sourceFlags Flags that specify where to search : @ref Source 
			 * @param aggregation a @ref Aggregation mode to indicate how to merge results 
			 * @return sorted list of         
			 */
			LINPHONECXX_PUBLIC std::list<std::shared_ptr<linphone::SearchResult>> getContactsList(const std::string & filter, const std::string & domain, int sourceFlags, Aggregation aggregation);
			
			/**
			 * @brief This is the asynchronous version of getContacts(). 
			 *
			 * Create a sorted list of SearchResult which match with a filter word, from
			 * SipUri in this order : Contact's display name, address username, address domain
			 * and phone number. The last item list will be an address formed with "filter" if
			 * a proxy config exist and requested in sourceFlags During the first search, a
			 * cache is created and used for the next search Use resetSearchCache() to begin a
			 * new search 
			 * @param filter word we search    
			 * @param domain domain which we want to search only   
			 * @param sourceFlags Flags that specify where to search : @ref Source 
			 * @param aggregation a @ref Aggregation mode to indicate how to merge results 
			 */
			LINPHONECXX_PUBLIC void getContactsListAsync(const std::string & filter, const std::string & domain, int sourceFlags, Aggregation aggregation);
			
			/**
			 * @brief Reset the cache to begin a new search. 
			 *
			 */
			LINPHONECXX_PUBLIC void resetSearchCache();
			
			
		private:
			void *createCallbacks() override;
	};

};

#endif // _MAGIC_SEARCH_HH

#ifndef _MSC_VER
#pragma GCC diagnostic pop
#endif // _MSC_VER
