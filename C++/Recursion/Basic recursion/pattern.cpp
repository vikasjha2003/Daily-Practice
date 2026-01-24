#include<iostream>
using namespace std;
void stars(int b, int i) {
    if(i==b) {
        cout<<endl;
        return;
    }
    cout<<"*";
    stars(b,i+1);
}
void starsquare(int a) {
    if(a==0) {;
        return;
    }
    starsquare(a-1);
    stars(a,0);
}
int main () {
    int n ;
    cout<<"Enter the value of n: ";
    cin>>n;
    starsquare(n);
}