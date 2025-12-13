// Selection Sort :
// It is a sorting technique , it repeatedly
// finds the minimum element from the unsorted part of the array
// and swaps it with the first element of the unsorted portion.

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

    // Function to perform selection sort
    int selectionSort()
    {
        for (int i = 0; i < arr.size() - 1; i++)
        {
            // Finds minimum element index
            int minIndex = i;
            for (int j = i + 1; j < arr.size(); j++)
            {
                if (arr[j] < arr[minIndex])
                {
                    minIndex = j;
                }
            }
            // swapping
            int temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
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

    // calls selection sort function
    sort.selectionSort();

    cout << "Array Elements after sorting : \n";
    sort.display();

    return 0;
}
