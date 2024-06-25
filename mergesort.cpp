#include<iostream>
#include<vector>
using namespace std;

void merge(int a[],int l,int m,int h)
{
    vector<int>v;
    int i=l;
    int r=m+1;
    while(i<=m && r<=h)
    {
        if(a[i]<=a[r])
        {
            v.push_back(a[i]);
            i++;
        }
        else
        {
            v.push_back(a[r]);
            
            r++;
        }
    }
    while(i<=m)
    {
            v.push_back(a[i]);        
            
            i++;
    }
    while(r<=h)
    {
            v.push_back(a[r]);
            
            r++;
    }
    for(int i=l;i<=h;i++)
    {
        a[i]=v[i-l];
    }

    
}
void mergesort(int a[],int l,int h)
{
    if(l==h)
    {
        return ;
    }
    int mid=(l+h)/2;
    mergesort(a,l,mid);
    mergesort(a,mid+1,h);
    merge(a,l,mid,h);
}
int main()
{
    int a[]={5,3,2,4,1};
    int size=5;
    mergesort(a,0,size-1);
    for (int i = 0; i < size; i++)
    {
        cout<<a[i]<<endl;
    }
    
    return 0;
}
