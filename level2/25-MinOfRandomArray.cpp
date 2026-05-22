
#include <iostream>
using namespace std;

int RandomNumber(int from, int to)
{
    int randNum = rand() % (to - from + 1) + from;

    return randNum;

}
void FillArrayWithRandomNumbers(int arr[100], int &arrLength)
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
int MinNumberInArray(int arr[100], int arrLength)
{
    int min = 0;
    min = arr[0];

    for (int i = 0; i <= arrLength - 1; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];


        }

    }
    return min;


}
int main()
{
    srand((unsigned)time(NULL));
    int arr[100], arrLength;

    FillArrayWithRandomNumbers(arr, arrLength);

    cout << " array elements :";
    PrintArray(arr, arrLength);

    cout << "\n Min number is : " << MinNumberInArray(arr, arrLength);




}
