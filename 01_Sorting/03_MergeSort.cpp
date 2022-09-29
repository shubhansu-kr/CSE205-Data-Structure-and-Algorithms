// MergeSort 

#include <bits/stdc++.h>
using namespace std ;

void merge(int *Arr, int p, int q, int r) {
    int n1 = q - p + 1, n2 = r - q;
    int L1[n1+1], L2[n2+1];
    
    L1[n1] = INT_MAX;
    L2[n2] = INT_MAX;

    for (int i = 0; i < n1; ++i)
    {
        L1[i] = Arr[p+i];
    }
    for (int j = 0; j < n2; ++j)
    {
        L2[j] = Arr[q+j+1];
    }
    
    int i =0, j = 0, k = 0;
    for (int k = 0; k <= r; ++k)
    {
        if (L1[i] < L2[j]) {
            Arr[k] = L1[i++];
        }
        else {
            Arr[k] = L2[j++];
        }
    }
}

void mergeSort(int *Arr, int p, int r) {
    if (p >= r) return;
    int q = (p + r) / 2;
    mergeSort(Arr, p, q);
    mergeSort(Arr, q+1, r);
    merge(Arr, p, q, r);
}

int main () {
    int Arr[] = {4, 2, 5, 7, 1, 9};
    mergeSort(Arr, 0, 5);
    for(auto it: Arr){
        cout << it << " ";
    }
    cout << "\n";
    return 0;
}