

//Optimised bubbleSort ...ie. Array is already sorted
public class OptimizedBubbleSort {
    public static void bubbleSort(int[] arr) {
        int n = arr.length;
        boolean swapped;

        for (int i = 0; i < n - 1; i++) {
            swapped = false;

            for (int j = 0; j < n - i - 1; j++) {
                if (arr[j] > arr[j + 1]) {
                    // Swap
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                    swapped = true;
                }
            }

            // If no two elements were swapped → break (already sorted)
            if (!swapped) break;
        }
    }

    public static void main(String[] args) {
       // int[] arr = {1, 2, 3, 4, 5}; // Already sorted
        int[] arr = {2,34,10,8,11,9,43,23,31};
        bubbleSort(arr);

        System.out.print("Sorted array: ");
        for (int num : arr) {
            System.out.print(num + " ");
        }
    }
}
