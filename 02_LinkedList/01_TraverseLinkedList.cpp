// Traverse Linked List 

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
}

int main () {
    
    ListNode *head = createList();
    traverseList(head);

    return 0;
}