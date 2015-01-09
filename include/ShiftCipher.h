/*
 * ShiftCipher.h
 *
 *  Created on: Oct 11, 2014
 *      Author: hps
 */


#ifndef SHIFTCIPHER_H_
#define SHIFTCIPHER_H_


#include <iostream>
#include <string>

using namespace std;


class ShiftCipher {
	public:
		string getShiftCipherText(string ciphertext, int key);
};



#endif /* SHIFTCIPHER_H_ */
