#include <bits/stdc++.h>
class Solution {
public:
    int s(vector<int>& nums,int start, int end){
        int prev2=0;
        int prev=0;
        for(int i=start;i<=end;i++){
            int take=nums[i]+prev2;
            int nott=prev;
            int curr=max(take,nott);
            prev2=prev;
            prev=curr;
        }
        return prev;

    }
    int rob(vector<int>& nums) {
        int n=nums.size();
        if(n==1) return nums[0];
        int case1=s(nums,0,n-2);
        int case2=s(nums,1,n-1);
        return max(case1,case2);
    }
};