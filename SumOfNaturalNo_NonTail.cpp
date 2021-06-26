#include<bits/stdc++.h>
using namespace std;
#define eff ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int sum(int n){
    
    if(n == 0)
      return 0;

    return n + sum(n-1);  
}
int main(){
    eff;
    int t;
    cin>>t;
    cout<<sum(t);
    return 0;
}