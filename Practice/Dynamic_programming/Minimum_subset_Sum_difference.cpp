class Solution {
  public:
    int minDifference(vector<int>& arr) {
        // code here
        int n =arr.size();
        int sum=0;
        for(int x:arr){
            sum+=x;
        }
        vector<vector<bool>>dp(n+1,vector<bool>(sum+1,false));
        for(int i=0;i<=n;i++){
            dp[i][0]=true;
        }
        for(int i=1;i<=n;i++){
            for(int j=0;j<=sum;j++){
                if(arr[i-1]<=j){
                    dp[i][j]=dp[i-1][j]||dp[i-1][j-arr[i-1]];
                }
                else{
                    dp[i][j]=dp[i-1][j];
                }
            }
        }
        int ans=INT_MAX;
        for(int j=0;j<=sum/2;j++){
            if(dp[n][j])
            ans=min(ans,sum-2*j);
        }
        return ans;
    }
};
