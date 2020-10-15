#include <iostream>
#include <string>
using namespace std;

int main() {

	string myname;
	string myhometown; 
	int	   myage;

	cout << "What is my name? ";
	getline(cin, myname);

	cout << "Where is my hometown? ";
	getline(cin, myhometown);

	cout << "How old am I? ";
	cin  >> myage;


	cout << "My name: " << myname << endl
		 << "My home town: " << myhometown << endl
		 << "My age: "	 << myage << endl;

	//we were asked to code our programs to ask questions and had to make it so that the user can respond to our questions.//

	return 0; 
}