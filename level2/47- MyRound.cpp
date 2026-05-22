#include <iostream>
using namespace std;

float ReadNumber()
{
	float number;
	cout << "Enter a number: ";
	cin >> number;

	return number;
}
float GetFractionPart(float number)
{
	
	return number - int(number);

}
float MyRound(float number)
{
	int IntPart = int(number);

	float FractionsPart = GetFractionPart(number);

	if (abs(FractionsPart) >= 0.5)
	{
		if (number > 0)
			return ++IntPart;
		else
			return --IntPart;




	}
	else
		return IntPart;






}
int main()
{
   
	float number = ReadNumber();
	cout << " my round result :" << MyRound(number) << endl;
	cout << " c++ round result :"<<round(number) << endl;
	return 0;








}

