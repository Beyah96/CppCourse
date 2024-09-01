#include <iostream>
using namespace std;

int main() {

	int A = 10, B ;

	B = A++;

	cout << "A = " << A << endl;
	cout << "B = " << B << endl;
	
	B = ++ A;

	cout << "A = " << A << endl;
	cout << "B = " << B << endl;

}