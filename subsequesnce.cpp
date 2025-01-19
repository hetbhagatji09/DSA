#include<iostream>
#include<vector>
using namespace std;
vector<vector<int>> subsequences(vector<int> arr){
    vector<vector<int>>ans;
    int total=1<<arr.size();
    for(int num=0;num<total;num++){
        vector<int>v;
        for(int i=0;i<arr.size();i++){
            if(num & (1<<i)){
                v.push_back(arr[i]);
            }
        }
        ans.push_back(v);
    }
    return ans;
}
int main()
{
    vector<int>arr={1,2,3};
    vector<vector<int>> ans=subsequences(arr);
    for(vector<int>v:ans){
        for(int s:v){
            cout<<s<<" ";
        }
        cout<<endl;

    }
    

    return 0;
}
