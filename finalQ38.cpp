/*Marco Mayorga

COSC-1436

October 18, 2022

*/

#include <iostream>
#include <string>

using namespace std;

double totalNums(double monthBalance[]);
double highestNum(double monthBalance[]);
double averageOfNums(double monthBalance[]);
double lowestNum(double monthBalance[]);

const int TOTALMONTHS = 12;

int main()
{

	double monthBalance[TOTALMONTHS] = {};
	double accountBalance = 0;
	string month = "";

	for (int i = 0; i < TOTALMONTHS; i++)
	{
		switch (i)
		{
		case 0:
			month = "January";
			cout << "What was your balance for " << month << ": ";
			cin >> accountBalance;
			monthBalance[i] = accountBalance;
			break;
		case 1:
			month = "Febuary";
			cout << "What was your balance for " << month << ": ";
			cin >> accountBalance;
			monthBalance[i] = accountBalance;
			break;
		case 2:
			month = "March";
			cout << "What was your balance for " << month << ": ";
			cin >> accountBalance;
			monthBalance[i] = accountBalance;
			break;
		case 3:
			month = "April";
			cout << "What was your balance for " << month << ": ";
			cin >> accountBalance;
			monthBalance[i] = accountBalance;
			break;
		case 4:
			month = "May";
			cout << "What was your balance for " << month << ": ";
			cin >> accountBalance;
			monthBalance[i] = accountBalance;
			break;
		case 5:
			month = "June";
			cout << "What was your balance for " << month << ": ";
			cin >> accountBalance;
			monthBalance[i] = accountBalance;
			break;
		case 6:
			month = "July";
			cout << "What was your balance for " << month << ": ";
			cin >> accountBalance;
			monthBalance[i] = accountBalance;
			break;
		case 7:
			month = "August";
			cout << "What was your balance for " << month << ": ";
			cin >> accountBalance;
			monthBalance[i] = accountBalance;
			break;
		case 8:
			month = "September";
			cout << "What was your balance for " << month << ": ";
			cin >> accountBalance;
			monthBalance[i] = accountBalance;
			break;
		case 9:
			month = "October";
			cout << "What was your balance for " << month << ": ";
			cin >> accountBalance;
			monthBalance[i] = accountBalance;
			break;
		case 10:
			month = "November";
			cout << "What was your balance for " << month << ": ";
			cin >> accountBalance;
			monthBalance[i] = accountBalance;
			break;
		case 11:
			month = "December";
			cout << "What was your balance for " << month << ": ";
			cin >> accountBalance;
			monthBalance[i] = accountBalance;
			break;
		}
	}
	double total = totalNums(monthBalance);
	double highest = highestNum(monthBalance);
	double lowest = lowestNum(monthBalance);
	double avg = highestNum(monthBalance);
	cout << endl;
	cout << "The Total account balance for the year is: "
		 << "$" << total << endl;
	cout << "The Average monthly balance is: "
		 << "$" << avg << endl;
	cout << "The Lowest month was at: " << "$" << lowest << endl;
	cout << "The Highest month was at: " << "$" << highest << endl;
	return 0;
}

double totalNums(double monthBalance[])
{
	int total = 0;
	for (int i = 0; i < TOTALMONTHS; i++)
	{
		total += monthBalance[i];
	}
	return total;
}

double highestNum(double monthBalance[])
{
	int highestNum = monthBalance[0];
	for (int i = 0; i < TOTALMONTHS; i++)
	{
		if (monthBalance[i] >= highestNum)
		{
			highestNum = monthBalance[i];
		}
	}
	return highestNum;
}

double lowestNum(double monthBalance[])
{
	int lowestNum = monthBalance[0];
	for (int i = 0; i < TOTALMONTHS; i++)
	{
		if (monthBalance[i] <= lowestNum)
		{

			lowestNum = monthBalance[i];
		}
	}
	return lowestNum;
}

double averageOfNums(double monthBalance[])
{
	double sum = 0;
	double avg = 0;
	for (int i = 0; i < TOTALMONTHS; i++)
	{
		sum += monthBalance[i];
	}
	avg = sum / TOTALMONTHS;
	return avg;
}