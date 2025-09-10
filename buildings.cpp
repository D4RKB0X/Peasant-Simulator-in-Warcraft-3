#include "buildings.h"
#include "utils.h"
#include <iostream>

void buildings() {

	char change;
	int change_building;

	do {
		std::cout << "Do you want to change buildings? (Y/N): ";
		std::cin >> change;

		if (change != 'Y' && change != 'y') {
			break;
		}
		else {
			continue;
		}

		std::cout << "Enter the building you want to replace the Town Hall: \n"
			<< "[1] - Barracks\n[2] - Altar of Kings\n[3] - Farm\n"
			<< "[4] - Arcane Sanctum\n[5] - Workshop\n[6] - Lumber Mill\n[7] - Blacksmith\n";

		change_building = getInput<int>("Enter the number here: ");

		switch (change_building) {
			case 1: {
				std::cout << "You've changed the building to Barracks!";
				break;
			}
			case 2: {
				std::cout << "You've changed the building to Altar of Kings!";
				break;
			}
			case 3: {
				std::cout << "You've changed the building to Farm!";
				break;
			}
			case 4: {
				std::cout << "You've changed the building to Arcane Sanctum!";
				break;
			}
			case 5: {
				std::cout << "You've changed the building to Workshop!";
				break;
			}
			case 6: {
				std::cout << "You've changed the building to Lumber Mill!";
				break;
			}
			case 7: {
				std::cout << "You've changed the building to Blacksmith!";
				break;
			}
			default: {
				std::cout << "Error!";
				break;
			}
		}

	} while(true);
	

}