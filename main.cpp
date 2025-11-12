// Written by Morgan Legare
#include <iostream>
#include <fstream>
#include "main.h"
#include "journal.h"
#include "table.h"
using namespace std;



int main() {
	Journal aJournal;
	Table entries;
	printMainMenu();
	int input = getMenuInput();					
	while(input != QUIT) {
		switch (input) {
			case ENTER_JOURNAL:
				aJournal.printJMenu(numEntries);	
				j = aJournal.getJMenuInput();
				aJournal.getNewEntry(entries);
				break;
			case ENTER_LIST:
				cout << "LIST" << endl;
				break;
		}
		printMainMenu();
		input = getMenuInput();					
	}	 
	printBye();
	return 0;
}


