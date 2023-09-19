#include <iostream>
#include "factorial.h"
#include "math.h"
#include "polymath.h"


void optionFactorial();
void optionPolynomial();
void optionMath();
int inputInt();

void main() {

	bool isRunning = true;

	while (isRunning) {
		std::cout << "Enter a integer for option:\n";
		std::cout << "1: Calculate factorial.\n";
		std::cout << "2: Polygonial mathematics\n";
		std::cout << "3: Basic operations\n";
		std::cout << "4: Exit program\n";
		int input = inputInt();
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

	

}

/// <summary>
/// runs code for 
/// </summary>
void optionFactorial() {
	bool isRunning = true;

	while (isRunning) {
		std::cout << "Enter a integer. Values of 0 and higher return their factorial; negative values exit this calculator\n";
		int input = inputInt();
		if (input >= 0) {
			factorial(input);
		}
		else {
			if (input > 20) {
				("The factorial function can not provide accurate numbers for input > 20\n");
			}
			else {
				isRunning = false;
			}
		}

	}
}

void optionPolynomial() {

}



void optionMath() {
	bool isRunning = true;
	std::cout << "Enter a pair of numbers to perform mathematical operations on";

	double num1 = inputInt();
	double num2 = inputInt();

	while (isRunning) {
		std::cout << "Enter a integer for option:\n";
		std::cout << "1: Add the numbers\n";
		std::cout << "2: Subtract the second number from the first\n";
		std::cout << "3: Multiply the numbers\n";
		std::cout << "4: Divide the first number by the second number\n";
		std::cout << "5: Enter a new pair of values\n";
		std::cout << "6: Exit program\n";
		int input = inputInt();

		switch (input) {
		case 1:
			add(num1, num2);
			break;
		case 2:
			subtract(num1, num2);
			break;
		case 3:
			multiply(num1, num2);
			break;
		case 4:
			divide(num1, num2);
			break;
		case 5:
			num1 = inputInt();
			num2 = inputInt();
			break;
		case 6:
			isRunning = false;
			break;
		default:
			std::cout << "invalud number, please enter a new one\n";
			break;
		}
		

	}
}

int inputInt() {
	int input;
	std::cin >> input;
	if (std::cin.fail()) {
		std::cout << "must enter integer\n";
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		input = inputInt();
	}
	return input;
}

