// Doubly Linked List - Insertion 

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

ListNode * insertAtStart(ListNode *head) {
    int x; 
    cin >> x;
    ListNode *p = new ListNode(x);
    p->next = head;
    if (head) head->prev = p;
    head = p;
    return head;
}

ListNode * insertAtEnd (ListNode *head) {
    int x ;
    cin >> x; 
    ListNode *p = new ListNode (x);
    ListNode *temp = head;
    if (!head) return p;
    while(temp->next) {
        temp = temp->next;
    }
    temp->next = p;
    p->prev = temp;
    return head;
}

ListNode *insertInBetween(ListNode* head) {
    int n ;
    cin >> n;
    if (n==0) return insertAtStart(head);
    int x ;
    cin >> x; 
    ListNode *p = new ListNode(x);
    if (!head) return p;
    ListNode * temp;
    while (n-1) {
        temp = temp->next;
        --n;
    }
    p->next = temp->next;
    temp->next->prev = p;
    temp->next = p;
    p->prev = temp;
    return head; 
}


int main () {
    ListNode * head = createDLL();
    traverseDLL(head);

    head = insertAtStart(head);
    traverseDLL(head);

    return 0;
}