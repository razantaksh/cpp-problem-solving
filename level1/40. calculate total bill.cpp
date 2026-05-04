
#include <iostream>
using namespace std;

float ReadPositiveNumber(string message)
{
    float number;
    do
    {
        cout << message;
        cin >> number;
    } while (number <= 0);

    return number;
}
float TotalbillAfterServicesFeeAndTax(float Totalbill)
{

    Totalbill = Totalbill * 1.1;
    Totalbill = Totalbill * 1.16;

    return Totalbill;
}

int main()
{
	 float Totalbill = ReadPositiveNumber("Enter the total bill: ");

     cout << " Total bill = " << Totalbill << endl;

	 cout << " Total bill after services fee and tax = " << TotalbillAfterServicesFeeAndTax(Totalbill) << endl;


     return 0;

}

