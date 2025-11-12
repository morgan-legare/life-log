// Written by Morgan Legare
#include <iostream>
#include <fstream>
#include "journal.h"
#include "table.h"
using namespace std;


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
	

int Journal::runJMenu(int input);
	if(input == 0) {
		cout << "PREV";
		return 0;
	}
	else if(input == 11) {
		cout << "NEXT";
		return 0;
	}
	else if (input > 0 && input < 11) {
		//entries
		return 0;
	}
	else {
		cout << "\nERROR ENTER CHOICE (0-11)!\n";
		return -1;
	}
}
