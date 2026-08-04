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
    // Acts like a shared pointer but does not keep track of the reference count.

    // used to break cycles in shared_ptr

    {
        shared_ptr<UDT> obj1 = make_shared<UDT>();
        weak_ptr<UDT> obj2 = obj1;

        cout<<obj1.use_count()<<endl;

        {
            shared_ptr<UDT> obj3 = obj1;
            cout<<obj1.use_count()<<endl;
        }

        cout<<obj1.use_count()<<endl;
    }
    
    cout<<"The destructor should be called above this line";
}