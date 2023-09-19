#pragma once
#include <exception>
#include <stdexcept>

/// <summary>
/// Recursively finds the factorial of the num.
/// </summary>
/// <param name="num"></param>
/// <returns> num! </returns>
unsigned long long int factorial(unsigned long long int num) {
	if (num > 20) {
		throw std::out_of_range("The factorial function can not provide accurate numbers for num > 20");
	}
	if (num == 0) {
		return 1;
	}

	return num * factorial((num - 1));
}