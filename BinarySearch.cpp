#include<vector>
#include<iostream>
using namespace std;
int Binarysearch(vector <int>&v,int target)
{
    int low=0;
    int high=v.size()-1;

    while(low<=high)
    {
        int mid=(low+high)/2;

        if(v[mid]==target)
        {
            return mid;
        }
        if(target>=v[mid])
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
        
    }
    return low;
}
int main()
{

    vector<int> a={0,1,2,3,4,5};
    cout<<Binarysearch(a,6);
    return 0;
}
