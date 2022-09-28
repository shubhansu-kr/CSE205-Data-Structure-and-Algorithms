// Double ended Queue : Using linked list 

#include <bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode * next;
    ListNode(): val(0), next(nullptr){}
    ListNode(int val): val(val), next(nullptr){}
    ListNode(int val, ListNode *next): val(val), next(next){}
};

class Deque {
    ListNode *head, *tail;
public: 
    Deque():head(nullptr), tail(nullptr){}
    
    bool isEmpty() {
        return head == nullptr;
    }

    void fPush(int val) {
        ListNode *q = new ListNode(val);
        if (isEmpty()) {
            head = tail = q;
            return;
        }
        q->next = head;
        head = q;
        return;
    }

    void fPop() {
        if (isEmpty()) return;
        ListNode *p = head;
        if (head == tail) {
            head = tail = nullptr;
        }
        else {
            head = head->next;
        }
        delete(p);
        return;
    }

    void rPush(int val) {
        ListNode *q = new ListNode(val);
        if (isEmpty()) {
            head = tail = q;
            return;
        }
        tail->next = q;
        tail = q;
        return;
    }

    void rPop() {
        if (isEmpty()) return;
        if (head == tail) {
            head = tail = nullptr;
            return;
        }
        ListNode *p = head;
        while(p->next != tail){
            p = p->next;
        }
        p->next = nullptr;
        delete(tail);
        tail = p;
        return ;
    }
    void traverse() {
        ListNode *p = head;
        while (p) {
            cout << p->val << " " ;
            p = p->next;
        }
        cout << "\n";
        return;
    }
};

int main () {
    
    Deque d1;
    d1.fPush(4);
    d1.fPush(5);
    d1.fPush(3);
    d1.traverse();
    d1.rPush(9);
    d1.rPush(6);
    d1.traverse();
    d1.rPush(4);
    d1.rPush(2);
    d1.traverse();
    return 0;
}