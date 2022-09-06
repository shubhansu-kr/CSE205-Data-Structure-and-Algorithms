// deletion in CLL

#include <bits/stdc++.h>
using namespace std;

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

void traverseCLL(ListNode *head)
{
    ListNode *p = head;
    if (!p)
        return;
    do
    {
        cout << p->val << " ";
        p = p->next;
    } while (p != head);
    cout << endl;
}

// Delete the first node
ListNode *deleteFirst(ListNode *head)
{
    if (!head || head->next == head)
    {
        return nullptr;
    }
    ListNode *p = head;
    while (p->next != head)
    {
        p = p->next;
    }
    p->next = head->next;
    delete (head);
    return p;
}

// Delete an element;
ListNode *deleteElement(ListNode *head)
{
    int x;
    cout << "Enter the element to delete: ";
    cin >> x;

    ListNode *p = head;
    if (!p)
    {
        cout << "List is empty" << endl;
        return nullptr;
    }
    if (p->next == head)
    {
        if (p->val == x)
        {
            delete (head);
            head = nullptr;
        }
        else
        {
            cout << "Element not found" << endl;
        }
        return head;
    }
    while (p->next->val != x)
    {
        p = p->next;
        if (p == head)
            break;
    }
    if (p == head && p->next->val != x)
    {
        cout << "Element not found " << endl;
        return p;
    }
    else
    {
        ListNode *temp = p->next;
        p->next = temp->next;
        delete temp;
        return p;
    }
    return head;
}

int main()
{
    ListNode *head = createCLL();
    traverseCLL(head);

    head = deleteFirst(head);
    traverseCLL(head);

    head = deleteElement(head);
    traverseCLL(head);

    return 0;
}