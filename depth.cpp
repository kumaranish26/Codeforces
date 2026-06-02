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
int height(Node *root)
{
    if(root==nullptr)
    {
        return -1;
    }

    int lheight=height(root->left);
    int rheight=height(root->right);
    return max(lheight,rheight)+1;
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
    cout<<height(root);
    return 0;
}