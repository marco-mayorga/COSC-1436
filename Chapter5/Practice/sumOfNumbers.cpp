/*Marco Mayorga

COSC-1436

September 27, 2022

Write a program that asks the user for a positive integer value. The
program should use a loop to get the sum of all the integers from 1 up
to the number entered. For example, if the user enters 50, the loop will
find the sum of 1, 2, 3, 4, . . ., 50.
Input Validation: Do not accept a negative starting number.
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	// 1.Variables
	int userInput;
	long int sum = 0;
	// 2.Ask User for 'type in here' && 3.Store user answer
	cout << "Give me a positive integer: ";
	cin >> userInput;
	// 4.Calculations and logic
	while (userInput < 0)
	{
		cout << "Error: Enter a positive int: ";
		cin >> userInput;
	}
	// Using Sumation formula instead of looping.
	
	//sum = userInput*(userInput+1)/2;

	//Using Looping
	for (int i = 0; i <= userInput; i++){
		sum += i;
	}
	cout << "The sum of all numbers inside " << userInput << " is: " << sum << endl;
	// 5.Display
	return 0;
}