// Tower of hanoi 

#include <bits/stdc++.h>
using namespace std ;

int stepsCount(int n){
    if (n == 1) return 1;
    return 2*stepsCount(n-1) + 1;
}

void moves(int n, char A, char B, char C){
    if (n == 1) {
        cout << A << " -> " << C << "\n";
        return;
    }
    moves(n-1, A, C, B);
    cout << A << " -> " << C << "\n";
    moves(n-1, B, A, C);
}

int main () {
    int n;
    cout << "Enter the number of disks: ";
    cin >> n;

    cout << "Number of steps req: " << stepsCount(n) << "\n";

    // Let the three stack be A, B, C
    cout << "Steps to solve the puzzle: \n";
    moves(n, 'A', 'B', 'C');
    return 0;
}