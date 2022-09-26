// Queue using array 

#include <bits/stdc++.h>
using namespace std ;

class Queue {
    vector<int> q;
    int f, r, n;
public:
    Queue(int k) {
        vector<int> temp(k, 0);
        q = temp;
        f = -1, r = 0, n = k;
    }
    
    // Add element to the queue
    bool enQueue(int value) {
        if (isFull()) return false;
        if (f == -1) f = 0;
        q[r] = value;
        r = (r + 1)%n;
        return true;
    }
    
    // Remove the first element from queue 
    bool deQueue() {
        if (isEmpty()) return false;
        f = (f + 1)%n;
        if (f == r) f = -1, r = 0;
        return true;
    }
    
    // Return the first element of the queue
    int Front() {
        if (isEmpty()) return -1;
        return q[f];
    }
    
    // Return the last element of the queue
    int Rear() {
        if (isEmpty()) return -1;
        if (r == 0) return q[n-1];
        return q[r-1];
    }
    
    // Tells if queue is empty or not
    bool isEmpty() {
        return f == -1;
    }
    
    // Tells if queue is full or not 
    bool isFull() {
        return (r == f);
    }
};

int main () {



    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}
