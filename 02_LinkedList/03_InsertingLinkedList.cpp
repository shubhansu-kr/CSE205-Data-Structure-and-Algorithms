// Insesrting element in Linked List

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

ListNode *createList()
{
    int n = 0;
    cout << "Enter the Number of Nodes in LL: ";
    cin >> n;

    ListNode *head = nullptr, *prev = nullptr;
    for (int i = 0; i < n; ++i)
    {
        int x;
        cout << "Enter element " << i + 1 << " : ";
        cin >> x;
        ListNode *p = new ListNode(x);

        if (head)
        {
            prev->next = p;
            prev = p;
        }
        else
        {
            head = p;
            prev = head;
        }
    }
    return head;
}

void traverseList(ListNode *head)
{
    ListNode *p = head;
    while (p)
    {
        cout << p->val << " ";
        p = p->next;
    }
    cout << endl;
}

// Inserting element at the start of the list
ListNode *insertElementAtStart(ListNode *head)
{
int element;
    cout << "Enter element to insert at start: ";
    cin >> element;

    ListNode *newNode = new ListNode(element, head);
    head = newNode;
    return head;
}

// Inserting element at the end of the list
ListNode *insertElementAtEnd(ListNode *head)
{
    int element;
    cout << "Enter element to insert at end: ";
    cin >> element;
    ListNode *newNode = new ListNode(element);
    ListNode *p = head;
    if (p == nullptr)
    {
        return newNode;
    }
    while (p->next)
    {
        p = p->next;
    }
    p->next = newNode;
    return head;
}

// Insert element by Node pointer
ListNode *insertByNode(ListNode *head, ListNode *n)
{
    int element;
    cout << "Enter element to insert: ";
    cin >> element;
    ListNode *newNode = new ListNode(element);
    if (head == nullptr)
    {
        cout << "Invalid input" << endl;
        return head;
    }
    ListNode *p = head;
    while (p != n && p)
    {
        p = p->next;
    }
    if (p == nullptr)
    {
        cout << "Invalid Info" << endl;
        return head;
    }
    newNode->next = p->next;
    p->next = newNode;
    return head;
}

ListNode *insertByElement(ListNode *head)
{
    int element;
    cout << "Enter element to insert: ";
    cin >> element;
    // Expecting sorted linkedlist
    ListNode *p = head, *prev = nullptr;
    ListNode *newNode = new ListNode(element);
    if (p == nullptr)
    {
        return newNode;
    }
    while (p && p->val < element) {
        prev = p;
        p = p->next;
    }
    if (prev) {
        newNode->next = prev->next;
        prev->next = newNode;
    }
    else {
        newNode->next = head;
        head = newNode;
    }
    return head;
}

int main()
{
    ListNode *head = createList();
    traverseList(head);

    head = insertElementAtStart(head);
    traverseList(head);
    head = insertElementAtEnd(head);
    traverseList(head);

    head =insertByElement(head);
    traverseList(head);
    
    return 0;
}