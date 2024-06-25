#include<iostream>
using namespace std;
int partician(int a[],int low,int high)
{
    int pivot=a[low];
    int i=low+1;
    int j=high;

    do
    {
        while (a[i]<=pivot)
        {
            i++;
        }
        while (a[j]>pivot)
        {
            j--;
        }
        if(i<j)
        {
            swap(a[i],a[j]);

        }
        
        
        
    } while (i<=j);
    swap(a[low],a[j]);
    return j;
    
}
void quicksort(int a[],int low,int high)
{
    int particiani;
    if(low<high)
    {
        particiani=partician(a,low,high);

        quicksort(a,low,particiani-1);
        quicksort(a,particiani+1,high);
    }
}
int main()
{
    int a[]={5,4,3,2,1};
    int size=sizeof(a)/sizeof(a[0]);
    quicksort(a,0,size-1);
    for (int i = 0; i < size; i++)
    {
        cout<<a[i];
    }
        

    return 0;
}
