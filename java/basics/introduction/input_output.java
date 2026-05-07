import java.util.Scanner;
public class input_output {
    public static void main(String[] args) {

        // output in java
        System.out.println("Hello");

        // input in java
        Scanner input = new Scanner(System.in);

        System.out.println("The input is " + input.nextLine());

        input.close();
    }
}