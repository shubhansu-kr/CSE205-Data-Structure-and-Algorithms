// Priority Queue using linkedlist 

#include <bits/stdc++.h>
using namespace std ;

struct ListNode
{
    int val, pri;
    ListNode * next;
    ListNode(): val(0), pri(0), next(nullptr){}
    ListNode(int val, int pri): val(val), pri(pri), next(nullptr){}
    ListNode(int val, int pri, ListNode *next): val(val), pri(pri), next(next){}
};

class PriorityQueue {
    ListNode *head;
public: 
    PriorityQueue():head(nullptr){}

    void pop() {
        if (isEmpty()) return ;
        cout << "Popped" << "\n";
        ListNode *p = head;
        head = head->next;
        delete(p);
    }

    void push(int val, int pri) {
        ListNode *q = new ListNode(val, pri);
        cout << "Push: " << pri << " " << val << "\n";
        if (isEmpty()) {head = q;return;}
        ListNode * p = head, *prev = nullptr;
        while(p && p->pri <= pri) {
            prev = p;
            p = p->next;
        }
        if (prev) {prev->next = q;q->next = p;}
        else {q->next = head;head = q;}
    }

    bool isEmpty() {
        return head == nullptr;
    }

    void traverse() {
        if (isEmpty()) return;
        ListNode *p = head;
        while(p) {
            cout << p->pri << " " << p->val<< "\n";
            p = p->next;
        }
        return;
    }
};


int main () {
    PriorityQueue p1;
    p1.traverse();
    p1.push(443, 9);
    p1.push(365, 1);
    p1.push(543, 2);
    p1.push(431, 3);
    p1.push(451, 4);
    p1.push(432, 5);
    p1.push(421, 6);
    p1.push(545, 2);
    p1.pop();
    p1.traverse();
    return 0;
}