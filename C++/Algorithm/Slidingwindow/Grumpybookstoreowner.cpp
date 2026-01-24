#include<iostream>
#include<vector>
using namespace std;
int maxSatisfiedB(vector<int>& customers, vector<int>& grumpy, int minutes) { // brute force
    int sum = 0;
    for(int i = 0; i<customers.size(); i++) {
        if(grumpy[i] == 0) sum += customers[i];
    }
    int maxsum = sum;
    for(int i = 0; i<customers.size() - minutes + 1; i++) {
        int cursum = sum;
        for(int j = i; j< i + minutes; j++) {
            if(grumpy[j] == 1) cursum += customers[j];
        }
        maxsum = max(maxsum,cursum);
    }
    return maxsum;
}
int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) { 
    int sum = 0;
    for(int i = 0; i<customers.size(); i++) { // merged the sum calculation and inital window sum.
        if(i<minutes) sum += customers[i];
        else if(grumpy[i] == 0) sum += customers[i];
    }
    int maxsum = sum;
    int end = 0; // we cand do direct calculation of head but why take headache when we can just use a pointer to mark the end.
    for(int i = minutes; i<customers.size(); i++) {
        if(grumpy[i] == 1) sum += customers[i];
        if(grumpy[end] == 1) sum -= customers[end];
        maxsum = max(sum,maxsum);
        end++; 
    }
    return maxsum;
}
int main () {
    vector<int> v = {1,0,1,2,1,1,7,5};
    vector<int> c = {0,1,0,1,0,1,0,1};
    int k = 3;
    cout<<maxSatisfied(v,c,3);
}