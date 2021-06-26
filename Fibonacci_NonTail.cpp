#include<bits/stdc++.h>
using namespace std;
#define eff ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int fibo(int n)
{
    if(n<=1)
      return n;
  
    return fibo(n-1)+fibo(n-2);   

}

int main(){
    eff;
    int t;
    cin>>t;
    for (int i = 0; i < t; i++) 
        cout<<fibo(i)<<" ";
    return 0;
}

//Time Complexity: O(n)