#include<iostream>
using namespace std;

void Heapify(int a[],int n,int i)
{
    int largest=i;
    int left=2*i;
    int right=(2*i)+1;

    if(left<=n && a[left]>a[largest])
    {
        largest=left;
    }
    if(right<=n && a[right]>a[largest])
    {
        largest=right;
    }
    if(largest!=i)
    {
        swap(a[i],a[largest]);
        Heapify(a,n,largest);
    }
    

}
void Heapsort(int a[],int n)
{
    //for max heap
    for(int i=n/2;i>1;i--)
    {
        Heapify(a,n,i);
    }
    for(int i=n;i>1;i--)
    {
        swap(a[1],a[i]);
        Heapify(a,i-1,1);
    }

}
int main()
{
    int a[]={-1,5,2,3,1};
    int n=sizeof(a)/sizeof(a[0]);

    
    
    Heapsort(a,n);

    for(int i=1;i<n;i++)
    {
        cout<<a[i];
    }
    return 0;
}
