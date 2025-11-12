// Written by Morgan Legare
#ifndef MAIN_H
#define MAIN_H
#include <iostream>
#include <fstream>
#include "journal.h"
#include "table.h"
using namespace std;








// CONSTANTS:
const int ENTER_JOURNAL = 1;
const int ENTER_LIST = 2;
const int QUIT = 3;

// VARIABLES:
int j = 0;
int numEntries = 0;

// FUNCTIONS:

void printMainMenu() {
	cout <<	"\n[=======================]\n"
		"[  WELCOME TO LIFE-LOG  ]\n"
		"[=======================]"
		"\n[  1) ENTER JOURNAL     ]\n"
		"[  2) ENTER LIST        ]\n"
		"[  3) QUIT              ]\n"
		"[=======================]";
}


int getMenuInput() {
	int input = 0;
	cout << "\nENTER CHOICE (1-3): ";
	cin >> input;
	while(input < 1 || input > 3) {
		cout << "\nERROR ENTER CHOICE (1-3)!\n"
			"\nENTER CHOICE (1-3): ";
		cin >> input;
	}
	return input;
}


void printBye() {
	cout << "\nQUITTING...\n"
		"\nTHANKS FOR USING LIFE-LOG HAVE A GREAT DAY!\n";
}


int getNewEntry(Table& entries) {
	string tempTitle;
	string tempDate;
	string tempText;
	cout << "ENTER ENTRY TITLE: ";
	cin >> tempTitle;
	while(tempTitle.length() == 0) {
		cout << "\nERROR TITLE CANNOT BE BLANK!\n"; 
		cout << "ENTER ENTRY TITLE: ";
		cin >> tempTitle;
	}	
	cout << "ENTER DATE (MM/DD/YYYY): ";
	cin >> tempDate;
	while(tempDate.length() == 0) {
		cout << "\nERROR DATE CANNOT BE BLANK!\n";
		cout << "ENTER DATE (MM/DD/YYYY): ";
		cin >> tempDate;
	}
	cout << "ENTRY BELOW:\n";
	cin >> tempText;
	while(tempText.length() == 0) {
		cout << "\nERROR ENTRY CANNOT BE BLANK!\n";
		cout << "ENTRY BELOW:\n";
		cin >> tempText;
	}	
	entries.addEntry(tempTitle, tempDate, tempText) == 0 ? cout << tempTitle << " HAS BEEN ADDED TO JOURNAL!\n" : cout << tempTitle << " IS AN ENTRY ALREADY!\n";
	return 0;
}

 










#endif
