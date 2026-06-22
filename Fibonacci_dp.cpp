#include <bits/stdc++.h>
class Solution{
    public:
    int fib(int n,vector<int>&dp){
        if(n<=1) return n;
        if(dp[n]!=1) return dp[n];
        return dp[n]=fib(n-1,dp)+fib(n-2,dp);
    }

    int fibonacci(int n){
        vector<int> dp(n+1,-1);
        return fib(n,dp);
    }
};