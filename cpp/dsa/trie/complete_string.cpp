#include<bits/stdc++.h>
using namespace std;

// string completeString(int n, vector<string> &a){ // brute force
//     unordered_set<string> st;

//     for(string &s : a) {
//         st.insert(s);
//     }

//     string res = "";

//     for(string &s : a) {
//         string str = "";
//         bool flag = true;
//         for(char c : s) {
//             str += c;
//             if(st.find(str) == st.end()) {
//                 flag = false;
//                 break;
//             }
//         }

//         if(flag) {
//             if(s.length() > res.length() || (s.length() == res.length() && s < res)) {
//                 res = s;
//             } 
//         }
//     }

//     return res == "" ? "None" : res;    
// }

class Node {
    private:
    Node* links[26] = {nullptr};
    bool flag = false;

    public: 
    bool containsKey(char c) {
        return links[c-'a'] != nullptr;
    }
    void setKey(char c) {
        links[c-'a'] = new Node();
    }
    Node* getKey(char c) {
        return links[c-'a'];
    }
    void setEnd() {
        flag = true;
    }
    bool getEnd() {
        return flag;
    }
};


void insert(string s, Node* root) {
    Node* node = root; 

    for(int i = 0; i<s.length(); i++) {
        if(!node->containsKey(s[i])) {
            node->setKey(s[i]);
        }
        node = node->getKey(s[i]);
    }

    node->setEnd();
}

bool complete (string &s, Node* root) {
    Node* node = root;

    for(int i = 0; i<s.length(); i++) {
        node = node->getKey(s[i]);
        if(!node->getEnd()) return false;
    }

    return true;
}

string completeString(int n, vector<string> &a){
    Node* root = new Node();

    for(string &s : a) {
        insert(s,root);
    }

    string ans = "";

    for(string &s : a) {
        if(complete(s,root)) {
            if(s.length() > ans.length() || (s.length() == ans.length() && s < ans)) {
                ans = s;
            }
        }
    }

    return ans == "" ? "None" : ans;
}


int main () {
    vector<string> arr = {"n", "ni", "nin", "ninj", "ninja", "ninga"};
    cout<<completeString(arr.size(), arr);
}