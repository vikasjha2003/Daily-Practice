#include<iostream>
using namespace std;
int power (int i,int a, int b) { // extra parameter
    if (i>b) {
        return 1;
    }
    return a*power(i+1,a,b);
}
int pow (int a, int b) {
    if(b==0) return 1;
    return a*pow(a,b-1);
}
int main () {
    int a,b;
    cout<<"Enter the number: ";
    cin>>a;
    cout<<"Enter the power: ";
    cin>>b;
    cout<<power(1,a,b)<<endl;
    cout<<pow(a,b);

}