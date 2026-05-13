
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

void PrintNumberPattern(int number)
{

	cout << "\n";

	for (int i = 1; i <=number; i++)
	{
		for (int j = 1; j <=i; j++)
		{


			cout << i;
		}

		cout << "\n";



	}


}
int main()
{
 

	PrintNumberPattern(ReadPositiveNumber("pleas enter a positive number ?"));



}

