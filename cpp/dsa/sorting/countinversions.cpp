#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
// int countinversion (vector<int> v) {
//     // brute force
//     int count = 0;
//     for(int i = 0; i<v.size(); i++) {
//         for(int j = i+1; j<v.size(); j++) {
//             if(v[i]>v[j]) count++;
//         }
//     }
//     return count;
// }

int countinversion (vector<int> &v,vector<int> &w) {
    int a = 0, b = 0;
    int count = 0;
    while(a<v.size() && b<w.size()) {
        if(v[a]>w[b]) {
            count += (v.size()-a);
            b++;
        } else {
            a++;
        }
    }
    return count;
}

void merge(vector<int> arr1, vector<int> arr2, vector<int> &v) {
    int a = 0,b = 0;
    for(int i = 0; i<v.size(); i++) {
        if(a>=arr1.size()) {
            v[i] = arr2[b++];
        } else if(b>=arr2.size()) {
            v[i] = arr1[a++];
        } else if(arr1[a]<=arr2[b]) {
            v[i] = arr1[a++];
        } else {
            v[i] = arr2[b++];
        }
    }
}
// void mergesort (vector<int> & nums) {
//     if (nums.size()==1) return;
//     // spliting the vector into two
//     vector<int> a (nums.size()/2);
//     vector<int> b (nums.size()-nums.size()/2);
//     for(int i = 0; i<nums.size()/2; i++) {
//         a[i] = nums[i];
//     }
//     for(int i = 0; i<nums.size()-nums.size()/2; i++) {
//         b[i] = nums[i+nums.size()/2];
//     }
//     // recursion
//     mergesort(a);
//     mergesort(b);
//     // inversion
//     c += countinversion(a,b);
//     // merge
//     merge(a,b,nums);
//     a.clear();
//     b.clear();
// }

// write a function which does not use global variable

int mergesort(vector<int> &nums) {
    int count = 0;
    if(nums.size()==1) return 0;
    vector<int> a (nums.size()/2);
    vector<int> b (nums.size()-nums.size()/2);
    for(int i = 0; i<nums.size()/2; i++) {
        a[i] = nums[i];
    }
    for(int i = 0; i<nums.size()-nums.size()/2; i++) {
        b[i] = nums[i+nums.size()/2];
    }
    count += mergesort(a);
    count += mergesort(b);
    count += countinversion(a,b);
    merge(a,b,nums);
    return count;
}

int main () {
    vector<int> v = {5,1,3,0,4,2,6};
    cout<<mergesort(v);
}