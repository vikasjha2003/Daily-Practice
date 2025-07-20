#include<iostream>
#include<vector>
#include<stack>
using namespace std;
int getmin(stack<int> &st) { // O(n) time and space
    stack<int> gt;
    int mini = INT_MAX;
    while(!st.empty()) {
        mini = min(mini,st.top());
        gt.push(st.top());
        st.pop();
    }
    while(!gt.empty()) {
        st.push(gt.top());
        gt.pop();
    }
    return mini;
}
// method 2 is hard to show here so just check from leetcode submission, basically we use two stack and we push val in 1 and we push min. val till now in other stack and when min is asked we simply return top of this second stack. 

// O(n) space but O(1) time.

// another method involves vector implementation of stack but it will have O(n) time and O(1) space.

// the ultimate method on leetcode involves only a variable of type int and some basic maths to create key which we use later on to access the element back.
int main () {
    stack<int> st;
    st.push(5);
    st.push(9);
    st.push(6);
    st.push(4);
    st.push(1); // min
    st.push(8);
    st.push(3);
    st.push(7);
    cout<< getmin(st);
}