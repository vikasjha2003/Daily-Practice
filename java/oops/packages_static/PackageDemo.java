// package oops.packages_static;
// import static oops.packages.a.greetings.greeta;
// import static oops.packages.b.greetings.greetb;
// import static oops.packages.a.name.naam;
public class PackageDemo {

    // main function is declared as static so that it can run even without creating an object of PackageDemo class
    // main is the first function called in a java program, if it won't be static then the program won't be able to compile.
    public static void main (String[] args) {
        // a package is a container for class
        // normally we can't create class with same name in a single folder so we use different folders to make these class to prevent naming conflict. Folder = package

        // System.out.println("We have imported package a.");
        // greeta();
        // System.out.println("We have imported package b.");
        // greetb();
        // System.out.println("Just me telling my name!");
        // naam();

        // static -> Aproperty which is common to all objects of that class for example number of students in a school will be same for all students of that school so Studentcount can be a static variable.
        // Static variables are independent of objects which means they can be used without creating their objects.
        // static variable belong to the class

        School st1 = new School(12);
        School st2 = new School(10);

        System.out.println(st1.studentCount); // 2
        System.out.println(st2.studentCount); // 2
        System.out.println(School.studentCount); // 2, Standard convention

        // generally we can't use nonstatic functions in a static class but we can do so by creating and object of the class.
        // Either be static or get an object if you wish to be used in static function as a non static 

        PackageDemo obj = new PackageDemo();
        // nonstaticfun  won't work like this
        obj.nonstaticfun();

    }

    public void nonstaticfun () {
        System.out.println("I am non static!");
    }

    public static class School {
        static int studentCount = 0;
        int grade;

        School(int grade) {
            this.grade = grade;
            // this.studentCount += 1;  // both are valid but second one is standard convention
            School.studentCount += 1;
        }
    }
}
