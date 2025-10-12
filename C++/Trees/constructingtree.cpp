#include<iostream>
#include<vector>
using namespace std;
class treenode {
    private:
    int val;
    treenode* left;
    treenode* right;
    public:
    treenode(int val) {
        this->val = val;
        left = right = NULL;
    }
};

int main () {
    vector<int> v = {1,2,3,4,5,6};
}