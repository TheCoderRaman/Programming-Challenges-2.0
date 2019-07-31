#pragma once
#ifndef EXT_CIPHERS
#define EXT_CIPHERS

#include <string>
#include <map>

// ATBASH
std::string atbash(std::string input);

// CAESAR CIPHER
char n_transform(char c, int n);
std::string caesar_cipher(std::string input, int n);

#endif