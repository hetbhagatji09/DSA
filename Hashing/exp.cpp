#include<unordered_map>
#include<vector>
#include <iostream>
using namespace std;
int main()
{
    vector<string>s={"eat","tan","tea","ate","nat","bat"};
    vector<vector<string>>ans;
    vector<string> temp;
    unordered_map<string,int>umap;
    for(int i=0;i<s.size();i++)
    {
        for(int j=0;j<s[i].size();j++)
        {
            for (char c : s[i]) 
            {
                umap[s[i]]+=static_cast<int>(c); 
            }
        }
        
    }
    for(auto it=umap.begin();it!=umap.end();it++)
    {
        cout<<it->first<<"  "<<it->second<<endl;
    }
    for(int i=0;i<s.size()-1;i++)
    {
        for (int j = i+1; j <s.size(); j++)
        {
            if(umap[s[i]]==umap[s[j]])
            {
                temp.push_back(s[i]);

            }

        }
        ans.push_back(temp);
    }
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j <temp.size(); j++)
        {
            cout<<temp[j]<<"     ";
        }
        cout<<endl;
        
    }
    
    return 0;
}
