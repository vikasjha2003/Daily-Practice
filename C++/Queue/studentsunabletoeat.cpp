// leetcode 1700
#include<iostream>
#include<queue>
using namespace std;
int countStudents(vector<int>& students, vector<int>& sandwiches) {
    queue<int> q;
    for(int i = 0; i<students.size(); i++) {
        q.push(students[i]);
    }
    int count = 0; // for loop counting
    int i = 0; // for sandwiches traversal
    while(q.size()>0 && count!=q.size()) {
        if(q.front()==sandwiches[i]) {
            q.pop();
            i++;
            count = 0;
        } else {
            q.push(q.front());
            q.pop();
            count++;
        }
    }
    return q.size(); 
}
int main () {

}