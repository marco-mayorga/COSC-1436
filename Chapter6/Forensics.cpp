/*Marco Mayorga

COSC-1436

October 04, 2022

Forensics experts collect data from crime scenes and use mathematics to help solve some unanswered questions about the crime.
One of the physical tools they use are calipers to measure the length and width of blood drops or hair follicles.
To determine angles of impact they use the law of sine and even the law of tangents to calculate the height of the source.
Create a program that will allow investigators to type in their measurement findings and output answers to help in their investigation.
Create a project named Forensics with two major functions getHairType and getHeight.
Be sure to use at least four variables, medullaDiameter, entireHair, femurHeight, and gender.*/

#include <iostream>
using namespace std;

int getHairType(double medullaDiameter, double entireHair);
double getHeight(int gender, double femurHeight);

int main()
{
	// 1.Variables
	double medullaDiameter;
	double entireHair;
	double femurHeight;
	int gender;

	// Welcomes Inspector (User) in the console.
	cout << "Welcome inspector," << endl;

	// inserts a blank line
	cout << endl;

	// Gets medulla diameter and hair diameter in mm and stores it to the respective variables.
	cout << "Hair Analysis:" << endl;
	cout << "Please enter the medulla width in mm: ";
	cin >> medullaDiameter;
	cout << "Please enter the entire hair width in mm: ";
	cin >> entireHair;

	// inserts a blank line
	cout << endl;

	// Gets gender as 0 or 1 and femur height in cm from user and stores them to their respective variables.
	cout << "Height Analysis:" << endl;
	cout << "Please enter the gender (0 for male 1 for female): ";
	cin >> gender;
	cout << "Please enter the femur length in cm: ";
	cin >> femurHeight;

	// inserts a blank line
	cout << endl;

	// Calls get hairtype function and recieves the medullaDiameter and the entire hair.
	getHairType(medullaDiameter, entireHair);

	// Calls get height function and recieves the gender and femurHeight
	getHeight(gender, femurHeight);

	// inserts a blank line
	cout << endl;

	return 0;
}

int getHairType(double medullaDiameter, double entireHair)
{

	// The ratio of medullaDiameter to entireHair determines weather it is an animal or Human hair.
	double ratio = medullaDiameter / entireHair;

	// If >=.5 then animal if < .5 it's human
	if (ratio >= .5)
	{
		cout << "The sample provided is from an animal" << endl;
	}
	else
	{
		cout << "The sample provided is from a Human" << endl;
	}
	return 0;
}

double getHeight(int gender, double femurHeight)
{
	// This calculates the persons height using the gender and femurheight using the formulas
	// Male:  height = 69.089 + 2.238f (f stands for the femur length in cm)
	// Female: height = 61.412 + 2.317f  (f stands for the femur length in cm)

	if (gender == 0)
	{
		double male = 69.089 + 2.238 * femurHeight;
		cout << "The height is estimated to be " << male << endl;
	}

	else if (gender == 1)
	{
		double female = 61.412 + 2.317 * femurHeight;
		cout << "The height is estimated to be " << female << endl;
	}

	else
	{
		cout << "Not a Valid Gender" << endl;
	}
	return 0;
}