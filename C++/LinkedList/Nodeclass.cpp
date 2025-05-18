#include<iostream>
using namespace std;
class Node {
public:
    int val;
    Node* next;
    Node (int val) {
        this->val = val;
        this->next = NULL;
    }
};
void display(Node* head) { // bina temp banaye bhi chal sakta hai, head ki value se sirf.
    while(head != NULL) {
        cout<<head->val<<" ";
        head = head->next;
    }
    cout<<endl;
}
int size (Node* head) {
    int n = 0;
    while(head != NULL) {
        head = head->next;
        n++;
    }
    return n;
}
void displayr(Node* head) {
    if(head == NULL) return;
    cout<<head->val<<" ";
    displayr(head->next);
}
int main () {
    Node* a = new Node(10); // head
    Node* b = new Node(20);
    Node* c = new Node (30);
    Node* d = new Node (40); // tail
    a->next = b;
    b->next = c;
    c->next = d;
    // Node *temp = a;
    // while(temp != NULL) {
    //     cout<<temp->val<<" ";
    //     temp = temp->next;
    // }
    cout<<"This is iterative display of linked list: "<<endl;
    display(a);
    cout<<size(a)<<endl;  // the size of linked list;
    cout<<"This is recursive display of linked list: "<<endl;
    displayr(a); // generally used to display reverse linked list, here it is not reverse but it will be used for reverse, for normal display we can use iterative since it is more efficient due to O(1) space complexity compared to O(n) in recursion.
}