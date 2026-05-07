import java.util.Scanner;

public class Ternary_operators {

    // WAP to showcase the use of ternary operator in java 

    public static void main (String [] args) {

        Scanner sc = new Scanner(System.in);

        System.out.print("Enter your name: ");
        String name = sc.nextLine();
        
        // if(name.toLowerCase().equals("luffy")) System.out.println("You are the pirate king!");
        // else System.out.println("You are an impostor!");

        // in java ternary operator does not allow printing, it directly returns the values given to it.
        // can be nested as well 

        String ans = name.toLowerCase().equals("luffy") ? "You are the pirate king!" : "You are an impostor!";
        System.out.println(ans);

        sc.close();

    }
}
