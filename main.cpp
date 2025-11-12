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
				aJournal.printJMenu();	
				j = aJournal.getJMenuInput();
				/*while(!valid) {
					bool flag = true;
					if(j > 0 || j < 11) {
						switch (j) {
						//entries	
						}	
					}
					else if(j == 0 || j == 11) {
						switch (j) {
							case 0:
								cout << "prev page";	
							case 11:
								cout << "next page";		
						}
					}
					else {
						cout << "\nNOT A VALID ENTRY. "
							"PLEASE TRY AGAIN\n";
						flag = false;
					}
					flag ? valid = true : valid = false;
				}*/
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


