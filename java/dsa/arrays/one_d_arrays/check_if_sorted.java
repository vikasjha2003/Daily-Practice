public class check_if_sorted {

    private static boolean is_sorted (int[] arr) {
        for(int i = 0; i < arr.length - 1; i++) {
            if(arr[i + 1] < arr[i]) return false;
        }
        return true;
    }
    

    public static void main(String args[]) {
        int[] arr = {1,2,5,4,5};
        if(is_sorted(arr)) {
            System.out.println("The array is sorted!");
        } else {
            System.out.println("The array is not sorted!");
        }
    }

}
