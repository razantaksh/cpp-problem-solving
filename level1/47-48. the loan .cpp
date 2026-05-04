

#include <iostream>
using namespace std;

float ReadPositiveNumber(string message)
{
	float number;
	do
	{
		cout << message << endl;
		cin >> number;

	} while (number <= 0);

	return number;


}

float TotalMonths(float loanamount, float monthlyinstallment)
{


	return (float)loanamount / monthlyinstallment;	


}
int main()
{

	float loanamount = ReadPositiveNumber("Enter the loan amount ?");
	float monthlyinstallment = ReadPositiveNumber("Enter the monthly installment?");

	cout << " total months to pay : " << TotalMonths(loanamount, monthlyinstallment);



}

