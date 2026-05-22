
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
void AddArrayElement(int Number, int arr[100], int& arrLength)
{
	arrLength++;
	arr[arrLength - 1] = Number;
}

void CopyOddNumbersToNewArray(int arr[100], int arrLength, int arr2[100], int&arr2length)
{
	for (int i = 0; i < arrLength; i++)

	{

		if (arr[i] % 2 != 0)
		{
			AddArrayElement(arr[i], arr2, arr2length);

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


	int arr[100], arrLength =0;

	int arr2[100], arr2length = 0;

	FillArrayWithRandomNumbers(arr, arrLength);
	cout << " array 1 elements :\n";
	PrintArray(arr, arrLength);

	CopyOddNumbersToNewArray(arr, arrLength, arr2, arr2length);
	cout << " \n";
	cout << " array 2 elements :\n";
	PrintArray(arr2, arr2length);

}

