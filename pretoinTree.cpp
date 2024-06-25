#include<iostream>
using namespace std;
struct Node
{
    int data;
    Node *left;
    Node *right;

    Node(int d)
    {
        data=d;
        left=NULL;
        right=NULL;
    }
};
int search(int inorder[],int start,int end,int curr)
{
    for(int i=0;i<=end;i++)
    {
        if(inorder[i]=curr)
        {
            return i;
        }
    }
    return -1;
}

Node *buildTree(int preorder[],int inorder[],int start,int end)
{
    static int idx=0;

    if(start>end)
    {
        return NULL;
    }
    int current=preorder[idx];
    idx++;
    Node *node =new Node(current);
    if(start==NULL)
    {
        return node;
    }
    int pos=search(inorder,start,end,current);
    node->left=buildTree(preorder,inorder,start,pos-1);
    node->right=buildTree(preorder,inorder,pos+1,end);
    return node;


}
void inorder(Node *ptr)
{
    if(ptr==NULL)
    {
        return ;
    }
    inorder(ptr->left);
    cout<<ptr->data<<" "; 
    inorder(ptr->right);


}

int main()
{
    int preorder[]={1,2,3,4,5};
    int inorder[]={4,2,1,5,3};
    Node *root=buildTree(inorder,preorder,0,4);
 //   inorder(root);
    return 0;
}
