public class shadowing {
    static int a = 50;
    public static void main (String [] args) {
        System.out.println("The global a is like this : " + a);
        int a = 49;
        System.out.println("The new  a shadowed the global a : " + a);

        // The above phenomenon is known as shadowing
    }
}
