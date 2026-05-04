#include<iostream>
#include<vector>
#include<queue>
using namespace std;
class treenode {
    public:
    int val;
    treenode* left;
    treenode* right;
    treenode(int val) {
        this->val = val;
        left = right = NULL;
    }
};
treenode* levelorder(vector<int> &v) {
    queue<treenode*> q;
    treenode * root = new treenode(v[0]);
    q.push(root);
    int i = 1;
    while(i<v.size() && !q.empty()) {
        treenode* temp = q.front();
        q.pop();
        if(i<v.size() && v[i]!=-1) {
            temp->left = new treenode(v[i]);
            q.push(temp->left);
        }
        i++;
        if(i<v.size() && v[i]!=-1) {
            temp->right = new treenode(v[i]);
            q.push(temp->right);
        }
        i++;
    }
    return root;
}
void display(treenode* root) {
    if(!root) return;
    cout<<root->val<<" ";
    display(root->left);
    display(root->right);
}
int main () {
    vector<int> v = {1,2,-1,3,-1,4,5,-1,6};
    treenode* a = levelorder(v);
    display(a);
    cout<<endl;
}