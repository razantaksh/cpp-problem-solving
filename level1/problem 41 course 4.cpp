
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


float hourstodays(float numbersofhours)
{
    return numbersofhours / 24;


}


float hourstoweeks(float numberofhours)
{


    return numberofhours / 24 / 7;

}


float daystoweeks(float numberofdays)
{
    return numberofdays / 7;
}


int main()

{
	float numberofhours = ReadPositiveNumber("Enter the number of hours ");
	float numberofdays = hourstodays(numberofhours);
	float numberofweeks = daystoweeks(numberofdays);

	cout << "total hours : " << numberofhours << endl; 
	cout << " total days :" << numberofdays << endl;    
	cout << " total weeks :" << numberofweeks << endl;

    return 0;


}

