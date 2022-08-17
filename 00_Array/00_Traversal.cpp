// Array Traversal 

#include <bits/stdc++.h>
using namespace std ;

int setArr (int *Arr, int &n) {
    int x; 
    cout << "Enter the number of elements: ";
    cin >> x ;

    if (x >= n) {
        cout << "Not enough space" << endl;
        return -1;
    }
    for (int i = 0; i < x; ++i)
    {
        cout << "Enter Element " << i + 1 << " : ";
        cin >> Arr[i] ;
    }
    return x ;
}


void traverseArray(int *A, int &x) {
    for (int i = 0; i < x; ++i)
    {
        cout << A[i] << " " ;
    }
    cout << endl;
}

int main () {
    int n ;
    cout << "Enter size of array: " ;
    cin >> n;

    int *Arr = new int[n];

    int x = setArr(Arr, n);
    traverseArray(Arr, x);

    return 0;
}
