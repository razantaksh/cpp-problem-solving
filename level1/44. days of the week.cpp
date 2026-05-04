
#include <iostream>
using namespace std;

enum enDayofweek{ SUNDAY = 1, MONDAY = 2, TUESDAY = 3, WEDNESDAY = 4,THURSDAY =5, FRIDAY= 6, SATURDAY= 7 };

int ReadNumberInRange(string message, int from, int to)
{
	int number = 0;

	do
	{
		cout << message << endl;
		cin >> number;


	} while (number <from || number > to);
	 
	return number;

}

enDayofweek readdayofweek()
{


	return (enDayofweek)ReadNumberInRange(("pleas enter number from "), 1, 7);



}


string getdayofweek(enDayofweek readdayofweek)
{
	switch (readdayofweek)
	{
	case SUNDAY:
		return "SUNDAY";
	case MONDAY:
		return "MONDAY";
	case TUESDAY:
		return "TUESDAY";
	case WEDNESDAY:
		return "WEDNESDAY";
	case THURSDAY:
		return "THURSDAY";
	case FRIDAY:
		return "FRIDAY";
	case SATURDAY:
		return "SATURDAY";
	default:
		return "invalid day";
	}
}	
int main()
{
	

	cout << getdayofweek(readdayofweek());


}

