
#include <bits/stdc++.h>
using namespace std;
vector<int> dp;

//Top-down aproach
int fib(int n)
{
    if(n==0)return 0;
    if (n== 1) return 1;
    {
        return n;
    }
    if(dp[n]!=-1)return dp[n];
    return dp[n]=fib(n - 1) + fib(n - 2);
}

int main()
{
    int n = dp.size();
    dp.resize(n, -1);
    cout << fib(4);
    return 0;
}
