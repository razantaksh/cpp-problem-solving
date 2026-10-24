
#include <iostream>
#include <iomanip>
using namespace std;

int ReadPositiveNumber(string message)
{

    int number;

    do
    {
        cout << message << endl;
        cin >> number;


    } while (number <= 0);
    return number;

}
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

int main()
{

    srand((unsigned)time(NULL));

    int matrix[3][3];
   

    FillMatrixWithRandomNumber(matrix, 3, 3);

    cout << "\nMatrix:\n" << endl;
    PrintMatrix(matrix, 3, 3);

    int NumberToCount = ReadPositiveNumber("\nPlease enter the number to count in the matrix: ");

    cout << "\nNumber " << NumberToCount << "Count In Matrix Is :" << CountNumberInMatrix(matrix, 3, 3, NumberToCount) << endl;

	system("pause>0");
    return 0;
    }