#include<iostream>
using namespace std;
class queue {
private:
    int bac;
    int arr[50];
public: 
    queue() {
        bac = -1;
    }
    void push(int val) {
        if(bac == 49) {
            cout<<"Queue is full!"<<endl;
        } else {
            arr[++bac] = val;
        }
    }
    void pop() { // we can use a front variable  that moves towards back for each pop but it will cause overflow faster but time complexity will be O(1);
        if(bac == -1) {
            cout<<"Queue is empty!"<<endl;
        } else {
            for(int i = 0; i<bac; i++) { // using loop will make complexity O(n) but it will reduce chance of overflow, another option can be to initialize the array larger or take input from user about the size of queue that should be made.
                arr[i] = arr[i+1];
            }
            bac--;
        }
    }
    int front () {
        if (bac==-1) cout<<"Queue is empty!"<<endl;
        else return arr[0];
    }
    int back () {
        if (bac==-1) cout<<"Queue is empty!"<<endl;
        else return arr[bac];
    }
    int size () {
        return bac+1;
    }
    bool empty() {
        if (bac==-1) return true;
        else return false;
    }
    // more functions can be added for display and reversal etc.
};
int main () {
    queue q;
    q.push(10);
    q.push(20);
    cout<<q.size()<<endl;
    cout<<q.front()<<endl;
    q.pop();
    cout<<q.front()<<endl;
    cout<<q.size()<<endl;
}