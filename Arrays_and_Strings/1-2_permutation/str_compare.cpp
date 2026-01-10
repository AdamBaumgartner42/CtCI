/**
 * @brief Functions to work on strings
 * @author Adam Baumgartner
 * @date 1/2/2026
 * @note g++ hello.cpp -o hello_app
 */



#include <iostream>
#include <string>
#include <array>


void printLettersInline(std::array<int, 128> &letters) {

    for (int i : letters) {
        std::cout << i << " ";
    }
    std::cout << std::endl;
}

bool permutation(std::string s, std::string t){

    // permutations must be the same length, any negatives are problem
    if (s.length() != t.length()) {
        return false; 
    }

    // array map to hold the char counts - set to zer0
    std::array<int, 128> letters{};

    // Map char counts 
    for (char c : s) {
        letters[c]++;
    }

    for (char c : t) {
        letters[c]--;
        if (letters[c] < 0) {
            return false; // going negative means we 
        }
    }

    return true;
}

int main () {
    std::string a = "taco";
    std::string b = "cato";

    // std::cout << "Enter string 1: ";
    // std::cin >> a; 

    // std::cout << "Enter string 2: ";
    // std::cin >> b;

    std::cout << "string 1: " << a << " string 2: " << b << std::endl;

    std::cout << "permutation: " << permutation(a, b) << std::endl;

    return 0;
}