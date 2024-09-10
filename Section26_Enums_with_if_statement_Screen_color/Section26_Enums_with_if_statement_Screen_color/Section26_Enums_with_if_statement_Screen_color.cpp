#include <iostream>
#include <string>

using namespace std;

enum enScreenColor { Red = 1, Blue = 2, Green = 3, Yellow = 4 };
int main() {
	enScreenColor color;
	int c;

	cout << "Please enter your color number : \n";
	cout << "******************************** \n";
	cout << "(1) Red \n";
	cout << "(2) Green  \n";
	cout << "(1) Yellow \n";
	cout << "(1) Blue \n";
	cout << "******************************** \n";

	cin >> c;
	color = (enScreenColor)c;

	if (color == enScreenColor::Red) {
		system("color 4F ");
	}
	else if (color == enScreenColor::Blue) {
		system("color 1F ");
	}
	else if (color == enScreenColor::Green) {
		system("color 2F ");
	}
	else {
		system("color 6F ");
	}

	return 0;
}