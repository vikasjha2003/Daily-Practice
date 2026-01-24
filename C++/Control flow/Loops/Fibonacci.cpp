#include<iostream>
using namespace std;
int main () {
    int n, a, b, c, i;
    cout<<"Please enter n : ";
    cin>>n;
    a=1;
    b=1;
    if(n==1) {
        cout<<a;
    } else if (n==2) {
        cout<<a+b;
    } else {
        for(i=1; i<=(n-2); i++) {
        c = a+b;
        a = b;
        b = c;
        
    }
    cout<<"The "<<n<<" fibonacci number is : "<<c;    
    }
}