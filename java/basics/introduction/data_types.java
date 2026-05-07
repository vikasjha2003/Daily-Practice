import java.util.Scanner;
public class data_types {
    // in this module we will go over primitive data types in java
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        // System.out.print("Enter the integer: ");
        // int it = sc.nextInt();
        // System.out.println(it);
        // System.out.print("Enter the character: ");
        // char c = sc.next().charAt(0);
        // System.out.println(c);
        // System.out.print("Enter the long: ");
        // long ll = sc.nextLong(); // need to add f in the end 
        // System.out.println(ll);
        // System.out.print("Enter the float: ");
        // float f = sc.nextFloat(); // in java generally stored as double so we add f in the end
        // System.out.println(f);
        // System.out.print("Enter the boolean: ");
        // boolean bool = sc.nextBoolean();
        // System.out.println(bool);
        // System.out.print("Enter the double: ");
        // double doub = sc.nextDouble();
        // System.out.println(doub);

        // Integer it1 = sc.nextInt(); // integer but better, using wrapper class

        long a = 436373L;
        System.out.println(a);

        float b = 543.45f;
        System.out.println(b);

        boolean bool = sc.nextBoolean(); // only accepts true and false as inputs, error if any other used
        System.out.println(bool);

        sc.close();
        // go through type casting and type conversion
    }
}
