#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    //precompute
    int hash[13]={0};
    for(int i=0;i<n;i++)
    {
        hash[ar[i]]+=i;
    }
    int q;
    cin>>q;
    while(q--)
    {
        int number;
        cin>>number;
        //fetch 
        cout<<hash[number]<<endl;
    }

}