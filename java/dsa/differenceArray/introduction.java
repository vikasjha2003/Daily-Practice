// package dsa.differenceArray;

public class introduction {
    // helps to efficiently apply range updates in constant time
    // suppose we are given an array and another array queries where for each given range we have to add something or subtract in that range. If the range is [l,r,x] then by using difference array technique we can derive that if we add x to value at l and add - x to value at r + 1 and then after all queries take a cumulative sum then final result will be same as manually applying all queries.

    public static void main(String[] args) {
        int[] nums = {0,0,0,0,0,0};
        int[][] queries = {{0,3,5},{1,3,2},{1,5,6}};

        for(int[] q : queries) {
            nums[q[0]] += q[2];
            if(q[1] + 1 < nums.length) {
                nums[q[1] + 1] -= q[2];
            }
        }

        int cur_sum = 0;

        for(int i = 0; i<nums.length; i++) {
            cur_sum += nums[i];
            nums[i] = cur_sum;
            System.out.print(nums[i] + " ");
        }

        // that is difference array technique
    }
}
