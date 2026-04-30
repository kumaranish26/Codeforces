#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int fibo(int n,vector<long long>&t)
{
    if(n<=1)
    {
        return n;
    }
    if(t[n]!=-1)
    {
        return t[n];
    }
    else
    {
        t[n]=fibo(n-1,t)+fibo(n-2,t);
    }
    return t[n];
}
int main()
{
    int n;
    cin>>n;
    vector<long long >t(n+1,-1);
    cout<<fibo(n,t);
}