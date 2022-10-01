/*Marco Mayorga

COSC-1436

September 22, 2022
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
	double rectangle1Perimeter;
	double rectangle2Perimeter;
	// 2.Ask User for rectangle length and width
	// 3.and store user answer
	cout << "Give me the Length of the first rectangle: ";
	cin >> rectangle1Length;
	cout << "Give me the Width of the first rectangle: ";
	cin >> rectangle1Width;
	cout << "Give me the Length of the second rectangle: ";
	cin >> rectangle2Length;
	cout << "Give me the width of the second rectangle: ";
	cin >> rectangle2Width;
	cout << endl;

	// 4.Calculations and logic
	// 5. and Display
	rectangle1Perimeter = 2 * rectangle1Length + 2 * rectangle1Width;
	rectangle2Perimeter = 2 * rectangle2Length + 2 * rectangle2Width;
	if (rectangle1Perimeter > rectangle2Perimeter)
	{
		cout << "The Perimeter of rectangle 1 is: " << rectangle1Perimeter << endl;
		cout << "The Perimeter of rectangle 2 is: " << rectangle2Perimeter << endl;
		cout << endl;
		cout << "Hence The first rectangle's Perimeter is bigger" << endl;
	}
	else if (rectangle2Perimeter > rectangle1Perimeter)
	{
		cout << "The Perimeter of rectangle 2 is: " << rectangle2Perimeter << endl;
		cout << "The Perimeter of rectangle 1 is: " << rectangle1Perimeter << endl;
		cout << endl;
		cout << "The second rectangle's Perimeter is bigger" << endl;
	}
	else
	{
		cout << "The Perimeter of rectangle 1 is: " << rectangle1Perimeter << endl;
		cout << "The Perimeter of rectangle 2 is: " << rectangle2Perimeter << endl;
		cout << endl;
		cout << "The Perimeter of both rectangles are the same!" << endl;
	}
	return 0;
}