#include<iostream>
#include <string>

using namespace std;

int main() {
	int Num1;
	double Num2 = 18.99;

	Num1 = Num2;

	Num1 = (int)Num2;

	Num1 = int(Num2);


	cout << Num1 << endl;


	cout << "**************************************************\n";

	string str = "123.456";

	int num_int = stoi(str);

	float num_float = stof(str);

	double num_double = stod(str);

	cout << "num_int: " << num_int << endl;
	cout << "num_float: " << num_float << endl;
	cout << "num_double: " << num_double << endl;

	cout << "**************************************************\n";

	string str = "123.456";

	int num_int = stoi(str);

	float num_fllot = stof(str);

	double num_double = stod(str);

	cout << "**************************************************\n";

	int Num1 = 123;
	double Num2 = 18.99;

	string St1, St2;

	St1 = to_string(Num1);
	St1 = to_string(Num2);
	cout << St1 << endl;
	cout << St2 << endl;

	return 0;
}