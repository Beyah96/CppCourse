#include <iostream>
#include <string>

using namespace std;

void MyFunctionByValue(int Num1) {

	Num1 = 700;
	cout << "Number inside function by value became : " << Num1 << endl;

}

void MyFunctionByReference(int &Num1) {

	Num1 = 800;
	cout << "Number inside function by reference became : " << Num1 << endl;

}

int main() {
	int Num1;

	Num1 = 1000;
	MyFunctionByValue(Num1);

	cout << "Number after calling the function by value became = " << Num1 << endl;

	MyFunctionByReference(Num1);

	cout << "Number after calling the function by reference became = " << Num1 << endl;

	return 0;
}