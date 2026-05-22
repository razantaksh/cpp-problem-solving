

#include <iostream>
using namespace std;

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
int SumArray(int arr[100], int arrLength)
{
    int sum = 0;

    for (int i = 0; i < arrLength; i++)

    {
        sum += arr[i];

    }
    return sum;

}
int main()
{
    srand((unsigned)time(NULL));
    int arr[100], arrLength;

    FillArrayWithRandomNumbers(arr, arrLength);

    cout << " array elements :";
    PrintArray(arr, arrLength);

    cout << "\n sum of all numbers is :" << SumArray(arr, arrLength) << endl;

}


