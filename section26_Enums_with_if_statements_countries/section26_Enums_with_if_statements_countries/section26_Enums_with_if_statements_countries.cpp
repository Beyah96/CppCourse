#include <iostream>
#include <string>

using namespace std;

enum enCountry{ Jordan =1, Egypt = 2, Omane = 3, France =4, Mauritanie = 5};


int main() {

	enCountry Country;
	int c;

	cout << "Please enter the number of your country : " << endl;
	cout << "\n************************************\n";
	cout << "(1) : Jordan \n";
	cout << "(2) : Egypt \n";
	cout << "(3) : Omane \n";
	cout << "(4) : France \n";
	cout << "(5) : Mauritanie \n";
	cout << "\n************************************\n";
	
	cin >> c;
	Country = (enCountry)c;

	if (Country == enCountry::Jordan) {
		cout << "You're from Jordan ";
	}
	else if (Country == enCountry::Egypt) {
		cout << "You're from Egypt ";
	}
	else if (Country == enCountry::Omane) {
		cout << "You're from Omane ";
	}
	else if (Country == enCountry::France) {
		cout << "You're from France ";
	}
	else if (Country == enCountry::Mauritanie) {
		cout << "You're from Mauritanie ";
	}
	else {
		cout << "Wront number !! ";
	}
	return 0;

}