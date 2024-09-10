#include <iostream>
#include <string>

using namespace std;

enum enCountries { Jordan = 1, Egypt = 2, Oman = 3, France =4, Mauritanie = 5 };

int main() {

	enCountries Country;
	int c;

	cout << "Please enter your country number : " << endl;
	cout << "\n******************************************\n";
	cout << "(1) : Jordan\n";
	cout << "(2) : Egypt\n";
	cout << "(3) : Oman\n";
	cout << "(4) : France\n";
	cout << "(5) : Mauritanie\n";
	cout << "\n******************************************\n";

	cout << "Your choice : ";
	cin >> c;
	Country = (enCountries)c;

	switch (Country) {
	case enCountries::Jordan:
		cout << "You're from Jordan ";
		break;
	
	case enCountries::Oman:
		cout << "You're from Oman ";
		break;
	
	case enCountries::France:
		cout << "You're from France ";
		break;
	
	case enCountries::Egypt:
		cout << "You're from Egypt ";
		break;
	
	case enCountries::Mauritanie:
		cout << "You're from Mauritanie ";
		break;
	default:
		cout << "You're from an other country";
	}
}