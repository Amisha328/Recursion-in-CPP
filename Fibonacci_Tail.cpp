#include<bits/stdc++.h>
using namespace std;
#define eff ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int fibo(int n, int a = 0, int b = 1)
{
    if (n == 0)
        return a;
    if (n == 1)
        return b;
    return fibo(n - 1, b, a + b);  

}

int main(){
    eff;
    int t;
    cin>>t;
    for (int i = 0; i < t; i++) 
        cout<<fibo(i,0,1)<<" ";
    return 0;
}

//Time Complexity: O(n)