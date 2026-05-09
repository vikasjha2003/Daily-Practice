import java.util.Scanner;
public class basic {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter the number of rows : ");
        int row = sc.nextInt();

        int [][] arr = new int[row][];

        /*
        
            if row is 3 then arr ->
            {null,null,null};

            we will have to take size of column as input and then set arr[i] = new int[size] and only after that we can take input elements of that particular row.

            below given for loop shows this.

        */
        
        for(int i = 0; i<arr.length; i++) {
            System.out.print("Enter the size of " + (i + 1) + "th column : ");
            int col = sc.nextInt();
            arr[i] = new int[col];
            for(int j = 0; j<col; j++) {
                System.out.print("Enter the element: ");
                arr[i][j] = sc.nextInt();
            }
        }

        for(int[] nums : arr) {
            for(int it : nums) {
                System.out.print(it + " ");
            }
            System.out.println();
        }

        int [][] nums = new int[5][4]; // pre defined size.


        sc.close();
    }
}
