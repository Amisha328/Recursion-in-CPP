// Printing all Permutations
// Print all Permutations of A String

#include<bits/stdc++.h>
using namespace std;
#define eff ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void permute(string s, int i)
{
    if(i == s.length())
    {
        cout<<s<<endl;
        return;
    }

    for(int j = i; j < s.length(); j++)
    {
        swap(s[i], s[j]);
        permute(s, i+1);
        swap(s[i], s[j]);
    }
}
signed main()
{
    eff;
    int t;
    string s;
    getline(cin,s);
    permute(s, 0);
    return 0;
}