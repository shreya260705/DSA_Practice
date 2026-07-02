class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
            for(int x:nums){
                sum+=x;
        }
        int t=sum/2;
        vector<vector<bool>>dp(n+1,vector<bool>(t+1,false));
        for(int i=0;i<=n;i++){
            dp[i][0]=true;
        }
        if(sum%2!=0){
            return false;
        }
        for(int i=1;i<=n;i++){
            for(int j=1;j<=t;j++){
                if(nums[i-1]<=j){
                    dp[i][j]=dp[i-1][j]||dp[i-1][j-nums[i-1]];
                }
                else{
                    dp[i][j]=dp[i-1][j];
                }
            }
        }
        return dp[n][t];
    }
};