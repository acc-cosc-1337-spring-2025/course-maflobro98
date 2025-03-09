#include <iostream>
#include "func.h"
using namespace std;


int main() 
{
	int userIn;
	string userDNA = "";
	cout << "Menu\n1- Get GC Content\n2- Get DNA Compliment\n3- Exit" << endl;
	cin >> userIn;

	if(userIn == 1)
	{
		cout << "\nEnter DNA string: ";
		cin >> userDNA;
		cout << endl;
		cout << get_gc_content(userDNA) << endl;
	}
	else if(userIn == 2)
	{
		cout << "\nEnter DNA string: ";
		cin >> userDNA;
		cout << endl;
		cout << get_dna_complement(userDNA) << endl;
	}
	else if(userIn == 3)
	{
		cout << "Good Bye!";
	}

	return 0;
}
