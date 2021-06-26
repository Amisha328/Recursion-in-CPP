#include<bits/stdc++.h>
using namespace std;
#define eff ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void fun1(int n)
{
	if(n == 0)
		return;

	cout<<"Recursion"<<endl;

	fun1(n - 1);
}

int main()
{
    eff;
    fun1(2);
    
    return 0;
}