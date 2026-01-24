#include<iostream>
#include<stack>
using namespace std;
bool isValid(string s) { // can be slightly optimised for aura points.
    stack<char> st;
    for(int i = 0; i<s.length(); i++) {
        if(s[i]=='(' || s[i]=='{' || s[i]=='[') {
            st.push(s[i]);
        }else if(s[i]==')' || s[i]=='}' || s[i]==']') {
            if(st.empty()) return false;
            if(s[i] == ')' && st.top() == '(') {
                st.pop();
            }else if(s[i] == '}' && st.top() == '{') {
                st.pop();
            }else if(s[i] == ']' && st.top() == '[') {
                st.pop();
            } else {
                return false;
            }
        }
    }
    if(st.size() == 0) return true;
    else return false;
}
int main () {
    string s = "(){}[]";
    cout<<isValid(s);
}