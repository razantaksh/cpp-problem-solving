
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
bool IsNumberInMatrix(int matrix[3][3], short cols, short rows, int numbertoFind)
{
	
	for (short i = 0; i < rows;i++)
	{
		for (short j = 0; j < cols;j++)
		{
			if (matrix[i][j] == numbertoFind)
			{
				return true;
			}
		}
	}
	return false;



}

int main()
{
	int matrix[3][3] = { {77,5,12},{22,20,1},{1,0,9} };


	cout << "\nMatrix:\n";
	PrintMatrix(matrix, 3, 3);

	int numbertoFind;
	cout << "\nEnter a number to find in the matrix: ";
	cin >> numbertoFind;

	if (IsNumberInMatrix(matrix, 3, 3, numbertoFind))
	{
		cout << "\nYes Its There\n";
	}
	else
	{
		cout << "\nNo Its Not There\n";
	}

}

