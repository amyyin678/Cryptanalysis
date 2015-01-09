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
#include "MC_Project1_Cryptanalysis.h"

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
