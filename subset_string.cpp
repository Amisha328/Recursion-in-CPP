#include<bits/stdc++.h>
using namespace std;
#define eff ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void subset(string &s, string curr="", int i=0)
{
    if(i == s.length())
    {
        cout<<curr<<"\n";
        return;
    }
   // cout<<"Before first\n";
   // cout<<"curr "<<curr<<" i "<<i<<"\n";

    // not including
    subset(s,curr,i+1);

   // cout<<"After first & Before second\n";
   // cout<<"curr "<<curr<<" i "<<i<<"\n";

    //including
    subset(s,curr+s[i],i+1);

    // cout<<"After second\n";
    // cout<<"curr "<<curr<<" i "<<i<<"\n";
}
int main(){
    eff;
    string s;
    cin>>s;
    subset(s);
    
    return 0;
}