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
public:
    void insert(Node *&root, int d)
    {
        char ch;
        if (root == NULL)
        {
            root = new Node(d);
        }
        else
        {

            cin >> ch;
            if (ch == 'l')
            {
                if (root->left == NULL)
                {
                    root->left = new Node(d);
                }
                else
                {
                    insert(root->left, d);
                }
            }
            else
            {
                if (root->right == NULL)
                {
                    root->right = new Node(d);
                }
                else
                {
                    insert(root->right, d);
                }
            }
        }
    }
    void preorder(Node *root)
    {
        if (root == NULL)
        {
            return;
        }
        cout << root->data;
        preorder(root->left);
        preorder(root->right);
    }
    void LevelOrder(Node *root)
    {
        if(root==NULL)
        {
            return;
        }
        queue<Node *> q;
        q.push(root);
        q.push(NULL);

        while (!q.empty())
        {
            Node *current = q.front();
            q.pop();
            if (current != NULL)
            {
                cout << current->data << " ";
                if (current->left != NULL)
                {
                    q.push(current->left);
                }
                if (current->right != NULL)
                {
                    q.push(current->right);
                }
            }
  
            else if (!q.empty())
            {
                q.push(NULL);
            }
        }
    }
};

int main()
{
    Node *root = NULL;
    Tree t;
    t.insert(root, 0);
    t.insert(root, 1);
    t.insert(root, 2);
    t.insert(root, 3);
    t.insert(root, 4);
    t.insert(root, 5);
    t.insert(root, 6);

    

     t.LevelOrder(root);

    return 0;
}
