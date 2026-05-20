#include<iostream>
#include<vector>
using namespace std;

int partition(vector<int>&ar,int low,int high)
{
   int pivot=ar[high];
   int i=low-1;
   for(int j=low;j<=high-1;j++)
   {
       if(ar[j]<pivot)
       {
           i++;
           swap(ar[i],ar[j]);
       }
   }
   swap(ar[i+1],ar[high]);
   return i+1;
}
void quickSort(vector<int>&ar,int low,int high)
{
    if(low<high)
    {
        int pi=partition(ar,low,high);
        quickSort(ar,low,pi-1);
        quickSort(ar,pi+1,high);
    }
}
int main()
{
    vector<int>ar={10,7,8,9,1,5};
    int n=ar.size();
    quickSort(ar,0,n-1);
    for(int i=0;i<n;i++)
    {
        cout<<ar[i]<<" ";
    }
    return 0;
}