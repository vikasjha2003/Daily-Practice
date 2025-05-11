#include<iostream>
#include<string>
using namespace std;
void towerofhanoi(int n,char S,char D,char H) {
    if (n==0) return;
    towerofhanoi(n-1,S,H,D);
    cout<<S<<" -> "<<H<<endl;
    towerofhanoi(n-1,D,S,H);
}
int main () {
    int n; 
    cout<<"Enter the number of disks: ";
    cin>>n;
    towerofhanoi(n,'A','B','C');
}