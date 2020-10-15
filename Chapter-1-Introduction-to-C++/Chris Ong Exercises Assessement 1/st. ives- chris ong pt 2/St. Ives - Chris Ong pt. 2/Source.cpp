#include <iostream>
#include <string>
using namespace std;

int main() {

	int numberofman = 1;    //using "int" variable to identify which is which below and using the "*" symbol to multiply each and every thing given whilst using cout to give the int variable.//
	int numberofwives = 7;
	int numberofsacks = 7;
	int numberofcats = 7;
	int numberofkits = 7;

	cout << "As I was going to St.Ives, I met " << numberofman << " man with " << numberofwives << " wives" << endl;
	cout << "Each wife had " << numberofsacks << " sacks, each sack had " << numberofcats << " cats, each cat had " << numberofkits << " kits" << endl;
	cout << "Kits, cats, sacks and wives "    << endl;
	cout << "How many were going to St.Ives?" << endl;
	cout << "How are going to St. Ives?"      << endl;
	cout << "How many kits are there?"        << endl;

	int totalofnumberofkits = numberofcats * numberofsacks * numberofwives * numberofkits; 

	cout << "Total: " << totalofnumberofkits; 

	return 0;
}