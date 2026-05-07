package java.dsa.arrays.one_d_arrays;
import java.util.Scanner;
import java.util.Arrays;

public class basic {
    public static void main (String [] args) {
        Scanner sc = new Scanner(System.in);

        int arr[] = new int[5];

        for(int i = 0; i<5; i++) {
            arr[i] = sc.nextInt();
        }

        int nums[] = {1,2,3,4,5};

        for(int i = 0; i<nums.length; i++) {
            System.out.print(nums[i] + " ");
        }
        System.out.println();

        // few useful array methods in java

        // Arrays.sort(arr);
        // int res = Arrays.binarySearch(arr, 4);
        // Arrays.fill(arr,10);
        // Arrays.fill(arr,1,4,5);
        // int [] copy = Arrays.copyOf(arr, arr.length);



        sc.close();
    }
}
