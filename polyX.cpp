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
node * mul(node *&head,node *&tail)
{
    node *Final=NULL;
    node *temp1=head;
    node *temp2=tail;
    int res1,res2;
    while(temp1!=NULL)
    {
        while (temp2!=NULL)
        {
            res1=temp1->co*temp2->co;
            res2=temp1->expo+temp2->expo;

            insert(Final,res1,res2);
            temp2=temp2->next;
        }
        temp1=temp1->next;
        temp2=tail;
    }
    
    // node *temp=NULL;
    // Final=NULL;
    // while(Final->next!=NULL)
    // {
        
    //     if(Final->expo==Final->next->expo)
    //     {
    //         Final->co=Final->co+Final->next->co;
    //         temp=Final->next;
    //         Final->next=Final->next->next;
    //         free(temp);            

    //     }
    //     else
    //     {
    //         Final=Final->next;
    //     }
    // }
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
    cout<<endl;

    cout<<"Multiplication is..."<<endl;
    node *Final=mul(head,tail);
    display(Final);

    return 0;
}
