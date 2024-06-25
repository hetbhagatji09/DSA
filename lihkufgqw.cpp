#include<iostream>
using namespace std;

class node
{
    public :

    int data;
    node *next;
    

    node(int d)
    {
        data=d;
        next=NULL;
        
    }
    

};
void insert(node * &head,int x)
{
    node *n=new node(x);
    node *temp=head;
    if(head==NULL)
    {
        head=n;
        return;
    }
    
    else
    {
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=n;
        

    }

}
void display(node *& head)
{
    node *temp=head;

    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL";
}
void inserthead(node *&head,int x)
{
    node *temp=head;

    node *n=new node(x);
    head=n;
    n->next=temp;
}
void insertafter(node *&head,int val,int x)
{
    node *n=new node(x);
    node *temp=head;
    while(temp->next->data!=val)
    {
        temp=temp->next;
    }
    n->next=temp->next;
    temp->next=n;

}
void deletehead(node *&head)
{
    node *temp=head;
    head=temp->next;

}
void deletetail(node *&head)
{
    node *temp=head;
    while(temp->next->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=NULL;
}
void deleteafter(node *&head,int val)
{
    
    node *temp=head;
    while(temp->data!=val)
    {
        temp=temp->next;
    }
    temp->next=temp->next->next;
    

}
void deletebefore(node *&head,int val)
{
    
    node *temp=head;
    while(temp->next->next->data!=val)
    {
        temp=temp->next;
    }
    temp->next=temp->next->next;
    

}
node * reverse(node *&head)
{
    
    node *prev=NULL;
    node *current=head;
    node *nextptr;

    while(current!=NULL)
    {
        nextptr=current->next;
        current->next=prev;

        prev=prev->next;
        current=current->next;
        
    }
    return prev; 

}
void solve(node *&head)
{
    if(head==NULL)
    {
        return ;

    }
    cout<<head->data<<endl;
    if(head->next!=NULL)
    {
        solve(head->next->next);
    }
    cout<<head->data;
}



int main()
{
    node *head=NULL;
    insert(head,1);
    insert(head,2);
    insert(head,3);
    insert(head,4);
    insert(head,5);
    insert(head,6);
    solve(head);
    
   // inserthead(head,40);
 //   insertafter(head,20,50);
   // deletehead(head);
   // deletetail(head);
   //deleteafter(head,20);
 //  deletebefore(head,30);
 //node *head1=  reverse(head);

//    display(head);
    

    return 0;
}