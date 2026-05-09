import java.util.Scanner;

public class string_basic {
    public static void main (String[] args) {
        Scanner sc = new Scanner(System.in);

        // Strings are made immutable in java because multiple identifiers can point to a single memory object of type string so to improve security strings are made immutable. Basically to ensure one string does not get changed by other string.

        String a = "Vikas";
        String b = "Vikas";
        String c = new String("Vikas");

        // a nd b points to same string which is stored in string pool

        System.out.println(a == b); // tells us if string 1 and 2 are same object or not
        System.out.println(a == c);

        System.out.println(a.equals(b)); // tells if the value is same or not
        System.out.println(a.equals(c));
        
        // b.charAt(0) = 'P'; // does not work, strings are immutable
        b = b.toUpperCase(); // creates a new string and the reference variable b points to this new string, old string remains unchanged.

        System.out.println(a); // "Vikas"
        System.out.println(b); // "VIKAS"

        char d = '6';

        a += d; // string supports concatenation but performance is very bad, every time make new copy, extra memory space used

        System.out.println(a);


        sc.close();
    }
}