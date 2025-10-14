// Binary Search:
// It is an efficient searching technique for sorted arrays.
// It repeatedly divides the array in half by comparing the middle element
// with the target, reducing the search space by half each time
// until the element is found or the range becomes empty.
// Note: The array must be sorted in ascending order before performing the search.

#include <stdio.h>

// Function to perform binary search
// Returns the index of the target element if found, otherwise returns -1
int binarySearch(int arr[], int size, int target)
{
    int first = 0;       // starting index
    int last = size - 1; // ending index
    int mid;             // mid index

    while (first <= last)
    {
        mid = first + (last - first) / 2; // calculate middle index
        if (arr[mid] == target)
        {
            return mid; // Element found, return index
        }
        else if (arr[mid] < target)
        {
            first = mid + 1; // Target lies in right half
        }
        else
        {
            last = mid - 1; // Target lies in left half
        }
    }
    return -1; // Element not found
}

int main()
{
    // Get the number of elements from the user and declare an array of that size
    int size;
    printf("Enter the size of Array : ");
    scanf("%d", &size);
    int arr[size];

    // Input Array Elements from the user (must be sorted)
    printf("Enter the Array Elements (in sorted order): ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Displaying the entered array elements
    printf("Array Elements are : \n");
    for (int i = 0; i < size; i++)
    {
        printf("%d\n", arr[i]);
    }

    // Get the element to search
    int target;
    printf("Enter the element to search: ");
    scanf("%d", &target);

    // Perform binary search by calling its function
    int index = binarySearch(arr, size, target);

    // Display search result
    if (index != -1)
    {
        printf("Element '%d' found at index %d.", target, index);
    }
    else
    {
        printf("Element not found.");
    }

    return 0;
}
