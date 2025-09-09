#ifndef UTILS_H
#define UTILS_H

#include <iostream>
#include <cmath>
#include <string>

// Input helper
template <typename T>
T getInput(const std::string& prompt) {
    T value;
    while (true) {
        std::cout << prompt;
        std::cin >> value;

        if (std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore(1000, '\n');
            std::cout << "\nInvalid input, try again.\n";
            continue;
        }
        return value;
    }
}

// Rounding helper
double roundOffTo(double value, int decimals);

#endif
