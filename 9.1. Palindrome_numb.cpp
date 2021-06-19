#include<bits/stdc++.h>
using namespace std;
#define eff ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int isPal(int n, int temp)
{
     // base case
    if (n == 0)
        return temp;
    // stores the reverse of a number
    temp = (temp * 10) + (n % 10);
 
    return isPal(n / 10, temp);
}

int main(){
    eff;
    int t;
    cin>>t;
    int temp = isPal(t,0);
    if(temp == t)
      cout<<"Palindrome";
    else
      cout<<"Not Palindrome";  
    return 0;
}