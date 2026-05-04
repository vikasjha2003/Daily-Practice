#include<iostream>
#include<vector>
#include<string>
using namespace std;
void helper (int n, vector<string> &v, string st) {
    if(st.size() == n) {
        v.push_back(st);
        return;
    }
    if(st.size() == 0 || st[st.size()-1] == '1') {
        st.push_back('0');
        helper(n,v,st);
        st.pop_back();
        st.push_back('1');
        helper(n,v,st);
    } else {
        st.push_back('1');
        helper(n,v,st);
    }
}
vector<string> validStrings(int n) {
    vector<string> v;
    helper(n,v,"");
    return v;
}
int main () {
    int a;
    cin>>a;
    vector<string> v = validStrings(a);
    for(auto q : v) {
        cout<<q<<endl;
    } 
}