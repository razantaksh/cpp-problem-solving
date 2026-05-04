
#include <iostream>
using namespace std;

float readPositivenumber(string message)
{

	float number = 0;

	do
	{
		cout << message << endl;
		cin >> number;

	} while (number <= 0);

	return number;



}

float calculateremainder(float Totalbill, float Cashpaid)
{

	return Cashpaid - Totalbill;	

}

int main()
{
	float Totalbill = readPositivenumber("plaes enter total bill?\n");
	float Cashpaid = readPositivenumber("plaes enter cash paid?\n");

	cout << endl;
	cout << " total bill = " << Totalbill << endl;
	cout << " cash paid = " << Cashpaid << endl;

	cout << " ****************************************\n";
	cout << " remainder = " << calculateremainder(Totalbill, Cashpaid) << endl;




}

