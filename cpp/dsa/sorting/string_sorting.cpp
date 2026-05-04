#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
bool cmp (string a , string b) {
    return a>b;
}
int main () {
    vector<string> str = {"3","30","34","9","5"};
    sort(str.begin(),str.end(),cmp);
    for(auto q : str) {
        cout<<q<<" ";
    }
}