import java.util.Scanner;

// taken from leetcode

public class valid_palindrome {

    private static boolean isAlphaNumeric(char ch){
        if( (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') ||(ch >= '0' && ch <= '9') ){
            return true;
        } 
        return false;
    }

    private static boolean isPalindrome(String s) {        
        int n = s.length();

        int left = 0;
        int right = n-1;

        while(left < right){

            char leftCh = s.charAt(left);
            char rightCh = s.charAt(right);

            if(!isAlphaNumeric(leftCh)){
                left++;
                continue;
            }

            if(!isAlphaNumeric(rightCh)){
                right--;
                continue;
            }

            if (leftCh >= 'A' && leftCh<= 'Z') leftCh = (char)(leftCh + 32);
            if (rightCh >= 'A' && rightCh <= 'Z') rightCh = (char)(rightCh + 32);
            if(leftCh != rightCh){
                return false;
            }

            left++;
            right--;

        }
        
        return true;
    }
    public static void main (String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter the string to be tested: ");
        String str = sc.nextLine();

        if(isPalindrome(str)) System.out.println("The given string is a Palindrome");
        else System.out.println("The given string is not a palindrome");

        sc.close();
    }
}
