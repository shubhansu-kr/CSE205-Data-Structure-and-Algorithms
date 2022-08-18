// Selection Sort: Find the min. and place

#include <bits/stdc++.h>
using namespace std ;

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

// Time Complexity 
// BestCase: O(n^2) 
// Avg Case: O(n^2)
// Worst Case: O(n^2)

void selectionSort (int *Arr, int N) {
    
    for (int i = 0; i < N-1; ++i)
    {
        int min = Arr[i], ind = i;
        for (int j = i+1; j < N; ++j)
        {
            if (min > Arr[j]) {
                min = Arr[j];
                ind = j;
            }
        }
        swap(Arr[i], Arr[ind]);
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
    selectionSort(Arr, N);
    traverse(Arr, N);

    return 0;
}