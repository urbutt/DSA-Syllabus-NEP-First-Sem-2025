// Binary Search:
// It is an efficient searching technique for sorted arrays.
// It repeatedly divides the array in half by comparing the middle element
// with the target, reducing the search space by half each time
// until the element is found or the range becomes empty.
// Note: The array must be sorted in ascending order before performing the search.

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

    // Function to perform binary search
    // Returns the index of the target element if found, otherwise returns -1
    int binarySearch(int target)
    {
        int low = 0;         // starting index
        int high = size - 1; // ending index
        int mid;             // mid index

        while (low <= high)
        {
            mid = low + (high - low) / 2; // calculate middle index
            if (arr[mid] == target)
            {
                return mid; // Element found, return index
            }
            else if (arr[mid] < target)
            {
                low = mid + 1; // Target lies in right half
            }
            else
            {
                high = mid - 1; // Target lies in left half
            }
        }
        return -1; // Element not found
    }
};
int main()
{
    // get array size
    int size;
    cout << "Enter the size of Array: ";
    cin >> size;

    algorithm bs(size); // create object

    cout << "Enter the Array Elements (must be sorted):  ";
    bs.input();

    cout << "Array Elements : \n";
    bs.display();

    // Get the element to search
    int target;
    cout << "Enter the element to search : ";
    cin >> target;

    // calls binary search function
    int index = bs.binarySearch(target);

    // Display search result
    if (index != -1)
        cout << "Element " << target << " found at index " << index;
    else
        cout << "Element not found.";

    return 0;
}
