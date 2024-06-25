#include<iostream>
using namespace std;

int n=10;
class queue
{
    int *arr;
    int front;
    int back;

    public :

    queue()
    {
        arr=new int[n];
        front=-1;
        back=-1;
    }
    void enqueue(int d)
    {
        if(back==n-1)
        {
        
            cout<<"queue is overflow";
            return ;
        }
        back++;
        arr[back]=d;
        if(front==-1)
        {
            front++;
        }
        
    }
    void pop()
    {
        if(front==-1 || front>back)
        {
            cout<<"Queue is empty";
            return ;
        }

        front++;
    }
    int peak()
    {
        if(front==-1 || front>back)
        {
            cout<<"Queue is empty";
            return -1;
        }
        
        return arr[front];
    }
    bool empty()
    {
        if(front==-1 || front>back)
        {
            cout<<"Queue is empty";
            return true;
        }
        else{
            return false;
        }

    }
};

int main()
{
    queue q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
     cout<<q.peak()<<endl;
     q.pop();
     cout<<q.peak()<<endl;
    q.pop();
     cout<<q.peak()<<endl;
     q.pop();
     cout<<q.peak()<<endl;
     q.pop();



    return 0;
}