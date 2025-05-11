#include<iostream>
#include<string>
using namespace std;
class Teacher {
    public:  // access modifier
        // properties/attributes
        string name;
        string subject;
        string dept;
    private:  // access modifier
        int experience;

        // methods/member functions
        void changeexp() {  // setter function
            experience = experience+1;
        }
        int showexp() {  //  getter function
            return experience;
        }
};

int main () {
    Teacher t1; // object
    t1.name = "Vikas Kumar Jha";
    t1.subject = "English";
    t1.dept = "CSAI";
    cout<<t1.name;
}