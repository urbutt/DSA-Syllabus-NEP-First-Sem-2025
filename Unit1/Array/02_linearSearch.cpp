// Linear Search:
// A searching technique that scans an array sequentially
// to find a target element by comparing it with each array element.

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
    // Function to perform Linear search
    // Returns the index of the target element if found, otherwise returns -1
    int linearSearch(int target)
    {
        for (int i = 0; i < arr.size(); i++)
        {
            if (arr[i] == target)
            {
                return i;
            }
        }
        return -1;
    }
};

int main()
{
    // get array size
    int size;
    cout << "Enter the size of Array: ";
    cin >> size;

    algorithm ls(size); // create object

    cout << "Enter the Array Elements: ";
    ls.input();

    cout << "Array Elements : \n";
    ls.display();

    // Get the element to search
    int target;
    cout << "Enter the element to search : ";
    cin >> target;

    // Perform linear search by calling its function
    int index = ls.linearSearch(target);

    // Display search result
    if (index != -1)
        cout << "Element " << target << " found at index " << index;
    else
        cout << "Element not found.";

    return 0;
}