#include <iostream>
#include <map>
using namespace std;


//Set private and public member 
class Grocer {
private:

	map<string, int> items;

public:
	void printMenu();
	void getFrequency(string items);
	void showFrequencies();
	void showHistrogram();
	Grocer(string filename);



};
