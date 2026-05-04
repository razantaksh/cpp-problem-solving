
#include <iostream>
using namespace std;

string readPINcode()
{
    string PINcode;
    cout << " pleas enter PIN code ?\n";
    cin >> PINcode;

	return PINcode; 


}

bool login()
{
	string PINcode; 
    int counter = 3;
    do
    {
        counter--;
		 PINcode = readPINcode(); 

        if (PINcode == "1234")
        {
            return 1;

        }
        else
        {
            cout << " wrong PIN , "
				<< "  pleas try again , you have "<< counter << " more try \n";
            system("color 4f");
           
        }

        



	} while ( counter >=1 && PINcode != "1234");

    return 0;

}


int main()
{
    
    if (login())
    {

        system("color 2f");
        cout << " your account  balance is :" << 7500 << endl;
    }
    else
    {

        cout << " \n your card blocked call the bank for help . \n";
    }



}

