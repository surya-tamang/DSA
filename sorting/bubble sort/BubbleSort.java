import java.util.Arrays;

class BubbleSort {
    public static void main(String[] args) {
        int[] arr = { 2, 1, 6, 3, 10, 34, 24 };
        int temp;

        for (int i = 0; i < arr.length; i++) {
            for (int j = 0; j < arr.length - 1; j++) {
                if (arr[j] > arr[j + 1])// condition for ascending order
                {
                    temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }

        System.out.println(Arrays.toString(arr));
    }
}