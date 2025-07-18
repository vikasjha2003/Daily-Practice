#include<iostream>
using namespace std;
class node {
public: 
    int val;
    node *next;
    node(int x) {
        val = x;
        next = NULL;
    }
};
class stack {
private:
    node* top; // head
    node* bottom; // tail
    int size;
public:
    stack () {
        top = bottom = NULL;
        size = 0;
    }
    void push (int x) {
        node*temp = new node(x);
        if(size==0) {
            top = bottom = temp; 
        } else {
            temp->next = top;
            top = temp;
        }
        size++;
    }
    void pop () {
        if(size == 0) {
            cout<<"Already Empty";
        } else {
            top = top->next;
            size--;
        }
    }
    int topa() {
        if(size==0) cout<<"Stack is empty!";
        else {
            return top->val;
        }
        return -1;
    }
}; // more functions can be added as per need but these are the basic 3