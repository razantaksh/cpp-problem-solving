// problem 25 course 4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int readage()
{
	int age;
	cout << " pleas enter age between 18 and 45 :\n";
	cin >> age;

	return age;

}
bool validatenumberinrange(int number, int from, int to)
{

	return (number >= from && number < +to);
}

int readuntilagebetween(int from, int to)
{
	int age = 0;

	do
	{

		age = readage();
	} while (!validatenumberinrange(age, from, to));


	return age;


}



void printresult(int age )
{
	cout << " your age is :" << age << endl;

}

int main()
{

	printresult(readuntilagebetween(18, 45));
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
