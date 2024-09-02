#include <iostream>
using namespace std;

int main() {
	bool A = 1, B = 0;
	/* 
	cout << (A && B) << endl;
	cout << (A || B) << endl;
	cout << !A << endl;
	cout << !B << endl;
	cout << !(A && B) << endl;
	cout << !(A && B) << endl;
	*/

	bool result;

	// Not (5 > 6 OR 7 = 7) AND NOT (1 Or false)

	result = !((5 > 6) || (7 == 7)) && (!(1 or false));
	cout << result;
	return 0;
}