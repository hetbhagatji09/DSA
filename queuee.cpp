#include<iostream>

using namespace std;
int N=5;
class queue
{
    int *arr;
    int front;
    int back;

    public :

    queue()
    {
        arr=new int[N];
        front=back=-1;
    }
    void push(int d)
    {
        if(back==N-1)
        {
            cout<<"Q overflow";
        }
        else
        {
            back++;
            arr[back]=d;
        }
        if(front==-1)
        {
            front++;
        }
    }
    void pop()
    {
        if(back==-1)
        {
            cout<<"empty";
        }
        else
        {
            front++;
        }
    }
    int peak()
    {
        return arr[front];
    }
};
int main()
{
    queue q1;
    q1.push(1);

    
    q1.push(2);
    q1.push(3);
   q1.pop();
    q1.pop();
    cout<<q1.peak();


    return 0;
}