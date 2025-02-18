//write include statements
#include <iostream>
#include "hwexpressions.h"

//write namespace using statement for cout
using std::cout;
using std::cin;

int main()
{
	double meal_amount, tip_rate, tip_amount, tax_amount, total; // create variables

	cout << "Enter meal amount: "; // get user input for meal amount 
	cin >> meal_amount;

	tax_amount = get_sales_tax_amount(meal_amount); // Calc tax amount from user input using function

	cout << "Enter tip rate (decimal percentage): "; // get user input for tip rate
	cin >> tip_rate;

	tip_amount = get_tip_amount(meal_amount, tip_rate);

	total = tip_amount + tax_amount + meal_amount;


	cout << "\nMeal Amount: " << meal_amount;
	cout << "\nSales Tax: " << tax_amount;
	cout << "\nTip Amount: " << tip_amount;
	cout << "\nTotal: " << total << "\n";

	return 0;
}
