/*Marco Mayorga

COSC-1436

September 22, 2022

*/

#include <iostream>

using namespace std;

int main()
{
	// 1.Variables
	int grade = 0;
	char letter = ' ';

	// 2.Ask User for Grade && 3.Store user answer
	cout << endl;
	cout << "Input Student grade: ";
	cin >> grade;
	cout << endl;

	// 4.Calculations and logic && 5.Display
	if (grade >= 90)
	{
		letter = 'A';
	}
	else if (grade >= 80)
	{
		letter = 'B';
	}
	else if (grade >= 70)
	{
		letter = 'C';
	}
	else if (grade >= 60)
	{
		letter = 'D';
	}
	else
	{
		letter = 'F';
	}
	cout << "Your grade is an " << letter << endl;
	cout << "The end." << endl;
	return 0;
}