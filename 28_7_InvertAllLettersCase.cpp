

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
char InvertCharacterCase(char ch)
{
	return isupper(ch) ? tolower(ch) : toupper(ch);

}

string InvertAllLettersOfWord(string s1)
{
	for (int i = 0; i < s1.length();i++)
	{
		s1[i] = InvertCharacterCase(s1[i]);
			
	}
	return s1;






}
int main()
{
	string s1 = ReadString();

	cout << "\nString After Inverting All Letters Case:\n";

	s1 =InvertAllLettersOfWord(s1);

	cout << s1 << endl;

	system("pause>0");



}

