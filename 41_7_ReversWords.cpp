

#include <iostream>
#include <vector>
#include <string>
using namespace std;

string ReadString()
{
	string s1;

	cout << "Pleas Enter Your String?\n";
	getline(cin, s1);

	return s1;


}
vector <string> Split(string s1, string delime)
{
	vector <string> vstring;
	{

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



	}
	return vstring;




}

string ReversedWordInString(string s1)
{
	vector <string> vstring;
	vstring = Split(s1, " ");

	string s = " ";

	vector<string>::iterator iter = vstring.end();

	while (iter != vstring.begin())
	{

		--iter;
		s = s + *iter + " ";
	
		




	}
	return s.substr(0, s.length() - 1);




}

int main()
{
	vector <string> vstring;

	string s1 = ReadString();

	cout << "\nString A fter Reversing Words:\n";
	cout << ReversedWordInString(s1);

	system("pause>0");
}
