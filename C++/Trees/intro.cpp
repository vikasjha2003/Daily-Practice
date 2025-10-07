#include<iostream>
using namespace std;
class node {
    public:
    int val;
    node* rc;
    node* lc;
    node(int val) {
        this->val = val;
        rc = NULL; // left child
        lc = NULL;
    }
};
void display (node* root) {
    if(root == NULL) return; 
    cout<<root->val<<" ";
    display(root->lc);
    display(root->rc);   
}
int sum (node* root) {
    if(root == NULL) return 0;
    int sumi = root->val + sum(root->lc) + sum(root->rc);
    // sumi += sum(root->lc);
    // sumi += sum(root->rc);
    return sumi;
}
int size (node* root) {
    if(root == NULL) return 0;
    int count =  1 + size(root->lc) + size(root->rc);
    // count += size(root->lc);
    // count += size (root->rc);
    return count;
}
int maxi (node* root) {
    if(root == NULL) return INT_MIN;
    int maxim = root->val;
    maxim = max(maxim,maxi(root->lc));
    maxim = max(maxim,maxi(root->rc));
    return maxim;
}
int mini (node*root) {
    if(root == NULL) return INT_MAX;
    int minim = root->val;
    minim = min(minim,mini(root->lc));
    minim = min(minim,mini(root->rc));
    return minim;
}
int level (node* root) {
    if(root == NULL) return 0;
    return 1 + max(level(root->lc), level(root->rc)); 
}
int prod(node* root) {
    if(root ==  NULL) return 1;
    return root->val * prod(root->lc) * prod (root->rc);
}
void displayn(node* root, int level, int n) {
    if(root == NULL) { // in case n is more then tree size
        cout<<"Level does not exist in tree";
        return;
    } else if(level == n) {
        cout<<root->val<<" ";
        return;
    }
    displayn(root->lc,level+1,n);
    displayn(root->rc,level+1,n);
}
void levelorder(node* root) {
    int n = level(root);
    for (int i = 1; i<=n; i++) {
        displayn(root,1,i);
        cout<<endl;
    }
}
int main () {
    // prerequisites - Recursion and linked list
    node * a = new node(1);
    node * b = new node(2);
    node * c = new node(3);
    node * d = new node(4);
    node * e = new node(5);
    node * f = new node(6);
    node * g = new node(7);
    a->lc = b;
    a->rc = c;
    b->lc = d;
    b->rc = e;
    c->lc = f;
    c->rc = g;
    // display(a);
    cout<<"Sum is "<<sum(a)<<endl;
    cout<<"Size is "<<size(a)<<endl;
    cout<<"Max is "<<maxi(a)<<endl;
    cout<<"Number of levels are "<<level(a)<<endl;
    cout<<"Min is "<<mini(a)<<endl;
    cout<<"Product is "<<prod(a)<<endl;
    cout<<"The third level is: "<<endl;
    displayn(a,1,3);
    cout<<endl;
    levelorder(a);
}