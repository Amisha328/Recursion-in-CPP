#include<bits/stdc++.h>
using namespace std;
#define eff ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

bool isPal(string str, int start, int end)
{
     // base case
    if(start >= end)
        return true;
        
    return (str[start]==str[end]) && isPal(str, start+1, end-1);    
}

// Explanation:

  // isPal("abcba", 0 , 4)
  // isPal("abcba", 1 , 2)
  // isPal("abcba", 2 , 1) hence, start > end --> Return true

int main(){
    eff;
    string s;
    cin>>s;
    if(isPal(s, 0, s.length()-1))
      cout<<"Palindrome";
    else
      cout<<"Not Palindrome";  
    return 0;
}

//Time complexity is O(n)