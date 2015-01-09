/*
 * ShiftCipher.h
 *
 *  Created on: Oct 11, 2014
 *      Author: hps
 */


#include <iostream>
#include <string>

using namespace std;


#ifndef SHIFTCIPHER_H_
#define SHIFTCIPHER_H_

class ShiftCipher {
	public:
		string getShiftCipherText(string ciphertext, int key);
};



#endif /* SHIFTCIPHER_H_ */
