

#include <iostream>
using namespace std;

enum enprimenotprime { prime = 1 , notprime = 2 };

int readpositivenumber(string message)
{
    int number = 0;

    do
    {
        cout << message << endl;
        cin >> number;

    } while (number <= 0);

        return number;



}

enprimenotprime checkprime(int number)
{
    int M = round(number / 2);

    for (int counter = 2; counter <= M; counter++)
    {
        if (number % counter == 0)
        {

            return enprimenotprime::notprime;
        }
    }

    return enprimenotprime::prime;



}
void printprimenumbersfrom1toN(int number)
{
    cout << "prime numbers from 1 to " << number;
    cout << " are : " << endl;

    for (int i = 1; i <= number; i++)
    {
        if (checkprime(i) == enprimenotprime::prime)
        {
            cout << i << endl;
        }



    }


}

int main()
{
    printprimenumbersfrom1toN(readpositivenumber("pleas enter positive number ?\n"));
}

