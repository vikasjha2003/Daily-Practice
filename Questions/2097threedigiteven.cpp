#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// Pure Brute force approach without using hashmap or sets, can be optimised later.

vector<int> findEvenNumbers(vector<int>& digits) {
    sort(digits.begin(),digits.end());
    vector<int> nums;
    for(int i = 0; i<digits.size(); i++) {
        if(digits[i]==0) continue;
        for(int j = 0; j<digits.size(); j++) {
            if(j==i) continue;
            for(int k = 0; k<digits.size(); k++) {
                if(k==i || k==j) continue;
                int num = digits[i]*100 + digits[j]*10 + digits[k];
                if(nums.size()!=0) {
                    bool flag = true;
                    for(int val : nums) {
                        if (val == num) {
                        flag = false;
                        break;
                        }
                    }
                    if (flag == true) nums.push_back(num);
                } else {
                    nums.push_back(num);
                }
            }
        }
    }
    return nums;
}

int main () {
    vector<int> nums = {2,1,3,0};
    vector<int> v = findEvenNumbers(nums);
    for(int val : v) {
        cout<<val<<endl;
    }
}