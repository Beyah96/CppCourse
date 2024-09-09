#include <iostream>
#include <string>

using namespace std;




int main() {
	string x = "Mohamed Said Beyah";

	cout << x[0] << endl; // Print M, A String is an array of characters

	
	int y[5] = { 22, 18, 2, 55, 520 };

	cout << y[3] << endl;
	y[1] = 4;
	cout << y[1] + y[4] << endl;

	return 0;

}