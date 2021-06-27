#include<bits/stdc++.h>
using namespace std;
#define eff ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int findLength(char* str)
{
    if(*str == '\0')
        return 0;

    return 1 + findLength(str+1);    
}

int main(){
    eff;
    char str[20];
    cin.get(str, 20);
    cout<< findLength(str);
    return 0;
}