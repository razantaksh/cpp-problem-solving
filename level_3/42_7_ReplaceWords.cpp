

#include <iostream>
#include <string>
using namespace std;
string ReplaceWordInStringUsingBuiltInFunction(string s1, string StringToReplace, string ReplaceTo)
{
    short pos = s1.find(StringToReplace);

    while (pos != std::string::npos)
    {

        s1 = s1.replace(pos, StringToReplace.length(), ReplaceTo);
        pos = s1.find(StringToReplace);



    }
    return s1;

}
int main()
{
    string s1 = " Welcome To Jordan , Jordan Is A Nice Country";
    string StringToReplace = "Jordan";
    string ReplaceTo = "Syria";

    cout << "\n\nOriginal String :\n\n" << s1;
    cout << "\n\nString After Replace :\n\n" << ReplaceWordInStringUsingBuiltInFunction(s1, StringToReplace, ReplaceTo);

    system("pause>0");
}

