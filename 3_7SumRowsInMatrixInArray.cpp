
#include <iostream>
#include<iomanip>
using namespace std;



int RandomNumber(int from, int to)
{
    int randNum = rand() % (to - from + 1) + from;

    return randNum;

}

void FillMatrixWithRandomNumber(int RandomMatrix[3][3], short cols, short rows)
{
    int sum = 0;

    for (int i = 0;i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            RandomMatrix[i][j] = RandomNumber(1, 100);






        }

    }



}

void PrintMatrix(int RandomMatrix[3][3], short cols, short rows)
{


    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols;j++)
        {

            cout << setw(3) << RandomMatrix[i][j] << " ";


        }
        cout << endl;




    }
}
int RowSum(int RandomMatrix[3][3], short RowNumber, short cols)
{

    int sum = 0;
    for (int i = 0; i < cols; i++)
    {
        sum += RandomMatrix[RowNumber][i];


    }


    return sum;
}
void SumMatrixRowsInArray(int RandomMatrix[3][3], int arrsum[3], short rows, short cols)
{

    for (int i = 0; i < rows;i++)
    {

        arrsum[i] = RowSum(RandomMatrix, i, cols);

    }






}
void PrintRowsSumArray(int arrsum[3], short rows)
{

    cout << "\n The Following Are The Sum Of Each Row In The Matrix :\n";

    for (int i = 0; i < rows; i++)
    {

        cout << " Row " << i + 1 << " Sum = " << arrsum[i] << endl;


    }


}
int main()
{

    srand((unsigned)time(NULL));

    int RandomMatrix[3][3];
    int arrsum[3];


    FillMatrixWithRandomNumber(RandomMatrix, 3, 3);

    cout << " \n The Following Is a 3x3 Random Matrix :\n ";

    PrintMatrix(RandomMatrix, 3, 3);

    SumMatrixRowsInArray(RandomMatrix, arrsum, 3, 3);
    PrintRowsSumArray(arrsum, 3);

    system("pause>0");

    return 0;

