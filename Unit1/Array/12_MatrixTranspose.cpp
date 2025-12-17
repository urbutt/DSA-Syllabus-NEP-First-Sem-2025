// The transpose of a matrix is obtained by converting its
// rows into columns and columns into rows.
// If the original matrix is A[i][j] as m * n  then
// the transpose matrix is A[j][i] as n*m.

#include <iostream>
using namespace std;
int main()
{
    int rows, columns;
    cout << "Enter the number of rows and columns (max 10) : ";
    cin >> rows >> columns;
    int matrix[10][10], TMatrix[10][10];
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cout << "matrix[" << i << "][" << j << "] = ";
            cin >> matrix[i][j];
        }
    }

    cout << "\nMatrix before transpose :\n";
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }

    // Transpose Logic
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            TMatrix[j][i] = matrix[i][j];
        }
    }

    cout << "\nMatrix after transpose :\n";
    for (int i = 0; i < columns; i++)
    {
        for (int j = 0; j < rows; j++)
        {
            cout << TMatrix[i][j] << "\t";
        }
        cout << endl;
    }
}