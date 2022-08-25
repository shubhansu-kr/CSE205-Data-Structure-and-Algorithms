// Deletion Operation 

#include <bits/stdc++.h>
using namespace std ;

struct ListNode
{
    int val;
    ListNode * next;
    ListNode(): val(0), next(nullptr){}
    ListNode(int val): val(val), next(nullptr){}
    ListNode(int val, ListNode *next): val(val), next(next){}
};

ListNode *createList () {
    int n = 0;
    cout << "Enter the Number of Nodes in LL: ";
    cin >> n ;

    ListNode *head = nullptr, *prev = nullptr;
    for (int i = 0; i < n; ++i)
    {
        int x;
        cout << "Enter element " << i+1<< " : ";
        cin >> x;
        ListNode *p = new ListNode(x);

        if (head) {
            prev->next = p;
            prev = p;
        }
        else {
            head = p;
            prev = head;
        }
    }
    return head;
}


void traverseList(ListNode *head) {
    ListNode *p = head;
    while(p) {
        cout << p->val << " ";
        p = p->next;
    }
    cout << endl;
}

ListNode *deleteFirst(ListNode*head) {
    if (!head) return head;
    ListNode *p = head;
    head = head->next;
    delete(p);
    return head; 
}

ListNode *deleteEnd (ListNode *head) {
    if(!head) return head;
    ListNode *p = head, *prev=nullptr;
    while (p->next) {
        prev = p;
        p = p->next;
    }
    delete(p);
    if (prev) prev->next = nullptr;
    else return prev;
    return head;
}

ListNode *deleteElement(ListNode *head) {
    if (!head) return head;

    int element;
    cout << "Enter Element to delete: " ;
    cin >> element;

    ListNode *p = head, *prev = nullptr;
    while (p && p->val != element) {
        prev = p;
        p = p->next;
    }
    if (p) {
        if (prev) prev->next = p->next;
        else head = head->next;
        delete(p); 
    }
    else cout << "Element not found!" << endl;
    return head;
}

int main () {
    
    ListNode *head = createList();
    traverseList(head);

    head = deleteFirst(head);
    traverseList(head);
    head = deleteEnd(head);
    traverseList(head);
    head = deleteElement(head);
    traverseList(head);

    return 0;
}