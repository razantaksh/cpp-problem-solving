

#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <iomanip>
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
vector <string> SplitString(string s1, string delime)
{
	vector <string> vstring;

	string sword = "";

	short pos = 0;

	while((pos = s1.find(delime)) != std::string::npos)
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
	vector <string> vClientData;

	sClient Client;

	vClientData = SplitString(line, seperator);

	Client.accountnumber = vClientData[0];
	Client.pincode = vClientData[1];
	Client.name = vClientData[2];
	Client.phone = vClientData[3];
	Client.accountbalance = stod(vClientData[4]);


	return Client;




}
vector <sClient> LoadClientDataFromFile(string FileName)
{
	vector<sClient> vClients;

	fstream MyFile;
	MyFile.open(FileName, ios::in);

	if (MyFile.is_open())
	{
		string line;
		sClient Client;

		while (getline(MyFile, line))
		{
			Client = ConvertLineToRecord(line);

			vClients.push_back(Client);


		}

		MyFile.close();


	}
	return vClients;



}
void PrintClientRecord(sClient Client)
{
	cout << "| " << setw(15) << left << Client.accountnumber;
	cout << "| " << setw(15) << left << Client.pincode;
	cout << "| " << setw(15) << left << Client.name;
	cout << "| " << setw(15) << left << Client.phone;
	cout << "| " << setw(15) << left << Client.accountbalance;


}

void PrintAllClientsData(vector <sClient> vClients)
{
	cout << "\n\t\t\t\t\tClient List (" << vClients.size() << ") Client(s).";
	cout << "\n--------------------------------------------------------";
	cout << "-----------------------------------------\n" << endl;

	cout << "| " << left << setw(15) << "Account Number";
	cout << "| " << left << setw(10) << "PIN Code";
	cout << "| " << left << setw(40) << "Client Name";
	cout << "| " << left << setw(12) << "Phone";
	cout << "| " << left << setw(12) << "Balance";
	cout << "\n--------------------------------------------------------";
	cout << "-----------------------------------------\n" << endl;

	for (sClient Client : vClients)
	{
		PrintClientRecord(Client);
		cout << endl;

	}
	cout << "\n--------------------------------------------------------";
	cout << "-----------------------------------------\n" << endl;

}
int main()
{
	vector <sClient> vClients = LoadClientDataFromFile(ClientFileName);

	PrintAllClientsData(vClients);

	system("pause>0");
	return 0;
}