

#include <iostream>
using namespace std;

struct strTaskDuration 
{
	int numberOfDays, numberOfHours, numberOfMinutes, numberOfSeconds;
};

int ReadPositiveNumber(string message)
{
	int number;
	do
	{
		cout << message;
		cin >> number;
	} while (number <= 0);
	return number;
}	

strTaskDuration ReadTaskDuration()
{
	strTaskDuration taskDuration;
	taskDuration.numberOfDays = ReadPositiveNumber("Enter the number of days: ");
	taskDuration.numberOfHours = ReadPositiveNumber("Enter the number of hours: ");
	taskDuration.numberOfMinutes = ReadPositiveNumber("Enter the number of minutes: ");
	taskDuration.numberOfSeconds = ReadPositiveNumber("Enter the number of seconds: ");
	return taskDuration;
}

int TaskdurationinSeconds(strTaskDuration taskDuration)
{
	int durationinseconds= 0;

	durationinseconds+= taskDuration.numberOfDays * 24 * 60 * 60;
	durationinseconds+= taskDuration.numberOfHours * 60 * 60;
	durationinseconds += taskDuration.numberOfMinutes * 60;
	durationinseconds += taskDuration.numberOfSeconds;
	return durationinseconds;
}
int main()
{
	cout << " task duration in seconds :" << endl << TaskdurationinSeconds(ReadTaskDuration()) << endl;
	




}


