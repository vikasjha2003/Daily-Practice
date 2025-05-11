#include<iostream>
#include<string>
using namespace std;
class account {  // encapsulation
    private: // data hiding
        string password;
        double balance;
        string contact;

    public:
        string accname;
        string number;
        account() {
            number = "1";
            accname = "user";
        }


};
int main () {
    account vikas;
    // vikas.accname = "Vikas Kumar Jha";
    // vikas.number = "1000";
    cout<<vikas.number<<endl<<vikas.accname;
}