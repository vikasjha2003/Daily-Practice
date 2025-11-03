#include<iostream>
#include<queue>
using namespace std;
int main () {
    priority_queue<int> pq; // MAX HEAP
    priority_queue<int,vector<int>,greater<int>> aq; // MIN HEAP
    pq.push(10);
    pq.push(8);
    pq.push(9);
    pq.push(5);
    pq.push(7);
    cout<<pq.top()<<endl;
    pq.pop();
    cout<<pq.top()<<endl;
    aq.push(10);
    aq.push(8);
    aq.push(9);
    aq.push(5);
    aq.push(7);
    cout<<aq.top()<<endl;
    aq.pop();
    cout<<aq.top()<<endl;
}