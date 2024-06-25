#include<iostream>
using namespace std;

class node
{
    public:
    
    int data;
    node *next;
    
    
    node(int d)
    {
        data=d;
        next=NULL;
         
    }
};
void push(node *&top,int val)
{
    node *temp=top;
    node *n=new node(val); 
    if(top==NULL)
    {
        top=n;
        return;
    }
    else
    {
    
        top=n;
        n->next=temp;
        
    }
}
void pop(node *&top)
{
    top=top->next;
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
node * reverse(node *&top)
{
    node *prev=NULL;
    node *current=top;
    node *nextptr;
    while(current!=NULL)
    {
        nextptr=current->next;
        current->next=prev;

        prev=current;
        current=nextptr;

    }

    return prev;
}
void recursivereverse(node *&top)
{
    node *temp=top;
    if(top==NULL)
    {
        return ;
    }
    else{

    while(temp!=NULL)
    {
        recursivereverse(temp->next);
        cout<<temp->data;
        
    }
    }
}

int main()
{
    node *top=NULL;
    push(top,1);
    push(top,2);
    push(top,3);
    push(top,4);
    push(top,5);
    //pop(top);
    cout<<endl;
   // cout<<endl<<"reverse link list"<<endl;
 //   node *e=reverse(top);
    display(top);
   // recursivereverse(top);
    


    return 0;
}