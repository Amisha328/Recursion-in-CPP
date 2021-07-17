#include<bits/stdc++.h>
using namespace std;
#define eff ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int maxPieces(int n, int a, int b, int c)
{
    if(n==0) return 0;
    if(n<0) return -1;

    int res = max( maxPieces(n-a , a , b , c) , maxPieces(n-b , a , b ,c) , maxPieces(n-c , a , b , c));

    if(res == -1) return -1;

    return res+1;

}

int main(){
    eff;
    int t,a,b,c;
    cin>>t >>a>>b>>c;
    cout<< maxPieces(t,a,b,c);
    return 0;
}
