#include <iostream>

using namespace std;

struct stAddress
{
	string Street1;
	string POBOX;
};

struct stOwner
{
	string FullName;
	string Phone;
	stAddress Adress;
};

struct Car
{
	string Brand;
	string Model;
	int Year;
	stOwner Owner;
};

int main() {

	Car MyCar1, MyCar2;

	MyCar1.Brand = "BMW";
	MyCar1.Model = "X5";
	MyCar1.Year = 2000;
	MyCar1.Owner.FullName = "Abouhadhoud";
	MyCar1.Owner.Phone = "065423898";
	MyCar1.Owner.Adress.POBOX = "Batiment 1";


	MyCar2.Brand = "Toyota";
	MyCar2.Model = "Hilux";
	MyCar2.Year = 2015;
	MyCar2.Owner.FullName = "Said";
	MyCar2.Owner.Phone = "244145654";


	cout << MyCar1.Brand << " " << MyCar1.Model << " " << MyCar1.Year << " " << MyCar1.Owner.FullName << " " << MyCar1.Owner.Phone <<  endl;
	cout << MyCar2.Brand << " " << MyCar2.Model << " " << MyCar2.Year << endl;

	return 0;
}