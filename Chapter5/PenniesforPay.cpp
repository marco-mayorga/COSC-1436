/*Marco Mayorga

COSC-1436

September 29, 2022

Write a program that calculates the amount of money a person would earn over a period of time -
if his or her salary is one penny the first day, two pennies the second day, and continues to double each day. (50 pts)

The program should ask the user for the number of days (20 pts).
Display a table showing what the salary was for each day, and then show the total pay at the end of the period (10 pts).
The output should be displayed in a dollar amount, not the number of pennies (10 pts).
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

	// 1.Variables
	const int INCREMENT = 2;
	int numberOfDays = 0;
	double dailySalary = .01;
	double pay = 0;
	// 2.Ask User for # of days && 3.Store user answer
	cout << "Enter the number of days: ";
	cin >> numberOfDays;
	// 2.displays the Day and dailySalary words formatted
	cout << "Day" << setw(13) << "Pennies" << endl;
	cout << "-------------------------" << endl;
	cout << endl;

	// 4.Calculations and logic
	for (int i = 0; i < numberOfDays; i++)
	{
		pay += dailySalary;
		cout << (i + 1) << setw(12) << "$" << dailySalary << endl;
		dailySalary *= INCREMENT;
	}
	cout << "The total salary for " << numberOfDays << " is " << dailySalary << endl;
	// 5.Display
	return 0;
}