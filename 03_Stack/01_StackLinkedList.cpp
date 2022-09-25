// Stack using linked list 

#include <bits/stdc++.h>
using namespace std ;

struct ListNode {
    int val;
    ListNode * next; 
    ListNode():val(0),next(nullptr){}
    ListNode(int val):val(val),next(nullptr){}
    ListNode(int val, ListNode* next):val(val),next(next){}    
};

void sPush(ListNode *head, int val) {
    ListNode *p = new  ListNode(val, head);
    head = p;
}

int sPop(ListNode * head) {
    if (!head) return -1;
    ListNode *temp = head;
    head = head->next;
    int x = temp->val;
    delete(temp);
    return x; 
}

int main () {
    ListNode *s ;
    sPush(s, 4);
    int ele = sPop(s);
    return 0;
}