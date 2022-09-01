/*Marco Mayorga

COSC-1436

September 01, 2022

Write a program that stores the integers 50 and 100 in variables,
and stores the sum of these two in a variable named total.*/

#include <iostream>

using namespace std;



// int main()
// {
// 	// 1. Variables - inputs and outputs
// 	int firstNumber = 50;
// 	int secondNumber = 100;
// 	int total = 0;

// 	// 2. Calculate the total
// 	total = firstNumber + secondNumber;

// 	// 3. Display
// 	cout << "Total: " << total << endl;
// }

int main()
{
	// 1a. Variables - inputs and outputs
	int firstNumber = 0;
	int secondNumber = 0;
 	int total = 0;

	// 2a. Talk to User.
	cout << "Please enter the first number: ";

	// 3a. Store the first number 
	cin >> firstNumber;

	//2b. Talk tot he user. Ask for the second number
	cout << "Please enter the second number";

	// 3b. Store the second number
	cin >> secondNumber;

	// 4. Calculate the total
	total = firstNumber + secondNumber;

	// 5. Display
	cout << "Total: " << total << endl;
}
