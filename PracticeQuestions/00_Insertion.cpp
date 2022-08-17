// WAP to insert element between two consecutive odd number

// Given an array input, insert the average of two consecutive odd number everywhere 
// two odd numbers are consecutive.
// Test Case are created to avoid overflow;

#include <bits/stdc++.h>
using namespace std ;

void insertAtIndex (int *Arr, int &n, int ind, int element) {
    for (int i = n; i > ind; --i)
    {
        Arr[i] = Arr[i-1];
    }
    Arr[ind] = element;
    ++n;
}

void insertAvg(int *Arr, int &n){
    // Your Code goes here 
    
    for (int i = 1; i < n; ++i)
    {
        if(Arr[i] > Arr[i-1] && Arr[i] % 2 == Arr[i-1] % 2 == 1){
            int avg = (Arr[i] + Arr[i-1]) / 2 ;
            insertAtIndex(Arr, n, i, avg);
            ++i;
        }
    }
}

void traverseArr (int *Arr, int &n){
    for (int i = 0; i < n; ++i)
    {
        cout << Arr[i] << " ";
    }
    cout << endl;
}

int main () {
    // int *Arr = new int[100];
    int Arr[100] = {2, 5, 7, 11, 44, 49, 13, 15, 22}, n = 9;

    traverseArr(Arr, n);
    insertAvg(Arr, n);
    traverseArr(Arr, n);

    return 0;
}