// ConsoleApplication2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

class Sum {
private:
	int num1;
	int num2;
	int sum;

	void validate1();
	void validate2();

public:

	void setNum();
	void setNum2();

	void setSum();
	void getSum();
};

void Sum::setNum() {

	cout << "enter the first number: " << endl;
	cin >> num1;
	validate1();

}

void Sum::setNum2() {

	cout << "enter the second number: " << endl;
	cin >> num2;
	validate2();

}

void Sum::validate1() {
	while (!cin) {
		cout << "Invalid value entered, try again: ";
		cin.clear();
		fseek(stdin, 0, SEEK_END);
		cin >> num1;
	}
}

void Sum::validate2() {
	while (!cin) {
		cout << "Invalid value entered, try again: ";
		cin.clear();
		fseek(stdin, 0, SEEK_END);
		cin >> num2;
	}
}

void Sum::setSum() {
	sum = num1 + num2;
}

void Sum::getSum() {
	cout << sum << endl;
}
int main()
{

	Sum numObj;

	numObj.setNum();
	numObj.setNum2();

	numObj.setSum();
	numObj.getSum();


    return 0;
}

