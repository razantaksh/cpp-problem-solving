

#include <iostream>
using namespace std;

float ReadPositiveNumber(string message)
{
	float number;

	do
	{
		cout << message << endl;
		cin >> number;

	} while (number <= 0);

	return number;

}

float daystoseconds(float numberofdays)
{

	return numberofdays * 24 * 60 * 60;	

}

float hourstoseconds(float numberofhours)
{


	return numberofhours * 60 * 60;

}

float minutestoseconds(float numberofminutes)
{
	return numberofminutes * 60;
}


int main()
{
	float numberofseconds = ReadPositiveNumber("Enter the number of seconds : ");	
	float numberofdays = ReadPositiveNumber("Enter the number of days you want to convert: ");
	float numberofhours = ReadPositiveNumber("Enter the number of hours you want to convert: ");
	float numberofminutes = ReadPositiveNumber("Enter the number of minutes you want to convert: ");

	cout << " total days : " << numberofdays << endl;
	cout << " total hours : " << numberofhours<< endl;	
	cout << " total minutes : " << numberofminutes << endl;
	cout << "***************************************" << endl;
	cout << " total seconds : " << numberofseconds +daystoseconds(numberofdays)+hourstoseconds(numberofhours)+minutestoseconds(numberofminutes) << endl;
}

