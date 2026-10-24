
#include <iostream>
using namespace std;
void PrintFibonacciByRecurssion(short number, int prev1, int prev2)
{
	int febnumber = 0;
	if (number > 0)
	{
		febnumber = prev1 + prev2;

		prev2 = prev1;
		prev1 = febnumber;
		cout << febnumber << "    ";

		PrintFibonacciByRecurssion(number - 1, prev1, prev2);
	}

}

int main()
{
	PrintFibonacciByRecurssion(10, 0, 1);
	return 0;


}

