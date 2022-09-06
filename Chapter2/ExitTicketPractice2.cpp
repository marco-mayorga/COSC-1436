/*Marco Mayorga

COSC-1436

September 06, 2022

Exit Ticket*/

#include <iostream>

using namespace std;

int main()
{
	// 0.Constants

	// 1.Variables
	int firstNum = 0;
	int secondNum = 0;
	int prod = 0;

	// 2.Talk to the user ask for the first number
	cout << "Please Enter the first number: ";
	// 3.Store
	cin >> firstNum;

	// 2.Talk to the user ask for the first number
	cout << "Please Enter the Second number: ";
	// 3.Store
	cin >> secondNum;

	// 4.Calculations
	prod = firstNum * secondNum;
	// 5.Display

	cout << "The product of " << firstNum << " and " << secondNum << " is " << prod << endl;
}