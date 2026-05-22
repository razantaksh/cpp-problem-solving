
#include <iostream>
using namespace std;

int ReadNumber()
{
    int number;

   
    
        cout <<" enter number to searche :\n" << endl;
        cin >> number;
   

    return number;

}

int RandomNumber(int from, int to)
{
    int randNum = rand() % (to - from + 1) + from;

    return randNum;

}


void FillArrayWithRandomNumber(int arr[100], int &arrlength)
{
    cout << " enter number of elements you want ?\n";
    cin >> arrlength;

    for (int i = 0; i < arrlength; i++)
    {
        arr[i] = RandomNumber(1, 100);


    }


}
void PrintArray(int arr[100], int arrlength)
{
    for (int i = 0; i < arrlength; i++)
    {
        cout << arr[i] << "  ";
    }
}
short FindNumberPositionInArray(int arr[100], int number, int arrlength)
{
    for (int i = 0; i < arrlength; i++)
    {

        if (arr[i] == number)
            return i;



    }
    return -1;

}
  

int main()
{
    srand((unsigned)time(NULL));

    int arr[100], arrlength;

    FillArrayWithRandomNumber(arr, arrlength);

    cout << " \narray 1 elements :\n\n ";
    PrintArray(arr, arrlength);
    cout << "\n\n";

    int number = ReadNumber();
    cout << " \n number you are looking for is : " << number<< endl;

    short NumberPosition = FindNumberPositionInArray(arr, number, arrlength);

    if(NumberPosition==-1)
		cout << " \n number not found in array :-( \n";
    else
    {
		cout << " number found at position : " << NumberPosition << endl;
        cout << " number found its order : " << NumberPosition + 1 << endl;


    }
}
