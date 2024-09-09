#include <iostream>
#include <string>

using namespace std;

void ReadArrayData(int x[3]) {

	cout << "Enter your first integer number : ";
	cin >> x[0];

	cout << "Enter your second integer number : ";
	cin >> x[1];
	
	cout << "Enter your third integer number : ";
	cin >> x[2];

}

void PrintArrayData(int x[3]) {


	cout << "Your first integer number is : " << x[0] << endl;

	cout << "Your second integer number is : " << x[1] << endl;

	cout << "Your third integer number is : " << x[2] << endl;


}

int main() {

	int x[3];
	ReadArrayData(x);
	PrintArrayData(x);
	return 0;
}