#include<iostream>
#include<stack>
#include<vector>
using namespace std;
vector<int> nextLargerElementB(vector<int>& arr) { // brute force
    for(int i = 0; i<arr.size()-1; i++) {
        for(int j = i+1; j<arr.size(); j++) {
            if(arr[j]>arr[i]) {
                arr[i] = arr[j]; // modifying directly since won't be needed for future calculations.
                break;
            } else if (j==arr.size()-1 && arr[i]>arr[j]) {
                arr[i] = -1;
            }
        }
    }
    arr[arr.size()-1] = -1;
    return arr;
}
vector<int> nextLargerElement(vector<int>& arr) {
    stack<int> st;
    vector<int> nums(arr.size());
    for(int i = arr.size()-1; i>=0; i--) { // pop->ans->push     
        while(st.size()>0 && st.top()<=arr[i]) {
            st.pop();
        }
        if(st.size() == 0) {
            nums[i] = -1;
        } else {
            nums[i] = st.top();
        }
        st.push(arr[i]);
    }
    return nums;
}
vector<int> pastLargerElement(vector<int>& arr) {
    stack<int> st;
    vector<int> nums(arr.size());
    for(int i = 0; i<arr.size(); i++) { // pop->ans->push     
        while(st.size()>0 && st.top()<=arr[i]) {
            st.pop();
        }
        if(st.size() == 0) {
            nums[i] = -1;
        } else {
            nums[i] = st.top();
        }
        st.push(arr[i]);
    }
    return nums;
}
int main () {
    vector<int> v = {4,5,2,25};
    v = nextLargerElement(v);
    for(auto q : v) {
        cout<<q<<" ";
    } cout<<endl;
    v = {4,5,2,25};
    v = pastLargerElement(v);
    for(auto q : v) {
        cout<<q<<" ";
    } cout<<endl;
}