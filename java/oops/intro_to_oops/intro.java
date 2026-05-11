package oops.intro_to_oops;
public class intro {

    public static class Student {

        // class is like the blueprint

        String name;
        int mark;


        // constructor is a way to add values to the above properties.
        // this is a keyword to access every object

        Student(int val, String name) {
            
            // this -> this keyword acts as a reference to the object which means leats say the object is Student st then this.name is equivalent to writing st.name. We can't so write name of object everytime so this keyword is used and is replaced by the name of object.

            this.name = name;
            this.mark = val;
        }

        // this is how you call a constructor from inside another constructor

        Student() {
            this (0,"No data found");
            // in this case this points to the Class itself which means Student();
        }

        // we can't manually call garbage collector in java but we can tell it to inform us when its active.
        @Override
        protected void finalize() throws Throwable {
            System.out.println(this + "Object is destroyed");
        }
    }
    public static void main (String[] args) {

        int[] marks = new int[5]; // stores marks of students
        String[] names = new String[5]; // stores names of students

        // now what if we wish store these things together? normal data structures don't allow that so the need for class arises

        Student st1 = new Student(); // objecct is like an actual entity made using that blueprint

        // "." operator links object to its reference. for eg-> st1.marks or st1.name
        // new dynamically allocates memory and returns a reference to it

        System.out.println(st1.name);
        System.out.println(st1.mark);


        // this loop shows when garbage collector is called.
        for(int i = 0; i<1000000; i++) {
            st1 = new Student();
        }

    }
}