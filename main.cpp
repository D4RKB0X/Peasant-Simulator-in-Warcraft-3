#include <iostream>
#include <ctime>

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

void resources();
void kingdom();

int main() {
    
    srand(time(NULL));
    int num;
    char again;
    
    std::cout << "---You are a builder in a roulette, build a Town Hall by guessing a number---\n";
    
    do {
        int ran = rand() % 10 + 1;
        
        do{
            num = getInput<int>("Enter a number (1-10): ");
        
            if(num == ran) {
                std::cout << "\n---------------------------\n";
                std::cout << "You've got the Town Hall!\n";
            }
            else if(num < ran) {
                std::cout << "Too Low!\n";
            }
            else if(num > ran) {
                std::cout << "Too High!\n";
            }
            else {
                std::cout << "Error!\n";
                break;
            }
        }while (num != ran);
        
        std::cout << "\n---Now we need the resources---\n";
        resources();
        
        std::cout << "\n---Now we need the kingdom permit---\n";
        kingdom();
        
        std::cout << "\nDo you want to try again? (Y/N): ";
        std::cin >> again;
        
    }while(again == 'Y' || again == 'y');
    std::cout << "\nGoodbye!";
    
    return 0;
}
