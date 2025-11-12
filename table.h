// Written by Morgan Legare
#ifndef TABLE_H
#define TABLE_H
#include <iostream>
#include <fstream>
#include "journal.h"
using namespace std;

struct Entry {
	string title;
	string date;
	string text;
};

struct Node {
	Entry anEntry;
	Node* next;
};


class Table {
	public:
		Table();
		~Table();
		int addEntry(string title, string date, string text);
		int delEntry(string title);	
		
	
	private:
		const int TABLE_SIZE = 13;
		Node** table;
		int hashTitle(string title);
		int loadData();
		int saveData();
};	

#endif

