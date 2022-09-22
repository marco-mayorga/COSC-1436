/*
Marco Mayorga

COSC-1436

September 22, 2022

Write a program that asks the user to enter a number within the range of 1 through 10.
Use a switch statement to display the Roman numeral version of that number.
Input Validation: Do not accept a number less than 1 or greater than 10.
*/

#include <iostream>

using namespace std;

int main()
{
	int userInput = 0;
	cout << "Enter a number between 1 to 10: " << endl;
	cin >> userInput;
	
	switch (userInput)
	{
	case 1:
		cout << "In roman numerals that is: I " << endl;
		break;
	case 2:
		cout << "In roman numerals that is: II" << endl;
		break;
	case 3:
		cout << "In roman numerals that is: III" << endl;
		break;
	case 4:
		cout << "In roman numerals that is: IV" << endl;
		break;
	case 5:
		cout << "In roman numerals that is: V" << endl;
		break;
	case 6:
		cout << "In roman numerals that is: VI" << endl;
		break;
	case 7:
		cout << "In roman numerals that is: VII" << endl;
		break;
	case 8:
		cout << "In roman numerals that is: VIII" << endl;
		break;
	case 9:
		cout << "In roman numerals that is: IX" << endl;
		break;
	case 10:
		cout << "In roman numerals that is: X" << endl;
		break;
	default:
		cout << "Thats less than 1 or more than 10 run the program again and choose a valid number!" << endl;
		break;
	}
	return 0;
}