
#include <iostream>
#include <string>
using namespace std;

enum enWhatToCount { smallletters = 0 ,capitlletters = 1, all =3 };

short CountLetters(string s1, enWhatToCount WhattoCount = enWhatToCount::all)
{
	short cnt=0;
	if (WhattoCount == enWhatToCount::all)
	{
		return s1.length();

	}

	for (int i = 0; i < s1.length();i++)
	{
		if (WhattoCount == enWhatToCount::capitlletters && isupper(s1[i]))
		{
			cnt++;

		}
		if (WhattoCount == enWhatToCount::smallletters && islower(s1[i]))
		{
			cnt++;

		}






	}

	return cnt;





}



string ReadString()
{
	string s1;

	cout << "Pleas Enter Your String?\n";
	getline(cin, s1);

	return s1;


}
short CountCapitalLetters(string s1)
{
	short CapitalCnt = 0;

	for (short i = 0; i < s1.length(); i++)
	{
		if (isupper(s1[i]))
		
			CapitalCnt++;
		

	}
	return CapitalCnt;
}
short CountSmallLetters(string s1)
{
	short SmallCnt = 0;

	for (short i = 0; i < s1.length(); i++)
	{
		if (islower(s1[i]))
		
			SmallCnt++;
		

	}
	return SmallCnt;





}
int main()
{
	string s1 = ReadString();

cout << "\nString Length = " << s1.length() << endl;

cout << "\nCapital Letters Count = " << CountCapitalLetters(s1) << endl;

cout << "\nSmall Letters Count = " << CountSmallLetters(s1) << endl;

cout << "\nMetod 2 :\n";

cout << "\nString Length = " <<CountLetters(s1) << endl;

cout << "\nCapital Letters Count = " << CountLetters(s1,enWhatToCount::capitlletters) << endl;

cout << "\nSmall Letters Count = " << CountLetters(s1,enWhatToCount::smallletters) << endl;



	system("pause>0");





}

