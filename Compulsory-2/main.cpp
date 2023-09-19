#include <iostream>
#include "factorial.h"
#include "math.h"
#include "polymath.h"


void optionFactorial();
void optionPolynomial();
void optionMath();
int inputInt();
void changepoly(int poly[4]);

/// <summary>
/// main menu function
/// </summary>
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
			optionPolynomial();
			break;
		case 3:
			optionMath();
			break;
		case 4:
			isRunning = false;
			break;
		default:
			std::cout << "Invalid number, please enter a new integer.\n";
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
			std::cout << "Factorial of " << input << " is " << factorial(input) << "\n";
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

/// <summary>
/// menu for polynomial operations
/// </summary>
void optionPolynomial() {
	int poly1[4] = { 0, 0, 0, 0 };
	int poly2[4] = { 0, 0, 0, 0 };

	changepoly(poly1);
	changepoly(poly2);

	bool exit = false;
	while (!exit) {
		std::cout << "User, please enter a number for your action.\n";
		std::cout << "1. Multiply polynomials\n";
		std::cout << "2. Add polynomials\n";
		std::cout << "3. Derive the first polynom\n";
		std::cout << "4. Exit\n";
		int choice = 0;
		std::cin >> choice;
		if (!cin.fail()) {
			switch (choice) {
			case(1):
				multiplypoly(poly1, poly2);
				break;
			case(2):
				addpoly(poly1, poly2);
				break;
			case(3):
				derivepoly(poly1);
				break;
			case(4):
				exit = true;
				break;
			}
		}
	}
}


/// <summary>
/// Menu for basic math operations
/// </summary>
void optionMath() {
	bool isRunning = true;
	std::cout << "Enter a pair of numbers to perform mathematical operations on\n";

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
			std::cout << "Sum: " << add(num1, num2) << "\n";
			break;
		case 2:
			std::cout << "Difference: " << subtract(num1, num2) << "\n";
			break;
		case 3:
			std::cout << "Product: " << multiply(num1, num2) << "\n";
			break;
		case 4:
			std::cout << "Quotient: " << divide(num1, num2) << "\n";
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

/// <summary>
/// helper function to get an integer input.
/// 
/// Recursively calls itself if the user enters an invalid input
/// </summary>
/// <returns></returns>
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


/// <summary>
/// changes the values of poly. This function is in main because it requires inputInt function.
/// </summary>
/// <param name="poly"></param>
void changepoly(int poly[4]) {
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;

	cout << "Enter four integers to make a polynomial.\n";
	cout << "a * X^3: enter a \n";
	a = inputInt();
	cout << "b * X^2: enter b \n";
	b = inputInt();
	cout << "c * X^1: enter c \n";
	c = inputInt();
	cout << "d: enter d \n";
	d = inputInt();

	poly[0] = a;
	poly[1] = b;
	poly[2] = c;
	poly[3] = d;
}



