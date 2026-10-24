
#include <iostream>
#include<iomanip>
using namespace std;



int RandomNumber(int from, int to)
{
    int randNum = rand() % (to - from + 1) + from;

    return randNum;

}

void FillMatrixWithRandomNumber(int RandomMatrix[3][3],short cols, short rows)
{
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

            cout << setw(3) << RandomMatrix[i][j]<< " ";


        }
        cout << endl;
        



    }


}
int main()
    {

        srand((unsigned)time(NULL));

        int RandomMatrix[3][3];

        FillMatrixWithRandomNumber(RandomMatrix,3,3);

        cout << " \n The Following Is a 3x3 Random Matrix :\n ";

        PrintMatrix(RandomMatrix,3,3);
        system("pause>0");

        return 0;

    }


