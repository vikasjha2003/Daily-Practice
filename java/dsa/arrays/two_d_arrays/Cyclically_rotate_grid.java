import java.util.ArrayList;
import java.util.List;
import java.util.Collections;

public class Cyclically_rotate_grid {

    private static int[][] rotateGrid(int[][] grid, int k) {
        int m = grid.length;
        int n = grid[0].length;

        int rows = 0, rowe = m-1, cols = 0, cole = n-1;
        int rows1 = 0, rowe1 = m-1, cols1 = 0, cole1 = n-1;

        for(int j = 1; j<= Math.min(m,n)/2; j++) {

            List<Integer> arr = new ArrayList<>(); 

            for(int i = cols; i <= cole; i++) {
                arr.add(grid[rows][i]);
            }
            rows++;
            for(int i = rows; i <= rowe; i++) {
                arr.add(grid[i][cole]);
            }
            cole--;
            if(rows <= rowe) {
                for(int i = cole; i >= cols; i--) {
                    arr.add(grid[rowe][i]);
                }
                rowe--;
            }
            if(cols <= cole) {
                for(int i = rowe; i >= rows; i--) {
                    arr.add(grid[i][cols]);
                }
                cols++;
            }

            int a = k % arr.size();
            Collections.rotate(arr,-a);

            a = 0;

            for(int i = cols1; i <= cole1; i++) {
                grid[rows1][i] = arr.get(a++);
            }
            rows1++;
            for(int i = rows1; i <= rowe1; i++) {
                grid[i][cole1] = arr.get(a++);
            }
            cole1--;
            if(rows1 <= rowe1) {
                for(int i = cole1; i >= cols1; i--) {
                    grid[rowe1][i] = arr.get(a++);
                }
                rowe1--;
            }
            if(cols1 <= cole1) {
                for(int i = rowe1; i >= rows1; i--) {
                    grid[i][cols1] = arr.get(a++);
                }
                cols1++;
            }
        }
        return grid;
    }

    public static void main (String[] args) {

        /*
            The Given grid will be of size m x n wheer both m and n will be even integers.
            Task is to rotate the grid Cyclically by k positions.
            For more info refer Leetcode 1914
        */

        int[][] grid = {
            {1,2,3,4}, {5,6,7,8}, {9,10,11,12}, {13,14,15,16}
        };

        int k = 5;

        int[][] newgrid = rotateGrid(grid,k);

        for(int[] arr : newgrid) {
            for(int ele : arr) {
                System.out.print(ele + " ");
            }
            System.out.println();
        }
        
    }
}