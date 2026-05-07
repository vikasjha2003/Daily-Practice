import java.util.Scanner;

public class reverse_number {
    public static void main (String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the Number: ");
        int n = sc.nextInt();
        int a = n;
        int rev = 0;
        while(a > 0) {
            rev = rev*10 + a%10;
            a /= 10;
        }
        System.out.println("The reverse of " + n + " is " + rev);
        sc.close();
    }
}
