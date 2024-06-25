#include<iostream>
using namespace std;

struct Tree
{
    int data;
    Tree *left;
    Tree *right;

    void insert(Tree *root,int val)
    {
        char c;
        cout<<"where u insert the tree";
        cin>>c;

        if(c=='l')
        {
            if(root->left==NULL)
            insert(root->left,val);
            else
            
        }
        else
    }
};

int main()
{

    return 0;
}

