class Solution {
  public:
    int dp[1001][1001];
    int solve(int n,int k){
        if(n==1) return k;
        if(k==0 || k==1) return k;
        if(dp[n][k]!=-1) return dp[n][k];
        int ans=INT_MAX;
        for(int j=1;j<=k;j++){
            int left,right;
            if(dp[n-1][j-1]!=-1){
                left=dp[n-1][j-1];
            }
            else{
                left=solve(n-1,j-1);
            }
            if(dp[n][k-j]!=-1){
                right=dp[n][k-j];
            }
            else{
                right=solve(n,k-j);
            }
            int temp=1+max(left,right);
            ans=min(ans,temp);
        }
        return dp[n][k]=ans;
    }
    
    int eggDrop(int n, int k) {
        // code here
        memset(dp,-1,sizeof(dp));
        return solve(n,k);
        
    }
};