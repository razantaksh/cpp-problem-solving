// problem 37 course 4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

float readnumber(string message)
{
	float number = 0;

	cout << message << endl;
	cin >> number;

	return  number;


}

float sumnumbers()
{

	int sum = 0, number = 0, counter = 1;

	do
	{
		number = readnumber("pleas enter number? " + to_string(counter));

		if (number == -99)
		{
			break;
	[] }
		sum += number;
		counter++;


	} while (number != -99);

		return sum;


}
int main()
{
 
	cout << sumnumbers() << endl;






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
