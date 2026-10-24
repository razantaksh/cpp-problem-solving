

#include <iostream>
#include <iomanip>
using namespace std;

int RandomNumber(int from, int to)
{
    int randNum = rand() % (to - from + 1) + from;

    return randNum;

}

void FillMatrixWithRandomNumber(int RandomMatrix[3][3], short cols, short rows)
{
    for (int i = 0;i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            RandomMatrix[i][j] = RandomNumber(1, 10);





        }

    }
}
void PrintMatrix(int RandomMatrix[3][3], short cols, short rows)
{


    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols;j++)
        {

            printf("%0*d ", 2, RandomMatrix[i][j]);


        }
        cout << endl;




    }
}
bool AreTypicalMatrices(int matrix1[3][3], int matrix2[3][3], short cols, short rows)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols;j++)
        {
			if (matrix1[i][j] != matrix2[i][j])
			{
				return false;
			}
           
        }
      
    }
    return true;

}

int main()
{
    srand((unsigned)time(NULL));

    int matrix1[3][3], matrix2[3][3];


    FillMatrixWithRandomNumber(matrix1, 3, 3);
    cout << "\nMatrix 1:\n" << endl;

    PrintMatrix(matrix1, 3, 3);

    FillMatrixWithRandomNumber(matrix2, 3, 3);

    cout << "\nMatrix 2:\n" << endl;

    PrintMatrix(matrix2, 3, 3);

    if (AreTypicalMatrices(matrix1, matrix2, 3, 3))
        cout << "\nYes : Matrices Are Typical\n";
    else
        cout << "\nNo : Matrices Are Not Typical\n";

    system("pause>0");
    return 0;

}