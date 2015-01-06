MC_Project1_Cryptanalysis
=========================

Modern Cryptography Project 1 - Cryptanalysis
---------------------------------------------

# Project Description
This cryptanalysis project consists of a software implementation of an algorithm that tries to decrypt an L-symbol challenge ciphertext using
* using a plaintext dictionary (containing a number q of English words or plaintexts obtained as a sequence of English words)
* using only partial knowledge of the encryption algorithm used
* and with no knowledge of any keys involved.
 
Your program's goal is to find the plaintext (as one of the dictionary plaintexts or one sequence of English words from those used for the dictionary) and within a reasonable amount of time.

# Input
Your program should take as input from stdin:
* the number t of key symbols,
* an L-symbol challenge ciphertext, where each symbol is a lower-case letter from the English alphabet (and is not a space, special character, punctuation symbol or upper-case letter). 

# Output
Your program should return as output a guess for which L-symbol plaintext was encrypted, where again each symbol is a lower-case letter from the English alphabet (and is not a space, special character, punctuation symbol or upper-case letter).

# Resources
* A text file Dictionary1 containing a number u of L-symbol candidate plaintexts will be provided to you (as an attachment below), and you should feel free to use its content as part of your code. 
* A text file Dictionary2 containing a number v of English words will be provided to you (as an attachment below), and you should feel free to use its content as part of your code.

# Conventions
Your executable file should be named "<last name1>-<last name2>-decrypt". 

# Expectations
Upon execution, it should obtain the above inputs 1,2 from stdin, and finally return the output plaintext on stdout within x minutes (or else it will be declared to default to an incorrect guess); most likely, we will choose x = 2.

# Test Cases
* Your program will be run using different parameters (most likely: L between 50 and 150, u between 100 and 150, v between 100 and 200, and t between 1 and 40), and on a number of challenge ciphertexts, each computed using a potentially different encryption scheme. 
* Each ciphertext will be computed from a plaintext selected in one of the following two ways:
    1. randomly and independently choosing one of the L-symbol plaintexts in Dictionary1 or
    2. concatenating words randomly and independently chosen from Dictionary2 (until one has an L-symbol plaintext).
* All the encryption schemes used have the following common features:
    * The message space and ciphertext space are the set {a,..,z}^L. 
        * In other words the message m can be written as m[1],...,m[L], where each m[i] is in {a,..,z}, and the ciphertext c can be written as c[1],...,c[L], where each c[i] is in {a,..,z}
    * The key space is the set {0,..,25}^t. 
        * In other words the key k can be written as k[1],...,k[t], where each k[j] is in {0,..,25}, for j=1,..,t.
    * The encryption algorithm computes each c[i] as equal to the (lexicographic) shift of m[i] by k[j(i)] positions, where the computation of each j(i) is left unspecified and may depend on i,t,L.
    	* In other words, each ciphertext symbol c[i] is the shift of the plaintext symbol m[i] by a number of position equal to one of the key symbols, which symbol being chosen according to an undisclosed, deterministic, and not key-based, scheduling algorithm that is a function of i, t and L.

# Submission 
Your accompanying report should at least include the following sections:
* team member names;
* the list of project tasks performed by each student in the team;
* any modifications you made with respect to the above specifications
* a detailed explanation of the cryptanalysis approach used in your program

Your submission should be a zip file containing at least the following files:
* project report (in pdf form),
* source and executable. 

Please name your zip file as <last-name1><last-name2>-cs6903f14project1 and your contained files as <last-name1>-<last-name2>-report, <last-name1>-<last-name2>-source, <last-name1>-<last-name2>-decrypt. 

# Extensions
Allowed extensions (to be considered as extra credit) include any one among the following:
* a report section containing a brief (i.e., <= 2 pages) survey on substitution ciphers
* a report section containing a brief (i.e., <= 2 pages) survey on cryptanalysis approaches for substitution ciphers
* an approach to decrypt an arbitrary random English plaintext (that is, an L-letter sequence of random English words with no space, punctuation, or upper-case letter), possibly using English words not in the dictionary files;
* anything else you want to add

# Grading
Your submission will be judged based on the following grading criteria:
* (~25%) software correctness and usability (i.e., if you followed all of the above instructions, if software runs correctly, and is easy to use)
* (~25%) quality of report (i.e., how well written is your report)
* (~50%) cryptanalysis success (i.e., how many challenge ciphertexts your program successfully decrypted). 

If there are two or more submissions successfully decrypting the same number of challenge ciphertexts, we will rank them based on their (faster to slower) running time taken to produce their outputs.
