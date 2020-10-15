#include <iostream>
#include <string>
using namespace std;

int main() {

	int numberofmoney      = 50;
	int	numberofcostofusb  = 6;
	int totalofnumberofusb = numberofmoney / numberofcostofusb;
	cout << "Number of USBs bought is: " << totalofnumberofusb << endl;

	int totalofnumberofchange = numberofmoney % numberofcostofusb;
	cout << "Number of change left from USBs bought is: " << totalofnumberofchange << "$" ;


	//simply using the "cout" variable along side wit hthe "%" symbol to get the remaining remainder.//

	return 0;
}