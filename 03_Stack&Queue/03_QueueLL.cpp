// Queue using linked list

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

class Queue{
    ListNode *head, *tail;
public: 
    Queue(){
        head = nullptr;
    }

    void pop() {
        if (isEmpty()) return;
        ListNode *p = head;
        head = head->next;
        delete(p);
        if (head) return;
        tail = head;
    }

    void push(int item){
        ListNode *q = new ListNode(item);
        if (isEmpty()) {
            head = tail = q;
            return;
        }
        tail->next = q;
        tail = q;
    }

    bool isEmpty() {
        return head == nullptr;
    }
};

int main () {
    
    return 0;
}