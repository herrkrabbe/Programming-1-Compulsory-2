#pragma once

#include <iostream>
using namespace std;

/// <summary>
/// Performs polynomial multiplication of the two input polynomials, then prints the product.
/// </summary>
/// <param name="poly1"></param>
/// <param name="poly2"></param>
void multiplypoly(int poly1[4], int poly2[4]){
	int product[7] = { 0, 0, 0, 0, 0, 0, 0 };

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			int index = i + j;
			product[index] += poly1[i] * poly2[j];
		}
	}

	cout << "Product is: ";
	for (int i = 6; i > 0; i--) {
		if (product[(6-i)] != 0) {
			cout << product[(6-i)] << "X^" << i << " + ";
		}
		
	}
	cout << product[6] << ".\n";
}

/// <summary>
/// Adds two polynomials and prints the sum.
/// </summary>
/// <param name="poly1"></param>
/// <param name="poly2"></param>
void addpoly(int poly1[4], int poly2[4]) {
	int a = poly1[0] + poly2[0];
	int b = poly1[1] + poly2[1];
	int c = poly1[2] + poly2[2];
	int d = poly1[3] + poly2[3];

	if(a!=0)
		cout  << a << "X^3 + ";
	if (b != 0)
		cout << b << "X^2 + ";
	if (c != 0)
		cout << c << "X + ";
	cout << d << ".\n";
}

/// <summary>
/// Subtracts two polynomial where poly 2 is the subtrahend, then prints the difference.
/// </summary>
/// <param name="poly1"></param>
/// <param name="poly2"></param>
void subtractpoly(int poly1[4], int poly2[4]) {
	int poly2negative[] = { (-1 * poly2[0]) , (-1 * poly2[1]) , (-1 * poly2[2]) , (-1*poly2[3]) };
	addpoly(poly1, poly2negative);
}

/// <summary>
/// Derives the input polynomial, and prints the derivative function.
/// </summary>
/// <param name="poly"></param>
void derivepoly(int poly[4]) {
	int a = poly[0] * 3;
	int b = poly[1] * 2;
	int c = poly[2];

	if (a != 0)
		cout << a << "X^3 + ";
	if (b != 0)
		cout << b << "X^2 + ";
	cout << c << ".\n";
}