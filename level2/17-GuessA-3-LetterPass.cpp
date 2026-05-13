// 17-GuessA-3-LetterPass.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

string ReadPassword()
{
    string password;


        cout << "pleas enter a 3 letter password (all capital ) ?\n" << endl;
        cin >> password;
         
        return password;
}

bool GuessPassword(string password)
{
  
    string word = "";
    int counter = 0;


    for (int i = 65; i <= 90; i++)
    {
        for (int j = 65; j <= 90; j++)
        {
            for (int k = 65; k <= 90; k++)
            {
                counter++;

                word = word + char(i);
                word = word + char(j);
                word = word + char(k);

               cout << " trial ["<< counter <<"] : "<<  word << endl;

                if (word == password)

                {
                    cout << " \n password is " << word << "\n found after " << counter << " trial(s)\n";

                    return true;

                }

                word = "";
                
            }
           



        }
        cout << endl;

    }


    return false;
}




int main()
{
    GuessPassword(ReadPassword());
}
