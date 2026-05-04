// problem 34 course 4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

float  readtotalsales()
{
	float totalsales;

	cout << " pleas enter a total sales ?\n";
	cin >> totalsales;

	return totalsales;

}

float getcoissionpercentage(float totalsales)
{
	if (totalsales >= 1000000)
		return 0.01;
	else if (totalsales >= 500000)
		return 0.02;
	else if (totalsales >= 100000)
		return 0.03;
	else if (totalsales >= 50000)
		return 0.05;
	else
		return 0, 00;

}

float calculatetotalcomission(float totalsales)
{

	return (getcoissionpercentage(totalsales) * totalsales);






}
int main()
{
	float totalsales = readtotalsales();

	cout << "comission percentage = " << getcoissionpercentage(totalsales) << endl;
	cout << " total comission = " << calculatetotalcomission(totalsales) << endl;







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
