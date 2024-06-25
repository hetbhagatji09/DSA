#include<iostream>
using namespace std;

class node
{
    
    public:
    
    int data;
    node *next;
    node *prev;
    
    node(int d)
    {
        data=d;
        next=NULL;
        prev=NULL;
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
    n->prev=temp;
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
void insertbefore(node * &head,int val,int x)
{
    node *n=new node(x);
    node *temp=head;
    while(temp->next->data!=val)
    {
        temp=temp->next;
    }
    n->next=temp->next;
    temp->next=n;
    n->prev=temp;
    temp->next->prev=n;


    
}

void insertafter(node * &head,int val,int x)
{
    node *n=new node(x);
    node *temp=head;
    while(temp->data!=val)
    {
        temp=temp->next;
    }
    n->next=temp->next;
    temp->next=n;
    n->prev=temp;
    temp->next->prev=n;


    
}
void deleteafter(node * &head,int val)
{
    
    node *temp=head;
    while(temp->data!=val)
    {
        temp=temp->next;
    }
    temp->next->next->prev=temp;
    temp->next=temp->next->next;
    

    
}
void deletebefore(node * &head,int val)
{
    
    node *temp=head;
    while(temp->next->next->data!=val)
    {
        temp=temp->next;
    }
    temp->next->next->prev=temp;
    temp->next=temp->next->next;
    

    
}



int main()
{
    node *head=NULL;
    insert(head,10);
    insert(head,20);
 //   insert(head,30);
    insert(head,40);
    insert(head,50);
    insertafter(head,20,30);
 //   insertbefore(head,20,60);
 //   deleteafter(head,30);
    deletebefore(head,30);
    display(head);
    return 0;
}