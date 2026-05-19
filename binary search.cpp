#include<iostream>
#include<vector>
using namespace std;
int binsearch(vector<int>&ar,int target)
{
    int l=1; int h=ar.size();
    
    while(l<=h)
    {
        int mid=(l+h)/2;
        if(target==ar[mid])
        {
            return mid;
        }
        
            if(target<ar[mid])
            {
                h=mid-1;
                
            }
            else
            {
                l=mid+1;
            }
        
    }
    return 0;
    
}
int main(){
    vector<int>ar={13,15,17,18,23,26,29,42,45,49,53};
    int a=binsearch(ar,54);
    if(a==0)
    {
        cout<<"Target is not Found"<<endl;
    }
    else
    cout<<"Target is found"<<endl;
    return 0;
}