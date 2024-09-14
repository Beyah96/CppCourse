#include <iostream>
#include <string>

using namespace std;

void ReadRanges(int& From, int& To) {
	cout << "Enter the first number : ";
	cin >> From;
	cout << "Enter the second number : ";
	cin >> To;
}
int ReadNumberInRange(int From, int To) {
	int Number;
	 do{
		cout << "Please enter a number between " << From << " and " << To << endl;
		cin >> Number;
	 } while (Number < From || Number > To);
	return Number;
}

int main() {
	int From, To;
	ReadRanges(From, To);
	int Number = ReadNumberInRange(From, To);
	cout << "Your entered number is " << Number;
	return 0;
}