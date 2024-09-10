#include <iostream>
#include <string>

using namespace std;

enum enWeekDays { Sunday = 1, Monday = 2, Tuesday = 3, Wednesday = 4, Thursday = 5, Friday = 6, Saturday = 7 };
enWeekDays ReadWeekDay() {
	int D;
	cin >> D;
	return (enWeekDays)D;
}
string GetWeekDayName(enWeekDays WeekDay) {
	string Day;
	switch (WeekDay) {
	case enWeekDays::Sunday:
		Day = "Sunday";
		break;
	case enWeekDays::Monday:
		Day = "Monday";
		break;
	case enWeekDays::Tuesday:
		Day = "Tuesday";
		break;
	case enWeekDays::Wednesday:
		Day = "Wednesday";
		break;
	case enWeekDays::Thursday:
		Day = "Thursday";
		break;
	case enWeekDays::Friday:
		Day = "Friday";
		break;
	case enWeekDays::Saturday:
		Day = "Saturday";
		break;
	default:
		Day = "Wrong input";
	}
	return Day;

}
void ShowWeekDayMenue() {

	cout << "\n****************************************************\n";
	cout << "		 WEEK'S DAYS				\n";
	cout << "****************************************************\n";
	cout << "1 : Sunday" << endl;
	cout << "2 : Monday" << endl;
	cout << "3 : Tuesday" << endl;
	cout << "4 : Wednesday" << endl;
	cout << "5 : Thursday" << endl;
	cout << "6 : Friday" << endl;
	cout << "7 : Saturday" << endl;
	cout << "\n****************************************************\n";
	cout << "\nPlease enter the number of your prefered day : \n";


}

int main() {
	ShowWeekDayMenue();
	cout << "Your prefered Day is : " << GetWeekDayName(ReadWeekDay());
	return 0;
}