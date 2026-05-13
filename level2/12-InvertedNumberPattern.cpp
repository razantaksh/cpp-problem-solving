
#include <iostream>
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
void PrintInvertedNmberPattern(int number)
{
	cout << "\n";


	for (int i = number; i >= 1; i--)
	{

		for (int j = 1; j <=i ;j++)
		{

			cout <<i;

		}
		cout << endl;

	}
	



}

int main()
{

	PrintInvertedNmberPattern(ReadPositiveNumber(" plea enter positive number?"));

}

