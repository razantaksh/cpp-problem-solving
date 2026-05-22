

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
float MyCeil(float number)
{
	if (abs(GetFractionPart(number) > 0))

		if (number > 0)

			return int(number) + 1;
		else
			return int(number);
	else
		return number;



}







int main()
{

	float number = ReadNumber();
	cout << " my ceil result :" << MyCeil(number) << endl;
	cout << " c++ ceil result :" << ceil(number) << endl;
	return 0;
}







