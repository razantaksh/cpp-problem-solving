
// problem 9 course 4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>
using namespace std;
enum enpassfail {pass = 1 , fail = 2};

void readnumbers(int &mark1, int &mark2, int &mark3)
{


	cout << " pleas enter first mark ?\n";
	cin >> mark1;

	cout << " pleas enter second mark ?\n";
	cin >> mark2;

	cout << " pleas enter third mark ?\n";
	cin >> mark3;




}

int sum3marks(int mark1, int mark2, int mark3)
{

	return (mark1 + mark2 + mark3);

}
float avgmarks(int mark1, int mark2, int mark3)
{

	return (float)sum3marks(mark1, mark2, mark3) / 3;



}
enpassfail checkavg(float avg)
{
	if (avg >= 50)
		return enpassfail::pass;
	else
		return enpassfail::fail;



}

void printavg(float avg)
{
	cout << " the total avrage of marks is : " << avg << endl;

	if (checkavg(avg)== enpassfail::pass)
		cout << "you pass";
	else
		cout << "you fail";
}




int main()
{
	int mark1, mark2, mark3;
	readnumbers(mark1, mark2, mark3);
	printavg(avgmarks(mark1,mark2,mark3));

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
