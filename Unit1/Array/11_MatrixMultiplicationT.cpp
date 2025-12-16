/*
Matrix Multiplication
Rule: Number of columns in matrix A must equal number of rows in matrix B.

Working:
Each row of matrix A is multiplied with each column of matrix B.
Each element of the result matrix is obtained by summing the products
of corresponding row and column elements.
*/

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
    // checking condition for matrix multiplication
    if (c1 != r2)
    {
        cout << "NO of columns in matrix A must equal the no of rows in matrix B.";
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

    // Multiplication Logic for matrices
    cout << "\nResult Matrix after multiplication :\n";
    // rule check
    for (int i = 0; i < r1; i++) // traverse rows of A
    {
        for (int j = 0; j < c2; j++) // traverse column of B
        {
            int sum = 0;                 // reset for each result
            for (int k = 0; k < c1; k++) // for matching row and column elements
            {
                sum += a[i][k] * b[k][j];
            }
            cout << sum << " ";
        }
        cout << endl;
    }

    return 0;
}