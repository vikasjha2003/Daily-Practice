#include<iostream> // exception handling can be added, similar to dll
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
class deque {
private:
    node* head;
    node* tail;
    int s;
public:
    deque () {
        head = tail = NULL;
        s = 0;
    }
    void pushfront (int x) {
        if(s==0) {
            node *temp = new node(x); 
            head = tail = temp;
        } else {
            node *temp = new node(x);
            temp->next = head;
            head->prev = temp;
            head = temp;
        }
        s++;
    }
    void pushback (int x) {
        if(s>0) {
            node *temp = new node(x);
            temp->prev = tail;
            tail->next = temp;
            tail = temp;
        } else {
            node *temp = new node(x);
            head = tail = temp;
        }
        s++;
    }
    void popfront () {
        if(s<1) cout<<"Already Empty";
        else if(s==1) {
            head = tail = NULL;
            s--;
        }
        else {
            head->next->prev = NULL;
            head = head->next;
            s--;
        }
    }
    void popback () {
        if(s<1) cout<<"Already Empty";
        else if(s==1) {
            head = tail = NULL;
            s--;
        }
        else {
            tail->prev->next = NULL;
            tail = tail->prev;
            s--;
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
    int size () {
        return s;
    }
    bool empty() {
        if(s==0) return 1;
        else return 0;
    }
    int front () {
        if(s==0) cout<<"Empty"<<endl;
        else return head->val;
    }
    int back () {
        if(s==0) cout<<"Empty"<<endl;
        else return tail->val;
    }
};
int main () {
    deque* dq = new deque();
}