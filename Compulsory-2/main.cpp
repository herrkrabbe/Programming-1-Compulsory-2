#include <iostream>
#include "factorial.h"

void optionFactorial();
void optionPolynomial();
void optionMath();

void main() {

	bool isRunning = true;

	while (isRunning) {
		std::cout << "Enter a integer for option:\n";
		std::cout << "1: Calculate factorial.\n";
		std::cout << "2: Polygonial mathematics\n";
		std::cout << "3: Basic operations";
		std::cout << "4: Exit program";
		int input;
		std::cin >> input;

		if (!std::cin.fail()) {
			switch (input) {
			case 1:
				optionFactorial();
				break;
			case 2:
				break;
			case 3:
				break;
			case 4:
				isRunning = false;
				break;
			default:
				break;
			}
		}
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		
	}

	

}

/// <summary>
/// runs code for 
/// </summary>
void optionFactorial() {
	bool isRunning = true;

	while (isRunning) {
		std::cout << "Enter a integer. Values of 0 and higher return their factorial; negative values exit this calculator";
		int input;
		std::cin >> input;

		if (!std::cin.fail()) {
			if (input >= 0) {
				factorial(input);
			}
			else {
				if (input > 20) {
					("The factorial function can not provide accurate numbers for input > 20");
				}
				else {
					isRunning = false;
				}
			}
		}
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

	}
}

void optionPolynomial() {

}

void optionMath() {

}