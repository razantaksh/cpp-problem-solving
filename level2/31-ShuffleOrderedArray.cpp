


#include <iostream>
using namespace std;

int ReadPositiveNumber(string message)
{
	int num;
	do
	{
		cout << "Enter a positive number: ";
		cin >> num;
	} while (num <= 0);
	return num;
}
void swap(int& A, int& B)
{
	int temp;

	temp = A;
	A = B;
	B = temp;


}
int RandomNumber(int from, int to)
{
	int randNum = rand() % (to - from + 1) + from;

	return randNum;

}

void FillArrayWith1ToN(int arr[100], int arrLength)
{
	

	for (int i = 0; i < arrLength; i++)
	{

		arr[i] = i + 1;


	}

}
void ShuffleArray(int arr[100], int arrLength)
{

	for (int i = 0; i < arrLength; i++)
	{

		swap(arr[RandomNumber(1, arrLength )-1], arr[RandomNumber(1, arrLength )-1]);

	}




}
void PrintArray(int arr[100], int arrLength)
{

	for (int i = 0; i < arrLength; i++)
	{
		cout << arr[i] << " ";


	}



}

int main()
{
	srand((unsigned)time(NULL));

	int arr[100]; 
	int arrLength = ReadPositiveNumber("pleas enter number of elements ?");

	FillArrayWith1ToN(arr, arrLength);

	cout << " array elements before shuffer:\n";
	PrintArray(arr, arrLength);
	cout << "\n";

	ShuffleArray(arr, arrLength);

	cout << "array elements after shuffer :\n";
	PrintArray(arr, arrLength);
	cout << "\n";

}

