public class check_if_sorted_and_rotated {

    private static boolean check(int[] arr) {
        int n = arr.length;
        boolean flag = false;
        
        if(arr[0] < arr[n-1]) flag = true;

        for(int i = 0; i<n-1; i++) {
            if(arr[i+1] < arr[i]) {
                if(flag == false) {
                    flag = true;
                } else return false;
            }
        }

        return true;
    }

    public static void main(String[] args) {

        int[] arr = {2,1,3,4};

        if(check(arr)) {
            System.out.println("The array is sorted!");
        } else {
            System.out.println("The array is not sorted!");
        }

    }
    
}
