

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
vector <string> Split(string s1,string delime)
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

int main()
{
	vector <string> vstring;
	vstring = Split(ReadString(), " ");

	cout << "Tokens : " << vstring.size() << endl;
	for (string& words : vstring)
	{

		cout << words << endl;

	}
	system("pause>0");
	
}

