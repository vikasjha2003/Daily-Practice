#include<iostream> // intro to sets, basic operations
#include<unordered_set> // STL for set
using namespace std;
int main () {
    unordered_set<int> s; // like a box in which we keep filling elements in no particular order.
    s.insert(5);
    s.insert(4);
    s.insert(3);
    s.insert(2);
    s.insert(1);
    s.insert(5);
    s.erase(1);
    if(s.find(1) != s.end()) cout<<"Exist !!"<<endl;
    else cout<<"Doesn't Exist !!"<<endl;
    for(int element : s) { // while elements inserted in random order but displayed in reverse order.
        cout<<element<<" ";
    }
}