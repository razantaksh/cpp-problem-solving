

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
    void PrintMiddleRowOfMatrix(int matrix[3][3], short cols, short rows)
    {
        short MiddleRow = rows / 2;

        for (int j = 0; j < cols; j++)
        {
            printf("%0*d ", 2, matrix[MiddleRow][j]);



        }
    }

    void PrintMiddleColumnOfMatrix(int matrix[3][3], short cols, short rows)
    {
        short MiddleColumn = cols / 2;
        for (int i = 0; i < rows; i++)
        {
          printf("%0*d ", 2, matrix[i][MiddleColumn]);




        }





    }
    int main()
    {

        int matrix[3][3];

		FillMatrixWithRandomNumber(matrix, 3, 3);
        cout << "\nMatrix :\n" << endl;

		PrintMatrix(matrix, 3, 3);

        cout << "\nMiddle Row Of Matrix is:\n" << endl;
        PrintMiddleRowOfMatrix(matrix, 3, 3);

        cout << "\nMiddle Column Of Matrix is:\n" << endl;
		PrintMiddleColumnOfMatrix(matrix, 3, 3);

		system("pause>0");
        return 0;

    }