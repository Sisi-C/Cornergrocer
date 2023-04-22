#include "grocer.h";
#include <fstream>
#include <iostream>
using namespace std;

Grocer::Grocer(string filename) {
	//Declare
	ofstream outFS;
	fstream inFS;
	
	string item;


	// Open file
	inFS.open(filename);
	//Check errors
	if (!inFS.is_open()) {
		cout << "Could not open file" << endl;

	}
	//Read file
	while (!inFS.fail()) {
		inFS >> item;
		items[item]++;

	}

	// Done with file, so close it
	inFS.close();

	// Open file
	outFS.open("frequency.dat");
	//Check errors
	if (!outFS.is_open()) {
		cout << "Could not open file" << endl;

	}
	for (auto i : items)
	{
		outFS << i.first << " " << i.second << endl;
	}
	// Done with file, so close
	outFS.close();
}
//Display
void Grocer::printMenu()
{
	cout << "**************************" << endl;
	cout << " 1 - Menu Option One       " << endl;
	cout << " 2 - Menu Option Two     " << endl;
	cout << " 3 - Menu Option Three     " << endl;
	cout << " 4 - Exit Program       " << endl;
	cout << "**************************" << endl;
}
//Input
void Grocer::getFrequency(string item) {
	if (items.count(item)  < 1)
	{
		//Check error
		cout << "\n!Error no word you look for!" << endl;
	}
	else {
		cout << "Total of word you look for " << items.at(item) << endl;
	}
}
//Display all items
void Grocer::showFrequencies() {

	for (auto i : items)
	{
		cout << i.first << " " << i.second << endl;
	}

}
//Display total as *
void Grocer::showHistrogram() {
	for (auto i : items)
	{
		cout << i.first << " ";
		for (int j = 0; j < i.second; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
}