
#include <iostream>
using namespace std;

struct strTaskduration
{
	int numOfDays, numOfHours, numOfMinutes, numOfSeconds;
};

int ReadPositivenumber(string message)
{
	int number;
	do
	{
		cout << message;
		cin >> number;
	} while (number <= 0);

	return number;


}
strTaskduration secondsToTaskDuration(int totalseconds)
{

	strTaskduration Taskduration;

	const int secperdays = 24 * 60 * 60;
	const int secperhours = 60 * 60;
	const int secperminutes = 60;

	int remainder = 0;

	Taskduration.numOfDays = floor(totalseconds / secperdays);
	remainder = totalseconds % secperdays;
	Taskduration.numOfHours = floor(remainder / secperhours);
	remainder = remainder % secperhours;
	Taskduration.numOfMinutes = floor(remainder / secperminutes);
	remainder = remainder % secperminutes;
	Taskduration.numOfSeconds = remainder;

	return Taskduration;


}

void printTaskdurtiondetails(strTaskduration Taskduration)
{
	cout << Taskduration.numOfDays <<":"
		<< Taskduration.numOfHours << ":"
		<< Taskduration.numOfMinutes << ":"
		<< Taskduration.numOfSeconds << endl;



}
int main()
{
   
	int totalseconds = ReadPositivenumber("Enter total seconds: ");	

	printTaskdurtiondetails(secondsToTaskDuration(totalseconds));	





}

