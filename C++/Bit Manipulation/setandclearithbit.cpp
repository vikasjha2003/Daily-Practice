#include<iostream>
using namespace std;
int main () {
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
    int i = 2;

    // set bit

    n |= (1<<i);
    cout<<n<<endl;

    // clear bit
    n &= ~(1<<i);
    cout<<n<<endl;

    // toggle bit
    n ^= (1<<i);
    cout<<n<<endl;
}