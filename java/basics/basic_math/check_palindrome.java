import java.util.Scanner;

public class check_palindrome {
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

        if(rev == n)
            System.out.println(n + " is a palindrome");
        else 
            System.out.println(n + " is not a palindrome");

        sc.close();
    }
}
