#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int findContentChildren(vector<int>& g, vector<int>& s) {
    sort(g.begin(), g.end());
    sort(s.begin(), s.end());
    int content = 0;
    for(int i = 0, j = 0; i<s.size(); i++) {
        if(j>=g.size()) {
            break;
        } else if (g[j]<=s[i]) content++; 
    }
    return content;
}
int main () {
    vector<int> g = {1,2,3};
    vector<int> s = {1,1};
    cout<<findContentChildren(g,s);
}