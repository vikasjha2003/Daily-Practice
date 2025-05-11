#include<iostream>
#include<vector>
using namespace std;
int main () {
    vector<int> h = {0,1,0,2,1,0,1,3,2,1,2,1};
    int s = h.size();
    vector<int> lmax(s);
    vector<int> rmax(s);
    vector<int> sml(s);
    int max = -1;
    int max2 = -1;
    int rain = 0;
    for(int i = 0; i<s; i++) {
        lmax[i] = max;
        if (max<h[i]) {
            max = h[i];
        }
    } 
    for(int i = 0; i<s; i++) {
        cout<<lmax[i]<<" ";
    } cout<<endl;
    for(int i = s-1; i>=0; i--) {
        rmax[i] = max2;
        if(max2<h[i]) {
            max2 = h[i];
        }
    }
    for(int i = 0; i<s; i++) {
        cout<<rmax[i]<<" ";
    } cout<<endl;
    for(int i = 0; i <s; i++) {
        if (lmax[i]<rmax[i]) {
            sml[i] = lmax[i];
        } else {
            sml[i] = rmax[i];
        }
    }
    for(int i = 0; i<s; i++) {
        cout<<sml[i]<<" ";
    } cout<<endl;
    for(int i = 0; i < s; i++) {
        rain += sml[i] - h[i];
    }
    cout<<"The total rain trapped is : "<<rain<<endl;
}