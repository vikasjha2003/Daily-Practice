// LCM >= max(a,b);
// HCF <= min(a,b);
// uses long division method to calculate hcf, dry run to understand the method;
// O(log(a+b));
#include<iostream>
int HCF(int a, int b) {
    if(a%b==0) return b;
    return HCF(b,a%b);
}
using namespace std;
int main () {
    int a = 27;
    int b = 6;
    cout<<HCF(a,b);
}