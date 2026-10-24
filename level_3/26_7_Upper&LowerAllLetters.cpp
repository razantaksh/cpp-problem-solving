

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
string UpperLettersOfString(string s1)
{


	

	for (int i = 0; i < s1.length();i++)
	{
	  s1[i] = toupper(s1[i]);
	
	}
	return s1;

}
string lowerLettersOfString(string s1)
{

	for (int i = 0; i < s1.length();i++)
	{
	
		s1[i] = tolower(s1[i]);
		
	}
	return s1;

}
int main()
{
	string s1 = ReadString();

	cout << "\nString After Upper:\n";

	s1 = UpperLettersOfString(s1);

	cout << s1 << endl;

	cout << "\nString After Lower:\n";

	s1 = lowerLettersOfString(s1);

		cout << s1 << endl;

	s1=

	system("pause>0");







}