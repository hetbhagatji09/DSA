#include<queue>
#include<vector>
#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;
};
Node *newNode(int d)
{
    Node *n=new Node();
    n->data=d;

    n->left=NULL;
    n->right=NULL;
    return n;
}

void print(Node *root)
{
    while(root!=NULL)
    {
        cout<<root->data;
        root=root->left;
    }
}
vector<int> levelorder(Node *root)
{
    vector<int>ans;
    queue<Node *>q;
    q.push(root);
    if(root==NULL)
    {
        return ans;
    }
    while(1)
    {
        int size=q.size();
        vector<int>temp;
        if(size==0)
        {
            return ans;
        }

        while (size>0)
        {
            Node *current=q.front();
            q.pop();
            // temp.push_back(current->data);
            if(current->right!=NULL)
            {
                q.push(current->right);
                
            }
            if(current->left!=NULL)
            {
                q.push(current->left);

            }
            
            size--;
        }
       return temp;

    }

}

int main()
{
    Node  *root= newNode(1);
    root->left=newNode(2);
    root->right=newNode(3);
    root->left->left=newNode(4);
    root->left->right=newNode(5);
    root->right->left=newNode(6);
    root->right->left=newNode(7);
    
    vector<vector<int>> vec=levelorder(root);
    for (auto row : vec) 
    {
        for (int value : row) 
        {
            cout << value << " ";
        }
        cout <<endl;
    }
       

     return 0;
}
