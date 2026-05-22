
#include <iostream>
using namespace std;

int ReadNumber()
{
    int number;
    cout << " pleas enter a number ?";
    cin >> number;

    return number;


}
void AddArrayElements(int arr[100], int &arrlength, int number)
{
    arrlength++;
    arr[arrlength - 1] = number;



}
void InputUserNumberInArray(int arr[100], int &arrlength)
{

    bool AddMore = true;

    do
    {
        AddArrayElements(arr, arrlength, ReadNumber());

        cout << " \n do you want to add more numbers : [0]:no , [1]:yes?";
            cin >> AddMore;


    } while (AddMore);







}
void PrintArray(int arr[100], int arrlength)
{



    for (int i = 0; i < arrlength; i++)
    {

        cout << arr[i]<< " ";
    }





}
int main()
{
    
    int arr[100], arrlength = 0;

    InputUserNumberInArray(arr, arrlength);

 
    cout << " \narray length :" << arrlength;
    cout << "\n array elements :";
        PrintArray(arr, arrlength);




}

