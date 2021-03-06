// favorites.cpp : Defines the entry point for the console application.
// Parker Dinkins
// COP 2000.001
// favorites: intro to functions

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

// variables
string inputdata;
string fav_color = "blue";
int num1, num2;
float quotient;
float product;


// functions

// function to write string to the console
void print(string inputdata) {
	cout << inputdata << endl;
}

void color() {
	// write the fav_color variable to the console 
	cout << fav_color << endl;
}

int validate(int num) {
	while (!cin) {
		cout << "Invalid input, numbers only.";
		fseek(stdin, 0, SEEK_END);
		cin.clear();
		cin >> num;
		return num;
	}
}

// CALCULATOR FUNCTIONS 
int add(int num1, int num2) {
	return num1 + num2;
}

int subtract(int num1, int num2) {
	return num1 - num2;
}

float multiply(float num1, float num2) {
	return num1 * num2;
}

float divide(float numerator, float denominator) {
	return numerator / denominator;
}

int getnumber() {
	// local variable
	int num;
	cout << "Enter a number: ";
	cin >> num;
	int validated_num = validate(num);
	return validated_num;
}



int main()
{
	// display

	int number = add(1, 3);
	cout << number << endl;

	int number2 = getnumber();
	int number3 = getnumber();

	int value = add(number2, number3);
	cout << value << endl;

    return 0;
}

