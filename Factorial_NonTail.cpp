#include<bits/stdc++.h>
using namespace std;
#define eff ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int fact(int n)
{
    if(n==0 || n==1)
        return 1;

    return n * fact(n-1);    
}
int main(){
    eff;
    int t;
    cin>>t;
    cout<<fact(t);
    return 0;
}