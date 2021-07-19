// Problem statement:
// Josephus problem is a mathematical game. There are n people numbered from 1 to n.People are sitting in a circle and are numbered from 1 to n in clockwise order. 

// Rules:
// 1.Start at the 1st people.
// 2.Count the next k people in the clockwise direction including the people you started at. The counting wraps around the circle and may count some people more than once.
// 3.The last people you counted leaves the circle and loses the game.
// 4.If there is still more than one people in the circle, go back to step 2 starting from the people immediately clockwise of the people who just lost and repeat.
// 5.Else, the last people in the circle wins the game.

#include<bits/stdc++.h>
using namespace std;
#define eff ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int jos(int n, int k)
{
     if(n == 1)
            return 0;
        return (jos(n-1,k)+k)%n;
}
int main()
{
    eff;
    int n,k;
    cin>>n>>k;
    cout<<jos(n,k)+1;
    return 0;
}