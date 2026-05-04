// problem 23 course 4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void readtriangledata(float& A, float& B, float& C)
{
    cout << " pleas enter triangle side A ? \n";
    cin >> A;

    cout << " pleas enter triangle base B ?\n";
    cin >> B;

    cout << " pleas enter triangle side C ?\n";
    cin >> C;

}

float circleareabytriangle(float A, float B, float C)
{
    const float pi = 3.141592653589793238;

    float P; 
    P = (A + B + C) / 2;

    float T;
    T = (A * B * C) /(4 * sqrt(P * (P - A) * (P - B) * (P - C)));

    float area = pi * pow(T, 2);

    return area;
}
void printarea(float area)
{


    cout << " the circle area is : " << area;
}

int main()
{
    float A, B, C;
    readtriangledata(A, B, C);
    printarea(circleareabytriangle(A, B, C));




}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
