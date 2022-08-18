// Bubble Sort: Bubble the largest element to the last index

#include <bits/stdc++.h>
using namespace std;

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

// Time Complexity:
// Best Case: O(n^2)
// Worst Case: O(n^2)
// Avg Case: O(n^2)

void bubbleSort(int *Arr, int N)
{
    // Input: Array, N -> No. of elements in the array
    for (int i = 1; i < N; ++i)
    {
        for (int j = 0; j < N - i; ++j)
        {
            if (Arr[j] > Arr[j + 1])
                swap(Arr[j], Arr[j + 1]);
        }
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
    bubbleSort(Arr, N);
    traverse(Arr, N);

    return 0;
}