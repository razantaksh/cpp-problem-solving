

#include <iostream>
using namespace std;

float ReadNumber()
{
	float number;
	cout << "Enter a number: ";
	cin >> number;

	return number;
}

float MyFloor(float number)
{


	if (number > 0)
		return int(number);
	else
		return int(number) - 1;




}







int main()
{

	float number = ReadNumber();
	cout << " my floor result :" << MyFloor(number) << endl;
	cout << " c++ floor result :" << floor(number) << endl;
	return 0;








}
