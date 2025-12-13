// Merge Sort :

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

    // Merges two already sorted subarrays into a single sorted array
    void merge(int low, int mid, int high)
    {
        // temporary array to store merged elements
        vector<int> temp(high - low + 1);
        int i = low;     // left subarray pointer
        int j = mid + 1; // right subarray pointer
        int k = 0;       // temporary array index
        // compares elements from both subarrays
        // copy the smaller element into temp
        while (i <= mid && j <= high)
        {
            if (arr[i] <= arr[j])
                temp[k++] = arr[i++];
            else
                temp[k++] = arr[j++];
        }
        // copy any remaining elements
        while (i <= mid)
            temp[k++] = arr[i++];
        while (j <= high)
            temp[k++] = arr[j++];
        // copies back to original array at correct position
        for (int i = 0; i < temp.size(); i++)
            arr[low + i] = temp[i];
    }

    // divides arrays recursively into smaller subarrays
    // until each subarray has only 1 element
    void mergeSort(int low, int high)
    {
        if (low < high)
        {
            int mid = low + (high - low) / 2;
            mergeSort(low, mid);      // sorts left half
            mergeSort(mid + 1, high); // sorts right half
            merge(low, mid, high);    // merges two sorted halves
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
    sort.mergeSort(0, size - 1);

    cout << "Array Elements after sorting : \n";
    sort.display();

    return 0;
}