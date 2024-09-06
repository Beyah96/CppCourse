#include <iostream>
#include <string>

using namespace std;

int main() {

	int Number;
	string Name;
	string Country;

	cout << "Please enter Employee Number: \n";
	cin >> Number;

	cout << "Please enter Name :\n";
	getline(cin, Name);

	cout << "Please enter Country : \n";
	cin >> Country;

	return 0;


}