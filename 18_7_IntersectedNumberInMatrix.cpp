
#include <iostream>
#include <iomanip>
using namespace std;

void PrintMatrix(int matrix[3][3], short cols, short rows)
{

	for (short i = 0; i < rows;i++)
	{
		for (short j = 0; j < cols;j++)
		{
			cout << setw(4) << matrix[i][j];
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

void PrintIntersectedNumbers(int matrix1[3][3], int matrix2[3][3], short cols, short rows)
{
	int number;
	for (short i = 0; i < rows;i++)
	{
		for (short j = 0; j < cols;j++)
		{
			number = matrix1[i][j];

			if (IsNumberInMatrix(matrix2, 3, 3, number))
			{
				cout << setw(4) << number << "    ";
			}


		}


	}

}
int main()
{
	int matrix1[3][3] = { {77,5,12},{22,20,1},{1,0,9} };
	int matrix2[3][3] = { {5,80,90},{22,77,1},{10,8,33} };

	cout << "\nMatrix1:\n";
	PrintMatrix(matrix1, 3, 3);

	cout << "\nMatrix2:\n";
	PrintMatrix(matrix2, 3, 3);
	cout << "\nIntersected numbers in both matrices:\n";
	PrintIntersectedNumbers(matrix1, matrix2, 3, 3);
}

