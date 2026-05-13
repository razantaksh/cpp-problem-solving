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
		if (number %i == 0)
		{
			sum += i;
		}


	}
	return sum == number;
}

	void printresult(int number)
	{
		if (IsPerfectNumber(number))
		
	   cout <<number<<  " is perfect";
		
		else
			
		cout << number << " is not perfect";




	}
	int main() {
		printresult(readpositivenumber("pleas enter a number ?"));
		return 0;
	}

