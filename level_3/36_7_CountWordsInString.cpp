

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
short CountWordsInString(string s1)
{
	short cnt = 0;
	string delime = " ";
	short pos = 0;
	string sword;

	while ((pos = s1.find(delime)) != std::string::npos)
	{
		sword = s1.substr(0, pos);

		if (sword != "")
		{
			cnt++;

		}

		s1.erase(0, pos + delime.length());

	}
	if (s1 != "")
	{
		cnt++;

	}

	return cnt;

}

int main()
{
	string s1 = ReadString();

	cout << " \nThe Number Of Words In Your String Is : " << CountWordsInString(s1);

	system("pause>0");
	





}

