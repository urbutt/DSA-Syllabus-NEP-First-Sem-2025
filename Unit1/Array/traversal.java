package Unit1.Array;

// Array : An Array is a Linear data structure 
// It is a collection of elements of same type 
// stored in contiguous memory locations.

// Defining a class 'traversal' with main method to traverse an
// array using for loop and printing its elements one by one

public class traversal {
    public static void main(String args[]) {
        int arr[] = { 10, 20, 30, 40, 50 };

        System.out.println("Array elements are : ");
        for (int i = 0; i < arr.length; i++) {
            System.out.println(arr[i]);
        }
    }
}