
#include <iostream>
using namespace std;

enum enCharType { Smallletter = 1, Capitalletter = 2, Specialcharacter = 3, Digit = 4 };

int RandomNumber(int from, int to)
{
	int randNum = rand() % (to - from + 1) + from;

	return randNum;

}
char GetRandomCharacter(enCharType charType)
{

	switch (charType)
	{
	case enCharType::Smallletter:
	{
		return char(RandomNumber(97, 122));

		break;
	}
	case enCharType::Capitalletter:
	{
		return char(RandomNumber(65, 90));
		break;
	}
	case enCharType::Specialcharacter:
	{
		return char(RandomNumber(33, 47));
		break;
	}
	case enCharType::Digit:
	{
		return char(RandomNumber(48, 57));
		break;
	}

	}

}


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

string GenerateWord(enCharType charType, short length)
{
	string word;

	for (int i = 1; i <= length; i++)
	{
		word = word + GetRandomCharacter(charType);



	}
	return word;


}

string GenerateKey()
{
	string key = "";

	key = GenerateWord(enCharType::Capitalletter, 4) + "-";
	key = key + GenerateWord(enCharType::Capitalletter, 4) + "-";
	key = key + GenerateWord(enCharType::Capitalletter, 4) + "-";
	key = key + GenerateWord(enCharType::Capitalletter, 4);

	return key;



}
void FillArrayWithKeys(string arr[100], int arrLength)
{
	for (int i = 0; i <= arrLength - 1; i++)
	{
		arr[i] = GenerateKey();
	}
}


void PrintStringArray(string arr[100], int arrLength)
{

	cout << " \narray elements :\n\n";

	for (int i = 0; i <= arrLength - 1; i++)
	{
		cout << " array [" << i << "]" << " : " << arr[i] << endl;
	}
	cout << "\n";

}
int main()
{
	srand((unsigned)time(NULL));

	string arr[100];
	int arrLength = ReadPositiveNumber("enter number of keys you want ?\n");

	FillArrayWithKeys(arr, arrLength);

	PrintStringArray(arr, arrLength);

}
