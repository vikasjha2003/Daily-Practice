#include<iostream> // exception handling can be implemented
using namespace std;
class node {
public: 
    int val;
    node* next;
    node (int val) {
        this->val = val;
        next = NULL;
    }
};

class queue {
private:
    node* front;
    node* rear;
    int siz; 
public:
    queue() {
        front = rear = NULL;
        siz = 0;
    }
    void push (int a) {
        node * temp = new node(a);
        if(siz==0) {
            front = rear = temp;
        } else {
            rear->next = temp;
            rear = temp;
        }
        siz++;
    }
    void pop() {
        if(siz==0) cout<<"Queue is empty!"<<endl;
        else if (siz==1) {
            front = rear = NULL;
            siz--;
        } else {
            front = front->next;
            siz--;
        }
    }
    int start() {
        if(siz==0) cout<<"Queue is empty!"<<endl;
        else return front->val;
    }
    int back() {
        if(siz==0) cout<<"Queue is empty!"<<endl;
        else return rear->val;
    }
    int size () {
        return siz;
    }
    bool empty() {
        if (siz==0) return 1;
        else return 0;
    }
};

int main () {
    queue q;
    q.push(10);
    q.push(20);
    cout<<q.size()<<endl;
    cout<<q.start()<<endl;
    q.pop();
    cout<<q.start()<<endl;
    cout<<q.size()<<endl;
}