import java.util.Scanner;
public class String_builder {
    public static void main (String [] args) {
        Scanner sc = new Scanner(System.in);

        StringBuilder str = new StringBuilder();

        // StringBuilder class is mutable and also solves the performance issue of concatenation in string.

        for(int i = 0; i<5; i++) {
            str.append((char)('a' + i));
        }

        System.out.println(str);

        String s = str.toString();

        System.out.println(s);

        sc.close();
    }
}