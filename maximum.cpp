// Parker Dinkins
// COP 2000.001
// playing with numbers with if, else, else if


#include "stdafx.h"
#include <iostream>
#include <iomanip>
using namespace std;


int main()
{
	// vars
	int num1;
	int num2;

	// user input
	cout << "Number 1: ";
	cin >> num1;

	cout << "Number 2: ";
	cin >> num2;

	// if statement 
	if (num1 > num2)
		cout << num1 << " is the larger number." << endl << endl;

	else if (num2 > num1)
		cout << num2 << " is the largest number." << endl << endl;

	else if (num1 = num2)
		cout << "The numbers are equal" << endl << endl;


	return 0;
}

