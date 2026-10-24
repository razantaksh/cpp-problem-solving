

#include <iostream>
#include <string>
#include <vector>
#include <fstream>
using namespace std;
const string ClientFileName = "Clients.txt";
struct stClient
{
	string name;
	string phone;
	string accountnumber;
	string pincode;
	double accountbalance;

};
stClient ReadNewClient()
{
	stClient Client;


	cout << "\n Enter Account Number? ";
	getline(cin >> ws, Client.accountnumber);

	cout << "\n Enter PIN Code? ";
	getline(cin, Client.pincode);

	cout << "\n Enter Name? ";
	getline(cin, Client.name);

	cout << "\n Enter Phone? ";
	getline(cin, Client.phone);

	cout << "\n Enter AccountBalance? ";
	cin >> Client.accountbalance;

	return Client;


}
string ConvertRecordToLine(stClient Client, string delime = "#//#")
{
	string StringClientRecord = "";

	StringClientRecord += Client.accountnumber + delime;
	StringClientRecord += Client.pincode + delime;
	StringClientRecord += Client.name + delime;
	StringClientRecord += Client.phone + delime;
	StringClientRecord += to_string(Client.accountbalance);

	return StringClientRecord;

}
void AddDataLineToFile(string FileName, string stDataLine)
{
	fstream MyFile;

	MyFile.open(FileName, ios::out | ios::app);

	if (MyFile.is_open())
	{

		MyFile << stDataLine << endl;

	}
	MyFile.close();


}
void AddNewClient()
{
	stClient Client = ReadNewClient();

	AddDataLineToFile(ClientFileName, ConvertRecordToLine(Client));

}

void AddClients()
{
	char AddMore = 'Y';

	do
	{
		system("cls");

		cout << "Adding New Client:\n\n";
		AddNewClient();

		cout << "\nClient Added Successfully Do You Want To Add More Client?\n";
		cin >> AddMore;
	} while (toupper(AddMore) == 'Y');


}
int main()
{
	AddClients();
	

	system("pause>0");

}