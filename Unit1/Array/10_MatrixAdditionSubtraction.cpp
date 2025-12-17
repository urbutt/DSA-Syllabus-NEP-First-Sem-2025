// A matrix can be represented using a 2D array
//  Operations that can be performed on it are Addition, Subtraction, Multiplication,Transpose
// Matrix addition and subtraction are possible only when
// both matrices have the same number of rows and columns.

#include <iostream>
using namespace std;
int main()
{
    // Input size
    int r1, c1, r2, c2;
    cout << "Enter no of rows and columns for matrix 1 (max 10): ";
    cin >> r1 >> c1;
    cout << "Enter no of rows and columns for matrix 2 (max 10): ";
    cin >> r2 >> c2;
    // checking condition for matrix addition or subtraction
    if (r1 != r2 || c1 != c2)
    {
        cout << "Both matrices must have the same number of rows and columns.";
        return 0;
    }

    int a[10][10], b[10][10]; // max rows and columns allowed

    // Input matrix 1 elements
    cout << "Enter matrix 1 elements\n";
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            cout << "a[" << i << "][" << j << "] = ";
            cin >> a[i][j];
        }
    }

    // Input matrix 2 elements
    cout << "Enter matrix 2 elements\n";
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            cout << "b[" << i << "][" << j << "] = ";
            cin >> b[i][j];
        }
    }

    // Addition
    cout << "\nSum of matrices :\n";
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            cout << a[i][j] + b[i][j] << "\t";
        }
        cout << endl;
    }
    // Subtraction
    cout << "\nSubtraction of matrices :\n";
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            cout << a[i][j] - b[i][j] << "\t";
        }
        cout << endl;
    }
    return 0;
}