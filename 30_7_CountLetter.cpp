

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
char ReadChar()
{

	char ch1;

	cout << "\nPleas Enter A Letter To Count?\n";
	cin >> ch1;

	return ch1;



}
short CountLetterInString(string s1, char Ch1)
{
	short cnt = 0;

	for (short i = 0; i < s1.length(); i++)
	{
		if (s1[i] == Ch1)
			cnt++;


	}
	return cnt;








}
int main()
{
	string s1 = ReadString();

	char Ch1 = ReadChar();

	

	cout << "\nLetter '" << Ch1 << "' Count = "<<CountLetterInString(s1,Ch1);

}

