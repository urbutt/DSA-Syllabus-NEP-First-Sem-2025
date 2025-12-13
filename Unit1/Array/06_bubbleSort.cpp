// Bubble Sort:
// Repeatedly compares adjacent elements and swaps them
// if they are in the wrong order, pushing larger elements
// to the end with each pass.

#include <iostream>
#include <vector>
using namespace std;

class algorithm
{
    int size;
    vector<int> arr;

public:
    // constructor
    algorithm(int val)
    {
        size = val;
        arr.resize(size);
    }
    // input array elements
    void input()
    {
        for (int i = 0; i < arr.size(); i++)
        {
            cin >> arr[i];
        }
    }

    // display array elements
    void display()
    {
        for (int i = 0; i < arr.size(); i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    // Performing Bubble sort 
    void bubbleSort()
    {
        for (int i = 0; i < size - 1; i++) // number of passes
        {
            // compare adjacent elements and swap if in wrong order
            for (int j = 0; j < size - i - 1; j++)
            {
                if (arr[j] > arr[j + 1])
                {
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
    }
};
int main()
{
    // get array size
    int size;
    cout << "Enter the size of Array: ";
    cin >> size;

    algorithm sort(size); // create object

    cout << "Enter the Array Elements :  ";
    sort.input();

    cout << "Array Elements before sorting : \n";
    sort.display();

    // calls bubble sort function
    sort.bubbleSort();

    cout << "Array Elements after sorting : \n";
    sort.display();

    return 0;
}