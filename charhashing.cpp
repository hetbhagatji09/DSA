#include<iostream>
#include<map>;
using namespace std;
int main()
{
    map<char,int>maps;
    string s="abcdedabcf";

    for(int i=0;i<s.size();i++)
    {
        maps[s[i]]++;
    }
    //iterate in the map
    for(auto it :maps)
    {
        cout<<it.first<<"->"<<it.second<<endl;
    }
    return 0;
}
