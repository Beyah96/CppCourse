#include <iostream>
#include <string>

using namespace std;

int main() {
	for (int i = 1; i <= 10; i++) {
		cout << "\n******** The product's table of " << i << "********" << endl;
		for (int j = 1; j <= 10; j++) {
			cout << i << " * " << j << " = " << i * j << endl;
		}
	}
	return 0;
}