// Written by Morgan Legare
#include <iostream>
#include "journal.h"
using namespace std;

Journal::Journal() {

}

Journal::~Journal() {

}



void Journal::printJMenu() {
	cout << "\nENTRIES BELOW:\n"
		"\n1 ENTRY\n"
		"2 ENTRY\n"
		"3 ENTRY\n"
		"4 ENTRY\n"
		"5 ENTRY\n"
		"6 ENTRY\n"
		"7 ENTRY\n"
		"8 ENTRY\n"
		"9 ENTRY\n"
		"10 ENTRY\n"
		"\n< (PREV 0)  (NEXT 11) >\n";
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
		
