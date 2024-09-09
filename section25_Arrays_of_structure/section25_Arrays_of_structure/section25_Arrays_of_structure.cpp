#include <iostream>
#include <string>

using namespace std;

struct stPerson {
	string FirstName;
	string LastName;
	short Age;
	string Phone;
};


int main() {
	stPerson Persons[2];

	Persons[0].FirstName = "Mohamed Said";
	Persons[0].LastName = "Beyah";
	Persons[0].Age = 25;
	Persons[0].Phone = "255542169872";

	Persons[1].FirstName = "Bah";
	Persons[1].LastName = "Mohamed";
	Persons[1].Age = 45;
	Persons[1].Phone = "511861876272";

	cout << Persons[1].FirstName;


}