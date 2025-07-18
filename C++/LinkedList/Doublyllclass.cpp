#include<iostream>
using namespace std;
class node {
public:
    int val;
    node* next;
    node* prev;
    node (int x) {
        this->val = x;
        next = prev = NULL;
    }
};
class doublyLL {
private:
    node* head;
    node* tail;
    int size;
public:
    doublyLL () {
        head = tail = NULL;
        size = 0;
    }
    void insertatbeg (int x) {
        if(size==0) {
            node *temp = new node(x); 
            head = tail = temp;
        } else {
            node *temp = new node(x);
            temp->next = head;
            head->prev = temp;
            head = temp;
        }
        size++;
    }
    void insertatend (int x) {
        if(size>0) {
            node *temp = new node(x);
            temp->prev = tail;
            tail->next = temp;
            tail = temp;
        } else {
            node *temp = new node(x);
            head = tail = temp;
        }
        size++;
    }
    void insertatidx (int x , int idx) {
        if(idx == 0) insertatbeg(x);
        else if (size == idx) insertatend(x);
        else if (idx < 0 || idx > size) {
            cout<<"Enter a Valid Index"<<endl;;
            return;
        } else {
            node* temp = head;
            node *Node = new node(x);
            for(int i = 0; i<idx-1; i++) {
                temp = temp->next;
            }
            Node->next = temp->next;
            temp->next->prev = Node;
            temp->next = Node;
            Node->prev = temp;
            size++;
        }
    }
    int getelement (int idx) {
        if(idx==0) return head->val;
        else if(idx==size-1) return tail->val;
        else if (idx < 0 || idx >= size) {
            cout<<"Enter a Valid Index"<<endl;;
        } else {
            node* temp = head;
            for(int i = 0; i<idx; i++) {
                temp = temp->next;
            }
            return temp->val;
        }
        return -1;
    }
    void delatbeg () {
        if(size<1) cout<<"Already Empty";
        else if(size==1) {
            head = tail = NULL;
            size--;
        }
        else {
            head->next->prev = NULL;
            head = head->next;
            size--;
        }
    }
    void delatend () {
        if(size<1) cout<<"Already Empty";
        else if(size==1) {
            head = tail = NULL;
            size--;
        }
        else {
            tail->prev->next = NULL;
            tail = tail->prev;
            size--;
        }
    }
    void delatidx (int idx) {
        if(idx==0) delatbeg();
        else if(idx==size-1) delatend();
        else if(idx<0 || idx>=size) {
            cout<<"Index Invalid";
            return;
        }
        else {
            node* temp = head;
            for(int i = 0; i<idx; i++) {
                temp = temp->next;
            }
            temp->next->prev = temp->prev;
            temp->prev->next = temp->next;
            size--;
        }
    }
    void display () {
        node* temp = head;
        while(temp!=NULL) {
            cout<<temp->val<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }
    void displayrev () {
        node* temp = tail;
        while(temp!=NULL) {
            cout<<temp->val<<" ";
            temp = temp->prev;
        }
        cout<<endl;
    }
};
int main () {
    doublyLL* ll = new doublyLL();
    ll->insertatbeg(5);
    ll->insertatbeg(6);
    ll->insertatbeg(7);
    ll->insertatbeg(8);
    ll->display();
    ll->displayrev();
}