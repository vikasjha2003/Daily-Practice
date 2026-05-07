import java.util.Scanner;

public class count_digits {
    public static void main (String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the number: ");
        int n = sc.nextInt();
        int a = n;
        int digits = 0;
        while(n > 0) {
            digits++;
            n /= 10;
        }

        System.out.println("Number of digits in " + a + " is: " + digits);

        sc.close();
    }
}
