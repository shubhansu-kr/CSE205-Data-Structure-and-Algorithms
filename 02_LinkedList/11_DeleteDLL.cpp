// Doubly Linked List : Deletion 

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

ListNode *deleteFirst(ListNode *head) {
    if (!head) return head;
    ListNode *p = head;
    head = head->next;
    delete(p);
    return head; 
}

ListNode *deleteLast(ListNode* head) {
    if(!head || !head->next) return nullptr;
    ListNode * p = head;
    while(p->next->next) {
        p = p->next;
    }
    ListNode * x = p->next;
    delete(x);
    p->next = nullptr;
    return head;
}

ListNode *deleteElement(ListNode *head) {
    if (!head) return head;
    int x ;
    cin >> x; 
    ListNode *p = head;
}
int main () {
    ListNode * head = createDLL();
    traverseDLL(head);
    return 0;
}