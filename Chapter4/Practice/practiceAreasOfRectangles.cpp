/*Marco Mayorga

COSC-1436

September 22, 2022

The Area of a rectangle is the rectangle’s length times its width.
Write a program that asks for the length and width of two rectangles.
The program should tell the user which rectangle has the greater Area,
or if the Areas are the same.
*/

#include <iostream>

using namespace std;

int main()
{
	// 1.Variables
	double rectangle1Length = 0;
	double rectangle1Width = 0;
	double rectangle2Length = 0;
	double rectangle2Width = 0;
	double rectangle1Area;
	double rectangle2Area;
	// 2.Ask User for rectangle length and width
	// 3.and store user answer
	cout << "Give me the Length of the first rectangle. " << endl;
	cin >> rectangle1Length;
	cout << "Give me the Width of the first rectangle. " << endl;
	cin >> rectangle1Width;
	cout << "Give me the Length of the second rectangle. " << endl;
	cin >> rectangle2Length;
	cout << "Give me the width of the second rectangle. " << endl;
	cin >> rectangle2Width;
	cout << endl;

	// 4.Calculations and logic
	// 5. and Display
	rectangle1Area = rectangle1Length * rectangle1Width;
	rectangle2Area = rectangle2Length * rectangle2Width;
	if (rectangle1Area > rectangle2Area)
	{
		cout << "The Area of rectangle 1 is: " << rectangle1Area << endl;
		cout << "The Area of rectangle 2 is: " << rectangle2Area << endl;
		cout << endl;
		cout << "Hence The first rectangle's Area is bigger" << endl;
	}
	else if (rectangle2Area > rectangle1Area)
	{
		cout << "The Area of rectangle 2 is: " << rectangle2Area << endl;
		cout << "The Area of rectangle 1 is: " << rectangle1Area << endl;
		cout << endl;
		cout << "The second rectangle's Area is bigger" << endl;
	}
	else
	{
		cout << "The Area of rectangle 1 is: " << rectangle1Area << endl;
		cout << "The Area of rectangle 2 is: " << rectangle2Area << endl;
		cout << endl;
		cout << "The Area of both rectangles are the same!" << endl;
	}
	return 0;
}