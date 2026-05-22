// 21-GenerateKeys.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

enum enCharType {Smallletter = 1, Capitalletter = 2, Specialcharacter = 3, Digit = 4};

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

void Generatekeys(int number)
{

	for (int i = 1; i <= number; i++)
	{
		cout << " key [" << i << "] : " << GenerateKey() << endl;	





	}




}
int main()
{
	srand((unsigned)time(NULL));

	Generatekeys(ReadPositiveNumber("Please enter the number of keys you want to generate?"));
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
