#include<bits/stdc++.h>
using namespace std;
#define eff ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

vector<vector<int>> subset;
void subsetPrint(vector<int> &nums,int i,vector<int> &curr)
{
        if(i == nums.size())
        {
           subset.push_back(curr);
           return;
        }
        
        // not including
        subsetPrint(nums,i+1,curr);
        
        //including
        curr.push_back(nums[i]);
        subsetPrint(nums,i+1,curr);
        curr.pop_back();
}

int main()
{
    eff;
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++)
        cin>>nums[i];

    vector<int> empty;
    subsetPrint(nums,0,empty);
    for(auto s:subset)
    {
        for(auto i:s)
            cout<<i;
        
        cout<<" ";
    }

    return 0;
}