import java.util.Arrays;
import java.util.Scanner;

public class lcm_gcd {

    // Brute Force

    // private static int GCD (int a , int b) {
    //     for(int i = Math.min(a,b); i > 1; i--) {
    //         if(a % i == 0 && b % i == 0) return i;
    //     }
    //     return 1;
    // }
    // private static int LCM (int a , int b) {
    //     for(int i = Math.max(a, b); i < a * b ; i++) {
    //         if(i % a == 0 && i % b == 0) return i;
    //     }
    //     return a*b;
    // }

    // private static int GCD (int a , int b) { // Euclidean Algortithm
    //     while(a > 0 && b > 0) {
    //         if(a > b) a %= b;
    //         else b %= a;
    //     }
    //     return a == 0 ? b : a;
    // }

    // Euclidean Algortithm most common implementation
    // gcd(a,b) = gcd(b,a%b)
    private static int GCD (int a , int b) { 
        while(b != 0) {
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }
    
    private static int LCM (int a , int b) {
        return (a/GCD(a,b))*b;
    }

    public static void main (String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter first Number: ");
        int a = sc.nextInt();
        System.out.print("Enter second Number: ");
        int b = sc.nextInt();

        int gc = GCD(a,b);
        int lc = LCM(a,b);

        int arr[] = {lc,gc};

        System.out.println(Arrays.toString(arr));

        sc.close();
    }
}
