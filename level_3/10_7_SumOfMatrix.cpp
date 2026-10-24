

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
	int SumOfMatrix(int matrix[3][3], short cols, short rows)
	{
        int sum = 0;

        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
				sum += matrix[i][j];




            }
        }
        return sum;

	}

    int main()
    {
        srand((unsigned)time(NULL));

        int matrix[3][3];

        FillMatrixWithRandomNumber(matrix, 3, 3);
        cout << "\nMatrix :\n" << endl;

        PrintMatrix(matrix, 3, 3);

        cout << "\nSum of Matrix: " << SumOfMatrix(matrix, 3, 3) << endl;

        system("pause>0");
        return 0;

    }