//============================================================================
// Name        : MonoAlphaSubstituteCipher.cpp
// Author      : Harshit S
// Version     :
// Copyright   :
// Description : MonoAlphaSubstituteCipher in C++, Ansi-style
//============================================================================

#include "MonoAlphaSubstituteCipher.h"

MonoAlphaSubstituteCipher::MonoAlphaSubstituteCipher(Dictionary *dic) {
	this->dic = dic;
}

string MonoAlphaSubstituteCipher::getMonoAlphaSubstituteCipher(string cipherText, int key[], int numKeys) {

	int maxLenWords = dic->getMaxLenWords();
	int numKeysForPermutation = numKeys < maxLenWords ? numKeys : maxLenWords;
	cout << "numKeysForPermutation: " << numKeysForPermutation << endl;
	cipherTextTest = cipherText;
	permuteKeys(key, numKeysForPermutation, 0);
	return cipherText;
}

void MonoAlphaSubstituteCipher::getMonoAlphaShiftCipher(int key[], int numKeysForPermutation) {

	for (int i=0; i<numKeysForPermutation; i++) {
		cipherTextTest[i] = cipherTextTest[i] - 'a';	// to make it a number from 0-25
		cipherTextTest[i] = ( cipherTextTest[i] + key[i] + 26 ) % 26;	// add 26 in case the shift is negative
		cipherTextTest[i] = cipherTextTest[i] + 'a';	// back to ascii code
	}

	if(dic->isTestTextInDictionary(cipherTextTest))
	{
		cout << endl << endl << "--------------Found the key combination for " << cipherTextTest << endl << endl << endl;
		return;
	}

}
void MonoAlphaSubstituteCipher::permuteKeys(int key[], int numKeysForPermutation, int keyIndex) {

	key[keyIndex] = 0;

	for(int i=KEY_RANGE_START;i<=KEY_RANGE_END;i++) {
		if(keyIndex+1 < numKeysForPermutation) {
			permuteKeys(key, numKeysForPermutation, keyIndex+1);
		}
		if(keyIndex+1 == numKeysForPermutation) {
			for(int j=0;j<numKeysForPermutation;j++) {
				//cout << key[j] << " ";
			}
			//cout << endl;
			getMonoAlphaShiftCipher(key, numKeysForPermutation);

		}
			key[keyIndex] = key[keyIndex] + 1;

	}

}

