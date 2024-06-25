#include <unordered_map>
#include <iostream>
using namespace std;
int main()
{
    unordered_map<int,int> umap;
    int arr[]={7,1,0,3,5,0,1,3,2,5,7,3,8,9,9};
    for(int i=0;i<15;i++)
    {
        umap[arr[i]]++;
    }
    for(auto it=umap.begin();it!=umap.end();it++)
    {
        cout<<it->first<<"   " <<it->second<<endl;
    }

    return 0;
}
