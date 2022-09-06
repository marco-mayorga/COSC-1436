/*Marco Mayorga

COSC-1436

September 06, 2022

Practice*/
#include <iostream>
#include <string>

using namespace std;

int main()
{
	// 0.Constants
	const double FEDERAL_TAX_RATE = 8.25 / 100;

	// 1.Variables
	string fName = "";
	string lName = "";
	char middleInitial = ' ';
	string Email = "";
	int age = 0;
	double salary = 0.0;
	bool partOfPool = false;
	double purchase = 0.0;

	// 2.Talk to the user
	cout << "First Name: " << endl;
	cin >> fName;

	cout << "Middle Initial: " << endl;
	cin >> middleInitial;

	cout << "Last Name: " << endl;
	cin >> lName;

	cout << "E-mail: " << endl;
	cin >> Email;

	cout << "Age: " << endl;
	cin >> age;

	cout << "Would you lik to praticipate in our medical leave pool? Type in 1 for yes: ";
	cin >> partOfPool;

	// 3.Store
	double myTax = FEDERAL_TAX_RATE * purchase;

	// 4.Calculations

	// 5.Display
	cout << "Hello " << fName << " " << middleInitial << " " << lName << " Welcome to Google!" << endl;
	cout << "You are " << age << " years old and your salary will be $" << salary << endl;
	cout << "Your employee email adress will be: " << Email << endl;
	cout << "According to our records, your medical leave pool status is " << partOfPool << endl;
}