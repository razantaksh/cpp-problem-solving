

#include <iostream>
using namespace std;

void FillArray(int arr[100], int& arrlength)
{
	arrlength = 6;

	arr[0] = 10;
	arr[1] = 20;
	arr[2] = 30;
	arr[3] = 30;
	arr[4] = 20; 
	arr[5] = 10;


}

bool IsPalindrome(int arr[100],int arrlength)
{

	for (int i = 0; i < arrlength; i++)
	{

		if (arr[i] != arr[arrlength - 1 - i])
		{
			return false;
		}


	};


	return true;






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
	int arr[100], arrlength = 0;

	FillArray(arr, arrlength);

	cout << " array elements :\n";
	PrintArray(arr, arrlength);

	if (IsPalindrome(arr, arrlength))
	{

		cout << " \n yes array is palindrome \n";


	}
	else
	{
		cout << " \n no array is not palindrome \n";
	}

}

