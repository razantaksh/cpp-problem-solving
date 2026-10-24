

#include <iostream>
using namespace std;
void PrintFibonacciUsingLoop(short number)
{
	int febnumber = 0;
	int prev2 = 0, prev1 = 1;

	cout << "1   ";

	for (int i = 2; i <= number;i++)
	{
		febnumber = prev1 + prev2;

		cout << febnumber << "    ";

		prev2 = prev1;
		prev1 = febnumber;


	}


}
	int main()
	{
		PrintFibonacciUsingLoop(10);
	
		return 0;
    }

