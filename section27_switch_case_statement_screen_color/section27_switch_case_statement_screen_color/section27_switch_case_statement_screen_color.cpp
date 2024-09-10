#include <iostream>
#include <string>

using namespace std;

enum enColor { Red = 1, Blue = 2, Green = 3, Yellow = 4};
int main() {
	enColor Color;
	int c;

	cout << "Please choose the number of your prefered color : \n";
	cout << "\n******************* Colors ***********************\n";
	cout << "(1) : Red \n";
	cout << "(2) : Blue \n";
	cout << "(3) : Green \n";
	cout << "(4) : Yellow \n";
	cout << "\n**************************************************\n";
	cout << "Your choice : ";
	cin >> c;
	Color = (enColor)c;

	switch (Color) {
	case enColor::Red:
		system("color 4F");
		break;
	case enColor::Blue:
		system("color 1F");
		break;
	case enColor::Green :
		system("color 2F");
		break;
	case enColor::Yellow:
		system("color 6F");
		break;
	default : 
		cout << "Wrong color";

	}
	return 0;

	return 0;
}