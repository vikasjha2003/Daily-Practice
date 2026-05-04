#include<iostream>
using namespace std;
class BGMI {
    public:
        bool flag;
        BGMI () {  // constructor
            flag = true;
            cout<<"constructor call hua hai, "<<flag<<endl;
        }
        ~BGMI () {  // destructor
            flag = false;
            cout<<"destructor call hua hai, "<<flag;
        }
};
void print () {   
    // int a = 10; // har baar 10 hi print hoga kyuki int har baar naya ban raha hai, agar static laga diya toh 10,11,12 print hoga.
    static int a = 10; // static lag gaya toh ek hi baari mein int a ko static memory allocate ho jayegi.
    cout<<a<<endl;
    a++;
}
void print(int a) { // function overloading
    cout<<a<<endl;
}
int main () {
    int a = 5;
    print();
    print();
    print();
    BGMI khelega;
    print(a);
}