#include<bits/stdc++.h>
using namespace std;

// int maxXOR(int n, int m, vector<int> &arr1, vector<int> &arr2) { // brute force
//     int res = 0;
//     for(int i = 0; i<n; i++) {
//         for(int j = 0; j<m; j++) {
//             res = max(res,arr1[i] ^ arr2[j]);
//         }
//     }
//     return res;
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

int maxXOR(int n, int m, vector<int> &arr1, vector<int> &arr2) { 
    Trie* trie = new Trie();

    for(int a : arr1) {
        trie->insert(a);
    }

    int res = 0;

    for(int x : arr2) {
        res = max(res,trie->getMax(x));
    }

    return res;
}

int main () {
    vector<int> arr1 = {6, 6, 0, 6, 8, 5, 6};
    vector<int> arr2 = {1, 7, 1, 7, 8, 0, 2};

    cout<<maxXOR(arr1.size(), arr2.size(),arr1,arr2);
}