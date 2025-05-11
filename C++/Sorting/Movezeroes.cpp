#include<iostream>
#include<vector>
using namespace std;
// Bubblesort places zero appropriately while maintaining the relative order

void bubblsort(vector<int> &v) {
    for(int i = 0; i<v.size()-1; i++) {
        for(int j = 0; j<v.size()-i-1; j++) {
            if(v[j]==0) {
                swap(v[j], v[j+1]);
            }
        }
    }
}

// O(n) complexity solution
void movezeroes(vector<int> &v) {
    for(int i = 0, j = 0; i<v.size(); i++) {
        if(v[j]!=0) {
            j++;
        } else {
            swap(v[j],v[i]);
        }
    }
}

void display(vector<int> v) {
    for(int val : v) {
        cout<<val<<" ";
    } cout<<endl;
}

int main () {
    vector<int> v = {0,1};
    display(v);
    movezeroes(v);
    display(v);
}