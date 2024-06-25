#include <iostream>
#include <queue>
using namespace std;

class Node
{
    public:

    int data;
    Node *right;
    Node *left;


    Node(int d)
    {
        data = d;
        right = NULL;
        left = NULL;
    }
};
class Tree
{
    public :
    void insert(Node *&root,int val)
    {
        char c;
        if(root==NULL)
        {
            root=new Node(val);
        }
        cout<<"where u insert";
        cin>>c;
        if(c=='l')
        {
            if(root->left==NULL)
            {
                root->left=new Node(val);
            }
            else
            {
                insert(root->left,val);
            }
        }
        else
        {
            if(root->right==NULL)
            {
                root->right=new Node(val);
            }
            else
            {
                insert(root->right,val);
            }
        }   
    }
    void preorder(Node *&root)
    {
        if(root==NULL)
        {
            return ;
        }
        cout<<root->data;
        preorder(root->left);
        preorder(root->right);
    }
    void Insert(Node *root,Node *New)
    {
        if(New->data<root->data)
        {
            if(root->left==NULL)
            {
                root->left=New;
            }
            else
            {
                Insert(root->left,New);
            }
        }
        if(New->data > root->data)
        {
            if(root->right==NULL)
            {
                root->right=New;
            }
            else
            {
                Insert(root->right,New);
            }
        }
    }
    Node *search(Node *root,int key)
    {
        Node *temp=root;
        while(temp!=NULL)
        {
            if(temp->data==key)
            {
                cout<<key<<"is present";
                return temp;
            }
            if(temp->data > key)
            {
                temp=temp->left;
            }
            if(temp->data<key)
            {
                temp=temp->right;
            }

        }
        return NULL;
    }
};
 int main()
{
    Tree t;
    

    
    Node *root=new Node(0);
    Node *root1=new Node(1);
    Node *root2=new Node(2);
    t.Insert(root,root1);
    t.Insert(root,root2);
 //    t.preorder(root);
    Node *root5=t.search(root,4);

    return 0;
}
