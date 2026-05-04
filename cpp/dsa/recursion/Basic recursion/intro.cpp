#include<iostream>
using namespace std;
int product(int a, int b) {
    return a*b;
}
void beat() {
    cout<<"kaddu";
}
void greet(int a) {
    if (a==0) return;
    cout<<"Hello"<<endl;
    greet(a-1);
    // beat();
}
int main () {
    int a;
    cin>>a;
    greet(a);
    //cout<<product(a,b);
}