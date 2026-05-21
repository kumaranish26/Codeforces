// Program to find the minimum number of coins
// to construct a given amount using greedy approach

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int coin(vector<int>&ar, int target)
{
    int n=ar.size();
    sort(ar.begin(),ar.end());
    int rem=target, count=0;
    for(int i=n-1;i>=0;i--)
    {
       while(rem>ar[i])
       {
        rem=rem-ar[i];
        count++;
       }
    //    if(rem==0)
    //    {
    //     break;
    //    }
    }
    return count;
}
int main()
{
    vector<int>ar={1,2,5,10};
    int target=29;
    int a= coin(ar,target);
    cout<<a<<endl;
}
