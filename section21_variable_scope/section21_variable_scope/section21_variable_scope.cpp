#include <iostream>
#include <string>

using namespace std;


int x = 7000;

void MyFunction() {
	int x = 50;
	cout << "The value of x inside the function is : " << x << endl;

}

int main() {
	int x = 60;
	cout << "The value of x inside the main function is : " << x << endl;
	MyFunction();
	cout << "The value of global variable x is : " << ::x << endl;
	return 0;
}