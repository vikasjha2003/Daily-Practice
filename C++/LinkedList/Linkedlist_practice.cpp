#include<iostream>
#include<vector>
using namespace std;

class Node {
public : 
    int val;
    Node* next;
    Node (int val) {
        this->val = val;
        next = NULL;
    }
};

Node* createLinkedList(const vector<int>& arr) {
    if (arr.empty()) return NULL;
    Node* head = new Node(arr[0]);
    Node* temp = head;
    for (int i = 1; i < arr.size(); i++) {
        temp->next = new Node(arr[i]);
        temp = temp->next;
    }
    return head;
}

void printLinkedList(Node* head) {
    while (head) {
        cout << head->val << " -> ";
        head = head->next;
    }
    cout << "NULL\n";
}

class Solution { // to write all the codes from leetcode directly
public:

    Node* reverseList(Node* head) {
        Node* prev = nullptr;
        Node* curr = head;

        while (curr) {
            Node* Node = curr->next;
            curr->next = prev;
            prev = curr;
            curr = Node;
        }
        return prev;
    }


};

int main () {
    vector<int> input = {4,5,7,8};
    Node* head = createLinkedList(input);
    // print the old list
    cout << "Original List:\n";
    printLinkedList(head);
    Solution obj;
    head = obj.reverseList(head);
    // print new list
    cout << "After Operation:\n";
    printLinkedList(head);
}