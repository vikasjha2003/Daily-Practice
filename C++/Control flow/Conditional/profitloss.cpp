#include<iostream>
using namespace std;
int main () {
    int cp , sp ;
    cout<<"Please enter cost price and selling price : ";
    cin>>cp>>sp;
    if (cp>sp) {
        cout<<"Loss\n";
        cout<<"The loss incurred is "<<cp-sp;
    }
    else if (cp==sp) {
        cout<<"Neither profit nor loss.";
    } 
    else {
        cout<<"Profit\n";
        cout<<"The profit gained is "<<sp-cp;
    }
}