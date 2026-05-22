

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
void AddArrayElement(int Number, int arr[100], int& arrLength)
{
    arrLength++;
    arr[arrLength - 1] = Number;
}
void CopyPrimeNumbersToNewArray(int arrsource[100], int arrLength, int arrdestination[100], int &arr2length)
{
    for (int i = 0; i < arrLength; i++)
    {
        if (CheckPrime(arrsource[i]) == enPrimeNotPrime::prime)
        {

			AddArrayElement(arrsource[i], arrdestination, arr2length);


        }



    }









}
void PrintArray(int arr[100], int arrLength)
{
    for (int i = 0; i <= arrLength - 1; i++)
    {
        cout << arr[i] << " ";

    }

}
int main()
{
   
	srand((unsigned)time(NULL));


    int arr[100], arrLength = 0;
    int arr2[100], arr2length = 0;

	FillArrayWithRandomNumbers(arr, arrLength); 

	CopyPrimeNumbersToNewArray(arr, arrLength, arr2, arr2length);

    cout << " array 1 elements :\n";
    PrintArray(arr, arrLength);
    cout << "\n";

    cout << " array 2 elements :\n ";
    PrintArray(arr2, arr2length);
    cout << "\n";
}

