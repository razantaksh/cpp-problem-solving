
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
void CopyArray(int arrsource[100], int arrdestination[100], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
    {

        arrdestination[i] = arrsource[i];

    }








}

int main()
{
    srand((unsigned)time(NULL));

    int arr[100], arrLength;

    FillArrayWithRandomNumbers(arr, arrLength);

    int arr2[100];
    CopyArray(arr, arr2, arrLength);


    cout << " \narray 1 elements :\n\n";
    PrintArray(arr, arrLength);
    cout << "\n";
    cout << "\n array 2 elements after copy :\n\n";
    PrintArray(arr2, arrLength);
    cout << "\n";
}




