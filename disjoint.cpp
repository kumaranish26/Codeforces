#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

bool comp(const vector<int>& a,const vector<int>& b)
{
    return a[1]<b[1];
}
vector<vector<int>> getdisjoint(vector<vector<int>>& ar)
{
    sort(ar.begin(),ar.end(),comp);

    int end=-1;
    vector<vector<int>>ans;

    for(int i=0;i<ar.size();i++)
    {
        if(ar[i][0]>end)
        {
            ans.push_back(ar[i]);
            end=ar[i][1];
        }
    }
    return ans;
}
int main()
{
    vector<vector<int>> ar = {{1, 4}, {2, 3}, {4, 6}, {8, 9}};
    vector<vector<int>> ans = getdisjoint(ar);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i][0] << " " << ans[i][1] << endl;
    }
    return 0;
}