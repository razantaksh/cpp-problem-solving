

#include <iostream>
#include <string>

using namespace std;

string ReadString()
{
	string s1;

	cout << "Pleas Enter Your String?\n";
	getline(cin, s1);

	return s1;


}
bool IsVowel(char ch)
{
	ch = tolower(ch);

	return ((ch == 'a') || (ch == 'e') || (ch == 'i') || (ch == 'o') || (ch == 'u'));


}
short CountVowels(string s1)
{
	short cnt = 0;
	for (int i = 0; i < s1.length();i++)
	{
		if (IsVowel(s1[i]))
			cnt++;


	}
	return cnt;


}

int main()
{

	string s1 = ReadString();


	cout << "\nNumber Of Vowels Is : " << CountVowels(s1);


}



