#include<bits/stdc++.h>
using namespace std;
int dp[6];

int fun(int i,int H[]){
    if(i==0){
        return 0;
    }
    if(dp[i]!=-1) return dp[i];
    int cost=INT_MAX;   
    z
    for(int j=0;j<3;j++){
        cost=min((fun(i-j,H)+abs(H[i]-H[i-1])),cost);
        if(i>j)
            cost=min((fun(i-j,H)+abs(H[i-3]-H[i])),cost);
    
    }
    return dp[i]=cost;
    
}

int main(){
  
    int H[]={4,12,13,18,10,12};
    int n=sizeof(H)/sizeof(H[0]);
    memset(dp, -1, sizeof(dp));
    cout<<fun(n-1,H);


    return 0;
}