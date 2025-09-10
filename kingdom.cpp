#include "kingdom.h"
#include "utils.h"
#include <iostream>
#include <thread>
#include <chrono>

void kingdom() {
    int choosing;
    double length, width, acre;

    std::cout << "Enter the kingdom you want to build your Town Hall: \n"
              << "[1] - Alterac\n[2] - Dalaran\n[3] - Gilneas\n"
              << "[4] - Kul Tiras\n[5] - Lordaeron\n[6] - Stormwind\n[7] - Stromgarde\n";

    choosing = getInput<int>("Enter the number here: ");

    std::cout << "\nYou have sent a formal request...\n";
    for (int i = 5; i > 0; --i) {
        std::cout << i << " weeks remaining for the news...\n";
        std::this_thread::sleep_for(std::chrono::seconds(3));
    }

    std::cout << "\nCongratulations! They have given you a contract to build!\n";

    std::cout << "\n--Enter your plot in meters---\n";
    length = getInput<float>("Enter the length(m): ");
    width  = getInput<float>("Enter the width(m): ");

    acre = (length * width) / 4046.86;
    std::cout << "\nThis is the " << roundOffTo(acre, 2)
              << " acres of land you've requested.\n";
}
