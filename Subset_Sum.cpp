// Problem Statement:
// Given an array of non-negative integers, and a value sum, determine if there is a subset of the given set with sum equal to given sum. 

#include<bits/stdc++.h>
using namespace std;
#define eff ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int countSubset(int N, vector<int> &arr, int sum)
{
    if(N == 0)
        return (sum == 0)? 1 : 0;
    
       return countSubset(N-1, arr, sum) || countSubset(N-1,arr,sum-arr[N-1]);
}

signed main(){
    eff;
    vector<int> A = { 3, 34, 4, 12, 5, 2 };
    int B = 9;
    cout<<countSubset(A.size(), A, B); // 1
    return 0;
}

// Time complexity of this solution is O(2^n)

// Note:
// This is a recursive solution. It can be further optimized by using memoization(Dynamic Programming) with time complexity O(sum * n)