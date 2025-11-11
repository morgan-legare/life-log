// Written by Morgan Legare
#include <iostream>
#include "main.h"
using namespace std;



int main() {
	while(run) {
		printMainMenu();
		int input = getMenuInput();					
		switch (input) {
			case ENTER_JOURNAL:
				cout << "JOURNAL" << endl;
				break;
			case ENTER_LIST:
				cout << "LIST" << endl;
				break;
			case QUIT:
				run = false;
				break;
		}
			
	}	 
	printBye();
	return 0;
}


