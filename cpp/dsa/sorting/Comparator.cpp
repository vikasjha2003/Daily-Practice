#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

bool cmp (pair<int,int> p1, pair<int,int>p2) { // a comparator which sorts pairs based on second element
    if(p1.second < p2.second) return true;
    return false;
}

int main () {
    // vector<pair<int,int>> v = {{1,3},{1,2},{3,2},{2,1}};
    vector<pair<int,int>> v = {{1,2},{0,4},{3,4},{5,7},{8,9},{5,9},{1,5}};

    for(auto q : v) {
        cout<<q.first<<" "<<q.second<<endl;
    }

    sort(v.begin(),v.end(),cmp);
    cout<<endl;
    for(auto q : v) {
        cout<<q.first<<" "<<q.second<<endl;
    }
}