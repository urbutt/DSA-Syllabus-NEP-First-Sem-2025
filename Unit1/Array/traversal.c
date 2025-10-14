// Array : A linear data structure that stores elements of the
// same data type in contiguous memory locations.

#include <stdio.h>
int main()
{
    // Get the number of elements from the user and declare an array of that size
    int size;
    printf("Enter the size of Array: ");
    scanf("%d", &size);
    int arr[size];

    // Input Array Elements from the user
    printf("Enter the Array Elements: ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Displaying the entered array elements
    printf("Array Elements are: \n");
    for (int i = 0; i < size; i++)
    {
        printf("%d\n", arr[i]);
    }
}
