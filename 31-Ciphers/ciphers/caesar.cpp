#include "./ciphers.hpp"

char n_transform(char c, int n) {
    return c + n;
}

std::string caesar_cipher(std::string input, int n) {
    std::string buffer;

    for (char& c : input)
    {
        buffer += n_transform(c, n);
    }

    return buffer;
    
}