/*Marco Mayorga

COSC-1436

September 29, 2022

Write a program that asks the user for the meal purchase price and the tip percent (Example 10% or 15%).  The program then computes the tax, and tip on a meal charge. The tax should be 8.25 percent of the meal cost. The tip should be the user percent of the total after adding the tax. Display the meal cost, tax rate, tax amount, tip rate, tip amount, and total bill on the screen.

Sample Output:
Enter the meal purchase price: 100
What percent would you like to tip: 10 for 10%:  20
Meal Purchase: $100.00
Tax Rate: 8.25%
Tax Amount: $8.25
Tip Rate: 20%
Tip Amount: $21.65
Total: $129.90
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	//1.Variables
	double mealCost;
	double taxRate = 8.25;
	double taxAmount; 
	double tipRate;
	double tipAmount;
	double totalBill;

	//2.Ask User for 'type in here' && Store user answer
	cout <<  "Enter the meal purchase price: ";
	cin >> mealCost;
	cout << "What percent would you like to tip: 10 for 10%: ";
	cin >> tipRate;
	//4.Calculations and logic
	cout << fixed << showpoint << setprecision(2) << endl;
	taxAmount = (taxRate/100) * mealCost;
	tipAmount = tipRate/100 * (taxAmount + mealCost);
	totalBill = mealCost + tipAmount + taxAmount;

	//5.Display
	cout << "Meal Purchase: $" << mealCost << endl;
	cout << "Tax Rate: "<< taxRate << "%" << endl;
	cout << "Tax Amount: $" << taxAmount << endl;
	cout << "Tip Rate: " << tipRate <<"%" << endl ;
	cout << "Tip Amount: $" << tipAmount << endl;
	cout << "Total: $" << totalBill << endl;
	return 0; 
}