#include<iostream>
#include<queue>
#include<stack>
#include<algorithm>
using namespace std;
class node {
    public:
    int val;
    node* left;
    node* right;
    node(int val) {
        this->val = val;
        left = right = NULL; 
    }
};

// RECURSIVE

void preorder(node* root, vector<int> &ans) {
    if(!root) return;
    ans.push_back(root->val);
    preorder(root->left,ans);
    preorder(root->right,ans);
}
void inorder(node* root, vector<int> &ans) {
    if(!root) return;
    inorder(root->left,ans);
    ans.push_back(root->val);
    inorder(root->right,ans);
}
void postorder(node* root, vector<int> &ans) {
    if(!root) return;
    postorder(root->left,ans);
    postorder(root->right,ans);
    ans.push_back(root->val);
}
int size(node* root) {
    if(!root) return 0;
    return max(size(root->left),size(root->right)) + 1;
}
void level (node* root, int cur, int n, vector<int> &ans) {
    if(cur == n) {
        ans.push_back(root->val);
        return;
    }
    level(root->left,cur+1,n,ans);
    level(root->right,cur+1,n,ans);
}
void levelorder(node* root, vector<int> &ans) {
    int n = size(root);
    for(int i = 1; i<=n; i++) {
        level(root,1,i,ans);
    }
}

// ITERATIVE

void levelorderit(node* root, vector<int> &ans) {
    queue<node*> qt;
    if(root) qt.push(root);
    while(!qt.empty()) {
        node* temp = qt.front();
        qt.pop();
        ans.push_back(temp->val);
        if(temp->left) qt.push(temp->left);
        if(temp->right) qt.push(temp->right);
    }
}
void preorderit(node* root, vector<int> &ans) {
    stack<node*> st;
    if(root) st.push(root);
    while(!st.empty()) {
        node* temp = st.top();
        st.pop();
        ans.push_back(temp->val);
        if(temp->right) st.push(temp->right);
        if(temp->left) st.push(temp->left);
    }
}
void inorderit(node* root, vector<int> &ans) {
    stack<node*> st;
    node* root1 = root;
    while(!st.empty() || root1) {
        if(root1) {
            st.push(root1);
            root1 = root1->left;
        } else {
            node* temp = st.top();
            st.pop();
            ans.push_back(temp->val);
            root1 = temp->right;
        }
    }
}
void postorderit(node* root, vector<int> &ans) {
    stack<node*> st;
    if(root) st.push(root);
    while(!st.empty()) {
        node* temp = st.top();
        st.pop();
        ans.push_back(temp->val);
        if(temp->left) st.push(temp->left);
        if(temp->right) st.push(temp->right);
    }
    reverse(ans.begin(), ans.end());
}

int main () {
    // tree creation
    node * a = new node(1);
    node * b = new node(2);
    node * c = new node(3);
    node * d = new node(4);
    node * e = new node(5);
    node * f = new node(6);
    node * g = new node(7);
    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;
    // store traversals
    vector<int> display;
    inorderit(a,display);
    for(int i : display) {
        cout<<i<<" ";
    } cout<<endl;
}