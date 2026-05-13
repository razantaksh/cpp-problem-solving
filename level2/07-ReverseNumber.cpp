

#include <iostream>
#include<string>
using namespace std;

int ReadPositiveNumber(string message)
{
	int number;

	do
	{
		cout << message << endl;
		cin >> number;
	} while (number <= 0);

	return number;

}
int ReverseNumber(int number)
{

	int remainder = 0, number2 = 0;

	while (number > 0)
	{
		remainder = number % 10;
		number = number / 10;
		number2 = number2 * 10 + remainder;


	}

	return number2;
}
void PrintReverseNumber(int number)
{


	cout << "\nreverse is :\n" << ReverseNumber(number) << endl;




}
int main()
{
   
	PrintReverseNumber(ReadPositiveNumber("pleas enter a positive number ?"));








}

