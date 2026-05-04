#include<iostream>
#include<vector>
#include<stack>
using namespace std;
int largestRectangleAreaB(vector<int>& heights) { // brute force
    int maxi = 0;
    for(int i = 0; i<heights.size(); i++) {
        int mini = heights[i];
        int width = 0;
        for(int j = i; j<heights.size(); j++) {
            mini = min(mini,heights[j]);
            int area = mini*(width+1);
            maxi = max(maxi,area);
            width++;
        }
    }
    return maxi;
}
int largestRectangleArea(vector<int>& heights) {
    vector<int> nse(heights.size());
    stack<int> st;
    for(int i = heights.size()-1;i >= 0; i--) { // for finding next smaller element index
        while(st.size()>0 && heights[st.top()]>=heights[i]) st.pop();
        if(st.empty()) nse[i] = heights.size();
        else nse[i] = st.top(); 
        st.push(i);
    }
    while(st.empty() == 0) { // reset the stack
        st.pop();
    }
    for(int i = 0; i <heights.size(); i++) { // for finding previous smallest element index and directly calculating the width instead of storing the previous smallest element index.
        while(st.size()>0 && heights[st.top()]>=heights[i]) st.pop();
        if(st.empty()) {
            st.push(i);
            continue;
        }
        else nse[i] = nse[i] - st.top() - 1;;
        st.push(i); 
    }
    int maxarea = 0;
    for(int i = 0; i<heights.size(); i++) { // maximum area calculation
        int area = heights[i] * nse[i];
        maxarea = max (area,maxarea);
    }
    return maxarea;
}
int main () {
    vector<int> v = {2,1,2};
    cout<<largestRectangleArea(v);
}