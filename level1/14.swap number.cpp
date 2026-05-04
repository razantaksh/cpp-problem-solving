// problem 14 course 4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>
using namespace std;

void readnumbers(int& num1, int& num2)
{
    cout << " pleas enter number A\n";
    cin >> num1;

    cout << " pleas enter number B \n";
    cin >> num2;

}
void swap(int &A, int &B)
{
    int temp;
    temp = A;
    A = B;
    B = temp;

}
void printnumbers(int num1, int num2)
{
    cout << " number 1 = " << num1 << endl;
    cout << " number 2 = " << num2 << endl;



}

int main()
{
    int num1, num2;
    readnumbers(num1, num2);
    printnumbers(num1, num2);
    swap(num1, num2);
    printnumbers(num1, num2);



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
