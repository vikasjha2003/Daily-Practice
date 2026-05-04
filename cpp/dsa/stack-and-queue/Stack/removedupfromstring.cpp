#include<iostream>
#include<stack>
using namespace std;
int main () {
    string str = "aaabbccedaaffghjj";
    stack<char> st;
    for(int i = 0; i<str.length(); i++) {
        if(st.size()==0) {
            st.push(str[i]);
        } else if(str[i]!=st.top()) {
            st.push(str[i]);
        }
    }
    str.clear();
    str.resize(st.size());
    for(int i = str.length()-1; i>=0; i--) {
        str[i] = st.top();
        st.pop();
    }
    cout<<str;
}