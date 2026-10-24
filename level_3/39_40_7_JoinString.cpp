#include <iostream>
#include <string>
#include <vector>
using namespace std;
string JoinString(vector <string> vstring, string delime)
{
    string s1 = "";

    for (string& s : vstring)
    {
        s1 = s1 + s + delime;


    }
    return s1.substr(0, s1.length() - delime.length());

 }
string JoinString(string arrofstring[], short arrlength, string delime)
{
    string s1 = "";

    for (int i = 0; i < arrlength;i++)
    {

        s1 = s1 + arrofstring[i] + delime;

    }

    return s1.substr(0, s1.length() - delime.length());




}
int main()
{
    vector <string> vstring = { "razan","love ","programming","And she want","to be a great","developer"};
    string arrofstring[] = { "razan","love ","programming","And she want","to be a great","developer" };

    cout << "\nVector After Join: \n";
    cout << JoinString(vstring, " ");

    cout << "\nArray A fter Join: \n";
    cout << JoinString(arrofstring, 6, " ");
    system("pause>0");



}

