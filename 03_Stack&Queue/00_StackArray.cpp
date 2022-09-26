// Stack Creation using array

#include <bits/stdc++.h>
using namespace std ;

void sPush(int *Arr, int N, int &top, int &val) {
    if (top == N-1) {
        cout << "Stack Overflow " << endl;
        return;
    }
    Arr[++top] = val; 
    return; 
}

void sPop(int *Arr, int N, int &top) {
    if (top == -1) {
        cout << "Underflow" << endl;
        return;
    }
    --top;
}

int top(int *Arr, int N, int &top) {
    if (top == -1) return top;
    return Arr[top];
}

int main () {
    int N = 100 ;
    int *Arr = new int[N];
    int top = -1; 


    return 0;
}