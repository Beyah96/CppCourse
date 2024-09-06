#include <iostream>
#include <string>

using namespace std;

int main() {

	string FullName;

	//cin >> FullName; // can't take integral line with spaces

	getline(cin, FullName);
	cout << FullName;

	return 0;

}