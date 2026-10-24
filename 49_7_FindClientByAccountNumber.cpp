
#include <iostream>
#include <vector>
#include <string>
#include <fstream>
using namespace std;

const string ClientFileName = "Clients.txt";

struct sClient
{

	string name;
	string phone;
	string accountnumber;
	string pincode;
	double accountbalance;

};
vector <string> Split(string s1, string delime)
{
	vector <string> vstring;

	string sword = "";
	short pos = 0;

	while ((pos = s1.find(delime)) != std::string::npos)
	{

		sword = s1.substr(0, pos);

		if (sword != "")
		{

			vstring.push_back(sword);


		}
		s1.erase(0, pos + delime.length());

	}
	if (s1 != "")
	{
		vstring.push_back(s1);

	}
	return vstring;

}
string ReadClientAccountNumber()
{
	string AccountNumber = "";

	cout << "\n Plaes Enter AccountNumber? ";
	cin >> AccountNumber;
	return AccountNumber;

}
sClient ConvertLineToRecord(string line, string seperator = "#//#")
{
	vector <string> vClientData = Split(line, seperator);

	sClient Client;

	Client.accountnumber = vClientData[0];
	Client.pincode = vClientData[1];
	Client.name = vClientData[2];
	Client.phone = vClientData[3];
	Client.accountbalance = stod(vClientData[4]);


	return Client;

}
vector <sClient> LoadClientDataFromFile(string FileName)
{
	vector <sClient> vClients;

	fstream MyFile;

	MyFile.open(FileName, ios::in);

	if (MyFile.is_open())
	{
		sClient Client;
		string line;

		while (getline(MyFile, line))
		{
			Client = ConvertLineToRecord(line);

			vClients.push_back(Client);



		}

		MyFile.close();


	}
	return vClients;

}
void PrintClientData(sClient Client)
{
	cout << "The Following Are The Client Details:\n";

	cout << "Account Number: " << Client.accountnumber << endl;
	cout << "PIN Code: " << Client.pincode << endl;
	cout << "Name: " << Client.name << endl;
	cout << "Phone: " << Client.phone << endl;
	cout << "Account Balance: " << Client.accountbalance << endl;

}
bool FindClientByAccountNumber( string AccNumber,sClient &Client)
{
	vector <sClient> vClients = LoadClientDataFromFile(ClientFileName);

	for (sClient c : vClients)
	{
		if (AccNumber == c.accountnumber)
		{
			Client = c;
		
			return true;
			
		}

	}
	return false;
		
}
int main()
{
	string AccNumber = ReadClientAccountNumber();
	sClient Client;
	
	if (FindClientByAccountNumber(AccNumber, Client))
	{
		PrintClientData(Client);
 }
	else
	{
		cout << "Client With Account Number(" << AccNumber << ")Not Found!";
	}
	system("pause>0");
	return 0;


}

