package mergeSort;

import java.util.Arrays;

public class Merge {

    public static void combine(int arr[], int f, int mid, int l) {
        // Create temporary arrays for left and right halves

        int leftSize = mid - f + 1;
        int rightSize = l - mid;

        int[] left = new int[leftSize];
        int[] right = new int[rightSize];

        // Copy data to temporary arrays

        for (int i = 0; i < leftSize; ++i) {
            left[i] = arr[f + i];
        }
        for (int j = 0; j < rightSize; ++j) {
            right[j] = arr[mid + 1 + j];
        }

        // Merge the temporary arrays

        int i = 0, j = 0;

        // Initial index of merged subarray
        int k = f;
        while (i < leftSize && j < rightSize) {
            if (left[i] <= right[j]) {
                arr[k] = left[i];
                i++;
            } else {
                arr[k] = right[j];
                j++;
            }
            k++;
        }

        // Copy remaining elements of left[] if any
        while (i < leftSize) {
            arr[k] = left[i];
            i++;
            k++;
        }

        // Copy remaining elements of right[] if any
        while (j < rightSize) {
            arr[k] = right[j];
            j++;
            k++;
        }
    }

    public static void divide(int arr[], int f, int l) {
        if (f < l) {
            int mid = (f + l) / 2;
            divide(arr, f, mid);
            divide(arr, mid + 1, l);
            combine(arr, f, mid, l);
        }
    }

    public static void main(String[] args) {
        int arr[] = { 88, 2, 1, 55, 45, 22, 35 };
        int max = arr.length;

        System.out.println("Before sorting:");
        System.out.println(Arrays.toString(arr));

        divide(arr, 0, (max - 1));

        System.out.println("After sorting:");
        System.out.println(Arrays.toString(arr));
    }
}