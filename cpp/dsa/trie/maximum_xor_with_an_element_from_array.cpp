#include<bits/stdc++.h>
using namespace std;

// vector<int> maximizeXor(vector<int>& nums, vector<vector<int>>& queries) { // Brute Force
//     vector<int> ans ;
//     for(int i = 0; i<queries.size(); i++) {
//         int x = queries[i][0];
//         int m = queries[i][1];

//         int res = 0;

//         for(int it : nums) {
//             if(it <= m) {
//                 res = max(res,x ^ it);
//             }
//         }

//         ans.push_back(res);
//     }

//     return ans;
// }

struct Node {
    Node* links[2] = {nullptr};
    bool containsKey(int bit) {
        return links[bit] != nullptr;
    }
    Node* getKey(int bit) {
        return links[bit];
    }
    void setKey(int bit) {
        links[bit] = new Node();
    } 
};

struct Trie {
    Node* root;

    Trie() {
        root = new Node();
    }

    void insert(int num) {
        Node* node = root;

        for(int i = 31; i>=0; i--) {
            int bit = (num >> i) & 1;
            if(!node->containsKey(bit)) {
                node->setKey(bit);
            }
            node = node->getKey(bit);
        }
    }

    int getMax(int x) {
        Node* node = root;

        if(node->getKey(1) == nullptr && node->getKey(0) == nullptr) return -1;

        int curMax = 0;

        for(int i = 31; i>=0; i--) {
            int bit = (x >> i) & 1;
            if(node->containsKey(!bit)) {
                curMax += pow(2,i);
                node = node->getKey(!bit);
            } else {
                node = node->getKey(bit);
            }
        }

        return curMax;
    }
};

vector<int> maximizeXor(vector<int>& nums, vector<vector<int>>& queries) { 
    int n = nums.size();
    int m = queries.size();

    vector<vector<int>> pos (m);

    for(int i = 0;  i<m; i++) {
        pos[i] = {queries[i][0], queries[i][1], i};
    }
    
    sort(nums.begin(),nums.end());
    sort(pos.begin(), pos.end(), [] (vector<int> &v1 , vector<int> &v2) {
        return v1[1] < v2[1];
    });

    Trie* trie = new Trie();

    vector<int> ans(m);

    int j = 0;
    for(int i = 0; i<m; i++) {
        while(j < n && nums[j] <= pos[i][1]) {
            trie->insert(nums[j]);
            j++;
        }
        ans[pos[i][2]] = trie->getMax(pos[i][0]);
    }

    return ans;
}


int main () {
    vector<int> arr1 = {5,2,4,6,6,3};
    vector<vector<int>> arr2 = {{12,4},{8,1},{6,3}};

    vector<int> res = maximizeXor(arr1,arr2);

    for(int i : res) {
        cout<<i<<" ";
    }
}