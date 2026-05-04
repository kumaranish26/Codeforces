#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int>ar={20,7,14,3,18,1,11,5,9,2,16,4};
    int count =0;
    for(int i=0;i<ar.size();i++)
    {
        for(int j=0;j<ar.size()-i-1;j++)
        {

            if(ar[j]>ar[j+1])
            {
                int temp=ar[j];
                ar[j]=ar[j+1];
                ar[j+1]=temp;
                count++;
            }

        }
        break;
    }
    for(int i=0;i<ar.size();i++)
    {
        cout<<ar[i]<<endl;
    }
    cout<<"Total no. of swaps"<< " "<<count <<endl;
}