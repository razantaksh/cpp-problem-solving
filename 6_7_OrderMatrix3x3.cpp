

#include <iostream>
#include <iomanip>
using namespace std;
void FillMatrixWithOrderNumber(int matrix[3][3], short cols, short rows)
{
	short counter = 0;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			counter++;
			matrix[i][j] = counter;





		}



	}


}
void PrintMatrix(int matrix[3][3], short cols, short rows)
{
	cout << " The Following Is A 3x3 Order Matrix :"<< endl;

	for (int i = 0; i < rows; i++)

	{
		for (int j = 0; j < cols;j++)
		{
			cout << setw(3) << matrix[i][j];



		}
		cout << endl;



	}



}
int main()
{
  
	int matrix[3][3];
	FillMatrixWithOrderNumber(matrix, 3, 3);
	PrintMatrix(matrix, 3, 3);

	return 0;



}

