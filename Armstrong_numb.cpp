// Armstrong Number is a number that is equal to the sum of cubs its digits.
// Example:- 153 = 1^3 +5^3+3^3 = 1+125+27 = 153
//           407 = 4^3+0^3+7^3 = 64+0+343 = 407

#include<bits/stdc++.h>
#include<math.h>
using namespace std;
#define eff ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int isArmstrong(int n)
{
    if(n > 0)
        return(pow(n%10,3)+isArmstrong(n/10));
}
int main(){
    eff;
    int t;
    cin>>t;
    if(isArmstrong(t) == t)
        cout<< "It is an Armstrong Number";
    else
        cout<< "It is not an Armstrong Number";    
    return 0;
}