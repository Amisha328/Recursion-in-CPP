#include<bits/stdc++.h>
using namespace std;
#define eff ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

static void fun1()
{
	cout<<"fun1"<<endl;
}

static void fun2()
{
	cout<<"Before fun1"<<endl;

    // indirect recursion
	fun1();

	cout<<"After fun1"<<endl;
}

int main()
{
    eff;
    cout<<"Before fun2"<<endl;
    
    // indirect recursion call
	fun2();

	cout<<"After fun2"<<endl;

    return 0;
}