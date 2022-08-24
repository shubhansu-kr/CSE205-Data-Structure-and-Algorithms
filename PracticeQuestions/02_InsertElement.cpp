// InsertElement

#include <bits/stdc++.h>
using namespace std ;

int digitSum (int x) {
    int sum = 0;
    while(x) {
        sum += x%10;
        x /= 10;
    }
    return sum;
}

void traverseArr(int A[], int N ) {
    for (int i = 0; i < N; ++i)
    {
        cout << A[i] << " " ;
    }
    cout << endl; 
}

int main () {
    int size, N, element; 
    cin >> size; 
    cin >> N;
    int Arr[size];
    for (int i = 0; i < N; ++i)
    {
        cin >> Arr[N];
    }
    cin >> element;

    // find location 
    int ind = digitSum(element);
    while(ind > N) {
        ind = digitSum(ind);
    }
    
    // insert element 
    for (int i = N; i > ind && i > 0; --i)
    {
        Arr[i] = Arr[i-1];
    }
    Arr[ind] = element;

    traverseArr(Arr, N);
    return 0;
}