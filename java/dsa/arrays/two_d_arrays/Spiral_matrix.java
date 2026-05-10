import java.util.List;
import java.util.ArrayList;

// same code works for spiral matrix 2 as well

public class Spiral_matrix {

    public static List<Integer> spiralOrder(int[][] matrix) {
        int m = matrix.length, n = matrix[0].length;

        int rows = 0, rowe = m-1, cols = 0, cole = n-1;


        List<Integer> arr = new ArrayList<>(); 

        while(rows <= rowe && cols <= cole) {
            // right
            for(int i = cols; i <= cole; i++) {
                arr.add(matrix[rows][i]);
            }
            rows++;
            // down
            for(int i = rows; i <= rowe; i++) {
                arr.add(matrix[i][cole]);
            }
            cole--;
            // left
            if(rows <= rowe) {
                for(int i = cole; i >= cols; i--) {
                    arr.add(matrix[rowe][i]);
                }
                rowe--;
            }
            // up
            if(cols <= cole) {
                for(int i = rowe; i >= rows; i--) {
                    arr.add(matrix[i][cols]);
                }
                cols++;
            }
        }

        return arr;
    }

    public static void main (String[] args) {

        // can be written as either int arr[][] or as int[][] arr, both are fine, int[][] is standard

        int[][] grid = {
            {1,2,3}, {4,5,6}, {7,8,9}
        };

        List<Integer> nums = spiralOrder(grid);
        System.out.println(nums);

    }
}