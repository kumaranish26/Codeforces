#include<iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node *left;
    Node *right;
    
    Node(int val)
    {
        data=val;
        left=nullptr;
        right=nullptr;
    }
};
int  level(Node *root,int key, int l)
{
    
    if(root==nullptr)
    {
        return -1;
    }
    if(root->data==key)
    {
        return l;
    }
    int llevel=level(root->left,key,l+1);
    
    if(llevel!=-1)
    {
        return llevel;
    }
         return level(root->right,key,l+1);
        
        
    
}
int main()
{
    
    Node *root=new Node(45);
    root->left=new Node(40);
    root->right=new Node(50);
    root->left->left=new Node(30);
    root->left->right=new Node(41);
    root->left->right->right=new Node(42);
    root->left->left->left=new Node(20);
    root->left->left->right=new Node(35);
    root->right->left=new Node(46);
    root->right->right=new Node(60);
    root->right->right->right=new Node(70);
    cout<< level(root,50,1);
}
