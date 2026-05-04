#include<iostream>
#include<string>
using namespace std;
int main () {
    string str = "Vikas Kumar Jha";
    cout<<str<<endl;
    // string s;
    // cin>>s; // sirf space se pahle wale ko hi store karega
    // cout<<s;
    string st;
    getline(cin,st); //use to take input, space bhi chalega
    cout<<st;
    // indexing toh dekh hi li hai pahle, <='\0' tak loop chala dena hamesha chal jayega.
}