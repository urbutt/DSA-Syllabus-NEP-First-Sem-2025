// Array : A linear data structure that stores elements of the
// same data type in contiguous memory locations.

#include <iostream>
using namespace std;
int main()
{
    // get array size
    int size;
    cout << "Enter the size of Array: ";
    cin >> size;
    int arr[size];

    // Input Array Elements from the user
    cout << "Enter the Array Elements: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    // Displaying the entered array elements
    cout << "Array Elements are : \n";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "\n";
        ;
    }
    return 0;
}
