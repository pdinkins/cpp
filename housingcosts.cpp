// Parker Dinkins
// COP 2000.001
// housing costs calculator


#include "stdafx.h"
#include <iomanip>
#include <iostream>
#include <string>
using namespace std;


int main()
{
	// Variables
	string name;
	float rent;
	float utils;
	float cable;
	float phone;
	float total;

	// using input
	cout << "Name: ";
	getline(cin, name);

	cout << "Rent: ";
	cin >> rent;

	cout << "Utilities: ";
	cin >> utils;

	cout << "Cable: ";
	cin >> cable;

	cout << "Phone: ";
	cin >> phone;

	// calculations
	total = rent + utils + cable + phone;

	// display
	cout << fixed << setprecision(2) << endl << endl;
	cout << name << " you owe $" << total << endl << endl;


    return 0;
}

