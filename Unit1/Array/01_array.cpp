/*
 Array : A linear data structure that stores elements of the
 same data type in contiguous memory locations.
 Operations include : Insertion, Deletion, Update, Traversal
*/

#include <iostream>
using namespace std;
class myArray
{
    int size;
    int *arr;

public:
    // Constructor :
    // Allocates memory dynamically for the array
    myArray(int size)
    {
        this->size = size;
        arr = new int[size];
    }

    // input array elements
    void input()
    {
        for (int i = 0; i < size; i++)
        {
            cin >> arr[i];
        }
    }

    // display array elements
    void display()
    {
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    // Destructor :
    // Frees the dynamically allocated memory to prevent memory leaks
    ~myArray()
    {
        delete[] arr;
    }
};

int main()
{
    // get array size
    int size;
    cout << "Enter the size of Array: ";
    cin >> size;
    myArray a(size);

    cout << "Enter the Array Elements: ";
    a.input();

    cout << "Array Elements are : \n";
    a.display();
    return 0;
}
