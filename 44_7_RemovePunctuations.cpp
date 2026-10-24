
#include <iostream>
#include <string>
#include <vector>
using namespace std;

string RemovePunctuationsFromString(string s1)
{
	string s2 = "";
	for (short i = 0; i < s1.length();i++)
	{
		if (!ispunct(s1[i]))
		{
			s2 += s1[i];


		}
	}
	return s2;
}



int main()
{
	vector <string> vstring;

	string s1 = "Welcome to Jordan, Jordan is a nice country; its's amazing.";

	cout << "\nOriginal String : " << s1 << endl;

	cout << "\n Panctuations Removed : " << RemovePunctuationsFromString(s1) << endl;


	system("pause>0");




}
