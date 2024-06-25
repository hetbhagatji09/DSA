#include<iostream>
using namespace std;

#define N 5
class Queue
{
    int *arr;
    int back;
    int front;


    public:
    Queue()
    {
        arr=new int[N];
        back=-1;
        front=-1;
    }
    bool isfull()
    {
        if(((back+1)%N)==front)
        {
            return true;
        }
        else
        {
           return  false;
        }
    }
    bool isempty()
    {
        if(back== front)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    void enqueue(int n)
    {
        
        if(isfull())
        {
            cout<<"stack overflow"<<endl;
        }
        else
        {
            back=(back+1)%N;
        }
        arr[back]=n;
            

    }
    void dequeue()
    {
        if(isempty())
        {
            cout<<"stack  empty"<<endl;
        }

        front=(front+1)%N;
    }
    int peak()
    {
        
        if(isempty())
        {
            cout<<"queue is empty";
        }
        int val=arr[front];
        return  val;
    }
    
};
int main()
{
    Queue q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.enqueue(5);
    q.enqueue(6);
    q.enqueue(8);
    q.enqueue(9);
    q.enqueue(10);
    q.enqueue(11);
    cout<<q.peak();


    return 0;
}
