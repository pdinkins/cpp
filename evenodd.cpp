// Parker Dinkins
// COP 2000.001
// Determin if value is even or odd

#include "stdafx.h"
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	// vars
	int num;

	// user input 
	cout << "Integer value: ";
	cin >> num;
	if (num == 0) {
		cout << "0 is neither ood nor even." << endl << endl;
		return 0;
	}

	// even/odd check
	if (num % 2 == 1)		
		cout << num << " is an odd number." << endl << endl;
	else
		cout << num << " is an even number." << endl << endl;



    return 0;
}

