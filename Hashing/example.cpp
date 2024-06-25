#include<unordered_map>
#include<unordered_set>
#include <iostream>
using namespace std;

int findrepiting(int arr[],int n)
{
    unordered_map<int,int> umap;
    for(int i=0;i<n;i++)
    {
        umap[arr[i]]++;
    }
    
    
    for (int i = 0; i < n; i++)
    {
        int key=arr[i];
        auto temp=umap.find(key);
        if(temp->second>1)
        {
            return key;
        }
        
    }
    



}
int main()
{
    int arr[]={1,5,3,4,3,5,6};
    int size=sizeof(arr)/sizeof(arr[0]);

    int r=findrepiting(arr,size);
    cout<<r;
    return 0;
}
