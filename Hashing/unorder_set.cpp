#include<unordered_set>
#include<iostream>
using namespace std;
int main()
{
    unordered_set<int> s;
    s.insert(1);
    s.insert(10);
    s.insert(5);
    s.insert(4);
    s.insert(6);
    s.insert(1);
    s.insert(1);
    
    for(auto it=s.begin();it!=s.end();it++)
    {
        cout<<(*it)<<endl;
    }
    cout<<"size"<<s.size()<<endl;
   // s.clear();
    
    if(s.find(1)!=s.end())
    {
        cout<<"key found";
    }
    else
    {
        cout<<"key not found";
    }
    int deleted=1;
    s.erase(deleted);
    cout<<"size"<<s.size();

    if(s.count(6))
    {
        cout<<"found";
    }
    else
    {
        cout<<"not found";
    }
    return 0;
}
