// Written by Morgan Legare
#ifndef JOURNAL_H
#define JOURNAL_H
#include <iostream>
#include <fstream>
#include "table.h"
using namespace std;

class Journal {
	public:
	void printJMenu(int numEntries);
	int getJMenuInput();
};


#endif
