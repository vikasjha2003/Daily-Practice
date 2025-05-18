#include<iostream>
using namespace std;
class Node{
public:
    int val;
    Node* next;
    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};
void display(Node* head) {
    Node* temp = head;
    while(temp!=NULL) {
        cout<<temp->val<<" ";
        temp = temp->next;
    } cout<<endl;
}
void deletee(Node* head, Node* node) {
    while(head->next!=node) {
        head = head->next;
    }
    head->next = head->next->next;
}
int main () {
    Node* A = new Node(20);
    Node* B = new Node(40);
    Node* C = new Node(60);
    Node* D = new Node(80);
    Node* E = new Node(100);
    Node* F = new Node(120);
    A->next = B;
    B->next = C;
    C->next = D;
    D->next = E;
    E->next = F;
    display(A);
    deletee(A,C); // to delete a node when head and the node to be deleted is given.
    display(A);
}