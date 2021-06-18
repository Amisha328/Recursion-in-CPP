// Converting Non-Tail recursive solution to Tail recursive solution

#include<bits/stdc++.h>
using namespace std;
#define eff ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

// using Tail Recursion
// Inititally we need to pass k=1
void fun(int n,int k)
{
    if(n==0)
        return;
    cout<<k<<" ";
    fun(n-1,k+1);    
}
int main(){
    eff;
    int t;
    cin>>t;
    fun(t,1);
    return 0;
}