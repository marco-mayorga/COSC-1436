/*Marco Mayorga

COSC-1436

September 22, 2022

Write a program that can be used as a math tutor for a young student.
The program should display two random numbers (1 to 500) that are to be added.
And also have the ability to perform subtraction if they choose.
The program should wait for the student to enter the answer.
If the answer is correct, a message of congratulations should be printed.
If the answer is incorrect, a message should be printed showing the correct answer.
USER only inputs the 1 or 2 for the operation CHOICE of addition or subtraction AND the ANSWER to the question.
The computer generates the random numbers.
Hint: Use 1 for Addition and 2 for Subtraction

Sample Output:

Would you like to Add (1) or Subtract (2) your numbers?  1

Please answer the following:

 247 + 129 = 1000

Your sum is: 376

Sample Output:

Would you like to Add (1) or Subtract (2) your numbers?  2

Please answer the following:

 247 - 129 = 1

The answer was actually:    12.
*/

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <time.h>

using namespace std;

int main()
{
	// srand uses a seed value time(0)" gets time to use as a seed.
	// A seed is the initial number it uses to generate random numbers. The random number changes depending on the seed.
	srand(time(0));

	// 1.Variables
	int userChoice;
	int randNum1 = 1 + (rand() % 500);
	int randNum2 = 1 + (rand() % 500);
	int correctAnswer;
	int userAnswer;

	// 2.Ask User for choice between 1 and 2 for add and subtract && 3.Storing the users answer
	cout << endl;
	cout << "Would you like to Add (1) or Subtract (2) your numbers? ";
	cin >> userChoice;
	cout << endl;

	// 4.Calculations and logic

	if (userChoice == 1) // if userchoses 1 It'll add the 2 random nums
	{
		cout << setw(5) << randNum1 << endl;
		cout << endl;
		cout << "+ " << randNum2 << endl;
		cout << "------" << endl;
		cout << setw(2);
		cin >> userAnswer;
		correctAnswer = randNum1 + randNum2;
		if (userAnswer == correctAnswer)
		{
			cout << endl;
			cout << "Your sum is " << userAnswer << endl;
			cout << "The answer was actually: " << correctAnswer << endl;
			cout << "So you got it right!" << endl;
		}
		else
		{
			cout << endl;
			cout << "Your sum is " << userAnswer << endl;
			cout << "The answer was actually: " << correctAnswer << endl;
			cout << "So you got it wrong!" << endl;
		}
	}
	else if (userChoice == 2) // It'll subtract the 2 random nums
	{
		cout << setw(5) << randNum1 << endl;
		cout << endl;
		cout << "- " << randNum2 << endl;
		cout << "------" << endl;
		cin >> userAnswer;
		correctAnswer = randNum1 - randNum2;
		if (userAnswer == correctAnswer)
		{
			cout << endl;
			cout << "Your difference is " << userAnswer << endl;
			cout << "The answer was actually: " << correctAnswer << endl;
			cout << "So you got it right!" << endl;
		}
		else
		{
			cout << endl;
			cout << "Your difference is " << userAnswer << endl;
			cout << "The answer was actually: " << correctAnswer << endl;
			cout << "You got it wrong!" << endl;
		}
	}
	else // If they choose neither 1 or 2 the app quits
	{
		if (userChoice != 1 or userChoice != 2)
		{
			cout << "Type in a valid input next time" << endl;
		}
	}

	// 5.Display
	return 0;
}