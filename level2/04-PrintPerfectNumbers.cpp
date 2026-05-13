
#include <iostream>
using namespace std;


int readpositivenumber(string message)
{
	int number;
	do
	{
		cout << message << endl;
		cin >> number;
	} while (number <= 0);

	return number;
}

bool IsPerfectNumber(int number)
{

	int sum = 0;


	for (int i = 1; i < number; i++)
	{
		if (number % i == 0)
		{
			sum += i;
		}


	}
	return sum == number;
}

void PrintPerfectNumbersFrom1ToN(int number)
{
	cout << " the perfect numbers from 1 to " << number << " are :" << endl;

	for (int j = 1; j <= number; j++)
	{
		if (IsPerfectNumber(j))

			cout << j << endl;

	}
}
int main() {
	PrintPerfectNumbersFrom1ToN(readpositivenumber("pleas enter a positive number ?"));
	return 0;
}


