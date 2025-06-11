#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// (MOORE'S ALGO) 
int majority (vector<int> nums) { // this algo is similar to how counting of votes work during an election, if a party has majority then no matter how many votes the opposing party may get in the end the absolute difference of their votes will be in favour of majority party.
    int count = 0; // to count votes
    int ans = nums[0];  // to store majority element
    for(int i = 0; i < nums.size(); i++) {
        if (count==0) {
            ans = nums[i]; // if count == 0 then the majority may change so we update the candidate of majority
        }
        if(nums[i]==ans) { 
            count++; // if vote in favour then +1
        } else { 
            count--; // else -1
        }
    }
    return ans; // returning the majority element
}
int main () {
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    vector<int> v(n);
    cout<<"Enter the vector: ";
    for(int i = 0; i<n; i++) {
        cin>>v[i];
    }
    cout<<"The majority element of the array is: "<<majority(v);    
}