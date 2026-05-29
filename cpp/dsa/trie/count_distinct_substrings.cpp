#include<bits/stdc++.h>
using namespace std;

// int countDistinctSubstrings(string &s) {
//     unordered_set<string> st;
//     st.insert("");

//     int n = s.length();

//     int cnt = 1;

//     for(int i = 0; i<n; i++) {
//         string str = "";
//         for(int j = i; j<n; j++) {
//             str += s[j];
//             if(st.find(str) == st.end()) {
//                 cnt++;
//                 st.insert(str);
//             }
//         }
//     }

//     return cnt;
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

int insert(string &word, Node* root) {
    Node* node = root;

    for(int i = 0; i<word.length(); i++) {
        if(!node->containsKey(word[i])) {
            node->setKey(word[i]);
        }
        node = node->getKey(word[i]);
    }

    if(node->getEnd()) return 0;
    else {
        node->setEnd();
        return 1;
    }
}


int countDistinctSubstrings(string &s) {
    int n = s.length();
    Node* root = new Node();

    int cnt = 1;

    for(int i = 0; i<n; i++) {
        string str = "";
        for(int j = i; j<n; j++) {
            str += s[j];
            cnt += insert(str,root);
        }
    }    

    return cnt;
}

int main () {
    string s = "sds";
    cout<<countDistinctSubstrings(s);
}