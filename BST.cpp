#include<iostream>
using namespace std;

class Node
{
    public :
    int data;
    Node *left;
    Node *right;

    Node(int v)
    {
        data=v;
        left=NULL;
        right=NULL;
    }
};
Node * insert(Node *&root,int val)
{
    if(root==NULL)
    {
        root=new Node(val);
        return root;
    }
    
    if(root->data >val)
    {
        
           root->left= insert(root->left,val);

        
    }
    else
    {
        root->right=insert(root->right,val);
    }
    return root;
}
void inorder(Node *&root)
{
    if(root==NULL)
    {
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);

}
bool search(Node *root,int key)
{
    if(root==NULL)
    {
        return false;
    }
    if(root->data>key)
    {
        return search(root->left,key);
    }
    else if(root->data==key)
    {
        return true;
    }
    else
    {
        return search(root->right,key);
    }
}
Node * inordersucceser(Node *root)
{
    while(root->left!=NULL)
    {
        root=root->left;
    }
    return root;
}

Node * Delete(Node *root,int val)
{
    if(root->data>val)
    {
        root->left=Delete(root->left,val);
    }
    else if(root->data<val)
    {
        root->right=Delete(root->right,val);
    }
    else
    {
        //case1
        if(root->left!=NULL && root->right!=NULL)
        {
            return root;
        }
        //case2
        if(root->left==NULL)
        {
            return root->right;
        }
        else if(root->right==NULL)
        {
            return root;
        }
        //case3
        Node *IS=inordersucceser(root->right);
        root->data=IS->data;
        Delete(root,val);
        


    }
    return root;
}
void printXtoY(Node *root,int X,int Y)
{
    if(root==NULL)
    {
        return ;
    }
    if(X<= root->data && Y>=root->data)
    {
        printXtoY(root->left,X,Y);
        cout<<root->data<<" ";
        printXtoY(root->right,X,Y);
    }
    else if(root->data>=Y)
    {
        printXtoY(root->left,X,Y);
    }
    else
    {
        printXtoY(root->right,X,Y);
    }

}


int main()
{
    // int v[]={5,1,3,4,2,7};
     Node *root=NULL;

    // for(int i=0;i<6;i++)
    // {
    //     root=insert(root,v[i]);
    // }
    // inorder(root);
     int values[]={8,5,3,1,4,6,10,11,14};
    
     for(int i=0;i<9;i++)
     {
         root=insert(root,values[i]);
     }
     inorder(root);
    // cout<<endl;
    // if(search(root,7))
    // {
    //     cout<<"found";
    // }
    // else
    // {
    //     cout<<"not found";
    // }
   // Delete(root,10);
   cout<<endl;
    printXtoY(root,6,10);
    cout<<endl;
    //inorder(root);    
    return 0;
}
