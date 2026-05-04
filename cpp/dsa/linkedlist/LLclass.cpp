#include<iostream>
using namespace std;
class Node { // user defined data type
public:
    int val;
    Node* next;
    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};
class LinkedList { // user defined data structure
private:
    Node* head;
    Node* tail;
    int size;
public:
    LinkedList() {
        head = tail = NULL;
        size = 0;
    }
    void InsertatEnd(int val) {
        Node *temp = new Node(val);
        if(size>0) {
            tail->next = temp;
            tail = temp;
        } else {
            head = tail = temp;
        }
        size++;
    }
    void InsertatBegin(int val) {
        Node* temp = new Node(val);
        if(size>0) {
            temp->next = head;
            head = temp;
        } else {
            head = tail = temp;
        }
        size++;
    }
    void Insertatidx(int val,int idx) {
        if(idx==0) {
            InsertatBegin(val);
        }else if (idx == size-1) {
            InsertatEnd(val);
        } else if (idx<0 || idx>size) {
            cout<<"Invalid index!";
        } else {
            Node *t = new Node(val);
            Node* temp = head;
            for(int i = 1; i<idx-1; i++) {
                temp = temp->next;
            }
            t->next = temp->next;
            temp->next = t;
            size++;            
        }
    }
    int Getelementat (int idx) {
        if(idx<0 || idx>=size) cout<<"Invalid index!";
        else if(idx==0) return head->val;
        else if (idx==size-1) return tail->val;
        else {
            Node* temp = head;
            for(int i = 1; i<idx; i++) {
                temp = temp->next;
            }
            return temp->val;
        }
        return -1; 
    }
    void Deleteathead () {
        if(size==0) cout<<"LinkedList already empty";
        else if (size>1) {
            head = head->next;
            size--;
        }
        else {
            head = tail = NULL;
            size--;
        }
    }
    void Deleteattail() {
        if(size==0) cout<<"LinkedList already empty!";
        else if(size==1) {
            head = tail = NULL;
            size--;
        } else {
            Node* temp = head;
            for(int i = 1; i<size-1; i++) {
                temp = temp->next;
            }
            temp->next = NULL;
            tail = temp;
            size--;
        }
    }
    void Deleteatidx(int idx) {
        if(idx<0 || idx>=size) cout<<"Invalid index!";
        else if(idx==0) Deleteathead();
        else if(idx==size-1) Deleteattail();
        else{
            Node* temp = head;
            for(int i = 1; i<idx; i++) {
                temp = temp->next;
            }
            temp->next = temp->next->next;
            size--;
        }
    }
    void display() {
        Node* temp = head;
        while(temp != NULL) {
            cout<<temp->val<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }
    void length() {
        cout<<size;
    }
};
int main () {
    // LinkedList *ll = new LinkedList();  // aise implement nahi karna hai, as a pointer nahi banana hai ll ko, as a data structure banana hai.
    LinkedList ll;
    ll.InsertatEnd(55);
    ll.InsertatEnd(45);
    ll.InsertatEnd(35);
    ll.InsertatEnd(10);
    ll.InsertatBegin(5);
    ll.Insertatidx(65,3);
    ll.display();
    // cout<<ll.Getelementat(4);
    ll.Deleteathead();
    ll.display();
    ll.Deleteattail();
    ll.display();
    ll.Deleteatidx(2);
    ll.display();
}