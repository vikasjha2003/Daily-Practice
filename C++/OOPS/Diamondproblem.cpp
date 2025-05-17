#include<iostream>
#include<string>
using namespace std;
class A {
    public:
    int a;
    virtual void show() {  // runtime binding
        cout<<"A show"<<endl;
    }
};
class B : virtual public A {
    public:
    int b;
    void show() { // thsi show function will override the show in A.
        cout<<"B show"<<endl;
    }
};
class C : virtual public A {
    public:
    int c;
};
class D : public B, public C {
    public:
    int d;
};

int main () {
    D vikas;
    vikas.a = 5; // it will work because we have used virtual. otherwise it will show A is ambiguous due to diamond problem ie double inheritance of A from both B and C.
    B goku;
    A *a;
    a = &goku; // since a pointer is declared in parent it can store address of child too.
    cout<<a<<endl;
    goku.show();
    a->show();
}