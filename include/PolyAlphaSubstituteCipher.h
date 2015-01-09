/*
 * PolyAlphaSubstituteCipher.h
 *
 *  Created on: Oct 19, 2014
 *      Author: hps
 */

#ifndef POLYALPHASUBSTITUTECIPHER_H_
#define POLYALPHASUBSTITUTECIPHER_H_


#include <iostream>
#include <string>
#include <array>
#include "Dictionary.h"

using namespace std;


class PolyAlphaSubstituteCipher {
		string testText;
		string cipherTextTest;
		Dictionary *dic;
	public:
		PolyAlphaSubstituteCipher(Dictionary *dic);
		string getPolyAlphaSubstituteCipher(string ciphertext, int key[], int numKeys);
		void getPolyAlphaShiftCipher(int key[], int numKeysForPermutation);
		void permuteKeyPhrase(int key[], int numKeys, int keyIndex);
};







#endif /* POLYALPHASUBSTITUTECIPHER_H_ */
