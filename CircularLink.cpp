#include<iostream>
using namespace std;
class Node
{
    public:

    int data;
    Node *next;

    public:
    Node(int d)
    {
        data=d;
        next=NULL;
    }
};
void inserthead(Node *&head,int d)
{
    Node *temp=head;
    Node *n=new Node(d);
    if(head==NULL)
    {
        n->next=n;
        head=n;
        return;
    }
    else
    {
        while(temp->next!=head)
        {
            temp=temp->next;
        }
        temp->next=n;
        n->next=head;
        head=n;
    }
}
void insert(Node *&head,int d)
{
    Node *n=new Node(d);
    Node *temp=head;
    if(head==NULL)
    {
        inserthead(head,d);
        return;
    }
    else
    {
        while(temp->next!=head)
        {
            temp=temp->next;
        }
        temp->next=n;
        n->next=head;
    }
}
void display(Node *&head)
{
    Node *temp=head;
    do
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    } while (temp!=head);
    cout<<"NULL";
}
void deletetail(Node *head)
{
    Node *temp=head;
    while(temp->next->next!=head)
    {
        temp=temp->next;
    }
    temp->next=head;
}
void deletehead(Node *&head)
{
    Node *temp=head;
    while(temp->next!=head)
    {
        temp=temp->next;
    }
    temp->next=head->next;
    head=head->next;
}
int main()
{
    Node *head=NULL;
    insert(head,1);
    insert(head,2);
    insert(head,3);
    insert(head,4);
    insert(head,5);
    inserthead(head,6);
//    deletetail(head);
    deletehead(head);
    display(head);

    return 0;
}
