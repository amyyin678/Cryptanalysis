/*
 * Dictionary.h
 *
 *  Created on: Oct 11, 2014
 *      Author: hps
 */

#ifndef DICTIONARY_H_
#define DICTIONARY_H_

#include <iostream>
#include <map>
#include <string>

using namespace std;

class Dictionary {

		typedef std::map<string, int> hashmap;
		hashmap dicWords;
//		hash< string > hashFunc = dicWords.hash_function();
		std::map<string, int>::const_iterator findWord;
		int maxLenWords;
		int minLenWords;
    public:
		Dictionary();
		void initHashMap ();
		bool isInDictionary (string keyWord);
		int isTestTextInDictionary (string testText);
		void listDictionary ();
		int getMaxLenWords ();
		int getMinLenWords ();
};


#endif /* DICTIONARY_H_ */
