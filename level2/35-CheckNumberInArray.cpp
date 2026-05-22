

#include <iostream>
using namespace std;

int ReadNumber()
{
	int number;

	cout << " enter a number to searche for?\n ";
	cin >> number;

	return number;

}
int RandomNumber(int from, int to)
{
	int randNum = rand() % (to - from + 1) + from;

	return randNum;

}
void FillArrayWithRandomNumber(int arr[100], int& arrlength)
{
	cout << " enter the number of elements you want?\n";
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
		cout << arr[i] << " ";


	}


}
short FindNumberPositionInArray(int arr[100], int arrlength, int number)
{
	for (int i = 0; i < arrlength; i++)
	{
		if (arr[i] == number)
		{
			return i;


		}


	}
	return -1;



}
bool IsNumberInArray(int arr[100], int arrlength, int number)
{

	return FindNumberPositionInArray(arr, arrlength, number) != -1;


}
int main()
{


	srand((unsigned)time(0));


	int arr[100], arrlength;

	FillArrayWithRandomNumber(arr, arrlength);

	cout << "\narray 1 elements :\n\n";
	PrintArray(arr, arrlength);
	cout << "\n";

	int number = ReadNumber();

	cout << " number you are looking for is : ";
	cout << number;


	if ( !IsNumberInArray(arr, arrlength, number))
	{

		cout << " \n no , the number is not  found :-(\n";
	}

	else
	{
	cout << "\n yes , the number is  found :-)\n";
}

	return 0;

}
