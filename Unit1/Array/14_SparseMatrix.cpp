/* A sparse matrix has mostly zero elements.
   Storing only non-zero elements saves memory and reduces
   computation, as operations can skip the zeros.
   we store non - zero elements with triples(Row, Column, value).
*/
#include <iostream>
using namespace std;
int main()
{
    // sparse matrix
    int sparseMatrix[4][5] =
        {
            {0, 0, 3, 0, 5},
            {0, 8, 0, 0, 5},
            {1, 0, 0, 0, 0},
            {0, 7, 0, 9, 0}};

    return 0;
}