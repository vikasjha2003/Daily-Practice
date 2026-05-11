// package oops.packages_static;

public class Inner_class {
    // Inner classes are classes which are within an already existing class.
    static class Example {
        String exp;
        Example(String text) {
            this.exp = text;
        }

        @Override
        public String toString() {
            return exp;
        }
    }

    public static void main(String[] args) {
        // below written line will give error if the inner class is non static, if its non static then the inner class will depend on the object of the outer class but main is static so object of outer class won't exist until we make it exceptionally. hence declare the class as static.

        Example e1 = new Example("This is example 1");
        Example e2 = new Example("This is example 2");
        System.out.println(e1.exp);
        System.out.println(e2.exp);

        // System is a class, out is a variable in the System class, the . refernces the out in system class.
        // out is an object of the class printstream and using this object we are using println which is a method in the printstream class.

        System.out.println(e1);
    }
}
