

#include <iostream>
using namespace std;

int ReadPositiveNumber(string message)
{
    int number;
    do
    {
        cout << message << endl;
        cin >> number ;
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


int main()
{
    int number = ReadPositiveNumber(" Pleas enter the main number ?");
    short digittocheck = ReadPositiveNumber("Pleas enter one digit to check ?");
   cout << " digit "<< digittocheck << " frequency is " << CountDigitsFrequency(number, digittocheck) << " time(s) ";
}


