import java.util.Arrays;

public class functions {
    public static void greetings() {
        System.out.println("Hello there!");
    }

    public static int sum (int a , int b) {
        return a + b;
    }

    public static void print_num (int ...v) { // variable argument
        System.out.println(Arrays.toString(v));
    }
    public static void main(String[] args) {
        // greetings();
        // System.out.println(sum(5,7));
        print_num(1,5,3,7,8,9,1,6);
    }


}
