#include<bits/stdc++.h>
using namespace std;
#define eff ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void fun(int n)
{
    if(n==0)
        return;
    
    fun(n-1); 
    cout<<n<<" ";   
}
int main(){
    eff;
    int t;
    cin>>t;
    fun(t);
    return 0;
}