// Written by Morgan Legare
#include <iostream>
#include <fstream>
#include "table.h"
#include "journal.h"
using namespace std;


Table::Table() {
	table = new Node*[TABLE_SIZE];
	for(int i = 0; i < TABLE_SIZE; ++i) {
		table[i] = nullptr;
	}
	loadData();
}


Table::~Table() {
	saveData();
	for(int i = 0; i < TABLE_SIZE; ++i) {
		Node* curr = table[i];
		Node* temp = nullptr;
		while(curr) {
			temp = curr;
			curr = curr->next;
			delete temp;
//			delete title;
//			delete date;
//			delete text;
		}
	}
	delete[] table;
}


int Table::hashTitle(string title) {
	long long int hash = 0;
	long long int len = 0;
	len = title.length();
	hash = len % TABLE_SIZE;
	return hash;
}  
		

int Table::addEntry(string title, string date, string text) {
	int hash = hashTitle(title);
	Node* curr = table[hash];
	while(curr) {
		if(title == curr->anEntry.title) {
			return -1;
		}
		curr = curr->next;
	}
	Node* newNode = new Node;
	newNode->anEntry.title = title;
	newNode->anEntry.date = date;
	newNode->anEntry.text = text;
	newNode->next = table[hash];
	table[hash] = newNode;
	return 0;
}
	

int Table::delEntry(string title) {
	int hash = hashTitle(title);
	Node* curr = table[hash];
	Node* prev = nullptr;
	if(curr && title == curr->anEntry.title) {
		table[hash] = curr->next;
//		delete curr->anEntry.title;
//		delete curr->anEntry.date;
//		delete curr->anEntry.text;
		delete curr;
		return 0;
	}
	while(curr) {
		if(title == curr->anEntry.title) {
			prev->next = curr->next;
//			delete curr->anEntry.title;
//			delete curr->anEntry.date;
//			delete curr->anEntry.text;
			delete curr;
			return 0;
		}
		prev = curr;
		curr = curr->next;
	}
	return -1;
}
			
		
int Table::loadData() {
	ifstream inFile;
	string title;
	string date;
	string text;
	inFile.open("entries.txt");
	if(!inFile) return -1;
	addEntry(title, date, text);
	inFile.close();
	return 0;
}


int Table::saveData() {
	ofstream outFile;
	outFile.open("entries.txt");
	for(int i = 0; i < TABLE_SIZE; ++i) {
		Node* curr = table[i];
		while(curr) {
			if(curr->anEntry.title.length() > 0) {
				outFile << curr->anEntry.title << "|" << curr->anEntry.date << "|" << curr->anEntry.text << "|" << "\n";
			}
			curr = curr->next;
		}
	}
	outFile.close();
	return 0;
}



