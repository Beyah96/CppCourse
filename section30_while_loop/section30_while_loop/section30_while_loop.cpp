#include <iostream>
#include <string>

using namespace std;

int main() {
	int Number;
	cout << "Please enter a positive number : ";
	cin >> Number;

	while (Number < 0) {
		cout << "Wrong Number, PLZ enter a positive number :";
		cin >> Number;

	}
	cout << "\n The number you entered is " << Number << endl;
}