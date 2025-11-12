// Written by Morgan Legare
#include <iostream>
#include "journal.h"
using namespace std;

Journal::Journal() {

}

Journal::~Journal() {

}



void Journal::printJMenu(int numEntries) {
	cout << "\nENTRIES BELOW:\n";
	if(numEntries < 1) {
		cout << "\nNO ENTRIES YET\n";
	}
	else {
		cout << "\nENTRY\n";
	}
	cout << "\n< (PREV 0)  (NEXT 11) >\n";
}


int Journal::getJMenuInput() {
	int input = 0;
	int flag = 0;
	while(input < 0 || input > 11 || flag < 1) {
		cout << "\nENTER CHOICE (0-11): ";
		cin >> input;
		if(input > 0 && input < 11) {
			flag = 1;
		}
	}
	return input;
}
	
