


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
    for (int i = 0; i < rows; i++)
    {

        for (int j = 0; j < cols;j++)
        {
            RandomMatrix[i][j] = RandomNumber(1, 100);




        }
    }


}
void PrintMtrix(int RandomMatrix[3][3], short cols, short rows)
{

    for (int i = 0; i < rows; i++)
    {

        for (int j = 0; j < cols;j++)
        {
            cout << setw(3) << RandomMatrix[i][j];




        }

        cout << endl;



    }



}
int SumCols(int RandomMatrix[3][3], short rows, short ColsNumber)
{

    int sum = 0;
    for (short i = 0; i < rows; i++)
    {

        sum += RandomMatrix[i][ColsNumber];


    }

    return sum;

}
void SumMatrixColsInArra(int RandomMatrix[3][3], int arrsum[3], short cols, short rows)
{

    for (int j = 0; j < cols; j++)
    {

        arrsum[j] = SumCols(RandomMatrix, rows, j);


    }




}
void PrintCoslSumArray(int arrsum[3], short cols)
{
    cout << "\n The Following Are The Sum Of Each Row In The Matrix :\n";

    for (short j = 0; j < cols;j++)
    {

        cout << " Col " << j + 1 << " Sum = " << arrsum[j] << endl;



    }




}
int main()
{
    srand((unsigned)time(NULL));

    int RandomMatrix[3][3];
    int arrsum[3];
    FillMatrixWithRandomNumber(RandomMatrix, 3, 3);

    cout << "\n The Following Is 3x3 Random MAtrix :\n";


    PrintMtrix(RandomMatrix, 3, 3);
    SumMatrixColsInArra(RandomMatrix, arrsum, 3, 3);

    PrintCoslSumArray(arrsum, 3);
    system("pause>0");
    return 0;
}
