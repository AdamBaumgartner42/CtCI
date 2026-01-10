/**
 * @file 
 * @brief Write a function to swap two numbers in place, without temporary variables.
 * 
 */

#include <iostream>
#include <limits>

int readInt(const char* prompt) {
    int value{};
    while (true) {
        std::cout << prompt;
        if (std::cin >> value) {
            return value;
        }
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Invalid input, try again\n";
    }
}


int main () {
    int a = readInt("enter a: ");
    int b = readInt("enter b: ");
}