#include<iostream>
#include<unordered_map>
using namespace std;
int main () {
    unordered_map<int,int> m;
    pair<int,int> p1;
    p1.first = 10;
    p1.second = 20;
    m.insert(p1);
    for(auto q : m) {
        cout<<q.first<<" "<<q.second<<endl;
    }
    m[20] = 1;
    m[30] = 1;
    for(auto q : m) {
        cout<<q.first<<" "<<q.second<<endl;
    }
    m.erase(30);
    for(auto q : m) {
        cout<<q.first<<" "<<q.second<<endl;
    }
    cout<<m.size();
}