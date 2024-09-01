#include <iostream>
using namespace std;

int main() {
	// Note By default every thing is signed
	/*
	
	int v1;
	signed int v2;
	unsigned int v3;

	short int v4;
	short v5;
	unsigned short int v6;
	unsigned short v7;

	signed long int v8;
	long int v9;
	long v10;
	unsigned long v11;

	long long int v12;
	unsigned long long v13;

	long double v14;
	signed char v15;
	char v16;
	unsigned char v17;

	*/
	
	/*
	double distance = 56E12; //56*10^12
	cout << distance << endl;//5.6e+13


	short d = 3436255;// Error out of range
	cout << d << endl;//28383 overflow

	unsigned int a = -10; // Error! can only srore positive numbers
	cout << a << endl;//4294967286 biggest number can be stored in unsigned int

	*/
	/*
	cout << "The size of bool data type is : " << sizeof(bool) << "\n";
	cout << "The size of char data type is : " << sizeof(char) << "\n";
	cout << "The size of short data type is : " << sizeof(short) << "\n";
	cout << "The size of int data type is : " << sizeof(int) << "\n";

	cout << "The size of long data type is : " << sizeof(long) << "\n";
	cout << "The size of long long data type is : " << sizeof(long long) << "\n";
	
	cout << "The size of float data type is : " << sizeof(bool) << "\n";
	cout << "The size of double data type is : " << sizeof(bool) << "\n";
	
	*/
	cout << "*******************************************************************\n";
	cout << "char Range: (" << CHAR_MIN << ", " << CHAR_MAX << ")\n";
	cout << "unsigned char Range: (" << CHAR_MIN << ", " << CHAR_MAX << ")\n";

	cout << "short Range: (" << SHRT_MIN << ", " << SHRT_MAX << ")\n";
	cout << "unsigned short Range: (" << 0 << ", " << USHRT_MAX << ")\n";
	
	cout << "int Range: (" << INT_MIN << ", " << INT_MAX << ")\n";
	cout << "unsigned int Range: (" << 0 << ", " << UINT_MAX << ")\n";
	cout << "long Range: (" << LONG_MIN << ", " << LONG_MAX << ")\n";
	cout << "unsigned long Range: (" << 0 << ", " << ULONG_MAX << ")\n";
	
	
	cout << "long long Range: (" << LLONG_MIN << ", " << LLONG_MAX << ")\n";
	cout << "unsigned long long Range: (" << 0 << ", " << ULLONG_MAX << ")\n";
	
	cout << "float Range: (" << FLT_MIN << ", " << FLT_MAX << ")\n";
	cout << "float (negative) Range: (" << -FLT_MIN << ", " << -FLT_MAX << ")\n";
	
	cout << "double Range: (" << DBL_MIN << ", " << DBL_MAX << ")\n";
	cout << "double (negative) Range: (" << - DBL_MIN << ", " << - DBL_MAX << ")\n";
	cout << "long double Range: (" << LDBL_MIN << ", " << LDBL_MAX << ")\n";
	cout << "*******************************************************************\n";
	
	
	

	return 0;


	


}