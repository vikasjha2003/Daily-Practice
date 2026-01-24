#include<iostream>
using namespace std;
int main () {
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    if (n%3==0 || n%5==0) {
        if (n%15!=0) {
            cout<<n<<" is divisble by 5 or 3 but not divisible by 15.";
        }
        else {
            cout<<"Condition not fulfilled.";
        }
    }
    else {
        cout<<"Condition not fulfilled.";
    }
    return 0;
}