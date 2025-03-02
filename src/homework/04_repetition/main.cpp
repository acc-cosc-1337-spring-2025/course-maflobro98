//write include statements
#include <iostream>
#include "repetition.h"
using namespace std;

//write using statements

int main() 
{
	cout << "1 - Factorial\n2 - Greatest Common Divisor\n3 - Exit\n"; // Display options

	int choice, number, secondNum; // Set variables

	do
	{
		cout << "Enter choice: "; // Get user input for choice
		cin >> choice;
		if(choice == 1) // Filter choice options 
		{
			cout << "\nEnter a factorial: "; // Get user input for function call and output
			cin >> number;
			cout << factorial(number) << endl;
		}
		else if(choice == 2)
		{
			cout << "\nEnter two numbers for gcd: "; // Get user input for function call and output
			cin >> number >> secondNum;
			cout << gcd(number, secondNum) << endl;
		}
		else if(choice == 3)
		{
			cout << "\nAre you sure you want to exit?  1.Yes  2.No " << endl; // Double check if user wants to exit
			cin >> number;
			if(number == 1) // If yes, program will exit
			{
				choice == 3;
			}
			if(number == 2) // If no, program will continue
			{
				choice == 0;
			}
		}
	} while (choice != 3);

	return 0;
}
