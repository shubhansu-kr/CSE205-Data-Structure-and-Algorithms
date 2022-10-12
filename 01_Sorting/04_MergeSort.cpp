// Merge Sort

#include <bits/stdc++.h>
using namespace std ;

void merge(int *Arr, int p, int q, int r){
    // Merge Arr p to q and q+1 to r
    vector<int> l1;
    vector<int> l2;

    for (int i = p; i <= r; i++)
    {
        if (i < q) {l1.emplace_back(Arr[i]);}
        else{l2.emplace_back(Arr[i]);}
    }

    l1.emplace_back(INT_MAX);    
    l2.emplace_back(INT_MAX);    
    
    int i = 0, j = 0;
    for (int k = p; k <= r; ++k)
    {
        if (l1[i] < l2[j]){
            Arr[k] = l1[i++];
        }
        else {
            Arr[k] = l2[j++];
        }
    }
    
}

int main () {
    int Arr[] = {3, 2, 5, 1, 94, 21, 54};

    return 0;
}