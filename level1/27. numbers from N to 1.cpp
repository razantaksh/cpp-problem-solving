// PROBLEM 27 COURSE 4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int readnumber()
{
	int number;

	cout << " pleas enter number ?\n";
	cin >> number;

	return number;


}

void printrangefromNto1usingwhile(int N)
{

	int counter = N + 1;
	while (counter > 1)
	{
		counter--;
		cout << counter<< endl;
		



	}

}

void printrangfromNto1usingdowhile(int N)
{

	int counter = N + 1;
	do
	{
		counter--;
		cout << counter << endl;
		



	} while (counter> 1);




}
void printrangefromNto1usingfor(int N)
{

	for (int counter = N; counter >= 1; counter--)
	{
		cout << counter << endl;

	}



 }








int main()
{
	int N = readnumber();

	printrangefromNto1usingwhile(N);
	printrangfromNto1usingdowhile(N);
	printrangefromNto1usingfor(N);








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
