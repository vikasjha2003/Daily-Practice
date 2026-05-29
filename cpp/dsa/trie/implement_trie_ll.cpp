#include<bits/stdc++.h>
using namespace std;

class Node {
    private:
    Node* links[26] = {nullptr};
    int ce = 0;
    int cp = 0;

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

    void setPrefix() {
        cp++;
    }

    void removePrefix() {
        cp--;
    }

    void setEnd() {
        ce++;
    }

    void removeEnd() {
        ce--;
    }

    int getEnd() {
        return ce;
    }

    int getPrefix() {
        return cp;
    }
};

class Trie {
    private: Node* root;

    public:

    Trie() {
        root = new Node();
    }

    void insert(string word) {
        Node* node = root;

        for(int i = 0; i<word.length(); i++) {
            if(!node->containsKey(word[i])) {
                node->setKey(word[i]);
            }
            node = node->getKey(word[i]);
            node->setPrefix();
        }

        node->setEnd();
    }

    int countWordsEqualTo(string word){
        Node* node = root;

        for(int i = 0; i<word.length(); i++) {
            if(!node->containsKey(word[i])) {
                return 0;
            }
            node = node->getKey(word[i]);
        }

        return node->getEnd();
    }

    int countWordsStartingWith(string word){
        Node* node = root;

        for(int i = 0; i<word.length(); i++) {
            if(!node->containsKey(word[i])) {
                return 0;
            }
            node = node->getKey(word[i]);
        }

        return node->getPrefix();
    }

    void erase(string word){
        Node* node = root;

        for(int i = 0; i<word.length(); i++) {
            node = node->getKey(word[i]);
            node->removePrefix();
        }

        node->removeEnd();
    }
};

int main () {
    Trie* trie = new Trie();
    trie->insert("apple");
    trie->insert("apple");
    cout << "Inserting strings 'apple' twice into Trie" << endl;
    cout << "Count Words Equal to 'apple': ";
    cout << trie->countWordsEqualTo("apple") << endl;
    cout << "Count Words Starting With 'app': ";
    cout << trie->countWordsStartingWith("app") << endl;
    cout << "Erasing word 'apple' from trie" << endl;
    trie->erase("apple");
    cout << "Count Words Equal to 'apple': ";
    cout << trie->countWordsEqualTo("apple") << endl;
    cout << "Count Words Starting With 'app': ";
    cout << trie->countWordsStartingWith("app") << endl;
    cout << "Erasing word 'apple' from trie" << endl;
    trie->erase("apple");
    cout << "Count Words Starting With 'app': ";
    cout << trie->countWordsStartingWith("app") << endl;
    return 0;
}