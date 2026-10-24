

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
bool IsMatrixScalar(int matrix[3][3], short cols, short rows)
{

    int FirstDiagonalElement = matrix[0][0];

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols;j++)
        {
            if (i == j && matrix[i][j] != FirstDiagonalElement)
            {
                return false;
            }
            else if (i != j && matrix[i][j] != 0)
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

    int matrix[3][3] = { {9,0,0} ,{ 0,9,0 } ,{ 0,0,9} };



    cout << "\nMatrix 1:\n" << endl;

    PrintMatrix(matrix, 3, 3);


    if (IsMatrixScalar(matrix, 3, 3))
        cout << "\nYes : Matrix Is Scalar\n";
    else
        cout << "\nNo : Matrix Is Not Scalar\n";

    system("pause>0");
    return 0;

}