#include<bits/stdc++.h>
using namespace std;
#define eff ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);


int pow(int x, int n)
{
    if(n == 0)
    return 1;

    return x * pow(x,n-1);
}
signed main(){
    eff;
    int x, n;
    cin>>x>>n;
    cout<<pow(x,n);
    return 0;
}