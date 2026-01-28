#include <bits/stdc++.h>
using namespace std;

class TreeNode {
public:
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int x) {
        val = x;
        left = nullptr;
        right = nullptr;
    }
};

TreeNode* buildTree(const vector<int>& arr) {
    if (arr.empty() || arr[0] == -1) return nullptr;
    TreeNode* root = new TreeNode(arr[0]);
    queue<TreeNode*> q;
    q.push(root);
    int i = 1;
    while (!q.empty() && i < arr.size()) {
        TreeNode* curr = q.front();
        q.pop();
        if (i < arr.size() && arr[i] != -1) {
            curr->left = new TreeNode(arr[i]);
            q.push(curr->left);
        }
        i++;
        if (i < arr.size() && arr[i] != -1) {
            curr->right = new TreeNode(arr[i]);
            q.push(curr->right);
        }
        i++;
    }
    return root;
}

void printTree(TreeNode* root) {
    if (!root) {
        cout << "NULL\n";
        return;
    }
    queue<TreeNode*> q;
    q.push(root);
    while (!q.empty()) {
        TreeNode* curr = q.front();
        q.pop();
        if (curr) {
            cout << curr->val << " ";
            q.push(curr->left);
            q.push(curr->right);
        } else {
            cout << "null ";
        }
    }
    cout << "\n";
}

    int pathl(TreeNode* root,int &maxi) {
        if(root == NULL) return 0;
        int l = pathl(root->left,maxi);
        int r = pathl(root->right,maxi);
        maxi = max(maxi,l+r);
        return max(l,r) +1;
    }

    int sumi(TreeNode* root, int & sum) {
        if(!root) return 0;
        int l = max(0,sumi(root->left,sum));
        int r = max(0,sumi(root->right,sum));
        sum = max(sum,l + r + root->val);
        return root->val + max(l,r);
    }

    int balance(TreeNode* root, bool &flag) {
        if(!root) return 0;
        int l = balance(root->left,flag);
        int r = balance(root->right,flag);
        if(abs(l - r) > 1) flag = false;
        return max (l,r) + 1;
    } 

    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p == NULL && q == NULL) return true;
        if(p == NULL || q == NULL) return false;
        if(p -> val != q -> val) return false;
        return isSameTree(p -> left, q -> left) && isSameTree(p -> right , q -> right);
    }

    // Boundary traversal 

    void leftTraversal(TreeNode* root,vector<int> &v){
        if(root==NULL) return;
        if(root->left==NULL && root->right==NULL) return;
        v.push_back(root->val);
        if(root->left){
            leftTraversal(root->left,v);   
        }else{
            leftTraversal(root->right,v);   
        }
    }
    void leafTraversal(TreeNode* root,vector<int> &v){
        if(root==NULL) return;
        if(root->left==NULL && root->right==NULL){
            v.push_back(root->val);
            return;
        }
        leafTraversal(root->left,v);
        leafTraversal(root->right,v);
    }
    void rightTraversal(TreeNode* root,vector<int> &v){
        if(root==NULL) return;
        if(root->left==NULL && root->right==NULL) return;
        if(root->right){
            rightTraversal(root->right,v);   
        }else{
            rightTraversal(root->left,v);   
        }
        v.push_back(root->val);
    }
    vector<int> boundaryTraversal(TreeNode* root) {
        vector<int> v;
        if(root==NULL) return v;
        v.push_back(root->val);
        if(root->left==NULL && root->right==NULL) return v;
        if(root->left){
            leftTraversal(root->left,v);
        }
        leafTraversal(root,v);
        if(root->right){
            rightTraversal(root->right,v);
        }
        return v;
    }

    vector<int> bottomView(Node *root) {
        map<int,pair<int,int>> mpp;
        queue<pair<Node*,pair<int,int>>> q;
        vector<int> v;
        q.push({root,{0,0}});
        while(!q.empty()) {
            auto it = q.front();
            q.pop();
            if(mpp.find(it.second.first) == mpp.end()) mpp[it.second.first] = {it.first->data,it.second.second};
            else {
                if(mpp[it.second.first].second <= it.second.second) mpp[it.second.first] = {it.first->data,it.second.second};
            }
            if(it.first->left) q.push({it.first->left,{it.second.first - 1, it.second.second +1}});
            if(it.first->right) q.push({it.first->right,{it.second.first + 1, it.second.second +1}});
        }
        for(auto q : mpp) {
            v.push_back(q.second.first);
        }
        return v;
    }

    vector<int> topView(Node *root) {
        map<int,int> mpp;
        queue<pair<Node*,int>> q;
        vector<int> v;
        q.push({root,0});
        while(!q.empty()) {
            auto it = q.front();
            q.pop();
            if(mpp.find(it.second) == mpp.end()) {
                mpp[it.second] = it.first->data;
            }
            if(it.first->left) q.push({it.first->left,it.second - 1});
            if(it.first->right) q.push({it.first->right,it.second + 1});
        }
        for(auto q : mpp) {
            v.push_back(q.second);
        }
        return v;
    }

int main() {
    vector<int> arr = {3, 9, 20, -1, -1, 15, 7};

    TreeNode* root = buildTree(arr);

    cout << "Tree (Level Order): ";
    printTree(root);


    return 0;
}
