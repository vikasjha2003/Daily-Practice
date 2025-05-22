#include<iostream>
#include<string>
#include<vector>
using namespace std;
int bestClosingTime(string customers) {
    vector<int> N (customers.length()+1,0); // to store penalty
    // solving only using 1 vector.
    // vector<int> Y; // to store penalty in case of Y
    int sum = 0;
    for(int i  = 1; i<N.size(); i++) {
        if(customers[i-1]=='N') {
            sum++;
            N[i] += sum;
        } else {
            N[i] += sum;
        }
    }
    // now calculating suffix sum for y
    sum = 0;
    for(int i = N.size()-2; i>=0; i--) {
        if(customers[i]=='Y') {
            sum++;
            N[i] += sum;
        } else {
            N[i] += sum;
        }
    }
    int mini = 0;
    for(int i = 1; i<N.size(); i++) {
        if(N[mini]>N[i]) {
            mini = i;
        } 
    }
    return mini;
}
int main () {
    string str = "YYYY";
    cout<<"The best hour to close the shop is : "<<bestClosingTime(str);
}