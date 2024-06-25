#include<iostream>
using namespace std;

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
         return ;
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
node * reverse(node * head)
{
    node * previous=NULL;
    node *current=head;
    node *nextptr;

    while(current!=NULL)
    {
        nextptr=current->next;
        current->next=previous;

        previous=previous->next;
        current=current->next;
        
    }
    return previous;
}
void reversee(node * &head)
{
    node *temp=head;
    if(temp==NULL)
    {
        return;
    }
    else
    {
        temp=temp->next;
        reversee(temp);
        cout<<temp->data<<" ";
    }
}
int main()
{
    node *head=new node();
     insert(head,1);
     insert(head,2);
     insert(head,3);
    // display(head);
    //node *head1=reverse(head);
    display(head);




    return 0;


}