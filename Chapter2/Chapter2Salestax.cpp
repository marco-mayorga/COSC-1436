/*Marco Mayorga

COSC-1436

September 06, 2022

Write a program that will ask the user to enter the amount of a purchase (20 pts).
The program should then compute the state and county sales tax (20 pts).
Assume the state sales tax is 5 percent and the county sales tax is 2.5 percent (10 pts).
The program should display the amount of the purchase, the state sales tax, the county sales tax,
the total sales tax, and the total of the sale (which is the sum of the amount of purchase plus the total sales tax)
(50 pts).

Hint: Use the value 0.025 to represent 2.5 percent, and 0.05 to represent 5 percent.

Sample Output:            Sample Input

Enter the amount of the purchase: 10.00

Sample Output
Purchase Amount: $10.00
State Tax: $0.50
County Tax: $0.25
Total Tax: $0.75
Sale Total: $10.75
*/

#include <iostream>

using namespace std;

int main()
{
	// 0.Constants
	const double state_tax_rate = .05;
	const double county_tax_rate = .025;

	// 1.Variables
	double purchase_amount = 0;

	// 2.Talk to the user and ask for purchase amount
	cout << "Enter the amount of the purchase: " << endl;

	// 3.Store user input
	cin >> purchase_amount;

	// 4.Calculations
	double state_taxes = purchase_amount * state_tax_rate;
	double county_taxes = purchase_amount * county_tax_rate;

	// Step 1 and 4 together
	double total_sales_tax = state_taxes + county_taxes;

	// 5.Display
	cout << "Purchase Amount: $" << purchase_amount << endl;
	cout << "State Tax: $" << state_taxes << endl;
	cout << "County Tax: $" << county_taxes << endl;
	cout << "Total Tax: $" << total_sales_tax << endl;
	cout << "The sum of the Sale is: $" << total_sales_tax;
}