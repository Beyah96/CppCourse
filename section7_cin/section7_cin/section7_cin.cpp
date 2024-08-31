#include <iostream>
using namespace std;

int main() {

	char MyChar;
	int MyNumber;

	cout << "Please enter a number: ";
	cin >> MyNumber;

	cout << "\nPlease enter a character: ";
	cin >> MyChar;

	cout << "\nYou entred this char: \"" << MyChar << "\" and this number: " << MyNumber;

	return 0;
}