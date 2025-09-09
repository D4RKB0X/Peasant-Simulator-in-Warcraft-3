#include "resources.h"
#include "utils.h"
#include <iostream>

void resources() {
    float wood, gold;

    gold = getInput<float>("Enter the gold you have: ");
    wood = getInput<float>("Enter the lumber you have: ");

    while (gold < 385 || wood < 205) {
        if (gold < 385) {
            std::cout << "\nWe need more gold!\n";
            gold = getInput<float>("Enter the gold you have: ");
        } else if (wood < 205) {
            std::cout << "\nWe need more lumber!\n";
            wood = getInput<float>("Enter the lumber you have: ");
        }
    }
    std::cout << "\n------------------------------------------------------------------\n";
    std::cout << "Congratulations! You have enough resources to build a Town Hall!\n";
}
