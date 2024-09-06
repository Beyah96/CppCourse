#include <iostream>
#include <string>

using namespace std;

string myFunction() {

	return "This is my first returning value funcion, this is the value.";


}

float MyMultiplyFunction()
{

	float x = 20.5;
	float y = 15.6;
	return x * y;
}


int main() {

	cout << myFunction() << endl;
	float result;

	result = MyMultiplyFunction() + 50;
	cout << result;

}
