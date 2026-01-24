#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

// BRUTE FORCE

int subarraysDivByK(vector<int>& nums, int k) {
    int count = 0;
    for(int i = 0; i<nums.size(); i++) {
        int sum = 0;
        for(int j = i; j<nums.size(); j++) {
            sum += nums[j];
            sum %= k;
            if (sum == 0) count++; 
        }
    }
    return count;
}

int subarraysDivByK(vector<int>& nums, int k) {
    unordered_map<int,int> ps;
    int sum = 0;
    int count = 0;
    for(int i = 0; i<nums.size(); i++) {
        sum = (sum + nums[i]) % k;
        if(sum == 0) count++;
        if(ps.find(k-sum) != ps.end()) sum += ps[k-sum];
        ps[sum]++;
    }
    return count;
}
int main () {
    vector<int> v = {4,5,0,-2,-3,1};
    int k = 5;
    cout<< subarraysDivByK(v,k);
}