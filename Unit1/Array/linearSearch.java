public class linearSearch {
    public static void main(String[] args) {
        // Array Initialized
        int arr[] = { 5, 10, 15, 20, 25, 30, 35 };
        int target = 25;
        boolean found = false;
        // Using for loop to search target element one by one
        for (int i = 0; i < arr.length; i++) {
            if (arr[i] == target) {
                found = true;
                System.out.println("Element " + target + " found at index " + (i + 1));
                break;
            }
        }
        // if target element not found
        if (!found) {
            System.out.println("Element not found.");
        }
    }
}
