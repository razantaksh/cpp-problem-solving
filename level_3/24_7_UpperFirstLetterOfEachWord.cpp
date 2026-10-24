
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
string UpperFirstLetter(string s1)
{
	

	bool IsFirstLetter = true;

	for (int i = 0; i < s1.length();i++)
	{
		if (s1[i] != ' ' && IsFirstLetter)
		{
			
			s1[i] = toupper(s1[i]);

		}
		IsFirstLetter = s1[i] == ' ' ? true : false;

	}
	return s1;

}
int main()
{
	string s1 = ReadString();

	cout << "String After Conversion:\n";

	  s1 = UpperFirstLetter(s1);

	  cout << s1 << endl;

	    system("pause>0");







}

