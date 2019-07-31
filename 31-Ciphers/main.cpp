#include <iostream>
#include <iostream>
#include <string>

#include "./ciphers/caesar.hpp"

int main()
{
    int n = 0;
    std::string store_string;

    std::cout << "Please enter a text: ";
    std::cin >> store_string;
    std::cout << "Enter N for Caesar Cipher: ";
    std::cin >> n;

    std::string output;
    output = caesar_cipher(store_string, n);

    std::cout << "Output: " << output << std::endl;
    return 0;
}
