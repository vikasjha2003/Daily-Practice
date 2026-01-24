#include<iostream>
#include<vector>
using namespace std;
int maxScore(vector<int>& nums, int k) {
    int sum = 0;
    int maxsum = 0;
    int i = 0;
    for(; i<k; i++) {
        sum += nums[i];
    }
    maxsum = max(maxsum,sum);
    for(int j = nums.size()-1;i>=0;i--,j--) {
        sum -= nums[i];
        sum += nums[j];
        maxsum = max(maxsum,sum);
    }
    return maxsum;
}
int main () {
    vector<int> v = {1,2,3,4,5,6,1};
    int k = 3;
    cout<<"The maximum score is -> "<<maxScore(v,k);
}