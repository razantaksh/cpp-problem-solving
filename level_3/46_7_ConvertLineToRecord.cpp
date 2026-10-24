
#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct stClient
{

	string AccountNumber;
	string PinCode;
	double AccountBalance;
	string Phone;
	string Name;
};

vector <string> Split(string s1, string delime)
{
	vector <string> vClientData;
	{

		short pos = 0;
		string sword;

		while ((pos = s1.find(delime)) != std::string::npos)
		{
			sword = s1.substr(0, pos);

			if (sword != "")
			{
				vClientData.push_back(sword);

			}

			s1.erase(0, pos + delime.length());

		}
		if (s1 != "")
		{

			vClientData.push_back(s1);
		}



	}
	return vClientData;




}
stClient ConvertLineToRecord(string s1, string delime = "#//#")
{
	stClient Client;

	vector <string> vClientData = Split(s1, delime);

	Client.AccountNumber = vClientData[0];
	Client.PinCode = vClientData[1];
	Client.Name = vClientData[2];
	Client.Phone = vClientData[3];
	Client.AccountBalance = stod( vClientData[4]);

	return Client;









}
void PrintClientRecord(stClient Client)
{
	cout << "The Following Is The Extracted Client Record:\n";

	cout << "\nAccount Number: " << Client.AccountNumber;
	cout << "\nPIN Code: " << Client.PinCode;
	cout << "\nName: " << Client.Name;
	cout << "\nPhone: " << Client.Phone;
	cout << "\nAccount Balance: " << Client.AccountBalance;



}
int main()
{
	
	string s1 = "R1212#//#1234#//#Razan Taksh#//#0967679941#//#150000\n";
    cout << "\nLine Record Is :\n";
	cout << s1 << endl;

	stClient Client = ConvertLineToRecord(s1);

	PrintClientRecord(Client);
	system("pause>0");


   




}

