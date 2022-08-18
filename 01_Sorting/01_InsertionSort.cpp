// Insertion Sort: Insert element at the correct position 

#include <bits/stdc++.h>
using namespace std ;


// Time Complexity 
// BestCase: O(n) : Array is already sorted in required order.
// Avg Case: O(n^2)
// Worst Case: O(n^2): Array is sorted in inverse order 

void insertionSort (int *Arr, int N) {
    
    for (int i = 1; i < N; ++i)
    {
        int temp = Arr[i], j = i-1;
        while (Arr[j] > temp) {
            Arr[j+1] = Arr[j];
            --j;
        }
        Arr[j+1] = temp;
    }
    
}

void traverse(int *Arr, int N)
{
    for (int i = 0; i < N; ++i)
    {
        cout << Arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int Arr[10] = {3, 5, 21, 5, 43, 8, 56, 3, 2, 6};
    int N = 10;

    traverse(Arr, N);
    insertionSort(Arr, N);
    traverse(Arr, N);

    return 0;
}