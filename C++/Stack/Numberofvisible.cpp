#include<iostream> // 1944
#include<stack>
#include<vector>
using namespace std;
vector<int> canSeePersonsCountB(vector<int>& heights) { // brute force
    for(int i = 0; i<heights.size()-1; i++) {
        int visible = 0;
        int max = 0;
        for(int j = i+1; j<heights.size(); j++) {
            if(heights[j]>max) {
                visible++;
                max = heights[j];
            }
            if(max>heights[i]) break;
        }
        heights[i] = visible;
    }
    heights[heights.size()-1] = 0;
    return heights;      
}
vector<int> canSeePersonsCount(vector<int>& heights) {
    vector<int> ngie(heights.size());
    stack<int> st;
    for(int i = heights.size()-1; i>=0; i--) {
        int count = 0;
        while(st.size()>0 && st.top()<=heights[i]) {
            st.pop();
            count++;
        }
        if(st.empty()) ngie[i] = count; // if empty this means all elements after are smaller hence count to count no. of pops
        else ngie[i] = count + 1; // if not empty then no. of pops + 1 for the one greater element which is hiding others i.e top of stack element.
        st.push(heights[i]);
    }
    return ngie;
}
int main () {
    vector<int> v = {5,1,2,3,10};  
    v = canSeePersonsCount(v);
    for(int q : v) {
        cout<<q<<" ";
    } cout<<endl;
}