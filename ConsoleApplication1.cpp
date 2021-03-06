// ConsoleApplication1.cpp : Defines the entry point for the console application.
// parker dinkins
// cop2000.001
// display favorites using OOP

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;


//class
class Favorites {
private:
	string color;
	string food;

public:
	void setColor();
	string getColor();
	
	void setFood();
	string getFood();

};

// ********** method definitions ****************** //

// SET
void Favorites::setColor() {
	cout << "enter your fav color: ";
	cin >> color;
}

void Favorites::setFood() {
	cout << "enter your fav food: ";
	cin >> food;
}


// GET
string Favorites::getColor() {
	return color;
}

string Favorites::getFood() {
	return food;
}


// ***************** MAIN ************************* //
int main()
{
	// instantiatie the class
	Favorites fav;

	// set the variables
	fav.setColor();
	fav.setFood();

	// display the results
	cout << fav.getColor() << endl; 
	cout << fav.getFood() << endl; 

    return 0;
}

