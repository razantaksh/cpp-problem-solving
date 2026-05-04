// problem 32 course 4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void readnumbers(int &base, int &exponent)
{


	cout << " pleas enter exponent number ?\n";
	cin >> exponent;
	
	cout << " pleas enter base number ?\n";
	cin >> base;
	

}
int exponentnumber(int base , int exponent)
{
	int p ;
	p = 1;
	if (exponent == 0)
	{
		return p;
}
		for (int counter = 0; counter < exponent; counter++)
		{
			p = p * base;
		

		}
return p;



}
void printresult(int base , int exponent)
{

	cout << " the result = " << exponentnumber(base, exponent);




}
int main()
{
	int base, exponent;
	
	readnumbers(base, exponent);

	printresult(base, exponent);



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
