

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
void PrintEachWordInString(string s1)
{
	string delime = " ";

	cout << " \nYour String Words Are :\n\n";

	short pos = 0;
	string sword;

	while ((pos = s1.find(delime)) != std::string::npos)
	{
		sword = s1.substr(0, pos);

		if (sword != "")
		{

			cout << sword << endl;
		}

		s1.erase(0, pos + delime.length());

	}
	if (s1 != "")
	{
		cout << s1 << endl;

	}



}

int main()
{
	PrintEachWordInString(ReadString());

}

