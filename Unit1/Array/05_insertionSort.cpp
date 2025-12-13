// Insertion Sort :A simple sorting algorithm
// Builds the final sorted array one item at a time, with each iteration
// inserting the current element into its correct position 

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

    // Performing Insertion sort
    void InsertionSort()
    {
        for (int i = 1; i < size; i++)
        {
            int temp = arr[i];
            int j = i - 1;
            while (j >= 0 && temp < arr[j])
            {

                arr[j + 1] = arr[j];
                j--;
            }
            arr[j + 1] = temp;
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

    // Perform linear search by calling its function
    sort.InsertionSort();

    cout << "Array Elements after sorting : \n";
    sort.display();

    return 0;
}