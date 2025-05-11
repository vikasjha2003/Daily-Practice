#include<iostream>
#include<vector>
using namespace std;
// void bubblsort(vector<int> &v) {
//     for(int i = 0; i<v.size()-1; i++) {
//         for(int j = 0; j<v.size()-i-1; j++) {
//             if(v[j]>v[j+1]) {
//                 swap(v[j], v[j+1]);
//             }
//         }
//     }
// }

// Slight optimisation for case when it gets sorted early

void bubblsort(vector<int> &v) {
    for(int i = 0; i<v.size()-1; i++) {
        bool flag = true;
        for(int j = 0; j<v.size()-i-1; j++) {
            if(v[j]>v[j+1]) {
                flag = false;
                swap(v[j], v[j+1]);
            }
        }
        if(flag == true) {
            break;
        }
    }
}

// Even though the complexity remains O(n*n) it reduces number of steps
// The best part aboout bubble sort is that it is stable hence the relative order remains same so it can be used in those cases.

void display(vector<int> v) {
    for(int val : v) {
        cout<<val<<" ";
    }
}

int main () {
    vector<int> v = {5,7,1,4,2};
    bubblsort(v);
    display(v);
}