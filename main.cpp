#include "resources.h"
#include "kingdom.h"
#include "utils.h"
#include <iostream>
#include <ctime>

int main() {
    srand(time(NULL));
    int num;
    char again;

    std::cout << "---You are a builder in a roulette, build a Town Hall by guessing a number---\n";

    do {
        int ran = rand() % 10 + 1;

        do {
            num = getInput<int>("Enter a number (1-10): ");

            if (num == ran) {
                std::cout << "\n---------------------------\n";
                std::cout << "You've got the Town Hall!\n";
            } else if (num < ran) {
                std::cout << "Too Low!\n";
            } else {
                std::cout << "Too High!\n";
            }
        } while (num != ran);

        std::cout << "\n---Now we need the resources---\n";
        resources();

        std::cout << "\n---Now we need the kingdom permit---\n";
        kingdom();

        std::cout << "\nDo you want to try again? (Y/N): ";
        std::cin >> again;

    } while (again == 'Y' || again == 'y');

    std::cout << "\nGoodbye!\n";
    return 0;
}
