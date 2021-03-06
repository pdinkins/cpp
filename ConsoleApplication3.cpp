// count upper

#include "stdafx.h"
#include <iostream>
#include <fstream>
using namespace std;

class Uper {
private:
	ifstream inFile;
	int count = 0;
	void testFile();

public:
	void openFile();
	//void testFile();
	void readFile();
	void closeFile();
	void display();
};

void Uper::openFile() {
	inFile.open("if.txt");
	testFile();
}

void Uper::testFile() {
	if (!inFile) {
		cerr << "input file did not open properly" << endl;
		exit(1234);
	}
}

void Uper::readFile() {
	char letter;

	while (inFile >> letter) {
		if (isupper(letter))
			count++;
	}
}

void Uper::closeFile() {
	inFile.close();
}

void Uper::display() {
	cout << count << endl;
}

int main()
{
	Uper up;

	up.openFile();
	
	up.readFile();

	up.closeFile();

	up.display();

    return 0;
}

