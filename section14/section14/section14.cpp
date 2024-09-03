#include <iostream>
using namespace std;

enum Color {Green, Red, Blue, Yellow};
enum Direction {North, South, East, West};
enum Week {Saturday, Sunday, Monday, Tuesday, Wednesday, Thursday, Friday};
enum Gendor {Male , Female};
enum Status {Single, Married};
 

int main() {

	Color MyColor;
	Direction MyDirection;
	Week MyDay;
	Gendor MyGendor;
	Status MyStatus;


	MyColor = Color::Blue;
	MyDirection = Direction::East;
	MyDay = Week::Tuesday;
	MyGendor = Gendor::Male;
	MyStatus = Status::Married;

	cout << "Color is : " << MyColor;

	return 0;

}