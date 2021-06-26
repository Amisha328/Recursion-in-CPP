#include<bits/stdc++.h>
using namespace std;
#define eff ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int sum(int n , int k)
{  
    if(n == 0)
      return k;

    return sum(n-1 , n+k);  
}
int main(){
    eff;
    int t;
    cin>>t;
    cout<<sum(t,1);
    return 0;
}