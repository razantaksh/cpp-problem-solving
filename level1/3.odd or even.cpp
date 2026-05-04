// problem 3 course 4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>
using namespace std;

enum enNumbertype { odd = 1 , even = 2};

int readnumber()
{
	int number;

	cout << " pleas enter number ? \n";
	cin >> number;

	return number;

}

enNumbertype checknumbertype(int number)
{
	int result = number % 2;
	if (result == 0)
		return enNumbertype::even;
	else
		return enNumbertype::odd;


}
void printnumbertype(enNumbertype numbertype)
{
	if (numbertype == enNumbertype::even)
		cout << " number is even ";
	else
		cout << " number is odd ";


}


int main()
{
  
	printnumbertype(checknumbertype(readnumber()));

	return 0;




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
