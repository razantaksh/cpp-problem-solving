// problem 28 course 4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

enum enOddorEven { odd = 1, even = 2};

int readnumber()
{
	int number;
	cout << " pleas enter number ?\n";
	cin >> number;

	return number;

}

enOddorEven checkoddoreven(int number)
{
	if (number % 2 != 0)
		return enOddorEven::odd;
	else
		return enOddorEven::even;
}


int sumoddnumbersfrom1toNusingwhile(int N)
{
	int counter = 0;
	int sum = 0;

	while (counter <N)
	{

		counter++; //  وفردي مكان الكونتر مابيفرق مدام قيمتو الابتدائية صفر 

		if (checkoddoreven(counter) == enOddorEven::odd)
		{
			sum += counter;
		}
	
	}
	return sum;
}

int sumoddnumbersfrom1toNusingdowhile(int N)
{
	int counter = 0;
	int sum = 0;

	do
	{
		counter++;


		if (checkoddoreven(counter) == enOddorEven::odd)
		{
			sum += counter;
		}



	} while (counter < N);


	return sum;
}


int sumoddnumbersfrom1toNusingfor(int N)
{

	int sum = 0;

	for (int counter = 1; counter <=N; counter++)
	{

		if (checkoddoreven(counter) == enOddorEven::odd)

		{

			sum += counter;
		}

	}
	return sum;




}

int main()
{
	int N = readnumber();

	cout << sumoddnumbersfrom1toNusingwhile(N) << endl;
	cout << sumoddnumbersfrom1toNusingdowhile(N) << endl;
	cout << sumoddnumbersfrom1toNusingfor(N) << endl;


}

// الزوجي بس غيرو بالشرط 

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
