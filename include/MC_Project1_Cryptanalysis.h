/*
 * MC_Project1_Cryptanalysis.h
 *
 *  Created on: Oct 11, 2014
 *      Author: hps
 */

#ifndef MC_PROJECT1_CRYPTANALYSIS_H_
#define MC_PROJECT1_CRYPTANALYSIS_H_

#include <iostream>
#include <map>
#include <string>

#include "Dictionary.h"
#include "ShiftCipher.h"
#include "MonoAlphaSubstituteCipher.h"
#include "PolyAlphaSubstituteCipher.h"

using namespace std;

#define KEY_RANGE_START 0
#define KEY_RANGE_END 25


int main();
int runTest(string cipherText, int shiftKey);


#endif /* MC_PROJECT1_CRYPTANALYSIS_H_ */
