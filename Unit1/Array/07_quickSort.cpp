// Merge Sort:mUses divide-and-conquer technique.
// Recursively divides the array into two halves
// until each subarray contains one element,
// then merges the sorted subarrays to form a sorted array.
//
// Time Complexity:
//        Best Case    : O(n log n)
//        Average Case : O(n log n)
//        Worst Case   : O(n log n)

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

    // swap function
    void swap(int a, int b)
    {
        int temp = arr[a];
        arr[a] = arr[b];
        arr[b] = temp;
    }

    // function to perform partition using pivot
    int partition(int low, int high)
    {
        int i = low - 1;
        int pivot = arr[high];
        for (int j = low; j <= high - 1; j++)
        {
            // smaller goes left and larger to right
            if (arr[j] < pivot)
            {
                i++;
                swap(i, j);
            }
        }
        // places pivot at final correct position and returns its index
        swap(i + 1, high);
        return i + 1;
    }

    // performs recursion on subarrays
    void quickSort(int low, int high)
    {
        if (low < high)
        {
            int pIndex = partition(low, high);
            quickSort(low, pIndex - 1);
            quickSort(pIndex + 1, high);
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

    cout << "Enter the Array Elements: ";
    sort.input();

    cout << "Array Elements before Sorting: \n";
    sort.display();

    // calls Quick sort function
    sort.quickSort(0, size - 1);

    cout << "Array Elements after sorting : \n";
    sort.display();

    return 0;
}