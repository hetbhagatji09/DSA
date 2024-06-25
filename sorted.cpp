#include<iostream>
using namespace std;
int ct1;
int ct2;
class node
{
    public:
    
    int data;
    node *next;

    node(){};
    node(int d)
    {
        data=d;
        next=NULL;
    }
};
void insert(node* &head,int val)
{
    
    node *n=new node(val);
    node *temp=head;
     if(head==NULL)
     {
         head=n;
         return;
     }
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=n;
}
void display(node * &head)
{
    node *temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL";


}
void merge(node *&head,node *&foot)
{
    node *temp=head;

    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=foot;
    
}
int count(node *&head)
{
    node *temp=head;
    ct1=0;
    while(temp!=NULL)
    {
        temp=temp->next;
        ct1++;
    }
    return ct1;
}
void sort(node * &head)
{
    node *temp=head;

    while(temp!=NULL)
    {cout<<"hello";
        for(int i=0;i<count(head)-1;i++)
        {
            for(int j=i+1;j<count(head);i++)
            {
                int dupli;
                dupli=temp->data;
                temp->data=temp->next->data;
                temp->next->data=dupli;
            }
        }
        temp=temp->next;
    }
}

int main()
{
    node *head=NULL;
    insert(head,10);
    insert(head,20);
    insert(head,30);

    node *foot=NULL;
    insert(foot,60);
    insert(foot,40);
    insert(foot,50);
    merge(head,foot);
    display(head);
    cout<<endl;
    sort(head);
    display(head);
    
    return 0;
}