#include <math.h>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <iostream>
using namespace std;
int main()
{
    vector <int> ans;
    vector<int>arr1={2,3,1,3,2,4,6,7,9,2,19};
    vector<int> arr2={2,1,4,3,9,6};
    sort(arr1.begin(),arr1.end());

    unordered_map<int,int>umap;
    for (int i = 0; i <arr1.size(); i++)
    {
        umap[arr1[i]]++;
    }
    
    for(int i=0;i<arr2.size();i++)
    {
        int key=arr2[i];
        for(int i=0;i<umap[key];i++)
        {
            ans.push_back(key);
            auto it = find(arr1.begin(), arr1.end(), key);
            if (it != arr1.end())
            {
                arr1.erase(it);
            }
        }
        umap.erase(key);
    }
    for(int i=0;i<arr1.size();i++)
    {
        ans.push_back(arr1[i]);
    }
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<"  ";
    }



    return 0;
}
