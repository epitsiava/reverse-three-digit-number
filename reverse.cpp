#include <iostream>

using namespace std;


int main() {
	int number;

    cout << "Enter a three-digit number: ";
	cin >> number;

	int first_dig=number/100;
	int sec_dig=(number-(first_dig*100))/10;
	int third_dig =number-(first_dig*100)-(sec_dig*10);

	int reversed_number= third_dig*100 + sec_dig*10 + first_dig;
	
	cout << "Reversed number: " << reversed_number << endl;
 
	
	return 0;
}



