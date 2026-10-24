
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
	bool MarkForDeleteClient = false;

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
string ConvertRecordToLine(sClient Client, string delime = "#//#")
{
	string StringClientRecord = "";

	StringClientRecord += Client.accountnumber + delime;
	StringClientRecord += Client.pincode + delime;
	StringClientRecord += Client.name + delime;
	StringClientRecord += Client.phone + delime;
	StringClientRecord += to_string(Client.accountbalance);

	return StringClientRecord;

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

bool FindClientByAccountNumber(string AccNumber, vector <sClient> vClients, sClient &Client)
{
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
bool MarkClientForDeleteByAccountNumber(string AccountNumber, vector <sClient>& vClients)
{

	for (sClient& c : vClients)
	{
		if (c.accountnumber == AccountNumber)
		{
			c.MarkForDeleteClient = true;
			return true;

		}
	}
	return false;

}
vector <sClient> SaveClientsDataToFile(string FileName, vector <sClient> vClients)
{
	fstream MyFile;

	MyFile.open(FileName, ios::out);

	string DataLine;

	if (MyFile.is_open())
	{
		for (sClient C :vClients)
		{
			if (C.MarkForDeleteClient == false)
			{
				DataLine = ConvertRecordToLine(C);
				MyFile << DataLine << endl;

			}

		}
		MyFile.close();

	}
	return vClients;
}
bool DeleteClientByAccountNumber(string AccountNumber, vector<sClient>& vClients)
{
	sClient Client;
	char Answer = 'n';

	if (FindClientByAccountNumber(AccountNumber, vClients, Client))
	{
		PrintClientData(Client);

		cout << "\n\nAre You Sure You Want Delete This Client? y/n ? ";
		cin >> Answer;

		if (Answer == 'y' || Answer == 'Y')
		{
			MarkClientForDeleteByAccountNumber(AccountNumber, vClients);
			SaveClientsDataToFile(ClientFileName, vClients);


			vClients = LoadClientDataFromFile(ClientFileName);

			cout << "\n\nClient Deleted Successfully !";
			return true;
		}

	}
	else
	{
		cout << "Client With Account Number(" << AccountNumber << ")Not Found!";
		return false;
	}

}
string ReadClientAccountNumber()
{
	string AccountNumber = "";

	cout << "\n Plaes Enter AccountNumber? ";
	cin >> AccountNumber;
	return AccountNumber;

}
int main()
{
	vector <sClient> vClients = LoadClientDataFromFile(ClientFileName);
	string AccountNumber = ReadClientAccountNumber();


	DeleteClientByAccountNumber(AccountNumber, vClients);

	system("pause>0");
	return 0;

}
