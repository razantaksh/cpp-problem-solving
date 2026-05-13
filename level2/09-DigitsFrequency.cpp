
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
int CountDigitsFrequency(int number, short digittocheck)
{
    int freqcnt = 0, remainder = 0;

    while (number > 0)
    {
        remainder = number % 10;
        number = number / 10;

        if (remainder == digittocheck)
        {
            freqcnt++;
        }



    }
    return freqcnt;

}
void PrintAllDigitsFrequency(int number)
{
    for (int i = 0; i < 10; i++)
    {
        short digitfrequency = 0;

        digitfrequency = CountDigitsFrequency(number, i);

            if (digitfrequency > 0)
            {
                cout << " digit " << i << " frequency is "
                    << digitfrequency << " time(s)\n";


            }

    }



}


int main()
{
 
   
   int number = ReadPositiveNumber(" pleas enter a positive number ?");

   PrintAllDigitsFrequency(number);

}

