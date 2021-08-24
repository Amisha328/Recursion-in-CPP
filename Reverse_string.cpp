#include<bits/stdc++.h>
using namespace std;
#define eff ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long 
#define vi vector<int>

 string s1 = "";
void rev(vector<char> &s, int len)
{
        if(len == 0)
        {
            return ;
        }
        s1 = s1 + s[len-1];
       // cout<<s1<<endl;
        rev(s,len-1);     
}

signed main(){
    eff;
    vector<char> s = {'h','e','l','l','o'};
    rev(s,s.size());
    cout<<s1;
    return 0;
}
