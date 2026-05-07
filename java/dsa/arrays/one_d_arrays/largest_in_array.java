public class largest_in_array {

    private static int largest (int[] arr) {
        int maxi = arr[0];
        for(int i = 1; i<arr.length; i++) {
            maxi = Math.max(maxi,arr[i]);
        }
        return maxi;
    }

    private static int second_largest (int[] arr) {
        int maxi = arr[0];
        int maxi2 = -1;
        for(int i = 1; i<arr.length; i++) {
            if(arr[i] > maxi) {
                maxi2 = maxi;
                maxi = arr[i];
            } else if(arr[i] > maxi2) {
                maxi2 = arr[i];
            }
        }
        return maxi2;
    }

    private static int different_second_largest (int[] arr) { // if maxi2 can't be equal to maxi
        int maxi = arr[0];
        int maxi2 = -1;
        for(int i = 1; i<arr.length; i++) {
            if(arr[i] > maxi) {
                maxi2 = maxi;
                maxi = arr[i];
            } else if(arr[i] > maxi2 && arr[i] != maxi) {
                maxi2 = arr[i];
            }
        }
        return maxi2;
    }

    public static void main (String[] args) {
        int [] arr = {1,8,7,56,90};
        int largest = largest(arr);
        System.out.println("The largest element in array is : " + largest);
        int largest2 = second_largest(arr);
        System.out.println("The second largest element in array is : " + largest2);
    }
    
}
