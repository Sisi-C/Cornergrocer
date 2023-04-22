// CornerGrocer.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <map>
#include <fstream>
#include <iostream>
#include "grocer.h";
using namespace std;


int main()
{
	auto grocer = unique_ptr<Grocer>(new Grocer("CS210_Project_Three_Input_File.txt"));

	int input = 0;
	string word;
	while (input != 4)
	{

		grocer->printMenu();
		cout << "Enter 1 - 4 only: ";
		cin >> input;

		switch (input)
		{
		case 1:
			cout << "Input a word you wish to look for";
			cin >> word;
			grocer->getFrequency(word);
			break;
		case 2:
			grocer->showFrequencies();
			break;
		case 3:

			grocer->showHistrogram();
			break;

		default:
			break;
		}

	}



}

