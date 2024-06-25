#include<iostream>
#include<map>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    unordered_map  <int,int>maps;
    int a[]={1,2,3,3,2,1,4};

    for(int i=0;i<7;i++)
    {
        maps[a[i]]++;
    }
    //iterate in the map
    for(auto it :maps)
    {
        cout<<it.first<<"->"<<it.second<<endl;
    }
    return 0;
}
