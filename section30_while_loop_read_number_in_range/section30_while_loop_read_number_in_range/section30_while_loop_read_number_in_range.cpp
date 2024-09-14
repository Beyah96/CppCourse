#include <iostream>
#include <string>

using namespace std;

int ReadNumberInRange(int From, int To) {
	int Number;
	cout << "Please enter a number between " << From << " and " << To << endl;
	cin >> Number;

	while (Number < From || Number > To) {
		cout << "Wrong Number" << endl; 
		cout << "Please enter a number between " << From << " and " << To << endl;
		cin >> Number;
	}
	return Number;
}

int main() {
	int From,To;
	cout << "Enter the first number : ";
	cin >> From;
	cout << "Enter the second number : ";
	cin >> To;
	int Number = ReadNumberInRange(From,To);
	cout << "Your entered number is " << Number;
	return 0;
}