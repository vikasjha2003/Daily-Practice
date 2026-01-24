#include<iostream>
#include<vector>
#include<stack>
using namespace std;
vector<int> maxSlidingWindowB(vector<int>& nums, int k) { // brute force solution
    vector<int> sc;
    for(int i = 0; i<=nums.size()-k; i++) {
        int maxi = INT_MIN;
        for(int j = i; j<i+k; j++) {
            maxi = max(maxi,nums[j]);
        }
        sc.push_back(maxi);
    }
    return sc;
}
vector<int> maxSlidingWindow(vector<int>& nums, int k) { 
    vector<int> sc(nums.size()) ;
    stack<int> st;
    vector<int> res;
    for(int i = nums.size()-1; i>=0; i--) {
        while(st.size()>0 && nums[st.top()]<=nums[i]) {
            st.pop();
        }
        if(st.empty()) sc[i] = nums.size();
        else sc[i] = st.top();
        st.push(i);
    }
    for(int i = 0; i<sc.size()-k+1; i++) {
        int j = i;
        while(sc[j]<k+i) {
            j = sc[j];
        }
        res.push_back(nums[j]);
    }
    return res;
}
int main () {
    vector<int> v = {1, 3, 1, 2, 0, 5};
    vector<int> f = maxSlidingWindow(v,2);
    for(int q : f) {
        cout<<q<<" ";
    } cout<<endl;
}