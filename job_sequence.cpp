#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

vector<int> jobSequencing(vector<int>&profit,vector<int>&deadline)
{
    int n=deadline.size();
    int cnt=0;
    int totprofit=0;

    //pairing profit and deadline in together

    vector<pair<int,int>>jobs;
    //int maxDeadline = 0;
    for(int i=0;i<n;i++)
    {
        jobs.push_back({profit[i],deadline[i]});
        //maxDeadline = max(maxDeadline, deadline[i]);
    }

    //sorting the pairs in descending order according to the profit
    sort(jobs.begin(),jobs.end(),greater<pair<int,int>>());

    vector<int> slots(n,0);
    for(int i=0;i<n;i++)
    {
        int start=min(n,jobs[i].second)-1;
        for(int j=start;j>=0;j--)
        {
            if(slots[j]==0)
            {
                slots[j]=1;
                cnt++;
                totprofit+=jobs[i].first;
                break;
            }
        }
    }
    return {cnt, totprofit};
}
int main()
{
   vector<int> deadline = {2, 1, 2, 1, 1};
    vector<int> profit = {100, 19, 27, 25, 15};
    vector<int>ans = jobSequencing(profit,deadline);
    cout<<ans[0]<<" "<<ans[1]<<endl;
    
}
