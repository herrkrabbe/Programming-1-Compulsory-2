#pragma once

#include <iostream>
void printarray(int array[], int size);


int arraytask() {
	//task1();
	int input = 0;
	const int size = 5;
	int intarray[size];

	std::cout << "Hello User, please enter numbers five times\n";
	for (int i = 0; i < size; i++) {
		while (!(std::cin >> input)) {
			std::cout << "Please enter a number\n";
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}
		intarray[i] = input;
	}

	printarray(intarray, size);

	bool exit = false;
	while (!exit) {
		std::cout << "User, please enter a number for your action.\n";
		std::cout << "1. Make array\n";
		std::cout << "2. Print array\n";
		std::cout << "3. Change value of array index\n";
		std::cout << "4. Exit\n";
		int choice = 0;
		std::cin >> choice;
		if (!std::cin.fail()) {
			switch (choice) {
			case(4):
				exit = true;
				break;
			case(2):
				printarray(intarray, size);
				break;

			case(3):
				int index;
				std::cout << "Enter a index between 0 and 4.\n";
				std::cin >> index;
				if (!std::cin.fail() && index < 5 && index >= 0) {
					std::cout << "Enter a new number";
					std::cin >> input;
					if (!std::cin.fail()) {
						intarray[index] = input;
					}
					else {
						std::cout << "ERROR\n";
					}
				}
				else {
					std::cout << "ERROR\n";
				}
				break;
			case(1):
				std::cout << "Hello User, please enter numbers five times\n";
				for (int i = 0; i < size; i++) {
					while (!(std::cin >> input)) {
						std::cout << "Please enter a number\n";
						std::cin.clear();
						std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
					}
					intarray[i] = input;
				}
				break;
			}

		}

		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

	}

	return 0;
}

void printarray(int array[], int size) {

	std::cout << "\n[";
	for (int i = 0; i < size; i++) {
		std::cout << array[i];
		if ((i + 1 < size)) {
			std::cout << ", ";
		}
		else {
			std::cout << "]\n";
		}
	}
}
