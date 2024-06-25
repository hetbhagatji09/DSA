#include<iostream>
using namespace std;
int main()
{
    bool x=true;
    string s1="het";
    string s2="teh";
    char c;
    for(int i=0;i<s1.size()-1;i++)
    {
        for(int j=i+1;j<s1.size();j++)
        {
            if(s1[i]>s1[j])
            {
                c=s1[i];
                s1[i]=s1[j];
                s1[j]=c;     
            }
        }
    }
    for(int i=0;i<s1.size()-1;i++)
    {
        for(int j=i+1;j<s1.size();j++)
        {
            if(s2[i]>s2[j])
            {
                c=s2[i];
                s2[i]=s2[j];
                s2[j]=c;     
            }
        }
    }
    if(s1==s2)
    {
        cout<<"true";
    }
    else{
        cout<<"false";
    }
    
    return 0;
}
