

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
int SumOfDigits(int number)
{
    int sum = 0;
    int remainder = 0;

    while (number > 0)
    {
        remainder = number % 10;
        sum += remainder; 
        number = number / 10;

    }

    return sum;


}
void PrintSumOfDigits(int number)
{

    cout << " \nsum of digits = " << SumOfDigits(number) << endl;



}

int main()
{
    PrintSumOfDigits(ReadPositiveNumber("pleas enter a positive number ?\n"));
}

