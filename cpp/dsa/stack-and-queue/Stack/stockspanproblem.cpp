#include<iostream>
#include<stack>
#include<vector>
using namespace std;
vector<int> calculateSpanB(vector<int>& arr) { // brute force
    vector<int> nums(arr.size());
    for(int i = 0; i<arr.size(); i++) {
        int count = 0;
        for(int j = i; j>=0; j--) {
            if(arr[j]<=arr[i]) count++;
            else {
                break;
            }
        }
        nums[i] = count;
    }
    return nums;   
}
vector<int> calculateSpan(vector<int>& arr) { // optimised O(n)
    stack<int> st;
    vector<int> v(arr.size());
    for(int i = 0; i<arr.size(); i++) {
        while(st.size()>0 && arr[st.top()]<=arr[i]) st.pop();
        if(st.empty()) v[i] = i+1;
        else {
            v[i] = i - st.top();
        }
        st.push(i);
    }
    return v;
}
int main () {
    vector<int> v = {100, 80, 60, 70, 60, 75, 85};
    v = calculateSpan(v);
    for(int q : v) {
        cout<<q<<" ";
    } cout<<endl;
}