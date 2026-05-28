#include<iostream>
#include<vector>
using namespace std;

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

    Node* get(char c) {
        return links[c-'a'];
    }

    void setEnd() {
        flag = !flag;
    }

    bool getEnd() {
        return flag;
    }
};

class Trie {
    private : Node* root;

    public:

    Trie() {
        root = new Node();
    }

    ~Trie() {
        delete root;
    }

    void insert(string s) {
        Node* node = root; 

        for(int i = 0; i<s.length(); i++) {
            if(!node->containsKey(s[i])) {
                node->setKey(s[i]);
            }
            node = node->get(s[i]);
        }

        node->setEnd();
    }

    bool search(string s) {
        Node* node = root;

        for(int i = 0; i<s.length(); i++) {
            if(!node->containsKey(s[i])) {
                return false;
            }
            node = node->get(s[i]);
        }

        return node->getEnd();
    }

    bool startsWith(string s) {
        Node* node = root;

        for(int i = 0; i<s.length(); i++) {
            if(!node->containsKey(s[i])) {
                return false;
            }
            node = node->get(s[i]);
        }

        return true;
    }
};

int main () {
    Trie* trie = new Trie();
    vector<string> operations = {"Trie", "insert", "search", "search", "startsWith", "insert", "search"};
    vector<vector<string>> arguments = { {}, {"apple"}, {"apple"}, {"app"}, {"app"}, {"app"}, {"app"} };

    vector<string> output;
    for (int i = 0; i < operations.size(); i++) {
        if (operations[i] == "Trie") {
            output.push_back("null");
        } else if (operations[i] == "insert") {
            trie->insert(arguments[i][0]);
            output.push_back("null");
        } else if (operations[i] == "search") {
            bool result = trie->search(arguments[i][0]);
            output.push_back(result ? "true" : "false");
        } else if (operations[i] == "startsWith") {
            bool result = trie->startsWith(arguments[i][0]);
            output.push_back(result ? "true" : "false");
        }
    }

    for (string res : output) {
        cout << res << endl;
    }

    delete trie;
    return 0;
}