import java.util.Scanner;
public class swtch implements Escape {

    // WAP to show usecase of switch statement in java

    public static void main (String [] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter the day of the week (1 to 7): ");
        int day = sc.nextInt();

        // old switch statement is also useable in java 

        // switch (fruit) {
        //     case value:
        //         break;
        //     default:
        //         break;
        // }

        
        // better switch in java, no need to break, its inbuilt
        
        switch(day) {
            case 1 -> System.out.println("Today is Monday!");
            case 2 -> System.out.println("Today is Tuesday!");
            case 3 -> System.out.println("Today is Wednesday!");
            case 4 -> System.out.println("Today is Thursday!");
            case 5 -> System.out.println("Today is Friday!");
            case 6 -> System.out.println("Today is Saturday!");
            case 7 -> System.out.println("Today is Sunday!");
            default -> System.out.println("The entered day is invalid!");
        }

        sc.close();
    }       
}
