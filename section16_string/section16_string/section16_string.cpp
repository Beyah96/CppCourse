#include <iostream>
#include <string>

using namespace std;


int main() {

	string MyString = "ABCDEFGHIJKLMNOPQRSTUVWYZ";
	cout << "The length of Mystring is : " << MyString.length() << endl;

	cout << MyString[2] << endl; // will print C

	string S1 = "10", S2 = "20";
	string S3 = S1 + S2;

	cout << S3 << endl; // will pring 1020

	int Sum = stoi(S1) + stoi(S2);
	cout << Sum << endl; //will print 30


	return 0;
}