// Creating Linked List 

#include <bits/stdc++.h>
using namespace std ;

// Structure to create node 
// Two Parts: value and pointer
// Three Constructor: Initialise Node according to input 

struct ListNode
{
    int val;
    ListNode * next;
    ListNode(): val(0), next(nullptr){}
    ListNode(int val): val(val), next(nullptr){}
    ListNode(int val, ListNode *next): val(val), next(next){}
};

int main () {
    int n = 0;
    cout << "Enter the Number of Nodes in LL: ";
    cin >> n ;

    ListNode *head = nullptr;
    for (int i = 0; i < n; ++i)
    {
        int x;
        cout << "Enter element " << i+1<< " : ";
        cin >> x;
        ListNode *p = new ListNode(x);

        if (head) {
            head->next = p;
        }
        else {
            head = p;
        }
    }
    
    
    return 0;
}