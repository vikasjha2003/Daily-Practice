#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
int main () {
    int n;
    vector<string> str;    
    str.push_back("Flower");
    str.push_back("Flow");
    str.push_back("Flight");
    str.push_back("Fluid");
    n = str.size();
    sort(str.begin(), str.end());
    for(int i = 0; i<str.size(); i++) {
        cout<<str[i]<<" ";
    }
    cout<<endl;
    string first = str[0];
    string last = str[n-1];
    string temp = "";
    for(int i = 0; i<(min(first.length(),last.length())); i++) {
        if(first[i]==last[i]) {
            temp += first[i]; 
        } else break;
    }
    cout<<temp;
}