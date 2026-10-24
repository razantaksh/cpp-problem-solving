
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
void FirstLetterInWord(string s1)
{
	bool isfirstletter = true;

	cout << "\nFirst Letter Of This String :\n";

	for (int i = 0; i < s1.length();i++)
	{
		if (s1[i] != ' ' && isfirstletter)
		{
			cout << s1[i] << endl;

		}

		isfirstletter = (s1[i] == ' ' ? true : false);


	}

}




int main()
{
	
	FirstLetterInWord(ReadString());
	system("pause>0");



}

