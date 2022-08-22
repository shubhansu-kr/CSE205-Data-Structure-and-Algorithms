// Find Duplicate: 

#include <bits/stdc++.h>
using namespace std ;

// Solution1: Use Additional array to keep track of elements 
// Explanation: We are given the elements are from 1 to n-1, so if we 
// visit an element which we have not visited before we will mark the 
// array element as 1 and the moment we visit an element which we have 
// visited before, we will return that element since it's only possible in 
// case of duplicacy.

// TC: O(n);
// SC: O(n)

int findDuplicate (vector<int> &arr, int n) {
    vector<int> track(n, 0);
    for(auto &a: arr) {
        if (track[a]) return a;
        else track[a] = 1;
    }
    return -1;
}

// Solution2: We can use the sum of natural number 
// Explanation: Since the range is [1 to N-1] and only one element is duplicated
// just find the sum of arr element and return the abs of sum of range

int findDuplicate1 (vector<int> &arr, int n) {
    int sum = 0;
    for(auto &a: arr) {sum += a;}
    int rangeSum = ((n)*(n-1))/2;
    return abs(sum-rangeSum);    
}

int main () {
    
    return 0;
}