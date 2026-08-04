#include<iostream>
#include<memory>
using namespace std;

// Smart pointers fix the issues of ownership and deallocation

class UDT {
public:
    UDT() {
        cout<<"object created"<<endl;
    }
    ~UDT() {
        cout<<"object destroyed"<<endl;
    }
};

int main() {
    /* UDT* ob1 = new UDT(); 
    
    // if we make object this way then the object is never destroyed on its own and we need to use delete keyword.

    delete ob1; */

    // unique pointer doesn't requires us to call for delete, it automatically deletes itself once out of scope. 

    // object created and destroyed on its own
    unique_ptr<UDT> obj1 = unique_ptr<UDT> (new UDT);

    // both are ways to make unique ptr but below one is standard.

    unique_ptr<UDT> obj2 = make_unique<UDT>();

    // we are allowed to move but we can't copy

    unique_ptr<UDT> obj3 = move(obj2);

}