
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
void PrintVowels(string s1)
{
	cout << "\nVowel In String Are :";

	for (short i = 0; i < s1.length();i++)
	{
		if (IsVowel(s1[i]))
			cout << s1[i] << "    ";

	}


}
int main()
{
	 
	PrintVowels(ReadString());





}

