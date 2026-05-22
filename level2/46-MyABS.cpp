

#include <iostream>
using namespace std;

float ReadNumber()
{
	float number;
	cout << " pleas enter a number ?\n";
	cin >> number;

	return number;


}
float MyABS(float number)
{

	if (number > 0)
		
		return number;
else 
	return number * -1;





}
int main()
{
	float number = ReadNumber();
	cout << " my abs result : " << MyABS(number) << endl;	
	cout << "c++ abs result : " << abs(number) << endl;





}

