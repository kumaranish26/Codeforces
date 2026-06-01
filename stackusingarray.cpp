//Implementation of stack using array
#include<iostream>
#include<vector>
#include<string>
using namespace std;
class stack
{
    int top;
    int *st;
    int size;
    string s;
    public:
    stack()
    {
         top=-1;
         size=1000;
         st=new int[size];
         s="empty stack";
    }
    void push(int x)
    {
        top+=1;
        st[top]=x;
    }
    int pop()
    {
        if(top==-1)
        {
            return 0;
        }
        else{
            int x=st[top];
            top=top-1;
            return x;
        }
    }
    int Top()
    {
        return st[top];
    }
    int Size()
    {
        return top+1;
    }

};
int main()
{
    stack ob;
    ob.push(6);
    ob.push(3);
    ob.push(7);
    cout<<"Top of stack is before deleting any element "<<ob.Top()<<endl;
    cout<<"Size of stack before deleting any element "<<ob.Size()<<endl;
    cout<<"The element deleted is"<<ob.pop()<<endl;
    cout<<"Size of stack after deleting an element "<<ob.Size()<<endl;
    cout<<"Top of stack after deleting an element "<<ob.Top()<<endl;
    return 0;
}