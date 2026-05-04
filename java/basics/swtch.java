import java.util.Scanner;
public class swtch {
    public static void main (String [] args) {
        Scanner sc = new Scanner(System.in);
        String fruit = sc.next();

        // old switch also useable in java 

        // switch (fruit) {
        //     case value:
                
        //         break;
        
        //     default:
        //         break;
        // }

        
        // better switch in java
        switch(fruit) {
            case "Mango" -> System.out.println("The most goated fruit");
            case "Apple" -> System.out.println("The second most goated fruit");
            default -> System.out.println("Not a fruit");
        }

        sc.close();
    }       
}
