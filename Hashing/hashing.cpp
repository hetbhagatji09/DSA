#include<iostream>
using namespace std;
#define Max 50

bool hashtable[Max+1][2];
void insert(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]>=0)
        {
            hashtable[arr[i]][0]=1;
        }
        else
        {
            hashtable[abs(arr[i])][1]=1;
        }
    }
}
bool search(int k)
{
    if(k>=0)
    {
        if(hashtable[k][0]==1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    else
    {
        k=abs(k);
        if(hashtable[k][1]==1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}
int main()
{
    int arr[]={-1,-3,4,5,6,1,2};
    int size=sizeof(arr)/sizeof(arr[0]);

    int find=-3;
    insert(arr,size);
    if (search(find))
    {
        cout<<find<<"   is present";
    }
    else
    {
        cout<<"didnt present";
    }
    

    return 0;
}
