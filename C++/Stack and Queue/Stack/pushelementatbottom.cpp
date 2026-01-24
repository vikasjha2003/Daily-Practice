#include<iostream>
#include<stack>
#include<vector>
using namespace std;
int main () {
    stack<int> st;
    for(int i = 0; i<=9; i++) {
        st.push(i);
    }
    stack<int> str;
    while(st.size()>0) { // pushing current stack top to bottom
        cout<<st.top()<<" ";
        str.push(st.top());
        st.pop();
    }
    cout<<endl;
    st.push(10); // insertion at bottom
    while(str.size()>0) { // refilling of the stack
        st.push(str.top());
        str.pop();
    }
    while(st.size()>0) { // printing complete stack again while retaining size
        cout<<st.top()<<" ";
        str.push(st.top());
        st.pop();
    }
    cout<<endl;
    while(str.size()>0) {
        st.push(str.top());
        str.pop();
    }

    // insert at bottom at any given index
    int idx = 5;
    while(st.size()>=5) { 
        str.push(st.top());
        st.pop();
    }
    st.push(77);
    while(str.size()>0) {
        st.push(str.top());
        str.pop();
    }
    while(st.size()>0) { // printing complete stack again while retaining size
        cout<<st.top()<<" ";
        str.push(st.top());
        st.pop();
    }
    cout<<endl;
    while(str.size()>0) {
        st.push(str.top());
        str.pop();
    }
}