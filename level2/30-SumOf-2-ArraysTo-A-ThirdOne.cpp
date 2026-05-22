
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


int RandomNumber(int from, int to)
{
    int randNum = rand() % (to - from + 1) + from;

    return randNum;

}
void FillArrayWithRandomNumbers(int arr1[100], int arrLength)
{
   
        for (int i = 0; i <= arrLength - 1; i++)
        {


            arr1[i] = RandomNumber(1, 100);

        }
    


    

}
void PrintArray(int arr[100], int arrLength)
{
    for (int i = 0; i <= arrLength - 1; i++)
    {
        cout << arr[i] << " ";

    }

}
void SumArrays(int arrsource[100], int arrdestination[100], int arrLength, int arr3[100])
{
    

    for (int i = 0; i < arrLength; i++)
    {

        arr3[i] = arrsource[i] + arrdestination[i];
        
    }

   


}
int main()
{
    srand((unsigned)time(NULL));

    int arr1[100],  arr2[100], arr3[100];

	int arrlength = ReadPositiveNumber(" enter number of array elements :\n");  

    FillArrayWithRandomNumbers(arr1, arrlength);
    FillArrayWithRandomNumbers(arr2, arrlength);
   
    SumArrays(arr1, arr2, arrlength,arr3);


    cout << " \narray 1 elements :\n\n";
    PrintArray(arr1, arrlength);
    cout << "\n";
    cout << "\n array 2 elements :\n\n";
    PrintArray(arr2, arrlength);
    cout << "\n";

    cout << " \nsum of arra1 and array2 elements :\n\n";
    PrintArray(arr3, arrlength);
    cout << "\n";
}