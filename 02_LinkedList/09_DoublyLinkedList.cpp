// Doubly Linked List 

#include <bits/stdc++.h>
using namespace std ;

struct ListNode
{
    int val;
    ListNode *next, *prev;
    ListNode() : val(0), next(nullptr), prev(nullptr) {}
    ListNode(int val) : val(val), next(nullptr), prev(nullptr) {}
    ListNode(int val, ListNode *next, ListNode *prev) : val(val), next(next), prev(prev) {}
};

ListNode * createDLL() {
    int n ;
    cout << "Enter the number of elements: ";
    cin >> n;
    ListNode *head;
    while(n--) {
        int x ;
        cin >> x; 
        ListNode* p = new ListNode(x);

        if (head) {
            p->next = head;
            head->prev = p;
            head = p;
        }
        else {
            head = p;
        }
    }
    return head;
}

void traverseDLL (ListNode * head) {
    ListNode * p = head;
    while(p) {
        cout << p->val << " ";
        p = p->next;
    }
    cout << endl; 
    return;
}

int main () {
    ListNode * head = createDLL();
    traverseDLL(head);
    return 0;
}