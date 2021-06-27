// letters other than vowels are called consonents.
// Examples of constants are b, c, d, f, g, ..

#include<bits/stdc++.h>
using namespace std;
#define eff ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

bool isConsonent(char ch)
{
    ch = tolower(ch);
    return (!(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u') && (ch>=97 && ch<=122));
}

int countConsonents(string str,int n)
{
    if(n==1)
        return isConsonent(str[0]);

    return countConsonents(str,n-1)+isConsonent(str[n-1]);    
}

int main(){
    eff;
    string str;
    getline(cin,str);
    cout << countConsonents(str,str.length());
    return 0;
}