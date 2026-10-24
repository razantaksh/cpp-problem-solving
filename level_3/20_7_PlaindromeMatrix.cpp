
#include <iostream>
#include <iomanip>
using namespace std;

void PrintMatrix(int RandomMatrix[3][3], short cols, short rows)
{


    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols;j++)
        {

			cout << setw(4) << RandomMatrix[i][j];


        }
        cout << endl;




    }
}
int IsPalindromeMatrix(int matrix[3][3], short cols, short rows)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols /2; j++)
		{
			if (matrix[i][j] != matrix[i][cols -1 -j])

			{
				return false;
			}
		}
	}
	return true;
}
int main()
{
	int matrix1[3][3] = { {1,2,1},{5,5,5},{7,3,7} };
	int matrix2[3][3] = { {1,2,1},{5,5,5},{7,3,8} };

	cout << "\nMatrix 1: " << endl;
	PrintMatrix(matrix1, 3, 3);
	
	if (IsPalindromeMatrix(matrix1, 3, 3))
	{
		cout << "\nMatrix 1 is a palindrome matrix." << endl;
	}
	else
	{
		cout << "\nMatrix 1 is not a palindrome matrix." << endl;
	}

	cout << "\nMatrix 2: " << endl;
	PrintMatrix(matrix2, 3, 3);
	
	if (IsPalindromeMatrix(matrix2, 3, 3))
	{
		cout << "\nMatrix 2 is a palindrome matrix." << endl;
	}
	else
	{
		cout << "\nMatrix 2 is not a palindrome matrix." << endl;
	}
}
