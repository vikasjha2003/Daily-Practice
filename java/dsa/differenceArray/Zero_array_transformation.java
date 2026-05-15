public class Zero_array_transformation {

    private static boolean isZeroArray(int[] nums, int[][] queries) {
        int[] diff = new int[nums.length];

        for(int i = 0; i<queries.length; i++) {
            diff[queries[i][0]]--;
            if(queries[i][1] + 1 < diff.length) diff[queries[i][1]+1]++;
        }
        
        int cumsum = 0;

        for(int i = 0; i<diff.length; i++) {
            cumsum += diff[i];
            if(nums[i] + cumsum > 0) return false;
        }

        return true;
    }

    private static boolean iszero(int[] nums, int[][] queries) { // Brute force
        for(int i = 0; i<queries.length; i++) {
            int l = queries[i][0];
            int r = queries[i][1];

            for(int j = l; j <= r; j++) {
                if(nums[j] > 0) nums[j]--;
            }
        }

        for(int i = 0; i<nums.length; i++) {
            if(nums[i] > 0) return false;
        }

        return true;
    }

    public static void main (String[] args) {

        int[] arr = {1,0,1};
        int[][] queries = {{0,2}};

        System.out.println(isZeroArray(arr, queries));
        System.out.println(iszero(arr, queries));
    }
}
