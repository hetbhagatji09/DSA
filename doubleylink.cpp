#include<iostream>
using namespace std;

class node
{
    public :
    int data;
    node *next;
    node * prev;

    
    node(int d)
    {
        data=d;
        next=NULL;
        prev=NULL;
    }
};
void inserthead(node * &head,int val)
{
    node *n=new node(50);
    node *temp=head;
    n->next=temp;
    head=n;
    n->prev=NULL;
    
}
void inserttail(node * &head,int val)
{
    node *n=new node(val);
    if(head==NULL)
    {
        head=n;
        return ;
    }
    node *temp=head;


    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=n;
    n->prev=temp;   
    

};
void display(node * &head)
{
    node *temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<endl;
        temp=temp->next;
    }
}
void deletehead(node * &head)
{
    node *temp=head;
    node *temp1=temp;
    temp=temp->next;
    head=temp;
    temp->prev=NULL;
    free(temp1);
}
void deletetail(node * &head)
{
    node *temp=head;

    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    node *temp1=temp;
    temp1=temp->next;
    temp->next=NULL;
    free(temp1);
    


}
void deleteafter(node * &head,int val)
{
    node *temp=head;

    while(temp->next->next->data!=val)
    {
        temp=temp->next;
    }
    temp->next=temp->next->next;
}
int main()
{
    node *head=NULL;
    inserttail(head,10);
    inserttail(head,20);
    inserttail(head,30);
    inserttail(head,40);
    //inserthead(head,50);
    //deletehead(head);
    //deletetail(head);
   // deleteafter(head,30);
    display(head);


    

    return 0;
}