#pragma once

/// <summary>
/// Adds two numbers
/// </summary>
/// <param name="addend1"></param>
/// <param name="addend2"></param>
/// <returns>sum</returns>
double add(double addend1, double addend2) {
	return addend1 + addend2;
}

/// <summary>
/// Subtracts to numbers
/// </summary>
/// <param name="minuend"></param>
/// <param name="subtrahend"></param>
/// <returns>difference</returns>
double subtract(double minuend, double subtrahend) {
	return minuend - subtrahend;
}

/// <summary>
/// Multiplies two numbers.
/// </summary>
/// <param name="multiplicand"></param>
/// <param name="multiplicator"></param>
/// <returns>product</returns>
double multiply(double multiplicand, double multiplicator) {
	return multiplicand * multiplicator;
}

/// <summary>
/// Divides the dividend with the divisor.
/// </summary>
/// <param name="dividend"></param>
/// <param name="divisor"></param>
/// <returns>quotient</returns>
double divde(double dividend, double divisor) {
	return dividend / divisor;
}