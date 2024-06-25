
#include <unordered_map>
#include <iostream>
using namespace std;
int main()
{
    unordered_map<string, int> umap;
    umap["prince"] = 44;
    umap["gfg"] = 56;
    umap["helloworld"] = 90;

    // for(auto x:umap)
    // {
    //     cout<<x.first<<" "<<x.second<<endl;
    // }

    string key = "prince";
    // if(umap.find(key)!=umap.end())
    // {
    //     cout<<"key is found";
    // }
    // else
    // {
    //     cout<<"not found";
    // }
    // find()-this function provide itretor of the key

    if (umap.find(key) != umap.end())
    {
        auto temp = umap.find(key);
        cout << "the key is   " << temp->first << endl;
        cout << "the value is" << temp->second;
    }
    umap.erase(key);
    umap.insert(make_pair("mobile", 170000));
    for (auto itr = umap.begin(); itr != umap.end(); itr++)
    {
        cout << (*itr).first << " " << (*itr).second << endl;
    }
    cout<<umap.size();
    
    return 0;
}
