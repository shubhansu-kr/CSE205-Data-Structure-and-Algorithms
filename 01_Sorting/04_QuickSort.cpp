// QuickSort

#include <bits/stdc++.h>
using namespace std ;

int partition(int *Arr, int p, int r) {
    int x = Arr[r], i = p-1;
    for (int j = p; j < r; ++j)
    {
        if (Arr[j] <= x) {
            swap(Arr[++i], Arr[j]);
        }
    }
    swap(Arr[++i], Arr[r]);
    return i;
}

void quickSort(int *Arr, int p, int r){
    if (p > r) return;
    int q = partition(Arr, p, r);
    quickSort(Arr, p, q-1);
    quickSort(Arr, q+1, r);
}

int main () {
    int Arr[] = {6, 4, 2, 8, 5, 5};
    quickSort(Arr, 0, 5);
    for(auto &it: Arr) cout << it << " ";
    
    return 0;
}