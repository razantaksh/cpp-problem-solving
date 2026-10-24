

#include <iostream>
#include <string>
using namespace std;

struct stClient
{

	string AccountNumber;
	string PinCode;
	double AccountBalance;
	string Phone;
	string Name;
};

stClient ReadNewClient()
{
	stClient Client ;

	cout << "\n Pleas Enter Client Data :\n";

	cout << "\nEnter Account Number ? ";
	getline(cin, Client.AccountNumber);

	cout << "\n Enter PIN Code ? ";
	getline(cin, Client.PinCode);

	cout << "\n Enter Name ? ";
	getline(cin,Client.Name);

	cout << "\n Enter Phone ? ";
	getline(cin, Client.Phone);

	cout << "\n Enter Account Balance ? ";
	cin >> Client.AccountBalance;

	return Client;
}
string ConvertRecordToLine(stClient Client, string delime = "#//#")
{
	string StringClientRecord = "";

	StringClientRecord += Client.AccountNumber + delime;
	StringClientRecord += Client.PinCode + delime;
	StringClientRecord += Client.Name + delime;
	StringClientRecord += Client.Phone + delime;
	StringClientRecord += to_string(Client.AccountBalance);

	return StringClientRecord;

}

int main()
{
	stClient Client = ReadNewClient();


	cout << "\n Client Record For Saving Is :\n";

	cout << ConvertRecordToLine(Client);

	system("pause>0");

}

