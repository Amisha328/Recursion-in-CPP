#include<bits/stdc++.h>
using namespace std;
#define eff ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int digit_sum (int n){

    if(n<=9)
       return n;
    
    return n%10 + digit_sum(n/10);
    
}

int main(){
    eff;
    int t;
    cin>>t;
    cout<< digit_sum(t);
    return 0;
}

// Time complexity is O(no. of digits in the number)

// Note: Iterative solution is usually better than the recursive solution
//       as recursive solution provides extra overhead 
//       hence, increases the auxillary space required.