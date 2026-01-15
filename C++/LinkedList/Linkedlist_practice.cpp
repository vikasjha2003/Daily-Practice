#include<bits/stdc++.h>
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

    bool isPalindrome(ListNode* head) {
        // if(head -> next == NULL) return true;
        // stack<ListNode*> st;
        // ListNode* slow = head;
        // ListNode* fast = head;
        // st.push(slow);
        // while(fast && fast->next) {
        //     slow = slow -> next;
        //     fast = fast -> next -> next;
        //     st.push(slow);
        // }
        // st.pop();
        // if(fast != NULL) slow = slow -> next;
        // while(slow) {
        //     if(st.top() -> val != slow -> val) return false;
        //     slow = slow -> next;
        //     st.pop();
        // }
        // return true;

        if(head -> next == NULL) return true;
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast && fast->next) {
            slow = slow -> next;
            fast = fast -> next -> next;
        }
        if(fast != NULL) slow = slow -> next;
        slow = reverseList_iter(slow);
        while(slow) {
            if(head->val != slow -> val) return false;
            head = head -> next;
            slow = slow -> next;
        }
        return true;
    }

    ListNode* deleteMiddle(ListNode* head) {
        if(!head || !head -> next) return NULL;
        ListNode* slow = head;
        ListNode* fast = head;
        ListNode* lag = NULL;
        while(fast && fast->next) {
            lag = slow;
            slow = slow -> next;
            fast = fast -> next -> next;
        }
        lag -> next = slow -> next;
        delete slow;
        return head;
    }

    ListNode* removeNthFromEnd(ListNode* head, int n) {
        // if(!head || !head -> next) return NULL;
        // ListNode* temp = head;
        // int count = 0;
        // while(temp) {
        //     count++;
        //     temp = temp -> next;
        // }
        // ListNode* dummy = new ListNode(-1);
        // dummy -> next = head;
        // temp = dummy;
        // for(int i = 0; i< count - n; i++) {
        //     temp = temp -> next;
        // }
        // temp -> next = temp -> next -> next;
        // return dummy -> next;

        if(!head || !head -> next) return NULL;
        ListNode* dummy = new ListNode(-1);
        dummy -> next = head;
        ListNode* slow = dummy;
        ListNode* fast = slow;
        int gap = 0;
        while(fast -> next) {
            fast = fast -> next;
            gap++;
            if(gap > n) slow = slow -> next;
        }
        slow -> next = slow -> next -> next;
        return dummy -> next;
    }

    ListNode* oddEvenList(ListNode* head) {
        if(!head || !head->next) return head;
        ListNode* odd = head;
        ListNode* even = head -> next;
        ListNode* store = head -> next;
        while(even && even -> next) {
            odd -> next = even -> next;
            odd = odd -> next;
            even -> next = odd -> next;
            even = even -> next;
        }
        odd -> next = store;
        return head;
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