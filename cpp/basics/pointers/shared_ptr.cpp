#include<iostream>
#include<memory>
using namespace std;

class UDT {
    public:
        UDT() {
            cout<<"object created"<<endl;
        }
        ~UDT() {
            cout<<"object destroyed"<<endl;
        }
};

int main () {

    {
        // When we use shared pointer we can create copies unlike unique pointer.

        // Deallocation takes place only when the last shared pointer owning the item is out of scope

        shared_ptr<UDT> obj1 = make_shared<UDT>();
        shared_ptr<UDT> obj2 = obj1;

        cout<<obj1.use_count()<<endl;

        {
            shared_ptr<UDT> obj3 = obj2;
            cout<<obj1.use_count()<<endl;
        }

        // when scope ends, usecount decrease

        cout<<obj1.use_count()<<endl;
    }
    
    cout<<"The destructor should be called above this line";
}