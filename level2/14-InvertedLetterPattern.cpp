

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

void PrintInvertedLetterPattern(int number)
{
	cout << "\n";

	for (int i = 65 + number -1; i >= 65 ; i--)
	{

		for (int j = 1 ; j <= number -(65 + number -1 - i); j++)
		{
          cout << char(i);
		}

		cout << "\n";



	}


}


int main()
{
	PrintInvertedLetterPattern(ReadPositiveNumber("pleas enter a positive number?"));
}

