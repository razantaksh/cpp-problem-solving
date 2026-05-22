// 22-RepeatedElementsCountINArray.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

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
void ReadArray(int arr[100], int &arrLength)
{
	cout << "enter number of elements ?\n";
	cin >> arrLength;

	cout << " enter array elements :\n";
	for (int i = 0; i < arrLength; i++)
	{
		cout << " element [" << i+1 << "] : ";
		cin >> arr[i];



	}
	cout << endl;

}
void PrintArray(int arr[100], int arrLength)
{

	for (int i = 0; i < arrLength; i++)
	{
		cout << arr[i] << " ";


	}


}
int TimesRepeated(int arr[100], int arrLength, int number)
{
	int counter = 0;

	for (int i = 0; i < arrLength; i++)
	{

		if (number== arr[i])
		{
			counter++;
		}



	}

	return counter;


}
int main()
{
	int arr[100], arrLength, NumberToCheck;

	ReadArray(arr, arrLength);
	
	NumberToCheck = ReadPositiveNumber("pleas enter number to check ?\n");

	cout << "Original array : ";
	PrintArray(arr, arrLength);

	cout << "\n " << NumberToCheck << " is repeated " << TimesRepeated(arr,arrLength,NumberToCheck) << " time(s)\n";

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
