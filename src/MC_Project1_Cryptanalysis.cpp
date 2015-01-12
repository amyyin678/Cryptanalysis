//============================================================================
// Name        : MC_Project1_Cryptanalysis.cpp
// Author      : Harshit S
// Version     :
// Copyright   : 
// Description : Cryptography Analysis Project 1 in C++, Ansi-style
//============================================================================

#include "MC_Project1_Cryptanalysis.h"


int numKeys=1;
int key[KEY_RANGE_END+1];

string cipherText; //"btohcbgqnmhb";	//cupid chronic
//string cipherText = "kntckxsgdbzs";	//loudlythecat
string testText;
string plainText;

int lenCipherText;
int maxLenWords = 0;
int minLenWords = 255;
int foundLen = 0, plainTextLength = 0;
int keyFound = -1;

Dictionary dic;
ShiftCipher shiftCipher;
MonoAlphaSubstituteCipher monoCipher(&dic);
PolyAlphaSubstituteCipher polyCipher(&dic);


int main() {

	dic.initHashMap();

	maxLenWords = dic.getMaxLenWords();
	minLenWords = dic.getMinLenWords();

	cout << endl << "Please enter number of keys: ";
	cin >> numKeys;

	cout << endl << "Please enter cipher text: ";
	cin >> cipherText;

	lenCipherText = cipherText.length();



	//cout << "Max length of words: " << maxLenWords << endl;
	//cout << "Min length of words: " << minLenWords << endl;

	/*
	cout << "one is in Dictionary?: " << dic.isInDictionary("one") << endl;
	cout << "five is in Dictionary?: " << dic.isInDictionary("five") << endl;
	*/
	//dic.listDictionary();



	if(numKeys == 1) {
		if(keyFound == -1) {
			for(int i=KEY_RANGE_START; i<=KEY_RANGE_END;i++) {
				foundLen = runTest(cipherText, i);
			}
		}
		else {
			foundLen = runTest(&cipherText[plainTextLength],keyFound);
		}
		if(keyFound) {
			cout << endl << "Plain Text: " << plainText << endl;
		}
		return 0;
	}


	/* Continue if the numKeys is > 1 */
	for(int i=0; i<numKeys; i++) {
		key[i] = 0;
	}

	if(numKeys == 26) {
		monoCipher.getMonoAlphaSubstituteCipher(cipherText, key, numKeys);
	}

	//if still plaintext not found
	polyCipher.getPolyAlphaSubstituteCipher(cipherText, key, numKeys);


	return 0;
}

int runTest(string cipherText, int shiftKey) {
	foundLen = 0;
	testText = shiftCipher.getShiftCipherText(cipherText,shiftKey);
	//cout << "Key: " << i << endl;
	foundLen = dic.isTestTextInDictionary(testText);
	//cout << "Found Length: " << foundLen << endl;
	if(foundLen != 0)
	{
		plainText = testText;
		plainTextLength += foundLen;
		keyFound = shiftKey;
		cout << "Found the key: " << shiftKey << " for " << testText << " for Length: " << foundLen << endl;
	}
	return foundLen;
}
