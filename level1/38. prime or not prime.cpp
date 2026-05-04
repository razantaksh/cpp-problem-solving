
#include <iostream>
using namespace std;

enum enPrimeNotPrime { prime = 1 , notprime = 2 };

float readPositivenumber(string message)
{
	float number = 0;

	do
	{
		cout << message << endl;
		cin >> number;


	} while (number <= 0);
	return number;


}

enPrimeNotPrime CheckPrime(int number)
{
	int M = round(number / 2);

	for (int counter = 2; counter <= M; counter++)
	{
		if (number % counter == 0)
		{

			return enPrimeNotPrime::notprime;
		}
	}

		return enPrimeNotPrime::prime;	



}
void PrintNumberType(int number)
{

	switch (CheckPrime(number))
	{
	case enPrimeNotPrime::prime:
		cout << " the number is prime\n";
		break;
	case enPrimeNotPrime::notprime:
		cout << " the number is not prime\n";
		break;
	}
}
int main()
{
  
	PrintNumberType(readPositivenumber("pleas enter a positive number ?\n"));





}

