// Linear Search:
// A searching technique that scans an array sequentially
// to find a target element by comparing it with each array element.

#include <stdio.h>

// Function to perform Linear search
// Returns the index of the target element if found, otherwise returns -1
int linearSearch(int arr[], int target, int size)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    // Get the number of elements from the user and declare an array of that size
    int size;
    printf("Enter the size of Array : ");
    scanf("%d", &size);
    int arr[size];

    // Input Array Elements from the user
    printf("Enter the Array Elements : ");
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

    // Perform linear search by calling its function
    int index = linearSearch(arr, target, size);

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