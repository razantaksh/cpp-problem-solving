

#include <iostream>
#include <iomanip>
using namespace std;

void PrintMatrix(int matrix[3][3], short cols, short rows)
{

	for (short i = 0; i < rows;i++)
	{
		for (short j = 0; j < cols;j++)
		{
			cout << setw(3) << matrix[i][j];
		}
		cout << endl;
	}
}
int MinimumNumberInMatrix(int matrix[3][3], short cols, short rows)
{
	int minimum = 0;
	minimum = matrix[0][0];
	for (short i = 0; i < rows;i++)
	{
		for (short j = 0; j < cols;j++)
		{
			if (matrix[i][j] < minimum)
			{
				minimum = matrix[i][j];
				
			}
		}

	}
	return minimum;




}
int MaxNumberInMatrix(int matrix[3][3], short cols, short rows)
{
	int max = matrix[0][0];
	for (short i = 0; i < rows;i++)
	{
		for (short j = 0; j < cols;j++)
		{
			if (matrix[i][j] > max)
			{
				max = matrix[i][j];
			}


		}

	}
	return max;

}
int main()
{
    int matrix[3][3] = { {77,5,12},{22,20,6},{14,3,9} };

	cout << "\nMatrix:\n";
	PrintMatrix(matrix, 3, 3);

	cout << "\n Minimum Number Is : " << MinimumNumberInMatrix(matrix, 3, 3) << endl;
	cout << "\nMax Number Is : " << MaxNumberInMatrix(matrix, 3, 3) << endl;
	system("pause>0");

}

