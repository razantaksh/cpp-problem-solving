
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
string TrimLeft(string s1)
{
	for (int i = 0; i < s1.length();i++)
	{
		if (s1[i]!= ' ')
		{

			return s1.substr(i, s1.length() - i);

		}
	}
	return "";
}
string TrimRight(string s1)
{
	for (int i = s1.length()-1; i>=0 ;i--)
	{
		if (s1[i]!=' ')
		{
			return s1.substr(0, i+1);

		}



	}


	return "";

}
string Trim(string s1)
{
	return TrimRight(TrimLeft(s1));



}
int main()
{
	string s1 = ReadString();

	cout << "\nString = " << s1;

	cout << "\n\nTrim Left   = " << TrimLeft(s1);
	cout << "\n\nTrim Right  = " << TrimRight(s1);
	cout << "\n\nTrim          = " << Trim(s1);

	system("pause>0");

}

