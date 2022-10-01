/*Marco Mayorga

COSC-1436

September 29, 2022

Write a program that calculates the average number of hours one person spends on their mobile device within a 3 month period. 
he program should ask the user to enter the name of each month, 
such as June or July, and August, then ask the user to type in the number of hours they used each month. 
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
	//1.Variables
	string month1 = "";
	string month2 = "";
	string month3 = "";

	double hoursForMonth1 = 0;
	double hoursForMonth2 = 0;
	double hoursForMonth3 =0;
	double averageHours = 0;
	//2.Ask User for Months and Hours && Store user answer
	cout << "Enter the first month:" << endl;
	getline(cin, month1);

	cout << "Enter the second month:" << endl;
	getline(cin, month2);

	cout << "Enter the third month:" << endl;
	getline(cin, month3);

	cout << "Enter the number of hours spent on your mobile in " << month1 << ": ";
	cin >> hoursForMonth1;

	cout << "Enter the number of hours spent on your mobile in " << month2 << ": ";
	cin >> hoursForMonth2;

	cout << "Enter the number of hours spent on your mobile in " << month3 << ": ";
	cin >> hoursForMonth3;


	//4.Calculations and logic
	averageHours = (hoursForMonth1 + hoursForMonth2 + hoursForMonth3) / 3;
	//5.Display
	cout << "The average time spent on your mobile device for ";  
	cout << month1 << ", " << month2 << ", and " << month3 <<  " is " << averageHours <<" hours." << endl;;
	return 0; 
}