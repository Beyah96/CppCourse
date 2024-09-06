#include <iostream>
#include <string>

using namespace std;

int MySumFunction(int Num1, int Num2) {

	return Num1 + Num2;
}

int main() {

	int Num1, Num2;
	cout << "Please entre your first Number : ";
	cin >> Num1;
	
	cout << "Please entre your second Number : ";
	cin >> Num2;

	int result = MySumFunction(Num1, Num2);
	cout << "The sum result is : " << result << endl; 
	return 0;
}