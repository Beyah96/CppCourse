#include<iostream>
#include <string>

using namespace std;

int main() {

	int Num1 = 123;
	double Num2 = 18.99;

	string St1, St2;

	St1 = to_string(Num1);
	St1 = to_string(Num2);
	cout << St1 << endl;
	cout << St2 << endl;

	return 0;
}