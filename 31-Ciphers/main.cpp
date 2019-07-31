#include <iostream>
#include <iostream>
#include <string>

#include "./ciphers/ciphers.hpp"

int main()
{
    int n = 0;
    std::string store_string;
    std::string output;
    int selector = 0;

    std::cout << "Choose a cipher (0: Caesar, 1: Atbash):" << std::endl;
    std::cin >> selector;
    
    std::cout << "Please enter a text: ";
    std::cin >> store_string;

    switch (selector)
    {
    case 0:
        std::cout << "Enter N for Caesar Cipher: ";
        std::cin >> n;
        output = caesar_cipher(store_string, n);
        break;
    
    case 1:
        output = atbash(store_string);
        break;
    
    default:
        std::cout << "Invalid Option Exiting!" << std::endl;
        return 1;
    }

    std::cout << "Output: " << output << std::endl;
    return 0;
}
