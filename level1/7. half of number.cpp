// problem 7 course 4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>
using namespace std;

int readnumber()
{
	int number;

	cout << " pleas enter any number :";
	cin >> number;

	return number;
}

float HalfNumber(int number)
{
	 return(float) number / 2;

}

void printresults(int number)
{
	string result = " half of the " + to_string(number) + " is " + to_string(HalfNumber(number));
		cout << result;
}



int main()
{
 
	printresults(readnumber());
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
