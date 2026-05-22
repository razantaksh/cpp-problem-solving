
#include <iostream>
using namespace std;
enum enPrimeNotPrime { prime = 1, notprime = 2 };

enPrimeNotPrime CheckPrime(int number)
{
    int M = round(number / 2);

    for (int counter = 2; counter <= M; counter++)
    {
        if (number % counter == 0)
            return enPrimeNotPrime::notprime;

    }
    return enPrimeNotPrime::prime;


}

int RandomNumber(int from, int to)
{
    int randNum = rand() % (to - from + 1) + from;

    return randNum;

}
void FillArrayWithRandomNumbers(int arr[100], int& arrLength)
{
    cout << " enter number of elements :\n";
    cin >> arrLength;

    for (int i = 0; i <= arrLength - 1; i++)
    {

        arr[i] = RandomNumber(1, 100);


    }


}
void PrintArray(int arr[100], int arrLength)
{
    for (int i = 0; i <= arrLength - 1; i++)
    {
        cout << arr[i] << " ";

    }

}
 void CopyOnlyPrimeNumbers(int arrsource[100], int arrdestination[100], int arrLength,int &arr2length)
{
     int counter = 0;

    for (int i = 0; i < arrLength; i++)
    {
        if (CheckPrime(arrsource[i]) == enPrimeNotPrime::prime)
        {
            arrdestination[counter] = arrsource[i];
            counter++;
        }
    }
    arr2length = --counter;

}

 int main()
 {
     srand((unsigned)time(NULL));

     int arr[100], arrLength;

     FillArrayWithRandomNumbers(arr, arrLength);

     int arr2[100],arr2length = 0;
     CopyOnlyPrimeNumbers(arr, arr2, arrLength,arr2length);


     cout << " \narray 1 elements :\n\n";
     PrintArray(arr, arrLength);
     cout << "\n";
     cout << "\n array 2 only prime elements after copy :\n\n";
     PrintArray(arr2, arr2length);
     cout << "\n";
 }