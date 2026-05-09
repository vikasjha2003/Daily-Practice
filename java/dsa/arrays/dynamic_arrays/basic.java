import java.util.Scanner;
import java.util.ArrayList; // necessary

public class basic {
    public static void main (String[] args) {
        Scanner sc = new Scanner(System.in);

        // Can't add primmitive, must be a wrapper
        ArrayList<Integer> arr = new ArrayList<>(7); // list of size 7 ( 7 doesn't really matter here)

        arr.add(1); // to add elements
        arr.add(2);
        arr.add(3);
        arr.add(4);
        arr.add(5);
        arr.add(6);
        arr.add(7);
        arr.add(8);

        arr.set(0 , 100); // to update the index
        arr.remove(2); // removes elements from the given index
        arr.set(2, arr.get(0));

        // arr[0] won't work here

        System.out.println(arr);
        System.out.println(arr.get(4));

        // 2D arraylist

        ArrayList<ArrayList<Integer>> grid = new ArrayList<>(); 

        // we need to add these lists else null pointer exception
        for(int i = 0; i<3; i++) {
            grid.add(new ArrayList<>());
        }
        
        for(int i = 0; i<3; i++) {
            for(int j = 0; j < 3; j++) {
                grid.get(i).add(sc.nextInt());
            }
        }

        System.out.println(grid);
        sc.close();
    }
}
