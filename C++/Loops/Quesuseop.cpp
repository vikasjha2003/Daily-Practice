#include<iostream>
using namespace std;
int main () {
    int n, n1, c, sum, rev;
    cout<<"Please enter the number : ";
    cin>>n;
    n1=n;
    c=0;
    rev=0;
    sum=0;
    while (n>0) {
        sum+=n%10;
        rev *= 10;
        rev += n%10;
        n/=10;
        c++;
    }
    cout<<n1<<" has "<<c<<" digits.";
    cout<<endl<<"Sum of digits is : "<<sum;
    cout<<"\nReverse of the number is : "<<rev;
    return 0;
}