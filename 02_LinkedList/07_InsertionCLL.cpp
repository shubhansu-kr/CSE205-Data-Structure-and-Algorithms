// Insertion 

#include <bits/stdc++.h>
using namespace std ;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int val) : val(val), next(nullptr) {}
    ListNode(int val, ListNode *next) : val(val), next(next) {}
};

ListNode *createCLL()
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    ListNode *head, *tail;
    while (n--)
    {
        int x;
        cin >> x;

        ListNode *p = new ListNode(x, head);
        if (head)
        {
            head = p;
            tail->next = p;
        }
        else
        {
            p->next = p;
            head = p;
            tail = p;
        }
    }
    return head;
}

void traverseCLL(ListNode * head) {
    ListNode *p = head;
    if (!p) return;
    do {
        cout << p->val << " ";
        p = p->next;
    }while (p != head);
    cout << endl;
}

int main () {
    
    ListNode *head = createCLL();
    traverseCLL(head);

    

    return 0;
}