
#include <iostream>
using namespace std;

float ReadNumber()
{
    float number;
    cout << " enter a number ?\n";
        cin >> number;

        return number;

}
float MySqrt(float number)
{


	return pow(number, 0.5);




}
int main()
{
	float number = ReadNumber();
	cout << " my sqrt result : " << MySqrt(number) << endl;
	cout << " c++ sqrt result : " << sqrt(number) << endl;
	return 0;
}

