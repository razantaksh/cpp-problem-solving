// 20-RandomSmallLetter-CapitalLetter-SpecialC-AndDigit.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

enum enChartType { smallletter = 1, capitalletter = 2, specialchar = 3, digit = 4 };

int RandomNumber(int from, int to)
{
    int randNum = rand() % (to - from + 1) + from;

    return randNum;

}

char GetRandomCharacter(enChartType CharType)
{

    switch (CharType)
    {
    case enChartType::smallletter:
    {
        return char(RandomNumber(97, 122));
        break;

    }

    case enChartType::capitalletter:
    {
        return char(RandomNumber(65, 90));
        break;



    }
    case enChartType::specialchar:
    {
        return char(RandomNumber(33, 47));
        break;


    }
    case enChartType::digit:
    {
        return char(RandomNumber(48, 57));
        break;


    }

    }
}

int main()
{
	cout << "Random Small Letter: " << GetRandomCharacter(enChartType::smallletter) << endl;
	cout << "random capital letter :" << GetRandomCharacter(enChartType::capitalletter) << endl;
	cout<< "random special character :" << GetRandomCharacter(enChartType::specialchar) << endl;
	cout << "random digit :" << GetRandomCharacter(enChartType::digit) << endl; 
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
