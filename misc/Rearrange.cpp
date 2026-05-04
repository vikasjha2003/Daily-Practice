#include<iostream>
#include<vector>
using namespace std;
void swa (vector<int> & nums) { // works only for equal number of - and + case
    int ne = 0;
    int po = nums.size() -1;
    while(ne<nums.size() && po > 0) {
        if(nums[ne] < 0) {
            ne += 2;
        } else {
            swap(nums[ne],nums[po]);
            po -= 2;
        }
    }
}
void another(vector<int> & nums) {
    int ne = 0; 
    for(int i = 0; i<nums.size(); i++) {
        if(nums[i] < 0) {
            swap (nums[i],nums[ne]);
            ne++;
        }
    }
    int po = ne;
    ne = 1;
    while(ne < po && po < nums.size() && nums[ne] < 0) {
        swap(nums[ne], nums[po]);
        ne += 2;
        po++;
    }
}
// the not in place solution is done on lc, two of them.
int main () {
    vector<int> nums = {-1,1,-2,-5,2,6,8};
    another(nums);
    // swa(nums);
    for(int q : nums) {
        cout<<q<<" ";
    }
}