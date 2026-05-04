

#include <iostream>
using namespace std;

enum enmonthofyear
{jan = 1 , feb = 2 , mar = 3 , apr = 4 , may = 5 , jun = 6 , jul = 7 , aug = 8 , sep = 9 , oct = 10 , nov = 11 , dec = 12 };

int readnumberinrange(string message, int from, int to)
{
	int number = 0;
	do
	{
		cout << message << endl;
		cin >> number;
	} while (number < from || number > to);

	return number;



}

enmonthofyear readmonthofyear()
{


	return (enmonthofyear)readnumberinrange("pleas enter number of month  from 1 to 12 ", 1, 12);


}

string getmonthofyear(enmonthofyear readmonthofyear)
{


	switch (readmonthofyear)
	{
	case enmonthofyear::jan:
		return "january";
	case enmonthofyear::feb:
		return "february";
	case enmonthofyear::mar:
		return "march";
	case enmonthofyear::apr:
		return "april";
	case enmonthofyear::may:
		return "may";	
	case enmonthofyear::jun:
		return "june";	
	case enmonthofyear::jul:
		return "july";
	case enmonthofyear::aug:
		return "august";
	case enmonthofyear::sep:
		return "september";
	case enmonthofyear::oct:
		return "october";
	case enmonthofyear::nov:
		return "november";
	case enmonthofyear::dec:
		return "december";

	default :
			return " wrong month number";

	}






}
int main()
{

	cout << getmonthofyear(readmonthofyear());


}

