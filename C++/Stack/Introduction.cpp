#include<iostream>
#include<stack>
using namespace std;
int main () {
    stack<int> st;
    st.push(5);
    st.push(3);
    cout<<st.top()<<endl;
    st.pop();
    cout<<st.top()<<endl;
    cout<<st.size()<<endl;
    // how to print full stack
    for(int i = 0; i<10; i++) {
        st.push(i);
    }
    // for(int i = 0; i<st.size(); i++) { // can't be used since the size of stack decrease while i increases so only half elements will be printed
    //     cout<<st.top()<<" ";
    //     st.pop();
    // }
    while(st.size()>0) {
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<endl;
    cout<<st.size()<<endl; // this stack gets empty if we use this method so what can we don so that the size remains same.
    for(int i = 0; i<10; i++) {
        st.push(i);
    }
    stack<int> str;
    // top to bottom printing
    while(st.size()>0) {
        cout<<st.top()<<" ";
        str.push(st.top());
        st.pop();
    }
    cout<<endl;
    while(str.size()>0) {
        st.push(str.top());
        str.pop();
    }
    cout<<st.size()<<endl;
    // bottom to top printing
    while(st.size()>0) {
        str.push(st.top());
        st.pop();
    }
    while(str.size()>0) {
        st.push(str.top());
        cout<<str.top()<<" "; // doesn't matter whether we write str or st the answer will be same.
        str.pop();
    }
    cout<<endl;
    cout<<st.size()<<endl;
}