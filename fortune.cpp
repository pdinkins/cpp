// Parker Dinkins
// COP 2000.001 
// Fortune teller

#include "stdafx.h"
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;


int main()
{
	// vars
	string fortune;

	// user input 
	cout << "Fortune Teller" << endl << endl;
	cout << "Enter 'one', 'two', or 'three' to see your fortune: ";
	cin >> fortune;

	// determine fortune 
	if (fortune == "one")
		cout << "lol you typed in one" << endl;

	else if (fortune == "two")
		cout << "You typed in two. Nice job " << endl;

	else if (fortune == "three")
		cout << "You are going to die in a 100 years" << endl;

	else
		cout << "Read the directions you idiot" << endl;

    return 0;
}

