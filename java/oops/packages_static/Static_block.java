// package oops.packages_static;

// More info on static in PackageDemo file

public class Static_block {
    static int a = 55;
    static int b;

    // how will we initialize b? since static is belonging to class we might be using b without an object so a constructor won't work in that case.

    static { // this is a static block, used to initialize static variables. Runs only once during compile time.
        System.out.println("Static block compiled!");
        b = a * 3;
    }

    public static void main (String[] args) {
        // even though nothing is written in main block if you run the code you will see static block compiled message.
    }
}
