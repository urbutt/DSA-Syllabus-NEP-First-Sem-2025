/* A 2D array in C++ is essentially an array of arrays,
    storing data in rows and columns.
    It’s widely used for representing matrices, grids, and tabular data.
*/

#include <iostream>
using namespace std;
int main()
{
    // we can initialize either direct
    // int matrix[2][2]={{1,2},{3,4}};
    // or matrix[2][2]={1,2,3,4}; //values are filled row by row in array (row major order)
    // By user input
    int rows, columns;
    cout << "Enter the number of rows and columns (max 10) : ";
    cin >> rows >> columns;
    int matrix[10][10];
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cout << "matrix[" << i << "][" << j << "] = ";
            cin >> matrix[i][j];
        }
    }

    // Displaying array
    cout << "\nArray elements are :\n";
    for (int i = 0; i < rows; i++) // loop through row
    {
        for (int j = 0; j < columns; j++) // loop through column
        {
            cout << matrix[i][j] << "\t"; // rows, column are accessed via matrix[row][column]
        }
        cout << endl;
    }
}