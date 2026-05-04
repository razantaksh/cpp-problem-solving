// problem 36 course 4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

enum enoperationtype {add = '+' , subtract = '-', multiply = '*' , divide = '/' };

float readnumber(string message)
{
	float number = 0;

	cout << message << endl;
	cin >> number;

	return number;

}

enoperationtype readoperationtype()
{

	char op;

	cout << " pleas enter operation type ' + , / , * , - '" << endl;
	cin >> op;

	return (enoperationtype)op;

}

float calculate(float number1, float number2, enoperationtype op)
{
	switch (op)
	{
	case enoperationtype::add:
		return number1 + number2;
	case enoperationtype::subtract:
		return number1 - number2;
	case enoperationtype::divide:
		return number1 / number2;
	case enoperationtype::multiply:
		return number1 * number2;
	default:
			return number1 + number2;


	}


}
int main()
{

	float number1 = readnumber(" pleas enter the first number ?\n");
	float number2 = readnumber("pleas enter the second number ?\n");

	enoperationtype op = readoperationtype();

	cout << endl << calculate(number1, number2, op) << endl;





}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
