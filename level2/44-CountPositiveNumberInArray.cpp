
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

        arr[i] = RandomNumber(-100, 100);


    }


}
int PositiveCount(int arr[100], int arrlength)
{
    int counter = 0;
    for (int i = 0; i < arrlength; i++)
    {
        if (arr[i] >= 0)
        {
            counter++;
        }


    }
    return counter;




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


    int arr[100], arrlength = 0;

    FillArrayWithRandomNumbers(arr, arrlength);



    cout << " Array elements: ";
    PrintArray(arr, arrlength);

    cout << " \n positive numbers count is :" << PositiveCount(arr, arrlength);

}



