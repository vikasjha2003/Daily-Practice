#include<iostream>
#include<cmath>
using namespace std;
int hcf (int x, int y) {
    int c=1;
    // if (y%x==0) c=x;
    // else {
    //     for(int i=2; i<=(min(x,y)/2); i++) {
    //         if(x%i==0 && y%i==0) {
    //         c=i;
    //         }
    //     }
    // }
    if (y%x==0) c=x;
    else {
        for(int i=(min(x,y)/2); i>=2; i--) {
            if(x%i==0 && y%i==0) {
            c=i;
            break;
            }
        }
    }
    return c;
}
int main () {
    int a, b;
    cout<<"Enter the first number: ";
    cin>>a;
    cout<<"Enter the second number: ";
    cin>>b;
    cout<<"The HCF of "<<a<<" and "<<b<<" is: "<<hcf(a,b);
}
// hcf = highest number which divide both no.