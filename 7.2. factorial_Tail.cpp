#include<bits/stdc++.h>
using namespace std;
#define eff ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

// using Tail Recursion
// Inititally we need to pass k=1
int fact(int n,int k)
{
    if(n==0 || n==1)
        return k;

    return fact(n-1,k*n);    
}
int main(){
    eff;
    int t;
    cin>>t;
    cout<<fact(t,1);
    return 0;
}