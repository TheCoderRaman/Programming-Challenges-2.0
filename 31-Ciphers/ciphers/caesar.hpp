#pragma once
#ifndef EXT_CAESAR
#define EXT_CAESAR

#include <string>

char n_transform(char c, int n);
std::string caesar_cipher(std::string input, int n);

#endif