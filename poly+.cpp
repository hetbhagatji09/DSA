#include<iostream>
using namespace std;

class node
{
    public:
    
    int co;
    int expo;
    node *next;
    
    
    node(int d,int e)
    {
        co=d;
        expo=e;
        next=NULL;
        
    }
};
void insert(node* &head,int d,int e)
{
    
    node *n=new node(d,e);
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
        cout<<temp->co<<"x"<<temp->expo<<"  ";
        temp=temp->next;
    }
    


}
node * sum(node *&head,node *&tail)
{
    int sum=0;
    node *temp1=head;
    node *temp2=tail;
    node *Final=NULL;
//    cout<<endl<<"the sum of link list"<<endl;
    while(temp1!=NULL && temp2!=NULL)
    {
        sum=temp1->co+temp2->co;
        //cout<<sum<<"x"<<temp1->expo<<"  ";
        insert(Final,sum,temp1->expo);
        temp1=temp1->next;
        temp2=temp2->next;
        sum=0;
    }
    return Final;
}



int main()
{
    node *head=NULL;

    cout<<"first link list is..."<<endl;
    insert(head,2,2);
    insert(head,2,1);
    insert(head,2,0);
    display(head);
    cout<<endl;

    node *tail=NULL;


    cout<<"second link list is..."<<endl;
    insert(tail,3,2);
    insert(tail,3,1);
    insert(tail,3,0);
    display(tail);

    cout<<endl<<"the sum of link list"<<endl;
    node *Final=sum(head,tail);
    display(Final);

    return 0;
}
