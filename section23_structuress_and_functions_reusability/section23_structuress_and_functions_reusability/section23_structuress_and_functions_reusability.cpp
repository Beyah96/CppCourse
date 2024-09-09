#include <iostream>
#include <string>

using namespace std;

struct strInfo {
	string FirstName;
	string LastName;
	int Age;
	string Phone;

};

void ReadInfo(strInfo& Info) {

	cout << "Please enter your first Name : ";
	cin >> Info.FirstName;

	cout << "Please enter your last Name : ";
	cin >> Info.LastName;
	cout << "Please enter your Age : ";
	cin >> Info.Age;
	cout << "Please enter your Phone number : ";
	cin >> Info.Phone;
}

void PrintInfo(strInfo& Info) {

	cout << "\n***********************************************" << endl;
	cout << "Your first Name is : " << Info.FirstName << endl;

	cout << "Your last Name is : " << Info.LastName << endl;
	cout << "Please enter your Age : " << Info.Age << endl;
	cout << "Please enter your Phone number : " << Info.Phone << endl;

	cout << "***********************************************" << endl;
}

int main() {

	strInfo InfoPerson1;
	ReadInfo(InfoPerson1);
	PrintInfo(InfoPerson1);

	return 0;
}