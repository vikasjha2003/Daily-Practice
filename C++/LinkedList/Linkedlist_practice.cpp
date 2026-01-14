#include<iostream>
#include<vector>
using namespace std;

class ListNode {
public : 
    int val;
    ListNode* next;
    ListNode (int val) {
        this->val = val;
        next = NULL;
    }
};

ListNode* createLinkedList(const vector<int>& arr) {
    if (arr.empty()) return NULL;
    ListNode* head = new ListNode(arr[0]);
    ListNode* temp = head;
    for (int i = 1; i < arr.size(); i++) {
        temp->next = new ListNode(arr[i]);
        temp = temp->next;
    }
    return head;
}

void printLinkedList(ListNode* head) {
    while (head) {
        cout << head->val << " -> ";
        head = head->next;
    }
    cout << "NULL\n";
}

    ListNode* reverseList_iter(ListNode* head) {
        if(!head || !head->next) return head;
        ListNode* temp1 = head -> next;
        ListNode* temp2 = temp1 -> next;
        head -> next = NULL;
        while(temp1) {
            temp1 -> next = head;
            head = temp1;
            temp1 = temp2;
            if(temp1) temp2 = temp1 -> next;
        }
        return head;
    }

    ListNode* reverseList_rec(ListNode* head) {
        if(head == NULL || head -> next == NULL) return head;
        ListNode* temp = reverseList_rec(head->next);
        head -> next -> next = head;
        head -> next = NULL;
        return temp;
    }

    // THE BELOW 3 PROBLEMS CAN BE SOLVED USING SET AS WELL

    bool hasCycle(ListNode *head) {
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
            if(slow == fast) return true;
        }
        return false; 
    }

    ListNode *detectCycle(ListNode *head) {
        ListNode* slow = head;
        ListNode* fast = head;
        bool flag = false;
        while(fast && fast -> next) {
            slow = slow -> next;
            fast = fast -> next -> next;
            if(slow == fast) {
                flag = true;
                break;
            }
        }
        if(!flag) return NULL;
        else {
            while(head != slow) {
                head = head -> next;
                slow = slow -> next;
            }
            return head;
        }
    }

    int lengthOfLoop(ListNode *head) {
        ListNode* slow = head;
        ListNode* fast = head;
        bool flag = false;
        while(fast && fast-> next) {
            slow = slow -> next;
            fast = fast -> next -> next;
            if(slow == fast) {
                flag = true;
                break;
            }
        }
        if(!flag) return 0;
        else {
            while(head != slow) {
                head = head -> next;
                slow = slow -> next;
            }
            int count = 0;
            while(head) {
                head = head -> next;
                count++;
                if(head == slow) return count;
            }
        }
    }

    ListNode* middleNode(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast && fast->next) {
            slow = slow->next;
            fast = fast -> next -> next;
        }
        return slow;
    }

int main () {
    vector<int> input = {4,5,7,8};
    ListNode* head = createLinkedList(input);
    ListNode* res = head;
    
    cout << "Original List:\n";
    printLinkedList(head);


    // head = reverseList_rec(head);
    head = reverseList_iter(head);

    // res = middleNode(head);
    // cout<<res->val;

    cout << "After Operation:\n";
    printLinkedList(head);
}