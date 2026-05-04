#include<iostream>
using namespace std;
int main () {
    int n;
    cout<<"Please enter day number : ";
    cin>>n;
    if(n<1 || n>7) {
        cout<<"Please enter a valid day number"; 
    } else {
        switch(n) {
        case 1 : cout<<"Monday";
        break;
        case 2 : cout<<"Tuesday";
        break;
        case 3 : cout<<"Wednesday";
        break;
        case 4 : cout<<"Thursday";
        break;
        case 5 : cout<<"Friday";
        break;
        case 6 : cout<<"Saturday";
        break;
        case 7 : cout<<"Sunday";
        break;
        }
    }
}