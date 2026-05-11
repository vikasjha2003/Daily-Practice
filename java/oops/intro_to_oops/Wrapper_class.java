package oops.intro_to_oops;
public class Wrapper_class {
    public static void main (String[] args) {
        // Integer a = new Integer(45);
        Integer a = 10; // better way
        int b = 10;

        // Wrapper class are those class which wrap a primitive data type in order to add more functionalities to it that is add more methods to it.
        // Integer is a wrapper class of int

        // final keyword is used to make stuff immutable i.e. prevent others from changing its values
        // only usable for primitive data type

        final int c = 50;
        // c = c + 5;  won't change value since integer is declared as final (like const in cpp)

        final int[] arr = {1,2,3};

        arr[0] = 60; // since the object of arr is final this means that the reference variable is final not the values in arr so the values in the array can be changed but the array can't be changed.

        // arr = {6,7,9}; 
        
    }
}
