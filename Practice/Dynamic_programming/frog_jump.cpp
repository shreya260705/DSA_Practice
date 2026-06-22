#include <bits/stdc++.h>
int f(int in,vector<int>&heights,vector<int>&dp){
int(in==0) return 0;
if(dp[in]!=-1) return dp[in];
int left=f(in-1,heights,dp)+abs(heights[in]-heights[in-1]);
int right=INT_MAX;
if(in>1){
    right=f(in-2,heights,dp)+abs(heights[in]-heights[in-2]);
}
return dp[in]= min(left,right);
}
int frogjump(int n, vector<int>&heights){
    vector <int>dp(n+1,-1);
return f(n-1,heights,dp);
}