// testscores.cpp : Defines the entry point for the console application.
// Parker Dinkins
// COP 2000.001
// Takes user inputed test scores and returns the highest of the first two and the third



#include "stdafx.h"
#include <string>
#include <iostream>
#include <iomanip>
using namespace std;

// displays a console error message
void tryagain() {
	cout << "The test score must be between 0-50" << endl;
}

string lettergrade(int total_points) {
	//vars
	string lg;
	
	//determines letter grade
	if (total_points >= 90) {
		lg = "A";
		return lg;
	}
	else if (total_points < 90 && total_points >= 80) {
		lg = "B";
		return lg;
	}
	else if (total_points < 80 && total_points >= 70) {
		lg = "C";
		return lg;
	}
	else if (total_points < 70 && total_points >= 60) {
		lg = "D";
		return lg;
	}
	else {
		lg = "F";
		return lg;
	}
}

int main()
{
	//vars 
	int test1, test2, test3;
	int lowest;
	int total_points;

	// test score 1
	do {
		cout << "\nEnter the score for test #1 : ";
		cin >> test1;
		if (test1 < 0 || test1 > 50)
			tryagain();
	} while (test1 < 0 || test1 > 50);
	

	//test score 2
	do {
		cout << "\nEnter the score for test #2 : ";
		cin >> test2;
		if (test2 < 0 || test2 > 50)
			tryagain();
	} while (test2 < 0 || test2 > 50);
	

	// test score 3
	do {
		cout << "\nEnter the score for test #3 : ";
		cin >> test3;
		if (test3 < 0 || test3 > 50)
			tryagain();
	} while (test3 < 0 || test3 > 50);


	// final out checks and output
	if (test1 > test2) {
		total_points = test3 + test1;
		cout << "The average for the course = " << total_points << endl;
		string letter = lettergrade(total_points);
		cout << "The letter grade = " << letter << endl;
	}
	else {
		total_points = test3 + test2;
		cout << "The average for the course = " << total_points << endl;
		string letter = lettergrade(total_points);
		cout << "The letter grade = " << letter << endl;
	}
		



    return 0;
}

