/*
 * MonoAlphaSubstituteCipher.h
 *
 *  Created on: Oct 12, 2014
 *      Author: hps
 */

#ifndef MONOALPHASUBSTITUTECIPHER_H_
#define MONOALPHASUBSTITUTECIPHER_H_


#include <iostream>
#include <string>

#include "Dictionary.h"

#define KEY_RANGE_START 0
#define KEY_RANGE_END 25

using namespace std;


class MonoAlphaSubstituteCipher {
		string testText;
		string cipherTextTest;
		Dictionary *dic;
	public:
		MonoAlphaSubstituteCipher(Dictionary *dic);
		string getMonoAlphaSubstituteCipher(string ciphertext, int key[], int numKeys);
		void getMonoAlphaShiftCipher(int key[], int numKeysForPermutation);
		void permuteKeys(int key[], int numKeys, int keyIndex);
};






#endif /* MONOALPHASUBSTITUTECIPHER_H_ */
