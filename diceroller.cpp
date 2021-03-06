// diceroller.cpp : Defines the entry point for the console application.
// Parker Dinkins
// COP 2000.001
// Roll the dice 1000 times and count the number of doubles rolled

#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// functions 
void seed();
void roll(int, int, int&);
void toss(int&);
void doubles(int, int, int&);

int main()
{

	int die1 = 0;
	int die2 = 0;
	int count = 0;
	
	// seed the generator
	seed();
	
	// roll the dice 
	roll(die1, die2, count);

	// final display
	cout << count << endl;



    return 0;
}

void seed() {
	srand(time(NULL));
}

void roll(int die1, int die2, int& count) {
	// roll 1000 times
	for (int i = 0; i < 1000; i++) {
		// roll each die
		toss(die1);
		toss(die2);
		
		// doubles
		doubles(die1, die2, count);
	}
}

void toss(int& die) {
	die = rand() % 6 + 1;
}

void doubles(int die1, int die2, int& count) {
	if (die1 == die2) {
		count++;
	}
}