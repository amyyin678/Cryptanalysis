//============================================================================
// Name        : ShiftCipher.cpp
// Author      : Harshit S
// Version     :
// Copyright   :
// Description : ShiftCipher in C++, Ansi-style
//============================================================================

#include "ShiftCipher.h"

string ShiftCipher::getShiftCipherText(string cipherText, int key) {

	int lenCipherText = cipherText.length();
	//cout << "Cipher: " << cipherText << endl;
	for(int i=0; i<lenCipherText; i++)
	{
		cipherText[i] = cipherText[i] - 'a';	// to make it a number from 0-25
		cipherText[i] = ( cipherText[i] + key + 26 ) % 26;	// add 26 in case the shift is negative
		cipherText[i] = cipherText[i] + 'a';	// back to ascii code
	}
	//cout << "new: " << cipherText << endl;
	return cipherText;
}
