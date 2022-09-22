/*
Marco Mayorga

COSC-1436

September 22, 2022

The date June 10, 1960 is special because when we write it in the following format,
the month times the day equals the year.6/10/60

Write a program that asks the user to enter a month (in numeric form),
a day, and a two-digit year. The program should then determine
whether the month times the day is equal to the year. If so, it should
display a message saying the date is magic. Otherwise, it should
display a message saying the date is not magic.
*/
#include <iostream>

using namespace std;

int main()
{
	// 1.Variables
	int month;
	int day;
	int twoDigitYear;
	// 2. Ask user for date in numerical form
	// 3. and store their answers.
	cout << "Give me a month in numerical form: ";
	cin >> month;
	cout << "Give me a day in numerical form: ";
	cin >> day;
	cout << "Give me a year as two digits in numerical form (EX: 2000 is 00): ";
	cin >> twoDigitYear;

	// 4. Logic and calculations
	if (month * day == twoDigitYear)
	{
		cout << "This date is Magic!" << endl;
	}
	else
	{
		cout << "This date isnt magic" << endl;
	}
}