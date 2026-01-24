#include<iostream>
using namespace std;
int main () {
    int n , i;
    cout<<"Please enter the number : ";
    cin>>n;
    bool check = true;
    for (i = 2; i<n; i++) {
        // if(n%i==0) {
        //     cout<<n<<" is prime";
        //     break;
        // }
        if (n%i==0) {
            check = false;
            break;
        }
    }
    if (check == true) {
        cout<<n<<" is prime";
    } else {
        cout<<n<<" is consonant";
    }
    return 0;
}