// problem 12 course 4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>
using namespace std;

void readnumbers(int &num1, int &num2 ,int &num3)
{

		cout << " pleas enter first number \n";
	cin >> num1;
	cout << " pleas enter second number \n";
	cin >> num2;
	cout << " pleas enter the third number\n";
	cin >> num3;

}
int themaxnum(int num1, int num2 ,int num3)
{
	if (num1 >= num2 && num1 >= num3)
		return num1;

	else if (num2 >= num1 && num2 >= num3)
		return num2;
	else
		return num3;
}
void printnum(int max)
{

	cout << " the max number is :" << max ;




}
int main()
{
	int num1, num2, num3;
	readnumbers(num1, num2, num3);
	printnum(themaxnum(num1,num2, num3));
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
