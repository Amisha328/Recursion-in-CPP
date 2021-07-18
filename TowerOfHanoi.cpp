#include<bits/stdc++.h>
using namespace std;
#define eff ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long 
#define vi vector<int>

void toh(int i, char A, char B, char C)
{
    if(i==1)
    {
        cout<<"Move disk 1 from "<<A<<" to "<<C<<endl;
        return;
    }
    toh(i-1, A, C, B);
    cout<<"Move disk "<<i<<" from "<<A<<" to "<<C<<endl;
    toh(i-1, B, A, C);
}
int main()
{
    eff;
    int n;
    cin>>n;
    toh(n, 'A', 'B', 'C');
    return 0;
}