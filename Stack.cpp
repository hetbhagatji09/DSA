#include<iostream>
#define n 100
//#include<stack>
using namespace std;


class stack
{
    int *arr;
    int top;

    public :
    stack(){
        arr=new int[n];
        top=-1;
    }
    void push(int val)
    {
        if(top==n-1)
        {
            cout<<"stack is overflow"<<endl;
        }
        else{
            top++;
            arr[top]=val;
        }
    }
    void pop()
    {
        if(top==-1)
        {
            cout<<"no element to pop";
        }
        else
        {
            top--;
        }
    }
    int Top()
    {
        if(top==-1)
        {
            cout<<"no ele in stack";
        }
        return arr[top];
    }
    bool empty()
    {
        return -1;
    }
};
int main()
{
    stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    cout<<st.Top()<<endl;
    st.pop();
    cout<<st.Top();


    return 0;
}