#include<iostream>
using namespace std;
int pow(int a, int b) {
    if(b==1) return a;
    if(b==0) return 1;
// return pow(a,b/2)*pow(a,(b-b/2)); // 4= 2*2, 16=4*4 (true but poor time complexity)
    int ans = pow(a,b/2);
    if(b%2==0) {
        return ans*ans;
    } else {
        return ans*ans*2;
    }
}
int main () {
    int a,b;
    cout<<"Enter the number: ";
    cin>>a;
    cout<<"Enter the power: ";
    cin>>b;
    cout<<pow(a,b);
}