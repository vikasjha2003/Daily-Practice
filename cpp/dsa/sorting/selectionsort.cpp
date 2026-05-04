#include<iostream>
#include<vector>
using namespace std;
void selectionsort (vector<int> &v) {
    for(int i = 0; i<v.size(); i++) {
        int mini = i;
        for(int j = i+1; j<v.size(); j++) {
            if(v[j]<v[mini]) {
                mini = j;
            } 
        }
        swap(v[i],v[mini]);
    }
}
void display (vector<int> &v) {
    for(int val : v) { // for each loop (for each element in v)
        cout<<val<<" ";
    } cout<<endl;
}
int main () {
    vector<int> nums = {6,7,2,5,1};
    display(nums);
    selectionsort(nums);
    display(nums);
}