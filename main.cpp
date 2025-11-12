// Written by Morgan Legare
#include <iostream>
#include "main.h"
#include "journal.h"
using namespace std;



int main() {
	Journal aJournal;
	while(run) {
		printMainMenu();
		int input = getMenuInput();					
		switch (input) {
			case ENTER_JOURNAL:
				aJournal.printJMenu(numEntries);	
				j = aJournal.getJMenuInput();
				
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


