//============================================================================
// Name        : MC_Project1_Cryptanalysis.cpp
// Author      : Harshit S
// Version     :
// Copyright   : 
// Description : Cryptography Analysis Project 1 in C++, Ansi-style
//============================================================================

#include "MC_Project1_Cryptanalysis.h"

#define KEY_RANGE_START 0
#define KEY_RANGE_END 25

int main() {
	int numKeys = 1;
	int key[numKeys];
	//string cipherText = "btohcbgqnmhb";	//cupid chronic
	string cipherText = "kntckxsgdbzs";	//loudlythecat
	string testText;
	string plainText;

	int lenCipherText = cipherText.length();
	int maxLenWords = 0;
	int minLenWords = 255;
	int foundLen = 0, plainTextLength = 0;
	int keyFound = -1;

	Dictionary dic;
	ShiftCipher shiftCipher;
	MonoAlphaSubstituteCipher monoCipher(&dic);

	dic.initHashMap();

	maxLenWords = dic.getMaxLenWords();
	minLenWords = dic.getMinLenWords();

	cout << "Max length of words: " << maxLenWords << endl;
	cout << "Min length of words: " << minLenWords << endl;

	/*
	cout << "one is in Dictionary?: " << dic.isInDictionary("one") << endl;
	cout << "five is in Dictionary?: " << dic.isInDictionary("five") << endl;
	*/
	//dic.listDictionary();



	if(numKeys == 1) {
		//while(plainTextLength < lenCipherText) {
			if(keyFound == -1) {
				for(int i=KEY_RANGE_START; i<=KEY_RANGE_END;i++) {
					foundLen = 0;
					testText = shiftCipher.getShiftCipherText(cipherText,i);
					//cout << "Key: " << i << endl;
					foundLen = dic.isTestTextInDictionary(testText);
					//cout << "Found Length: " << foundLen << endl;
					if(foundLen != 0)
					{
						plainText = testText;
						plainTextLength += foundLen;
						keyFound = i;
						cout << "Found the key: " << i << " for " << testText << " for Length: " << foundLen << endl;
					}
				}
			}
			/*
			else {
				testText = shiftCipher.getShiftCipherText(&cipherText[plainTextLength],keyFound);
				foundLen = dic.isTestTextInDictionary(testText);
				if(foundLen != 0)
				{
					plainTextLength += foundLen;
					plainText = plainText + testText;
					cout << "Found the key: " << keyFound << " for " << testText << " for Length: " << foundLen << endl << endl << endl;
					break;
				}
			}
			*/
		//}	//while()

		if(keyFound) {
			cout << ">>>>>>>>>>Plain Text: " << plainText << "<<<<<<<<<<" << endl;
		}

		return 0;
	}

	/* Continue if the numKeys is > 1 */
	for(int i=0; i<numKeys; i++) {
		key[i] = 0;
	}

	//monoCipher.getMonoAlphaSubstituteCipher(cipherText, key, numKeys);

	return 0;
}
