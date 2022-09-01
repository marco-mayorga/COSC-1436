/*Marco Mayorga

COSC-1436

September 01, 2022

Write a program that stores the integers 50 and 100 in variables,
and stores the sum of these two in a variable named total.*/

#include <iostream>

using namespace std;

int main()
{
	// Sets two varibales for 50 and 100
	int Num50 = 50, Num100 = 100;

	// Computes sum of both varibales;
	int Sum = Num50 + Num100;

	// Formats and outputs answer to console/terminal;
	cout << "The Sum of 50 and 100 = ";
	cout << Sum;
	return 0;
}