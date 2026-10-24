 
#include <iostream>
using namespace std;

char ReadChar()
{

    char ch1;

    cout << "\nPleas Enter A Letter ?\n";
    cin >> ch1;

    return ch1;



}
bool IsVowel(char ch)
{
    ch = tolower(ch);

    return ((ch == 'a') || (ch == 'e') || (ch == 'i') ||(ch == 'o') || (ch == 'u'));






}
int main()
{
    char ch = ReadChar();

    if (IsVowel(ch))
        cout << "\nYes Letter \'" << ch << "\' Is Vowel";
    else
        cout << "\nNo Letter \'" << ch << "\' Is Not Vowel";
}