
#include <iostream>
#include<string>
using namespace std;

string ReadText()
{
    string text;

    cout << "pleas enter text ?\n";
    getline(cin, text);

    return text;


}

string EncryptText(string text, short EncryptionKey)
{

    for (int i = 0; i <= text.size(); i++)
    {

        text[i] = char(int(text[i]) + EncryptionKey);

    }

    return text;

}

string DecryptionText(string text, short EncryptionKey)
{
    for (int i = 0; i <= text.size(); i++)
    {
        text[i] = char(int(text[i]) - EncryptionKey);

    }

    return text;

}



int main()
{
    
    const short EncryptionKey = 2;

    string text = ReadText();

    string TextAfterEncryption = EncryptText(text, EncryptionKey);
    string TextAfterDecryption = DecryptionText(TextAfterEncryption, EncryptionKey);

    cout << " text before encryption : " << text << endl;
    cout << "\n text after encryption : " << TextAfterEncryption << endl;
    cout << " \ntext after decryption : " << TextAfterDecryption << endl;

    return 0;



}

