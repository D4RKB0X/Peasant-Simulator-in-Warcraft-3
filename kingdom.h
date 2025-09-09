#include <iostream>
#include <chrono>
#include <thread>
#include <cmath>

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

double roundOffTo(double value, int decimals) {
    double factor = std::pow(10.0, decimals);
    return std::round(value * factor) / factor;
}

void kingdom() {
    
    int choosing;
    float length, width, acre;
    
    std::cout << "Enter the kingdom you want to build your Town Hall: \n[1] - Alterac\n[2] - Dalaran\n[3] - Gilneas\n[4] - Kul Tiras\n[5] - Lordaeron\n[6] - Stormwind\n[7] - Stromgarde\n";
    choosing = getInput<int>("Enter the number here: ");
    
    std::cout << "\nYou have sent an formal to brought a plot of land in the selected kingdom!\n";
    for(int i = 5; i > 0; --i) {
        std::cout << i << " weeks remaining for the news...\n";
        std::this_thread::sleep_for(std::chrono::seconds(3));
    }
    
    std::cout << "\nCongratulations! They have successfully given you a contract and agreement to build!\n";
    
    std::cout << "\n--Enter your plot in meters---\n";
    length = getInput<float>("Enter the length(m): ");
    width = getInput<float>("Enter the width(m): ");
    
    acre = (length * width)/4046.86;
    
    std::cout << "\nThis is the " << roundOffTo(acre, 2) << " acres of land you've requested.\n";
}
