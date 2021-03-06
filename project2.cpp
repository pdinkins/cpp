// Parker Dinkins
// COP 2000.001
// Project 2 
// Collects input from the user and calculates the speeding ticket cost


#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;


int main()
{
	// Variable definitions 
	string name;		// violators name
	string ssn;			// violators social security number
	int speed_limit;	// speed limit
	int v_speed;		// violators speed 
	int ovr_speed;		// mph over the speed limit
	float court;		// flat fee of $95
	float ticket;		// total cost of the ticket
	float total;		// total cost

	// Program title
	cout << "Traffic Court \n\n";

	// User inputs 
	cout << "Enter the violator's name: ";	// violator's name
	fseek(stdin, 0, SEEK_END);
	getline(cin, name);

	cout << "Violator's SSN: ";				// violator's ssn
	cin >> ssn;

	cout << "\nSpeed limit(in mph): ";		// speed limit
	cin >> speed_limit;
	cout << "Violator's speed(in mph): ";	// speed the violator was traveling
	cin >> v_speed;

	// Calculations
	ovr_speed = v_speed - speed_limit;		// mph over the speed limit
	court = 95.00;							// lat court fee declaration
	ticket = ovr_speed * 25;				// cost of ticket based on mph over the speed limit perp was going 
	total = court + ticket;					// total cost of ticket and court fee

	// Output of program
	cout << fixed << setprecision(2);		// set the float values to 2
	cout << "\n" << name << " was travelling " << ovr_speed << " mph over the speed limit." << endl;
	cout << "Cost of ticket: " << ticket << endl;
	cout << "Court costs: " << court << endl;
	cout << "\nTotal due for " << name << ":" << total << endl;


	return 0;
}
