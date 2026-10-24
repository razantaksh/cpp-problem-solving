

#include <iostream>
#include <string>
#include <vector>
using namespace std;


vector <string> Split(string s1, string delime)
{
	vector <string> vstring;

		short pos = 0;
		string sword;

		while ((pos = s1.find(delime)) != std::string::npos)
		{
			sword = s1.substr(0, pos);

			if (sword != "")
			{
				vstring.push_back(sword);

			}

			s1.erase(0, pos + delime.length());

		}
		if (s1 != "")
		{

			vstring.push_back(s1);
		}

	return vstring;
}

string lowerLettersOfString(string s1)
{

	for (int i = 0; i < s1.length();i++)
	{

		s1[i] = tolower(s1[i]);

	}
	return s1;

}

string JoinString(vector <string> vstring, string delime)
{
	string s1 = "";

	for (string& s : vstring)
	{
		s1 = s1 + s + delime;


	}
	return s1.substr(0, s1.length() - delime.length());
}

string ReplaceWordInStringUsingSplit(string s1, string StringToReplace, string ReplaceTo, bool MatchCase = true)
{
	vector<string> vstring = Split(s1, " ");

	for (string& s : vstring)

	{
		if (MatchCase)
		{
			if (s == StringToReplace)
			{
				s = ReplaceTo;
			}


		}
		else
		{
			if (lowerLettersOfString(s) == lowerLettersOfString(StringToReplace))
			{
				s = ReplaceTo;

			}



		}
	}

	return JoinString(vstring, " ");

}
int main()
{

	vector <string> vstring;

	string s1 = "\n\nWelcome to Jordan , Jordan Is A NiceCountry\n\n";

	string StringToReplace = "jordan";
	string ReplaceTo = "Syria";

	cout << "Original String :" << s1 << endl;

	cout << "\nReplace With Match Case : " << ReplaceWordInStringUsingSplit(s1, StringToReplace, ReplaceTo);

	cout << "\nReplace Without Match Case : " << ReplaceWordInStringUsingSplit(s1, StringToReplace, ReplaceTo, false);

	system("pause>0");




   
}

