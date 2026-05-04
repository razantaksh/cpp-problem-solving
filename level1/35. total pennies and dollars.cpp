// problem 35 course 4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

struct stpiggybankcontent
{
	int pennies, nickels, dimes, dollars , quarter;
};

stpiggybankcontent readpiggybankcontent()
{
	stpiggybankcontent piggybankcontent;

	cout << " pleas enter a total pennies ?\n";
	cin >> piggybankcontent.pennies;
	cout << " pleas enter a total nickels ?\n";
	cin >> piggybankcontent.nickels;
	cout << " pleas enter a total dimes ?\n";
	cin >> piggybankcontent.dimes;
	cout << " pleas enter a total quarter ?\n";
	cin >> piggybankcontent.quarter;
	cout << " pleas enter a total dollares ?\n";
	cin >> piggybankcontent.dollars;

	return piggybankcontent;


}
int calculatetotalpennies(stpiggybankcontent piggybankcontent)
{
	int totalpennies = piggybankcontent.pennies * 1 + piggybankcontent.nickels * 5
		+ piggybankcontent.dimes * 10 + piggybankcontent.dollars * 100 + piggybankcontent.quarter * 25;


	return totalpennies;

}


int main()
{
	int totalpennies = calculatetotalpennies(readpiggybankcontent();

	cout << " total pennies = " << totalpennies << endl;
	cout << " total dollares = "<< totalpennies/100;







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
