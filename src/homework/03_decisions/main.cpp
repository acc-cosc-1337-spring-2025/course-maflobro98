//write include statements
#include <iostream>
using namespace std;

#include "decisions.h"

int main() 
{
	int choice, grade;
	cout << "MAIN MENU\n\n1 - Letter grade using if\n2 - Letter grade using switch\n3 - exit\n";
	cin >> choice;

	if (choice == 1) // Option 1 calls for get_letter_grade_using_if
	{
		cout << "Enter grade value: ";
		cin >> grade; 
		if (grade >= 0 && grade <= 100) // Checks if input value is in range
		{
			cout << get_letter_grade_using_if(grade) << endl;
		}
		else
		{
			cout << "Grade is out of range\n";
		}
	}
	else if (choice == 2) // Option 2 calls for get_letter_grade_using_switch
	{
		cout << "Enter grade value: ";
		cin >> grade; 
		if (grade >= 0 && grade <= 100) // Checks if input value is in range
		{
			cout << get_letter_grade_using_switch(grade) << endl;
		}
		else
		{
			cout << "Grade is out of range\n";
		}
	}
	else if (choice == 3)
	{
		cout << "Good Bye";
	}
	else
	{
		cout << "Invalid input. Good bye";
	}

	return 0;
}