#include<iostream>
#include<stack>
#include<vector>
using namespace std;
int main () {
    stack<int> st;
    for(int i = 1; i<=10; i++) {
        st.push(i*2);
    }
    // we have to reverse the stack in place
    stack<int> str;
    while(st.size()>0) { // printing the current stack while also working on reverse stack.
        cout<<st.top()<<" ";
        str.push(st.top());
        st.pop();
    }
    cout<<endl;
    // now str is reverse of st but itrs not in place reversal.
    stack<int> stak;
    while(str.size()>0) {
        stak.push(str.top());
        str.pop();
    }
    while(stak.size()>0) {
        st.push(stak.top());
        stak.pop();
    }
    // now printing st stack to see if we succeeded
    while(st.size()>0) { // printing the current stack while also working on keep the size same
        cout<<st.top()<<" ";
        str.push(st.top());
        st.pop();
    }
    while(str.size()>0) {
        st.push(str.top());
        str.pop();
    }
    cout<<endl;
    // and we succeeded but it took 2*n space to do this reversal.
    // now usew array
    while(st.size()>0) {
        st.pop(); // making the stack empty
    }
    for(int i = 1; i<=10; i++) {
        st.push(i*3);
    }
    vector<int> v;
    while(st.size()>0) { // printing current stack and working on reversal
        cout<<st.top()<<" ";
        v.push_back(st.top());
        st.pop();
    }
    cout<<endl;
    for(int i = 0; i<v.size(); i++) { // stack reversed
        st.push(v[i]);
    }
    while(st.size()>0) { // current and no need to worry about storing for size since the array retains the old elements, we can just push them again.
        cout<<st.top()<<" ";
        st.pop();
    }
    for(int i = 0; i<v.size(); i++) { // stack reversed
        st.push(v[i]);
    }
    cout<<endl<<st.size()<<endl;
    // stack reversed in O(n) space
}