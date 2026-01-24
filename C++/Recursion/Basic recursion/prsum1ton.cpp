#include<iostream>
using namespace std;
void printsum (int sum,int n) { // with additional parameter
    if (n==0) {
        cout<<"Sum is: "<<sum;
        return;
    }
    sum+=n;
    printsum(sum,n-1);
}
int sum (int n) { // without additional parameter
    if(n==0) {
        return 0;
    }
    return n+sum(n-1);
}
int main () {
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    printsum(0,n);
    cout<<endl;
    cout<<sum(n);

}