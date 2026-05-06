#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int knapsack(vector<int>&wt,vector<int>&val,int W,int n)
{
    if(n==0||W==0)
    {
        return 0;
    }
    if(wt[n-1]<=W)
    {
        return max(val[n-1]+knapsack(wt,val,W-wt[n-1],n-1),knapsack(wt,val,W,n-1));
    }
    else if(wt[n-1]>W)
    {
        return knapsack(wt,val,W,n-1);
    }
    return 0;
}
int main()
{
    
    vector<int> wt = {4, 5, 6};
    vector<int>val={1,2,8};
    int n=wt.size();
    int W = 15;
    cout<<knapsack(wt,val,W,n)<<endl;
    
}