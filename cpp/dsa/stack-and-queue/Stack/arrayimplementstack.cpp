#include<iostream>
using namespace std;
class stack {
private:
    int arr[10];
    int idx = -1;
public:
    void pop () {
        if(idx == -1) cout<<"Stack Underflow";
        else {
            idx--;
        }
    }
    void push (int x) {
        if(idx == sizeof(arr) - 1) cout<<"Stack Overflow";
        else {
            idx++;
            arr[idx] = x; 
        }
    }
    void top() {
        if(idx == -1) cout<<"Stack Underflow";
        else {
            cout<<arr[idx]<<endl;
        }
    }
    void displayrev() { // bottom to top
        for(int i = 0; i<=idx; i++) {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    void display() { // top to bottom
        for(int i = idx; i>=0; i--) {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    void get(int x) {
        if(x >= sizeof(arr) - 1) cout<<"Stack Overflow";
        else if (x<=-1) cout<<"Stack Underflow";
        else cout<<arr[x]<<endl;
    }
    int size() {
        return idx+1;
    }
};
int main () {
    stack st;
    st.push(5);
    st.push(3);
    st.top();
    st.get(0);
    cout<<st.size()<<endl;
    st.display();
    st.displayrev();    
}
