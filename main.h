// Written by Morgan Legare
#ifndef MAIN_H
#define MAIN_H
using namespace std;








// CONSTANTS:
const int ENTER_JOURNAL = 1;
const int ENTER_LIST = 2;
const int QUIT = 3;

// VARIABLES:
bool run = true;
int j = 0;
bool valid = false;

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
	while(input < 1 || input > 3) {
		cout << "\nENTER CHOICE (1-3): ";
		cin >> input;
	}
	return input;
}


void printBye() {
	cout << "\nTHANKS FOR USING LIFE-LOG HAVE A GREAT DAY!" << endl;
}
#endif
