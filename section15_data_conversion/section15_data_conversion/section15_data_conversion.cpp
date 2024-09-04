#include<iostream>
#include <string>

using namespace std;

int main() {

	string str = "123.456";

	int num_int = stoi(str);

	float num_float = stof(str);

	double num_double = stod(str);
	

	cout << "num_int: " << num_int << endl;
	cout << "num_float: " << num_float << endl;
	cout << "num_double: " << num_double << endl;

	return 0;
}