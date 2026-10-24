#include <iostream>
#include <string>
using namespace std;

char ReadCharacter()
{
    char ch;
    cout << "Pleas Enter A Character?\n";
    cin >> ch;

    return ch;


}
char InvertCharacterCase(char ch)
{
    return isupper(ch) ? tolower(ch) : toupper(ch);

}
int main()
{
    char ch;

    ch = ReadCharacter();

    cout << "\nCharacter After Inverting Case:\n";

    ch = InvertCharacterCase(ch);

    cout << ch << endl;

    system("pause>0");

}

