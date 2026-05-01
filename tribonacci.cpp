#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int Tribo(int n, vector<int>&t)
{
    if(n<=3)
    {
        if(n==0)
        {
            return 0;

        }
        else if(n==1||n==2)
        {
            return 1;
        }
        else{
            return 2;
        }
    }
    if(t[n]!=-1)
    {
        return t[n];
    }
    else
    {
        t[n]=Tribo(n-1,t)+Tribo(n-2,t)+Tribo(n-3,t);
    }
    return Tribo(n,t);
}
void printTribo(int n)
{

    vector<int>t(n+1,-1);
    for(int i=1;i<=n;i++)
    {
        cout<<Tribo(i,t)<<" ";
    }
}

int main()
{
    int n;
    cin>>n;
    
    cout<<printTribo(n)<<endl;
}