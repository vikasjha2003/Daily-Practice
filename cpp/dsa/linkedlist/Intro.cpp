#include<iostream>
using namespace std;
class Nodes {
public:
    int val;
    Nodes* next;
    Nodes(int a) {
        val = a;
        next = NULL;
    }
};
int main () {
    // Nodes a;
    // a.val = 10;
    // Nodes b;
    // b.val = 20;
    // Nodes c;
    // c.val = 30;
    // Nodes d;
    // d.val = 40;

    // // forming linked list
    // a.next = &b;
    // b.next = &c;
    // c.next = &c;
    // d.next = NULL;

    // forming linked list using constructor

    // Nodes d = Nodes(10,NULL);
    // Nodes c = Nodes(20,&d);
    // Nodes b = Nodes(30,&c);
    // Nodes a = Nodes(40,&b);

    // still not the best method to make since we are having to make in reverse

    // Nodes d(10,NULL);
    // Nodes c(20,&d);
    // Nodes b(30,&c);
    // Nodes a(40,&b);

    // The most common method to make a linked list which we are going to further use is :

    Nodes a(10);
    Nodes b(20);
    Nodes c(30);
    Nodes d(40);

    a.next = &b;
    b.next = &c;
    c.next = &d;

    // cout<<a.val<<" "<<a.next<<endl;
    // cout<<b.val<<" "<<b.next<<endl;
    // cout<<c.val<<" "<<c.next<<endl;
    // cout<<d.val<<" "<<d.next<<endl;

    // using pointer to traverse
    // we can print values of all nodes using just first node. Not commonly used but doable.
    // cout<<a.val<<endl;
    // cout<<(a.next)->val<<endl;
    // cout<<((a.next)->next)->val<<endl;
    // cout<<(((a.next)->next)->next)->val<<endl;

    // loop on ll

    Nodes temp = a;
    // while(temp.next!=NULL) {  // last element print nahi hoga, loop terminate ho jayega null hit karte hi.
    //     cout<<temp.val<<endl;
    //     temp = *(temp.next);
    // }

    // The correct way to run loop.
    while(1) {
        cout<<temp.val<<" ";
        if(temp.next == NULL) break;
        temp = *(temp.next);
    }
}