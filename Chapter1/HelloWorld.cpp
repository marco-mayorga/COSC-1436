/*Marco Mayorga

COSC-1436

August 30, 2022

For your assignment, you will create a C++ program that will output the information about yourself or your customers
(users). A sample output is provided below.  Be sure your program outputs exactly what is shown below except for the
user information, your information should output (20 pts). The bold information will be unique to each person. Be sure
to name your file HelloWorld.cpp .  (no space between Hello and World)  (30 pts)*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
	// 1. Sets user variables
	string name = "";
	string date = "";
	string course = "";
	string major = "";
	double gpa = 0.0;

	// 2. Ask for the users Information
	// 3. Store info

	// 2a. Ask user for name
	cout << "What is your name? ";
	// 3a. Store name info
	getline(cin, name);

	// 2b. Ask user for the date
	cout << "What is the date? ";
	// 3b. Store date info
	getline(cin, date);

	// 2c. Ask user for Course name
	cout << "What is the Course? ";
	// 3c. Store Course info
	getline(cin, course);

	// 2d. Ask user for their Major
	cout << "What is your Major? ";
	// 3d. Store Major info
	getline(cin, major);

	// 2e. Ask for their GPA
	cout << "What is your GPA? ";
	// 3e. Store GPA info
	cin >> gpa;

	// 4. No calculations

	// 5. Display
	cout << "\nName: " << name << endl;
	cout << "Date: " << date << endl;
	cout << "Course: " << course << endl;
	cout << "Major: " << major << endl;
	cout << "GPA: " << gpa << endl;
}