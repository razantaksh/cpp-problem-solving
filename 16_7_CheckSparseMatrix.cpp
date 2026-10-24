#include <iostream>
#include <iomanip>
using namespace std;

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
short CountNumberInMatrix(int matrix[3][3], short rows, short cols, int NumberToCount)
{
    short cnt = 0;
    for (short i = 0; i < rows; i++)
    {
        for (short j = 0; j < cols;j++)

        {
            if (matrix[i][j] == NumberToCount)
            {
                cnt++;

            }

        }
    }
        return cnt;
   
}

bool IsSparseMatrix(int matrix[3][3], short cols, short rows)
{
    short matrixsize = rows * cols;

    return (CountNumberInMatrix(matrix, 3, 3, 0) >= matrixsize / 2);


}
int main()
{
    int matrix[3][3] = { {0,0,12}, { 0,0,1 }, { 0,0,9 } };

    cout << "\nMatrix:\n";

	PrintMatrix(matrix, 3, 3);

    if (IsSparseMatrix(matrix, 3, 3))
    {
        cout << "\nYes : Its Sparse Matrix\n";
    }
    else
        cout << "\nNo : Its Not Sparse Matrix\n";

	system("pause>0");
    return 0;

}

