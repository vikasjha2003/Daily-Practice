import java.util.Scanner;

public class conditionals {

    // wap to display use of if , else , else if

    public static void main (String [] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter your marks: ");
        int marks = sc.nextInt();
        if(marks >= 90) {
            System.out.println(10 + " CGPA");
        } else if (marks >= 80) {
            System.out.println(9 + " CGPA");
        } else if (marks >= 70) {
            System.out.println(8 + " CGPA");
        } else if (marks >= 60) {
            System.out.println(7 + " CGPA");
        } else if (marks >= 50) {
            System.out.println(6 + " CGPA");
        } else if (marks >= 40) {
            System.out.println(5 + " CGPA");
        } else {
            System.out.println("You failed the test!");
        }
        sc.close();
    }
}
